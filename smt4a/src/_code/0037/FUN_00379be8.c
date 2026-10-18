/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379be8` (_code @ 0x379be8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */


void FUN_00379be8(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00587f28;
  if (DAT_00587f28 != 0) {
    *(unsigned int *)(DAT_00587f28 + 0x6c) = 4;
    *(unsigned int *)(temp_v0 + 0x70) = 0;
    return;
  }
  return;
}
