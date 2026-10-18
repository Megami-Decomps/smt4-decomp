/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3f5c` (_code @ 0x2c3f5c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: FUN_001377a0. */
/* Supplied declaration required: FUN_002bb7c4. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c3fda) */
/* WARNING: Removing unreachable block (ram,0x002c4500) */
/* WARNING: Removing unreachable block (ram,0x002c4504) */

void FUN_002c3f5c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *unaff_r4;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_18;
  unsigned char uStack_14;
  
  puVar2 = &uStack_14;
  temp_v2 = *(int *)(param_1 + 8);
  if (temp_v2 == 0) {
    uStack_18 = *unaff_r4;
    FUN_002c40f8(puVar2,&uStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(unaff_r4 + 1) = 1;
    return;
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x14);
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  FUN_001377a0(&DAT_004d4600,param_1);
  puVar1 = (unsigned int *)&uStack_18;
  FUN_002bb7c4(puVar1,temp_v2,temp_v0,temp_v1,5,3);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
