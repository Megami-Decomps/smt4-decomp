/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010390c` (_code @ 0x10390c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558510; /* 0x558510 */

extern unsigned int *FUN_0010d134(void);


void FUN_0010390c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0010d134();
  *puVar1 = (unsigned int)&DAT_00558510;
  return;
}
