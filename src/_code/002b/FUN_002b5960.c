/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5960` (_code @ 0x2b5960, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */

extern unsigned int *FUN_002aa278(int, int, unsigned short *, unsigned int);


void FUN_002b5960(int param_1,int param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *unaff_r4;
  unsigned int temp_v0;
  int unaff_r5;
  int unaff_r6;
  int in_lr;
  unsigned char temp_v1;
  
  temp_v0 = (param_2 >> 1) ^ (param_4 >> 1);
  if (param_2 >> 1 < 0) {
    temp_v1 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (unsigned int)temp_v1);
  }
  if ((int)param_4 < 0) {
    temp_v1 = param_3 != (unsigned short *)0x0;
    param_3 = (unsigned short *)-(int)param_3;
    param_4 = -(param_4 + temp_v1);
  }
  puVar1 = (unsigned int *)FUN_002aa278(param_1,param_2,param_3,param_4);
  if ((temp_v0 & 0x40000000) == 0) {
    if ((temp_v0 & 0x80000000) != 0) {
      *puVar1 = -(int)param_3;
      puVar1 = (unsigned int *)((int)temp_v0 >> 6);
      unaff_r4 = puVar1;
      in_lr = unaff_r5;
    }
    else {
      *param_3 = (short)puVar1;
    }
    *puVar1 = *(unsigned char *)(in_lr + 0x12a42) | 0x80000000;
    puVar1[1] = 0x804f02c0;
    puVar1[2] = unaff_r4[3];
    puVar1[3] = unaff_r4[2];
    puVar1[4] = unaff_r4[1];
    puVar1[5] = *unaff_r4;
    DAT_004652a0 = DAT_004652a0 + 0x18;
    return;
  }
  *(short *)(unaff_r6 + 2) = (short)puVar1;
  return;
}
