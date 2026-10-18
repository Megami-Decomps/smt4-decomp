/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d05c4` (_code @ 0x4d05c4, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001641c4. */
extern unsigned short FUN_001643b4(unsigned int, int);
/* Supplied declaration required: FUN_001b4a90. */


void FUN_004d05c4(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int unaff_r5;
  int temp_v2;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = param_4;
  *(unsigned short *)(param_1 + 0x14) = 0xffff;
  *(unsigned char *)(param_1 + 0x11) = 0;
  *(unsigned char *)(param_1 + 0x12) = 0;
  if (0 < *(short *)(param_1 + 0x30)) {
    unaff_r5 = 0;
  }
  *(unsigned short *)(param_1 + 0x16) = 0;
  if (0 < *(short *)(param_1 + 0x30)) {
    do {
      FUN_001641c4();
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < *(short *)(param_1 + 0x30));
    *(unsigned short *)(param_1 + 0x30) = 0;
    FUN_001b4a90(param_1 + 0x18,0x18,0xffffffff);
  }
  temp_v2 = 0;
  if (temp_v2 < param_4) {
    do {
      temp_v1 = FUN_001643b4(param_2,param_3 + temp_v2);
      temp_v0 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(param_1 + temp_v0 + 0x18) = temp_v1;
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
    } while (temp_v2 < param_4);
  }
  return;
}
