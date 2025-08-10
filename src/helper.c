/* helper.c */

#include "libs.h"
#include "utils.h"
#include "vector.h"

int compare_doubles(void *a, void *b)
{
  double da = *(double *)a;
  double db = *(double *)b;
  return (da > db) - (da < db);
}
