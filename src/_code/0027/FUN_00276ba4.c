/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276ba4` (_code @ 0x276ba4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */


void FUN_00276ba4(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned int *)(DAT_00447a78 + 0x30) = 1;
  *(unsigned int *)(temp_v0 + 0x38) = 1;
  return;
}
