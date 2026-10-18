/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f648` (_code @ 0x34f648, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0034e01c; /* 0x34e01c */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_0034f648(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)"\xf27c4戀4\xf61c4\xf6104";
  puVar1 = param_1 + 0x10;
  param_1[3] = 0;
  FUN_002c5f58(puVar1,&LAB_0034e01c,0x20,3);
  puVar1[-0xc] = 0;
  puVar1[-0xb] = 0;
  puVar1[-10] = 0;
  puVar1[0x18] = 0;
  return;
}
