/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b048c` (_code @ 0x3b048c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_00324b14. */


unsigned int FUN_003b048c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 == 0) {
    temp_v1 = 1;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 2;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 3;
  }
  else {
    if (temp_v0 != 3) {
      return 1;
    }
    temp_v1 = 4;
  }
  FUN_00324b14(temp_v1);
  return 1;
}
