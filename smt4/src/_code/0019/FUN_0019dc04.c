/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dc04` (_code @ 0x19dc04, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00447a98; /* 0x447a98 */

/* Supplied declaration required: FUN_0020d660. */


void FUN_0019dc04(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = DAT_00447a98;
  temp_v0 = *DAT_00447a98;
  if ((temp_v0 != 0) && ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 3)) {
    temp_v0 = DAT_00447a98[1];
    DAT_00447a98[1] = temp_v0 + 1;
    if (temp_v0 + 1 == 8) {
      if (piVar1[5] == 0) {
        return;
      }
      FUN_0020d660();
    }
    piVar1 = DAT_00447a98;
    if (DAT_00447a98[1] >= 0x3d) {
      *DAT_00447a98 = 0;
      piVar1[1] = 0;
    }
  }
  return;
}
