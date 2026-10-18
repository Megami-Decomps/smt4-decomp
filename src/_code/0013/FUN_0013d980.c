/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d980` (_code @ 0x13d980, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0013d980(int *param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = param_1[1];
  temp_v3 = 0;
  temp_v1 = param_2 * 2 + 0x10;
  if (temp_v0 < 0x20) {
    temp_v3 = 0x20 - temp_v0;
  }
  param_1[1] = 0x20;
  temp_v2 = 0x20;
  if ((unsigned int)param_1[2] >= 0x20) {
    temp_v2 = param_1[2];
  }
  param_1[2] = temp_v2;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) +
             ((((temp_v3 + 0x1fU) & 0xffffffe0) + temp_v1 + 0x1f) & 0xffffffe0) + temp_v1;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  return;
}
