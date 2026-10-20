/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003054a4` (_code @ 0x3054a4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558d28; /* 0x558d28 */

extern unsigned int *FUN_002f4f3c(void);


void FUN_003054a4(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002f4f3c();
  puVar1[0x10] = 0;
  *puVar1 = (unsigned int)&DAT_00558d28;
  return;
}

} /* extern "C" */
