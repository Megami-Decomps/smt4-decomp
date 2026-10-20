/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010077c` (_code @ 0x10077c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055cb90; /* 0x55cb90 */

extern unsigned int *FUN_00100acc(void);


void FUN_0010077c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00100acc();
  *puVar1 = (unsigned int)&DAT_0055cb90;
  puVar1[1] = 0;
  return;
}

} /* extern "C" */
