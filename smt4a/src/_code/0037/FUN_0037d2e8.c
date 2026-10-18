/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d2e8` (_code @ 0x37d2e8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003dfd44. */
/* Supplied declaration required: FUN_003dfe88. */


unsigned int FUN_0037d2e8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 != 0) {
    FUN_003dfd44();
  }
  else {
    FUN_003dfe88();
  }
  FUN_003283ac();
  return 1;
}
