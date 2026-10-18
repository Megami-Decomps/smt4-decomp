/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030dd7e` (_code @ 0x30dd7e, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00125a34. */


void FUN_0030dd7e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x16bc);
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((param_4 << (temp_v2 & 0xff)) & 0xffff);
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
    *(short *)(param_1 + 0x16b8) =
         (short)((param_4 & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) - 0xd;
  }
  else {
    *(unsigned short *)(param_1 + 0x16b8) = temp_v0;
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2 + 3;
  }
  FUN_00125a34(param_1,param_2,param_3,1,param_4);
  return;
}
