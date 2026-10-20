#include "romwright_types.h"

extern "C" {

typedef struct { unsigned int a, b, c; } V3;

void FUN_003116d6(unsigned int param_1,V3 *param_2,V3 *param_3)

{
  if (param_2 != 0) {
    *param_2 = *param_3;
  }
  return;
}

} /* extern "C" */
