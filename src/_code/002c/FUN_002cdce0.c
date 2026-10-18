/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdce0` (_code @ 0x2cdce0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002b6700. */


unsigned int FUN_002cdce0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_002b6700();
  FUN_0028df54(*(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x148));
  return 1;
}
