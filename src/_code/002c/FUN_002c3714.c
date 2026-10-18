/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3714` (_code @ 0x2c3714, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam00000014; /* 0x14 */
extern unsigned int DAT_004651e8; /* 0x4651e8 */
extern unsigned int DAT_004e3cf4; /* 0x4e3cf4 */


/* WARNING: Removing unreachable block (ram,0x002c4b74) */
/* WARNING: Removing unreachable block (ram,0x002c4b6c) */
/* WARNING: Removing unreachable block (ram,0x002c4b78) */
/* WARNING: Removing unreachable block (ram,0x002c4b7c) */
/* WARNING: Removing unreachable block (ram,0x002c4b80) */

unsigned int * FUN_002c3714(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_lr, in_r12; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int unaff_r4;
  int unaff_r6;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int in_r12;
  unsigned int in_lr;
  unsigned char temp_v2;
  
  puVar3 = &DAT_004651e8;
  *(int *)param_3 = param_3;
  *(int *)(param_3 + 4) = param_4;
  *(int *)(param_3 + 8) = unaff_r4;
  *(int *)(param_3 + 0xc) = unaff_r6;
  *(int *)(param_3 + 0x10) = param_3;
  temp_v1 = DAT_004e3cf4;
  temp_v0 = uRam00000014;
  if (param_3 != 0) {
    puVar2 = (unsigned int *)0x0;
    temp_v2 = 0;
    while( 1 ) {
      if (temp_v2) {
        *puVar2 = (unsigned int)&DAT_004e3cf4;
        puVar2[1] = temp_v1;
        puVar2[2] = in_r12;
        puVar2[3] = in_lr;
        puVar2 = puVar2 + 4;
        temp_v2 = (unsigned int *)0x1f < puVar3;
        puVar3 = puVar3 + -8;
      }
      if (!temp_v2) break;
      *puVar2 = (unsigned int)&DAT_004e3cf4;
      puVar2[1] = temp_v1;
      puVar2[2] = in_r12;
      puVar2[3] = in_lr;
      puVar2 = puVar2 + 4;
    }
    if ((unsigned char)((unsigned char)((unsigned int)puVar3 >> 4) & 1)) {
      *puVar2 = (unsigned int)&DAT_004e3cf4;
      puVar2[1] = temp_v1;
      puVar2[2] = in_r12;
      puVar2[3] = in_lr;
      puVar2 = puVar2 + 4;
    }
    if ((int)puVar3 << 0x1c < 0) {
      *puVar2 = (unsigned int)&DAT_004e3cf4;
      puVar2[1] = temp_v1;
      puVar2 = puVar2 + 2;
    }
    return puVar2;
  }
  puVar3 = (unsigned int *)(uRam00000014 >> 8);
  *puVar3 = 0x44e8c4;
  *(short *)(param_4 + 0x44e8c4) = (short)(temp_v0 >> 8);
  *(int *)(unaff_r6 + 0xc0) = param_4;
  temp_v1 = *(unsigned int *)(unaff_r4 * 0x100 + 0x74);
  *(char *)(unaff_r6 + 0x85) = (char)((int)puVar3 << 4);
  *(unsigned int *)(unaff_r4 + param_4 + (unsigned int)(0xffffffc7 < unaff_r6 + 0x44U) + 0x54) = temp_v1;
                    /* WARNING: Could not recover jumptable at 0x002c4abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (unsigned int *)(*UNRECOVERED_JUMPTABLE)();
  return puVar3;
}
