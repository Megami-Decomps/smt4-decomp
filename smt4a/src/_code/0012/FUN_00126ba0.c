/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126ba0` (_code @ 0x126ba0, 0x12e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030ddde. */


void FUN_00126ba0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x16bc);
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((2 << (temp_v2 & 0xff)) & 0xffffU);
  temp_v0 = (unsigned short)temp_v1;
  if ((int)temp_v2 >= 0xe) {
    *(unsigned short *)(param_1 + 0x16b8) = temp_v0;
    temp_v3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v3 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v3) = (char)temp_v1;
    temp_v3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v3 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v3) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    temp_v2 = *(int *)(param_1 + 0x16bc) - 0xd;
    *(short *)(param_1 + 0x16b8) = (short)(2 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2;
  }
  else {
    temp_v2 = temp_v2 + 3;
    *(unsigned short *)(param_1 + 0x16b8) = temp_v0;
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2;
  }
  if ((int)temp_v2 >= 10) {
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (0 << (temp_v2 & 0xff));
    *(short *)(param_1 + 0x16b8) = (short)temp_v1;
    temp_v3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v3 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v3) = (char)temp_v1;
    temp_v3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v3 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v3) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) = (short)(0 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) - 9;
  }
  else {
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2 + 7;
  }
  FUN_0030ddde(param_1);
  temp_v1 = *(unsigned int *)(param_1 + 0x16bc);
  if ((int)((*(int *)(param_1 + 0x16b4) - temp_v1) + 0xb) < 9) {
    if ((int)temp_v1 >= 0xe) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (2 << (temp_v1 & 0xff));
      *(short *)(param_1 + 0x16b8) = (short)temp_v1;
      temp_v3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v3 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v3) = (char)temp_v1;
      temp_v3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v3 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v3) =
           (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
      temp_v2 = *(int *)(param_1 + 0x16bc) - 0xd;
      *(short *)(param_1 + 0x16b8) = (short)(2 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    }
    else {
      temp_v2 = temp_v1 + 3;
      *(unsigned short *)(param_1 + 0x16b8) = *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)(2 << (temp_v1 & 0xff));
    }
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2;
    if ((int)temp_v2 >= 10) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (0 << (temp_v2 & 0xff));
      *(short *)(param_1 + 0x16b8) = (short)temp_v1;
      temp_v3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v3 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v3) = (char)temp_v1;
      temp_v3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v3 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v3) =
           (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
      *(short *)(param_1 + 0x16b8) = (short)(0 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) - 9;
    }
    else {
      *(unsigned int *)(param_1 + 0x16bc) = temp_v2 + 7;
    }
    FUN_0030ddde(param_1);
  }
  *(unsigned int *)(param_1 + 0x16b4) = 7;
  return;
}
