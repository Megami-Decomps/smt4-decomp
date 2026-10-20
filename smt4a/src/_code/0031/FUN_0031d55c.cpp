/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d55c` (_code @ 0x31d55c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_002d1f40(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_002d1f40. */


unsigned int FUN_0031d55c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(0);
  FUN_002d1f40(temp_v1,temp_v0,0);
  return 1;
}

} /* extern "C" */
