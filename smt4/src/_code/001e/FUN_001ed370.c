/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed370` (_code @ 0x1ed370, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002d85d0. */
/* Supplied declaration required: FUN_0031bc80. */


unsigned int FUN_001ed370(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(1);
  FUN_0031bc80(temp_v0,1,temp_v1);
  if (temp_v0 != 0) {
    FUN_002d85d0();
    FUN_00289234(temp_v0);
  }
  return 1;
}
