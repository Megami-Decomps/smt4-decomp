/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150ecc` (_code @ 0x150ecc, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421974; /* 0x421974 */

extern unsigned int *FUN_002a7ebc(void);


unsigned int * FUN_00150ecc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a7ebc();
  *puVar1 = (unsigned int)&DAT_00421974;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return puVar1;
}
