/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed284` (_code @ 0x1ed284, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028949c. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002d8568. */
/* Supplied declaration required: FUN_0031bdd0. */


unsigned int FUN_001ed284(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  FUN_0031bdd0(temp_v0,1,temp_v1);
  if (temp_v0 != 0) {
    FUN_002d8568();
    FUN_0028949c(temp_v0);
  }
  return 1;
}
