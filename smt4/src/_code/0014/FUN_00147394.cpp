/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147394` (_code @ 0x147394, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int threadSleepDuration(int, int);
int FUN_002c1148(void);

/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002c1148. */


void FUN_00147394(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  while( 1 ) {
    temp_v0 = 0;
    FUN_002c1148();
    if (-1 < temp_v0 || temp_v0 == -0x375f3004) break;
    if (temp_v0 == -0x1f5f33f8) {
      threadSleepDuration(10000000,0);
    }
  }
  return;
}

} /* extern "C" */
