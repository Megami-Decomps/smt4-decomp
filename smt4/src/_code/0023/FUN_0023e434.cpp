/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e434` (_code @ 0x23e434, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bf4f8(unsigned int, int);


void FUN_0023e434(int param_1,int *param_2,int *param_3)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x22) != '\0') {
    temp_v0 = FUN_002bf4f8(0x19,temp_v0 + 0x57);
    *param_2 = (int)*(short *)(temp_v0 + 8);
    *param_3 = (int)*(short *)(temp_v0 + 10);
    return;
  }
  if (temp_v0 >= 0x10) {
    temp_v0 = temp_v0 - 0xc;
  }
  temp_v0 = FUN_002bf4f8(0x19,temp_v0 + 0x2d);
  *param_2 = (int)*(short *)(temp_v0 + 8);
  *param_3 = (int)*(short *)(temp_v0 + 10);
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(int *)(param_1 + 0x38) - 4U >= 0xc) {
      return;
    }
    temp_v0 = *param_2 - 400;
  }
  else {
    if (*(int *)(param_1 + 0x38) < 0x10) {
      return;
    }
    temp_v0 = *param_2 + 400;
  }
  *param_2 = temp_v0;
  return;
}

} /* extern "C" */
