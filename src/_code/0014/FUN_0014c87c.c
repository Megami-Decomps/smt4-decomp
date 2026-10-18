/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c87c` (_code @ 0x14c87c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00150ef8; /* 0x150ef8 */
extern unsigned char DAT_00421a5c; /* 0x421a5c */
extern unsigned char DAT_00421a8c; /* 0x421a8c */

extern unsigned int *FUN_001511e4(void);
/* Supplied declaration required: FUN_002c5f58. */


unsigned int * FUN_0014c87c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001511e4();
  puVar1[0x12] = 0;
  *puVar1 = (unsigned int)&DAT_00421a5c;
  puVar1[0x13] = 0;
  puVar1[0x11] = (unsigned int)&DAT_00421a8c;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1 = puVar1 + 0x36;
  FUN_002c5f58(puVar1,&LAB_00150ef8,0x340,8);
  return puVar1 + -0x36;
}
