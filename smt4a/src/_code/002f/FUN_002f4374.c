/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4374` (_code @ 0x2f4374, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_005e20c0; /* 0x5e20c0 */
extern unsigned char DAT_005e20c1; /* 0x5e20c1 */

/* Supplied declaration required: FUN_003fd63c. */


void FUN_002f4374(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005e20c0 != '\0') {
    FUN_003fd63c(0x581,1);
  }
  if ((DAT_005e20c1 & 4) != 0) {
    FUN_003fd63c(0x582,1);
  }
  if ((DAT_005e20c1 & 2) != 0) {
    FUN_003fd63c(0x583,1);
  }
  if ((DAT_005e20c1 & 1) != 0) {
    FUN_003fd63c(0x584,1);
  }
  if ((DAT_005e20c1 & 8) != 0) {
    FUN_003fd63c(0x585,1);
    return;
  }
  return;
}
