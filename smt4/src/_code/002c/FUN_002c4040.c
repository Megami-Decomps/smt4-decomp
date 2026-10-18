/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4040` (_code @ 0x2c4040, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00471bac; /* 0x471bac */

/* Supplied declaration required: FUN_001373f0. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_002bf0dc. */


void FUN_002c4040(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int unaff_r6;
  unsigned int uStack000001a8;
  int iStack_28;
  int *piStack_24;
  unsigned int uStack_20;
  
  param_1[9] = *param_1;
  DAT_00471bac = param_1;
  *(unsigned char *)(param_1 + 3) = 0x58;
  *(unsigned char *)(param_1 + 3) = 0x58;
  *(unsigned char *)(param_1 + 3) = 0x58;
  iStack_28 = unaff_r6 << 1;
  temp_v0 = *param_1 * 2;
  uStack_20 = 0x2e;
  if (*(int *)(temp_v0 + 0x14) != 0) {
    uStack000001a8 = param_3;
    piStack_24 = param_1;
    FUN_002bc7f4(0x207,&iStack_28);
    FUN_001373f0(iStack_28,*(unsigned int *)(temp_v0 + 0x14),*(unsigned int *)(temp_v0 + 0x18));
    FUN_002bf0dc();
  }
  return;
}
