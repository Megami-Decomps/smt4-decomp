/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1f5c` (_code @ 0x1a1f5c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017145c(void);
int FUN_001bcd48(int, int);

/* Supplied declaration required: FUN_0017145c. */
/* Supplied declaration required: FUN_001bcd48. */


void FUN_001a1f5c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while( 1 ) {
    temp_v0 = 0;
    FUN_0017145c();
    if (-1 < temp_v0 || temp_v0 == -0x375f3004) break;
    if (temp_v0 == -0x1f5f33f8) {
      FUN_001bcd48(10000000,0);
    }
  }
  return;
}

} /* extern "C" */
