/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c388` (_code @ 0x39c388, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_0039c388(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00588fe8;
  if (DAT_00588fe8 != 0) {
    temp_v1 = *(unsigned int *)(DAT_00588fe8 + 0x518);
    *(unsigned int *)(DAT_00588fe8 + 0x518) = 7;
    *(unsigned int *)(temp_v0 + 0x51c) = temp_v1;
  }
  return;
}

} /* extern "C" */
