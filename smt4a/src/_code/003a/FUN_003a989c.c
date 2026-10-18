/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a989c` (_code @ 0x3a989c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003e4a54. */


unsigned int FUN_003a989c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_003e4a54(temp_v0,temp_v1);
  return 1;
}
