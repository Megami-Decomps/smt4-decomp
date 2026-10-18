/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147390` (_code @ 0x147390, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c1148. */


void FUN_00147390(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while( 1 ) {
    temp_v0 = 0;
    FUN_002c1148();
    if (-1 < temp_v0 || temp_v0 == -0x375f3004) break;
    if (temp_v0 == -0x1f5f33f8) {
      FUN_002bb150(10000000,0);
    }
  }
  return;
}
