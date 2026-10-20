/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121e38` (_code @ 0x121e38, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00422110; /* 0x422110 */

extern unsigned int *FUN_001314fc(void);


void FUN_00121e38(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001314fc();
  *puVar1 = (unsigned int)&DAT_00422110;
  return;
}

} /* extern "C" */
