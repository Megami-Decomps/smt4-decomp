/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b5a0` (_code @ 0x30b5a0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00245888. */
extern int FUN_002458d4(unsigned short);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_0030b5a0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_002458d4(temp_v0);
  FUN_00245888(temp_v0,temp_v2 + temp_v1);
  return 1;
}
