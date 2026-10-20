/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c410` (_code @ 0x39c410, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_0039c410(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00588fe8;
  if (param_1 == 0) {
    *(unsigned int *)(DAT_00588fe8 + 0x65c) = 0xffffffff;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0x518);
  *(unsigned int *)(temp_v0 + 0x524) = 0;
  *(unsigned int *)(temp_v0 + 0x518) = 0x11;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
  return;
}

} /* extern "C" */
