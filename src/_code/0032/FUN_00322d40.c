/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322d40` (_code @ 0x322d40, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_003492d8. */


unsigned int FUN_00322d40(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00296f60(1);
  FUN_003492d8(temp_v0,temp_v1 == 1);
  return 1;
}
