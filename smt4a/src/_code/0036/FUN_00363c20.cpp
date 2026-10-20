/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363c20` (_code @ 0x363c20, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005806a4; /* 0x5806a4 */


void FUN_00363c20(void)

{
  int temp_v0;
  
  temp_v0 = DAT_005806a4;
  *(unsigned char *)(DAT_005806a4 + 0x2b8) = 1;
  *(unsigned char *)(temp_v0 + 0x304) = 1;
  return;
}

} /* extern "C" */
