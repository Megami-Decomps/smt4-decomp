/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330d7c` (_code @ 0x330d7c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00324c78. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00330d7c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00324c78();
  if ((temp_v1 != 3) && (temp_v1 = FUN_00324c78(temp_v0), temp_v1 != 0)) {
    FUN_003283ac(0);
    return 1;
  }
  FUN_003283ac(1);
  return 1;
}
