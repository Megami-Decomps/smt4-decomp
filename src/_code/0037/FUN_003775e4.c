/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003775e4` (_code @ 0x3775e4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042162c; /* 0x42162c */
extern unsigned char DAT_0042164c; /* 0x42164c */
extern unsigned char DAT_004219b0; /* 0x4219b0 */

extern unsigned int *FUN_00150db8(unsigned int *);


void FUN_003775e4(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_004219b0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)FUN_00150db8(param_1 + 3);
  puVar1[0x83] = 0;
  *puVar1 = (unsigned int)&DAT_0042164c;
  puVar1[-3] = (unsigned int)&DAT_0042162c;
  puVar1[0x84] = 0;
  return;
}
