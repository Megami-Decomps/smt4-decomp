/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003070fc` (_code @ 0x3070fc, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558fb4; /* 0x558fb4 */

extern unsigned int *FUN_002f4f3c(void);


void FUN_003070fc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002f4f3c();
  *puVar1 = (unsigned int)&DAT_00558fb4;
  return;
}
