/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fd64` (_code @ 0x42fd64, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_00430014. */
/* Supplied declaration required: FUN_004304c8. */


void FUN_0042fd64(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_004304c8();
  }
  else if (DAT_005c1fc4 != 0) {
    FUN_00430014(param_1);
    return;
  }
  return;
}
