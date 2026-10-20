/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd114` (_code @ 0x1dd114, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002629a0(unsigned int, int);
int FUN_00296cc8(...);

/* Supplied declaration required: FUN_002629a0. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_001dd114(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  if (temp_v1 < 0) {
    temp_v1 = 0;
  }
  FUN_002629a0(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
