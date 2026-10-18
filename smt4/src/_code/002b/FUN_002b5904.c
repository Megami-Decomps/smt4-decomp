/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5904` (_code @ 0x2b5904, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern signed char DAT_0044e364; /* 0x44e364 */
extern int DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_0013a410. */
extern unsigned int *FUN_002aa278(unsigned short *);
/* Supplied declaration required: FUN_002b46f8. */
/* Supplied declaration required: FUN_002bb274. */
/* Supplied declaration required: FUN_002c0c74. */
extern unsigned int func_0x006b5f7c(void);


void FUN_002b5904(int param_1,unsigned int param_2,unsigned short *param_3,int param_4)

{
/* irregular: irregular input(s): in_lr; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned short *puVar4;
  unsigned int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  romwright_code *unaff_r7;
  int in_lr;
  unsigned char uStack00000000;
  
  if (param_1 != 0) {
    if (DAT_0044e364 == '\0') {
      *param_3 = 0;
      return;
    }
    FUN_0013a410();
    (*unaff_r7)(0,temp_v1 + 0x78);
    FUN_002c0c74(0);
    FUN_002b46f8(&uStack00000000);
    return;
  }
  FUN_002bb274();
  temp_v0 = func_0x006b5f7c();
  puVar2 = (unsigned short *)((temp_v0 >> 8) + (unaff_r6 >> 0x18));
  puVar4 = puVar2;
  if (param_4 < 0) {
    puVar4 = (unsigned short *)-(int)puVar2;
  }
  puVar3 = (unsigned int *)FUN_002aa278(puVar2);
  if ((((int)puVar2 >> 0x20) & 0x40000000U) == 0) {
    if ((((int)puVar2 >> 0x20) & 0x80000000U) != 0) {
      *puVar3 = -(int)puVar4;
      puVar3 = (unsigned int *)((int)puVar2 >> 0x1f);
      unaff_r4 = puVar3;
      in_lr = unaff_r5;
    }
    else {
      *puVar4 = (short)puVar3;
    }
    *puVar3 = *(unsigned char *)(in_lr + 0x12a42) | 0x80000000;
    puVar3[1] = 0x804f02c0;
    puVar3[2] = unaff_r4[3];
    puVar3[3] = unaff_r4[2];
    puVar3[4] = unaff_r4[1];
    puVar3[5] = *unaff_r4;
    DAT_004652a0 = DAT_004652a0 + 0x18;
    return;
  }
  *(short *)(unaff_r6 + 2) = (short)puVar3;
  return;
}
