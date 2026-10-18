/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e940` (_code @ 0x37e940, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421a48; /* 0x421a48 */

extern unsigned int *FUN_0037e16c(void);


void FUN_0037e940(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037e16c();
  *puVar1 = (unsigned int)&DAT_00421a48;
  return;
}
