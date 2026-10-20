/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005160a4` (_code @ 0x5160a4, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int * FUN_005160a4(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  *param_1 = param_2;
  temp_v2 = param_1[3];
  temp_v0 = param_1[4];
  temp_v3 = temp_v0 - param_1[3];
  if (temp_v2 < (unsigned int)param_1[4]) {
    temp_v0 = temp_v3 * 0x8000000;
  }
  temp_v3 = temp_v3 >> 4;
  if (temp_v2 < (unsigned int)param_1[4]) {
    temp_v0 = temp_v0 >> 0x1f;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = temp_v0 + 1;
  if (temp_v1 < temp_v3 + 1) {
    do {
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < temp_v3 + 1);
  }
  param_1[4] = temp_v2;
  if ((int *)param_1[2] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[2] + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
