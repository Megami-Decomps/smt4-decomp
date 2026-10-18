/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed7bc` (_code @ 0x1ed7bc, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dcc8; /* 0x43dcc8 */

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c5914. */


void FUN_001ed7bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043dcc8 < '\x01') {
    FUN_002c5914(0xd,0);
    temp_v0 = 0;
    do {
      FUN_002a5ed0(0xd,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
  }
  DAT_0043dcc8 = DAT_0043dcc8 + '\x01';
  return;
}
