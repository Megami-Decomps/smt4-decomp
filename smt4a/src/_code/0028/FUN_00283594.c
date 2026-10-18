/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283594` (_code @ 0x283594, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00283480. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003a6dec. */


unsigned int FUN_00283594(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_003a6dec(temp_v0,temp_v1);
  FUN_00283480();
  FUN_003283ac(temp_v0);
  return 1;
}
