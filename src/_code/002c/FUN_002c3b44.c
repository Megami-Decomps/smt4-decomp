/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3b44` (_code @ 0x2c3b44, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8898. */
/* Supplied declaration required: FUN_002c3aa8. */


int * FUN_002c3b44(int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  unsigned int unaff_r4;
  int *unaff_r7;
  int temp_v2;
  unsigned int in_lr;
  unsigned char temp_v3;
  
  if (param_2 < 4) {
    temp_v1 = ((unsigned int *)*unaff_r7)[1];
    piVar2 = (int *)(temp_v1 + 0x1c0);
    FUN_002c3aa8(piVar2,param_2,*(unsigned int *)*unaff_r7);
    *(unsigned int *)(temp_v1 + 0x1b4) = 0;
    *(unsigned int *)(temp_v1 + 0x1b8) = 0;
    *(unsigned int *)(temp_v1 + 0x1bc) = 0;
    temp_v2 = *(int *)(temp_v1 + 0x1c8) - 1;
    *(int *)(temp_v1 + 0x1c8) = temp_v2;
    if (temp_v2 == 0) {
      *(unsigned int *)(temp_v1 + 0x1c4) = 0;
      do {
        temp_v1 = *piVar2;
        temp_v2 = -temp_v1;
        temp_v3 = (unsigned char)hasExclusiveAccess(piVar2);
      } while (!temp_v3);
      *piVar2 = temp_v2;
      piVar3 = piVar2;
      if (temp_v1 != -1 && 0 < temp_v2) {
        piVar3 = DAT_00471b58;
        FUN_002a8898(DAT_00471b58,piVar2,0,1,0,0,unaff_r4,in_lr);
      }
      return piVar3;
    }
    return piVar2;
  }
  if (((unsigned int)param_1 & 3) != 0) {
    temp_v2 = 4 - ((unsigned int)param_1 & 3);
    piVar2 = param_1;
    if (temp_v2 != 2) {
      piVar2 = (int *)((int)param_1 + 1);
      *(unsigned char *)param_1 = 0;
    }
    param_2 = param_2 - temp_v2;
    param_1 = piVar2;
    if (temp_v2 >= 2) {
      param_1 = (int *)((int)piVar2 + 2);
      *(unsigned short *)piVar2 = 0;
    }
  }
  temp_v3 = param_2 >= 0x20;
  param_2 = param_2 - 0x20;
  do {
    if (temp_v3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      temp_v3 = param_2 >= 0x20;
      param_2 = param_2 - 0x20;
    }
  } while (temp_v3);
  if ((unsigned char)((unsigned char)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  temp_v0 = param_2 << 0x1e;
  piVar2 = param_1;
  if ((unsigned char)((unsigned char)((param_2 << 0x1c) >> 0x1e) & 1)) {
    piVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (temp_v0 == 0) {
    return piVar2;
  }
  piVar3 = piVar2;
  if ((int)temp_v0 < 0) {
    piVar3 = (int *)((int)piVar2 + 2);
    *(unsigned short *)piVar2 = 0;
  }
  piVar2 = piVar3;
  if ((temp_v0 & 0x40000000) != 0) {
    piVar2 = (int *)((int)piVar3 + 1);
    *(unsigned char *)piVar3 = 0;
  }
  return piVar2;
}
