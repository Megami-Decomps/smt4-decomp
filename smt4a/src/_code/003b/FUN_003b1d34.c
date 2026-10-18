/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1d34` (_code @ 0x3b1d34, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571508; /* 0x571508 */

extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_004f1530. */
/* Supplied declaration required: FUN_004f1c5c. */
/* Supplied declaration required: FUN_004f1edc. */


unsigned int FUN_003b1d34(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00236038(0);
  temp_v0 = DAT_00571508;
  if (DAT_00571508 != 0) {
    if (temp_v1 != 0) {
      if (temp_v1 == 1) {
        FUN_004f1530(DAT_00571508);
        *(unsigned int *)(temp_v0 + 0x3c) = 0;
        *(unsigned int *)(temp_v0 + 0x38) = 1;
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
      }
    }
    else {
      FUN_004f1c5c(DAT_00571508,0);
      FUN_004f1edc(temp_v0);
      *(unsigned int *)(temp_v0 + 0x3c) = 0;
      *(unsigned int *)(temp_v0 + 0x38) = 1;
      *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0x14);
      *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x18);
    }
  }
  return 1;
}
