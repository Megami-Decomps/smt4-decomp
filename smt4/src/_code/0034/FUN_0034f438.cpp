/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f438` (_code @ 0x34f438, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_0034ddd0; /* 0x34ddd0 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_0034f438(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)"\xf06c4\xf7804\xf40c4\xf4004";
  puVar1 = param_1 + 0x10;
  param_1[3] = 0;
  FUN_002c5d5c(puVar1,&LAB_0034ddd0,0x20,3);
  puVar1[-0xc] = 0;
  puVar1[-0xb] = 0;
  puVar1[-10] = 0;
  puVar1[0x18] = 0;
  return;
}

} /* extern "C" */
