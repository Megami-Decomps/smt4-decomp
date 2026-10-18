/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5fdc` (_code @ 0x2e5fdc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005f1624; /* 0x5f1624 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00376fb8. */


unsigned int FUN_002e5fdc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  if (temp_v0 != 0x18) {
    FUN_00324bc8(temp_v0,temp_v1,temp_v2);
  }
  else {
    FUN_00324bc8(0x18,1,temp_v2);
    FUN_00376fb8(temp_v1);
    DAT_005f1624 = 1;
  }
  DAT_005f1b70 = 0;
  FUN_00137ee0(6,0,0);
  return 1;
}
