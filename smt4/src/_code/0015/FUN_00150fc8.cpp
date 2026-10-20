/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150fc8` (_code @ 0x150fc8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421d2c; /* 0x421d2c */

extern unsigned int *FUN_002a7b78(void);


unsigned int * FUN_00150fc8(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a7b78();
  *puVar1 = (unsigned int)&DAT_00421d2c;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return puVar1;
}

} /* extern "C" */
