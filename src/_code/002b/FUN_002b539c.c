/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b539c` (_code @ 0x2b539c, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int * FUN_002b539c(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = param_1[2];
  temp_v3 = param_1[1];
  temp_v1 = temp_v0;
  if (temp_v3 < temp_v0) {
    temp_v1 = (param_1[2] - temp_v3) * 0x8000000;
  }
  if (temp_v3 < temp_v0) {
    temp_v1 = temp_v1 >> 0x1f;
  }
  else {
    temp_v1 = 0;
  }
  for (temp_v2 = temp_v1 + 1; temp_v2 < ((int)(param_1[2] - temp_v3) >> 4) + 1; temp_v2 = temp_v2 + 2) {
  }
  param_1[2] = temp_v3;
  if ((int *)*param_1 != (int *)0x0 && temp_v3 != 0) {
    (**(romwright_code **)(*(int *)*param_1 + 0xc))();
  }
  return param_1;
}
