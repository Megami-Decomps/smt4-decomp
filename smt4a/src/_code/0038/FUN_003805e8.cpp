/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003805e8` (_code @ 0x3805e8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_003e4b2c(int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003e4b2c. */


unsigned int FUN_003805e8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_003e4b2c(temp_v0,temp_v1,temp_v2);
  return 1;
}

} /* extern "C" */
