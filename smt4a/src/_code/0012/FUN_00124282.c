/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124282` (_code @ 0x124282, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002eea94. */


void FUN_00124282(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  
  FUN_002eea94(param_2,(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) * 2 + 1);
  for (temp_v4 = 0; temp_v4 < (unsigned int)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc));
      temp_v4 = temp_v4 + 1) {
    temp_v0 = *(unsigned char *)(*(int *)(param_1 + 0xc) + temp_v4);
    temp_v1 = temp_v0 >> 4;
    temp_v3 = temp_v0 & 0xf;
    if (temp_v1 < 10) {
      temp_v2 = temp_v1 + 0x30;
    }
    else {
      temp_v2 = temp_v1 + 0x57;
    }
    *(short *)(*(int *)(param_2 + 4) + temp_v4 * 4) = temp_v2;
    if (temp_v3 < 10) {
      temp_v2 = temp_v3 + 0x30;
    }
    else {
      temp_v2 = temp_v3 + 0x57;
    }
    *(short *)(*(int *)(param_2 + 4) + temp_v4 * 4 + 2) = temp_v2;
  }
  *(unsigned short *)(*(int *)(param_2 + 4) + temp_v4 * 4) = 0;
  return;
}
