/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463298` (_code @ 0x463298, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c270; /* 0x55c270 */

extern unsigned int *FUN_004625c0(void);


void FUN_00463298(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004625c0();
  *puVar1 = (unsigned int)&DAT_0055c270;
  return;
}

} /* extern "C" */
