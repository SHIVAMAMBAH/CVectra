#inlcude "vector.h"
#include "libs.h"

static size_t get_type_size(DataType type)
{
  switch(type)
  {
    case TYPE_INT8:
          return sizeof(int8_t);
    case TYPE_INT16:
          return sizeof(int16_t);
    case TYPE_INT32:
          return sizeof(int32_t);
    case TYPE_INT64:
          return sizeof(int64_t);
    case TYPE_UINT8:
          return sizeof(uint8_t);
    case TYPE_UINT16:
          return sizeof(uint16_t);
    case TYPE_UINT32:
          return sizeof(uint32_t);
    case TYPE_UINT64:
          return sizeof(uint64_t);
    case TYPE_FLOAT:
          return sizeof(float);
    case TYPE_DOUBLE:
          return sizeof(double);
    default:
          return 0;
  }
}


struct Vector *vector(void *data, size_t element_count, DataType type)
{
  struct Vector newVector = (struct Vector *)malloc(sizeof(struct Vector));

  if(newVector == NULL){
    return NULL;

  }

  newVector->dimension = element_count;
  newVector->element_size = get_type_size(type);
  newVector->size = newVector->element_size * element_count;
  newVector->type = type;
  newVector->data = malloc(newVector->size);

  if(array!=NULL){
    memcpy(newVector->data, array, newVector->size);
  }else{
    memset(newVector->data, 0, newVector->size);
  }
  
  return newVector;
}

void freeVector(struct Vector *newVector)
{
  if (!newVector) return;
  free(newVector->data);
  free(newVector);
}

void printVector(struct Vector *newVector)
{
  if9!newVector) return;
  
  switch(newVector->type)
  {
    case TYPE_INT8:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((int8_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_INT16:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((int16_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_INT32:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((int32_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_INT64:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((int64_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_UINT8:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    prinf("%d ", ((uint8_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_UINT16:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((uint16_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_UINT32:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((uint32_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_UINT64:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%d ", ((uint64_t *)newVector->data)[i]);
                  }
                  break;
    case TYPE_FLOAT:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%f ", ((float *)newVector->data)[i]);
                  }
                  break;
    case TYPE_DOUBLE:
                  for(int i = 0; i < newVector->dimension; i++)
                  {
                    printf("%lf ", ((double *)newVector->data)[i]);
                  }
                  break;
    default:
                return 0;
  }
}
