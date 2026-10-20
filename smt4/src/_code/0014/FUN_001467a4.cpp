/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001467a4` (_code @ 0x1467a4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);
int software_interrupt(int);

extern signed char DAT_00465710; /* 0x465710 */
extern int DAT_00465714; /* 0x465714 */
extern int DAT_00472a50; /* 0x472a50 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c52f8. */


void FUN_001467a4(void)

{
/* irregular: 2 native warning(s); review required */
  if (0 < DAT_00465714) {
    DAT_00465714 = DAT_00465714 - 1;
  }
  if (DAT_00465714 == 0) {
    if (DAT_00465710 != '\0') {
      DAT_00465710 = 0;
      if (DAT_00472a50 != 0) {
        software_interrupt(0x23);
        if (DAT_00472a50 < 0) {
          FUN_002c52f8();
        }
        DAT_00472a50 = 0;
      }
      return;
    }
    return;
  }
  return;
}

} /* extern "C" */
