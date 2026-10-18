/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c31e8` (_code @ 0x2c31e8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_004e3cf4; /* 0x4e3cf4 */


/* WARNING: Control flow encountered bad instruction data */

unsigned int * FUN_002c31e8(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_lr; 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar8;
  int unaff_r6;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int in_lr;
  unsigned char temp_v5;
  
  param_1 = (int *)*param_1;
  temp_v0 = *(unsigned short *)(param_1 + 4);
  puVar8 = (unsigned int *)(param_1 + (unsigned int)temp_v0 * 4 + 3);
  if ((unsigned int)param_1[3] <= *puVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v2 = *puVar8;
  temp_v1 = temp_v2 >> 3;
  temp_v3 = temp_v2 & 7;
  *param_1 = param_3;
  param_1[1] = (int)puVar8;
  param_1[2] = (int)puVar8;
  param_1[3] = unaff_r6;
  param_1[4] = (int)param_1;
  temp_v4 = DAT_004e3cf4;
  if (param_3 != 0) {
    puVar3 = (unsigned int *)0x0;
    temp_v5 = (((int)temp_v2 >> 0x1f) & 1U) != 0;
    while( 1 ) {
      if (temp_v5) {
        *puVar3 = (unsigned int)&DAT_004e3cf4;
        puVar3[1] = temp_v4;
        puVar3[2] = temp_v1;
        puVar3[3] = in_lr;
        puVar3 = puVar3 + 4;
        temp_v5 = temp_v3 >= 0x20;
        temp_v3 = temp_v3 - 0x20;
      }
      if (!temp_v5) break;
      *puVar3 = (unsigned int)&DAT_004e3cf4;
      puVar3[1] = temp_v4;
      puVar3[2] = temp_v1;
      puVar3[3] = in_lr;
      puVar3 = puVar3 + 4;
    }
    if ((unsigned char)((unsigned char)(temp_v3 >> 4) & 1)) {
      *puVar3 = (unsigned int)&DAT_004e3cf4;
      puVar3[1] = temp_v4;
      puVar3[2] = temp_v1;
      puVar3[3] = in_lr;
      puVar3 = puVar3 + 4;
    }
    if ((int)(temp_v3 << 0x1c) < 0) {
      *puVar3 = (unsigned int)&DAT_004e3cf4;
      puVar3[1] = temp_v4;
      puVar3 = puVar3 + 2;
    }
    temp_v1 = temp_v3 << 0x1e;
    puVar4 = puVar3;
    if ((unsigned char)((unsigned char)((temp_v3 << 0x1c) >> 0x1e) & 1)) {
      puVar4 = puVar3 + 1;
      *puVar3 = (unsigned int)&DAT_004e3cf4;
    }
    if (temp_v1 == 0) {
      return puVar4;
    }
    puVar3 = puVar4;
    if ((int)temp_v1 < 0) {
      puVar3 = (unsigned int *)((int)puVar4 + 2);
      *(unsigned short *)puVar4 = 0x3cf4;
    }
    puVar4 = puVar3;
    if ((temp_v1 & 0x40000000) != 0) {
      puVar4 = (unsigned int *)((int)puVar3 + 1);
      *(unsigned char *)puVar3 = 0xf4;
    }
    return puVar4;
  }
  temp_v1 = param_1[5];
  puVar3 = (unsigned int *)(temp_v1 >> 8);
  *puVar3 = 0x44e8c4;
  *(short *)(param_1 + (unsigned int)temp_v0 * 4 + 0x113a34) = (short)(temp_v1 >> 8);
  *(unsigned int **)(unaff_r6 + 0xc0) = puVar8;
  temp_v4 = *(unsigned int *)((int)puVar8 * 0x100 + 0x74);
  *(char *)(unaff_r6 + 0x85) = (char)((int)puVar3 << 4);
  *(unsigned int *)((int)puVar8 * 2 + (unsigned int)(0xffffffc7 < unaff_r6 + 0x44U) + 0x54) = temp_v4;
                    /* WARNING: Could not recover jumptable at 0x002c4abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (unsigned int *)(*UNRECOVERED_JUMPTABLE)();
  return puVar3;
}
