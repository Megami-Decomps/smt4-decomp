/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00362860` (_code @ 0x362860, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00362860(int *param_1)

{
  float *pfVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar5;
  
  temp_v0 = param_1[2];
  if ((~*(unsigned int *)(temp_v0 + 0x18) & 8) != 0) {
    temp_v1 = *(int *)(temp_v0 + 0xdc);
    temp_v2 = *(int *)(temp_v0 + 0xe0);
    param_1[0x61] = *(int *)(temp_v0 + 0xe4);
    param_1[0x5f] = temp_v1;
    param_1[0x60] = temp_v2;
  }
  else {
    pfVar5 = (float *)(temp_v0 + 0xdc);
    if (param_1[3] != 0) {
      pfVar1 = (float *)(**(romwright_code **)(*param_1 + 0x14))();
      param_1[0x5f] =
           (int)(*pfVar1 * *pfVar5 + pfVar1[1] * *(float *)(temp_v0 + 0xe0) +
                pfVar1[2] * *(float *)(temp_v0 + 0xe4));
      param_1[0x60] =
           (int)(pfVar1[4] * *pfVar5 + pfVar1[5] * *(float *)(temp_v0 + 0xe0) +
                pfVar1[6] * *(float *)(temp_v0 + 0xe4));
      param_1[0x61] =
           (int)(pfVar1[8] * *pfVar5 + pfVar1[9] * *(float *)(temp_v0 + 0xe0) +
                pfVar1[10] * *(float *)(temp_v0 + 0xe4));
      return;
    }
    temp_v1 = *(int *)(temp_v0 + 0xe0);
    temp_v0 = *(int *)(temp_v0 + 0xe4);
    param_1[0x5f] = (int)*pfVar5;
    param_1[0x60] = temp_v1;
    param_1[0x61] = temp_v0;
  }
  return;
}
