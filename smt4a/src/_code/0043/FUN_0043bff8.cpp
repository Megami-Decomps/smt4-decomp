/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043bff8` (_code @ 0x43bff8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcd48(int, int);

extern int FUN_001a3010(unsigned int);
/* Supplied declaration required: FUN_001bcd48. */


void FUN_0043bff8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (temp_v0 = FUN_001a3010(0x407), temp_v0 < 0 && temp_v0 != -0x375f3004) {
    if (temp_v0 == -0x1f5f33f8) {
      FUN_001bcd48(10000000,0);
    }
  }
  return;
}

} /* extern "C" */
