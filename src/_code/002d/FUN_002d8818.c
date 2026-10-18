/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8818` (_code @ 0x2d8818, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002204a8. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002d8818(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  FUN_002204a8(temp_v0,temp_v1,temp_v2);
  return 1;
}
