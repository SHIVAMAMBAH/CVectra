#include "utils.h"
#include "libs.h"


/* Function to add Two Vectors */

struct Vector *Add(struct Vector *vec1, struct Vector *vec2)
{
  if(!vec1 || !vec2) return NULL;

  if(vec1->dimension != vec2->dimension){
    printf("Dimensions of vec1 and vec2 are not equal");
    return NULL;
  }

  struct Vector *newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)v1->dimension;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    default:
                return NULL;
  }
  return newVector;
}


/* Function to Subtract Two Vectors */

struct Vector *Sub(struct Vector *vec1, struct Vector *vec2)
{
  if(!vec1 || !vec2) return NULL;

  if(vec1->dimension != vec2->dimension)
  {
    printf("Dimension of vec1 and vec2 are not same");
    return NULL;
  }

  struct Vector *newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)vec1->dimension;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = v1->data, *v2Data = v2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data, *v2Data = vec2->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = v1Data[i] + v2Data[i];
                    }
                    break;
                  }
    default:
                return NULL;
  }

  return newVector;
  
}


/* Function for Scalar Multiplication */

struct Vector *ScalarMultiplication(struct Vector *vec1, double scalar)
{
  if(!vec1) return NULL;

  struct Vector *newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)vec1->dimesion;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int8_t)(v1Data[i] * scalar);
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int16_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int32_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int64_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint8_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint16_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint32_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint64_t)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (float)(v1Data[i] * scalar);
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (double)(v1Data[i] * scalar);
                    }
                    break;
                  }
    default:
                return NULL;
  }
  
  return newVector;
  
}

/* Function for Scalar Addition */

struct Vector *ScalarAddition(struct Vector *vec1, double scalar)
{
  if(!vec1) return NULL;

  struct Vector newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)vec1->dimension;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int8_t)(v1Data[i] + scalar);
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int16_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int32_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int64_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint8_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint16_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint32_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint64_t)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (float)(v1Data[i] + scalar);
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (double)(v1Data[i] + scalar);
                    }
                    break;
                  }
    default:
                return NULL;
  }

  return newVector;
}


/* Function for Scalar Subtraction */

struct Vector *ScalarSubtracion(struct Vector *vec1, double scalar)
{
  if(!vec1) return NULL;

  struct Vector newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)vec1->dimension;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int8_t)(v1Data[i] - scalar);
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int16_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int32_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int64_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint8_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint16_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint32_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint64_t)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (float)(v1Data[i] - scalar);
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (double)(v1Data[i] - scalar);
                    }
                    break;
                  }
    default:
                return NULL;
  }

  return newVector;
}




/* Function for Scalar Division */

struct Vector *ScalarDivision(struct Vector *vec1, double scalar)
{
  if(!vec1) return NULL;

  struct Vector newVector = vector(NULL, vec1->dimension, vec1->type);

  if(!newVector) return NULL;

  int dims = (int)vec1->dimension;

