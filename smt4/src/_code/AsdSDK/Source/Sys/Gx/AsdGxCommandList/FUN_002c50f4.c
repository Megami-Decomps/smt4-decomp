/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c50f4` (_code @ 0x2c50f4, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0046505c; /* 0x46505c */

/* Supplied declaration required: FUN_002c498c. */


void FUN_002c50f4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int unaff_r4;
  int temp_v0;
  unsigned char unaff_r5;
  unsigned int uStack000001b0;
  
  temp_v0 = unaff_r4 * 2;
  *(unsigned char *)(temp_v0 + 0xc) = unaff_r5;
  *(unsigned char *)(temp_v0 + 0xc) = unaff_r5;
  *(unsigned char *)(temp_v0 + 0xc) = 0x2e;
  *(unsigned char *)(temp_v0 + 0xc) = 0x2e;
  puVar1 = (unsigned int *)0x100;
  uStack000001b0 = param_3;
  FUN_002c498c(0x100,0x100,0,0x310,1);
  *puVar1 = DAT_0046505c;
  return;
}
