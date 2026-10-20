/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036115c` (_code @ 0x36115c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb150(int, int);

extern int FUN_002a7e4c(unsigned int);
/* Supplied declaration required: FUN_002bb150. */


void FUN_0036115c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (temp_v0 = FUN_002a7e4c(0x407), temp_v0 < 0 && temp_v0 != -0x375f3004) {
    if (temp_v0 == -0x1f5f33f8) {
      FUN_002bb150(10000000,0);
    }
  }
  return;
}

} /* extern "C" */