  switch(newVector->type)
  {
    case TYPE_INT8:{
                    int8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int8_t)(v1Data[i] + scalar);
                    }
                    break;
                  }

    case TYPE_INT16:{
                    int16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int16_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_INT32:{
                    int32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int32_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_INT64:{
                    int64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (int64_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_UINT8:{
                    uint8_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint8_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_UINT16:{
                    uint16_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint16_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_UINT32:{
                    uint32_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint32_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_UINT64:{
                    uint64_t *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (uint64_t)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_FLOAT:{
                    float *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (float)(v1Data[i] / scalar);
                    }
                    break;
                  }
    case TYPE_DOUBLE:{
                    double *newVectorData = newVector->data, *v1Data = vec1->data;
                    for(int i = 0; i < dims; i++)
                    {
                      newVectorData[i] = (double)(v1Data[i] / scalar);
                    }
                    break;
                  }
    default:
                return NULL;
  }

  return newVector;
}

/* Funcion to Find the Maximum of a Vector */

doule Max(struct Vector *vec1)
{
  if(!vec1 || vec1->dimension == 0) return -DBL_MAX;

  double max_value = -DBL_MAX;
  
  switch(vec1->type)
  {
    case TYPE_INT8: {
            int8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
        
    case TYPE_INT16: {
            int16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
        
    case TYPE_INT32: {
            int32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }

    case TYPE_INT64: {
            int64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
    case TYPE_UINT8: {
            uint8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
    case TYPE_UINT16: {
            uint16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }

    case TYPE_UINT32: {
            uint32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
        
    case TYPE_UINT64: {
            uint64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
        
    case TYPE_FLOAT: {
            float *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
    case TYPE_DOUBLE: {
            double *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] > max_value) max_value = (double)arr[i];
            break;
        }
    default:
          return -DBL_MAX;
  }
  return max_value;
}



/* Funcion to Find the Minimum of a Vector */

double Min(struct Vector *vec1)
{
  if(!vec1 || vec1->dimension == 0) return DBL_MAX;

  double min_value = DBL_MAX;
  
  switch(vec1->type)
  {
    case TYPE_INT8: {
            int8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
        
    case TYPE_INT16: {
            int16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
        
    case TYPE_INT32: {
            int32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }

    case TYPE_INT64: {
            int64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
    case TYPE_UINT8: {
            uint8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
    case TYPE_UINT16: {
            uint16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }

    case TYPE_UINT32: {
            uint32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
        
    case TYPE_UINT64: {
            uint64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
        
    case TYPE_FLOAT: {
            float *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
    case TYPE_DOUBLE: {
            double *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++)
                if ((double)arr[i] < min_value) min_value = (double)arr[i];
            break;
        }
    default:
          return DBL_MAX;
  }
  return min_value;
}

/* Function to find the mean of the vector */

double Mean(struct Vector *vec1)
{
  if(!vec1 || vec1->dimension == 0) return 0.0;

  double sum = 0;
  
  switch(vec1->type)
  {
    case TYPE_INT8: {
            int8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }
        
    case TYPE_INT16: {
            int16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }
        
    case TYPE_INT32: {
            int32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }

    case TYPE_INT64: {
            int64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }
    case TYPE_UINT8: {
            uint8_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }
    case TYPE_UINT16: {
            uint16_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum+=(double)arr[i];
            }
            break;
        }

    case TYPE_UINT32: {
            uint32_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum += (double)arr[i];
            }
            break;
        }
        
    case TYPE_UINT64: {
            uint64_t *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum += (double)arr[i];
            }
            break;
        }
        
    case TYPE_FLOAT: {
            float *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum += (double)arr[i];
            }
            break;
        }
    case TYPE_DOUBLE: {
            double *arr = vec1->data;
            for (size_t i = 0; i < vec1->dimension; i++){
                sum += (double)arr[i];
            }
            break;
        }
    default:
          return 0.0;
  }
  return sum / ((double)vec1->dimension);
}

/* Function for finding the median of the vector */

double Median(struct Vector *vec)
{
  if(!vec || vec->dimension == 0) return 0.0;

  double *temp = malloc(vec->dimension * sizeof(double));

  if(!temp) return 0;

  switch(vec->type)
  {
    case TYPE_INT8:{
        int8_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_INT16:{
        int16_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_INT32:{
        int32_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_INT64:{
        int64_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_UINT8:{
        uint8_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_UINT16:{
        uint16_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_UINT32:{
        uint32_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_UINT64:{
        int64_t *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_FLOAT:{
        float *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }

    case TYPE_DOUBLE:{
        double *arr = vec->data;
        for(size_t i = 0; i <vec->dimension; i++){
            temp[i] = (double)arr[i];
        }
        break;
    }
    default:
      free(temp);
      return 0.0;
  }

  qsort(temp, vec->dimension, sizeof(double),compare_doubles);

  double median;
  size_t mid = vec->dimension / 2;
  if(vec->dimension % 2 == 0){
    median = (temp[mid - 1] + temp[mid]) / 2.0;
  }else{
    median = temp[mid];
  }

  free(temp);
  return median;
}

/* Function to find the standard deviation of the function */

double StandardDeviation(struct Vector *vec)
{
  if(!vec || vec->dimension == 0) return 0.0;

  double mean_value = Mean(vec);

  double sum_sq_diff = 0.0;

  switch(vec->type)
  {
    case TYPE_INT8:
    {
                    int8_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_INT16:
    {
                    int16_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_INT32:
    {
                    int32_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_INT64:
    {
                    int64_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_UINT8:
    {
                    uint8_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_UINT16:
    {
                    uint16_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_UINT32:
    {
                    uint32_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_UINT64:
    {
                    uint64_t *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_FLOAT:
    {
                    float *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    case TYPE_DOUBLE:
    {
                    double *arr = vec->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                        double diff = (double)arr[i] - mean_value;
                        sum_sq_diff += (diff * diff);
                    }
                    break;
    }

    default:
            return 0.0;
    
  }

  return sqrt(sum_sq_diff / (double)vec->dimension); 
}


/* Function to find the varience of the vector */

double Variance(struct Vector *vec)
{
    if (!vec || vec->dimension == 0) return NAN;

    double std_val = StandardDeviation(vec);
    return std_val * std_val;
}

/* Function to find the index of maximum value of the vector */

int IndexOfMax(struct Vector *vec)
{
  if(!vec || vec->dimension == 0) return 0;

  double max_value = (double)vec->data[0];
  size_t max_index = 0;
  double *arr = (double *)vec->data;

  for(size_t i = 1; i < vec->dimension; i++)
  {
    if(arr[i] > max_value)
    {
      max_value = (double)vec->data[i];
      max_index = i;
    }
  }
  return (int)max_index;
}

/* Function to find the index of the minimum value of the vector*/

int IndexOfMin(struct Vector *vec)
{
  if(!vec || vec->dimension == 0) return 0;

  double min_value = (double)vec->data[0];
  size_t min_index = 0;
  double *arr = (double *)vec->data;

  for(size_t i = 1; i < vec->dimension; i++)
  {
    if(arr[i] < min_value)
    {
      min_value = (double)vec->data[i];
      min_index = i;
    }
  }
  return (int)min_index;
}

/* Function to find the index of a value in the vector */

int IndexOfValue(struct Vector *vec, double value)
{
  if(!vec || vec->dimension == 0) return 0;

  double *arr = (double *)vec->data;

  for(size_t i = 0; i < vec->dimension; i++)
  {
    if(arr[i] == value) return (int)i;
  }
  return -1;
}

/* Function to check whether a value is present or not in the vector */

bool IsContainsValue(struct Vector *vec, double value)
{
  if(!vec || vec->dimension == 0) return false;

  double *arr = (double *)vec->data;

  for(size_t i = 0; i < vec->dimension; i++)
  {
    if (arr[i] == value)
    {
      return true;
    }
  }
  return false;
}

/* Function for the Min Max Normalization */
struct Vector *MinMaxNorm(struct Vector *vec)
{
  if(!vec || vec->dimension == 0) return NULL;

  struct Vector *newVector = vector(NULL, vec->dimension, TYPE_DOUBLE);

  if(!newVector) return NULL;

  double max_value = Max(vec);
  double min_value = Min(vec);

  if(max_value == min_value) return NULL;

  switch(vec->type)
  {
    case TYPE_INT8:{
                    int8_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }
                  
    case TYPE_INT16:{
                    int16_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_INT32:{
                    int32_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_INT64:{
                    int64_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_UINT8:{
                    uint8_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_UINT16:{
                    uint16_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_UINT32:{
                    uint32_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_UINT64:{
                    uint64_t *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_FLOAT:{
                    float *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }

    case TYPE_DOUBLE:{
                    double *arr = vec->data;
                    double *out = newVector->data;
                    for(size_t i = 0; i < vec->dimension; i++)
                    {
                      out[i] = (arr[i] - min_value) / (max_value - min_value);
                    }
                    break;
                  }
    default:
            return NULL;
  }
  return newVector;
}

/* Function for the z score normalization */

struct Vector *ZScoreNorm(struct Vector *vec)
{
    if (!vec || vec->dimension == 0) return NULL;

    struct Vector *newVector = vector(NULL, vec->dimension, TYPE_DOUBLE);
    if (!newVector) return NULL;

    double mean_value = Mean(vec);
    double std_dev = StandardDeviation(vec);
    if (std_dev == 0) return NULL;  // Avoid division by zero

    #define ZSCORE_CASE(type) \
        { \
            type *arr = vec->data; \
            double *out = newVector->data; \
            for (size_t i = 0; i < vec->dimension; i++) \
                out[i] = ((double)arr[i] - mean_value) / std_dev; \
            break; \
        }

    switch (vec->type)
    {
        case TYPE_INT8:   ZSCORE_CASE(int8_t);
        case TYPE_INT16:  ZSCORE_CASE(int16_t);
        case TYPE_INT32:  ZSCORE_CASE(int32_t);
        case TYPE_INT64:  ZSCORE_CASE(int64_t);
        case TYPE_UINT8:  ZSCORE_CASE(uint8_t);
        case TYPE_UINT16: ZSCORE_CASE(uint16_t);
        case TYPE_UINT32: ZSCORE_CASE(uint32_t);
        case TYPE_UINT64: ZSCORE_CASE(uint64_t);
        case TYPE_FLOAT:  ZSCORE_CASE(float);
        case TYPE_DOUBLE: ZSCORE_CASE(double);
        default: 
            return NULL;
    }

    #undef ZSCORE_CASE
    return newVector;
}

/* Function for the max absoute normalization */

struct Vector *MaxAbsoluteNorm(struct Vector *vec)
{
    if (!vec || vec->dimension == 0) return NULL;

    struct Vector *newVector = vector(NULL, vec->dimension, TYPE_DOUBLE);
    if (!newVector) return NULL;

    // Find max absolute value
    double max_abs = 0.0;

    #define FIND_MAXABS(type) \
        { \
            type *arr = vec->data; \
            for (size_t i = 0; i < vec->dimension; i++) { \
                double val = fabs((double)arr[i]); \
                if (val > max_abs) max_abs = val; \
            } \
            break; \
        }

    switch (vec->type)
    {
        case TYPE_INT8:   FIND_MAXABS(int8_t);
        case TYPE_INT16:  FIND_MAXABS(int16_t);
        case TYPE_INT32:  FIND_MAXABS(int32_t);
        case TYPE_INT64:  FIND_MAXABS(int64_t);
        case TYPE_UINT8:  FIND_MAXABS(uint8_t);
        case TYPE_UINT16: FIND_MAXABS(uint16_t);
        case TYPE_UINT32: FIND_MAXABS(uint32_t);
        case TYPE_UINT64: FIND_MAXABS(uint64_t);
        case TYPE_FLOAT:  FIND_MAXABS(float);
        case TYPE_DOUBLE: FIND_MAXABS(double);
        default: return NULL;
    }

    #undef FIND_MAXABS

    if (max_abs == 0) return NULL;  // Prevent division by zero

    // Normalize by max absolute value
    #define NORMALIZE(type) \
        { \
            type *arr = vec->data; \
            double *out = newVector->data; \
            for (size_t i = 0; i < vec->dimension; i++) { \
                out[i] = (double)arr[i] / max_abs; \
            } \
            break; \
        }

    switch (vec->type)
    {
        case TYPE_INT8:   NORMALIZE(int8_t);
        case TYPE_INT16:  NORMALIZE(int16_t);
        case TYPE_INT32:  NORMALIZE(int32_t);
        case TYPE_INT64:  NORMALIZE(int64_t);
        case TYPE_UINT8:  NORMALIZE(uint8_t);
        case TYPE_UINT16: NORMALIZE(uint16_t);
        case TYPE_UINT32: NORMALIZE(uint32_t);
        case TYPE_UINT64: NORMALIZE(uint64_t);
        case TYPE_FLOAT:  NORMALIZE(float);
        case TYPE_DOUBLE: NORMALIZE(double);
        default: return NULL;
    }

    #undef NORMALIZE

    return newVector;
}


/* Function for the decimal scaling Normalization */

struct Vector *DecimalScalingNorm(struct Vector *vec)
{
    if (!vec || vec->dimension == 0) return NULL;

    struct Vector *newVector = vector(NULL, vec->dimension, TYPE_DOUBLE);
    if (!newVector) return NULL;

    // Find max absolute value
    double max_abs = 0.0;

    #define FIND_MAXABS(type) \
        { \
            type *arr = vec->data; \
            for (size_t i = 0; i < vec->dimension; i++) { \
                double val = fabs((double)arr[i]); \
                if (val > max_abs) max_abs = val; \
            } \
            break; \
        }

    switch (vec->type)
    {
        case TYPE_INT8:   FIND_MAXABS(int8_t);
        case TYPE_INT16:  FIND_MAXABS(int16_t);
        case TYPE_INT32:  FIND_MAXABS(int32_t);
        case TYPE_INT64:  FIND_MAXABS(int64_t);
        case TYPE_UINT8:  FIND_MAXABS(uint8_t);
        case TYPE_UINT16: FIND_MAXABS(uint16_t);
        case TYPE_UINT32: FIND_MAXABS(uint32_t);
        case TYPE_UINT64: FIND_MAXABS(uint64_t);
        case TYPE_FLOAT:  FIND_MAXABS(float);
        case TYPE_DOUBLE: FIND_MAXABS(double);
        default: return NULL;
    }

    #undef FIND_MAXABS

    if (max_abs == 0) return NULL; // Avoid division by zero if all zero

    // Calculate j = number of decimal places to scale by
    int j = (int)ceil(log10(max_abs));

    // Normalize by dividing each element by 10^j
    double divisor = pow(10.0, j);

    #define NORMALIZE(type) \
        { \
            type *arr = vec->data; \
            double *out = newVector->data; \
            for (size_t i = 0; i < vec->dimension; i++) { \
                out[i] = (double)arr[i] / divisor; \
            } \
            break; \
        }

    switch (vec->type)
    {
        case TYPE_INT8:   NORMALIZE(int8_t);
        case TYPE_INT16:  NORMALIZE(int16_t);
        case TYPE_INT32:  NORMALIZE(int32_t);
        case TYPE_INT64:  NORMALIZE(int64_t);
        case TYPE_UINT8:  NORMALIZE(uint8_t);
        case TYPE_UINT16: NORMALIZE(uint16_t);
        case TYPE_UINT32: NORMALIZE(uint32_t);
        case TYPE_UINT64: NORMALIZE(uint64_t);
        case TYPE_FLOAT:  NORMALIZE(float);
        case TYPE_DOUBLE: NORMALIZE(double);
        default: return NULL;
    }

    #undef NORMALIZE

    return newVector;
}



