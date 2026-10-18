/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7608` (_code @ 0x3a7608, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00312870. */


unsigned int FUN_003a7608(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_00312870(temp_v0,temp_v1);
  return 1;
}
