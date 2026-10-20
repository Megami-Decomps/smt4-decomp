/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011076c` (_code @ 0x11076c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005593b0; /* 0x5593b0 */

extern unsigned int *FUN_00116934(void);


void FUN_0011076c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00116934();
  *puVar1 = (unsigned int)&DAT_005593b0;
  return;
}

} /* extern "C" */
