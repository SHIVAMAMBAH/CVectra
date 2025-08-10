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
