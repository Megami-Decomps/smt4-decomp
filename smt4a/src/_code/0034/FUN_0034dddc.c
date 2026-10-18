/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dddc` (_code @ 0x34dddc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_002e486c. */
extern int FUN_003311b8(void);
/* Supplied declaration required: FUN_00480e30. */
/* Supplied declaration required: FUN_00480fc0. */


unsigned int FUN_0034dddc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  if (temp_v1 < 0) {
    FUN_00480fc0(temp_v0,-temp_v1);
  }
  else {
    FUN_00480e30(temp_v0,temp_v1);
  }
  temp_v2 = FUN_003311b8();
  if (temp_v2 != 0) {
    FUN_00169ddc(0x1000215);
    FUN_002e486c(temp_v1);
  }
  return 1;
}
