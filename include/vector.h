/* vector.h */

#ifndef VECTOR_H
#define VECTOR_H

#include "libs.h"

enum DataType
{
  TYPE_INT8;
  TYPE_INT16;
  TYPE_INT32;
  TYPE_INT64;
  TYPE_UINT8;
  TYPE_UNIT16;
  TYPE_UNIT32;
  TYPE_UNIT64;
  TYPE_FLOAT;
  TYPE_DOUBLE;
};

struct Vector
{
  size_t dimension;
  size_t element_size;
  size_t size;
  DataType type;
  void *data;
};

struct Vector vector(void *data, size_t element_size, DataType type);
void freeVector(struct Vector *vector);
void printVector(struct Vector *newVector);


#endif
