/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fcc0` (_code @ 0x42fcc0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_0042ff58. */
/* Supplied declaration required: FUN_0043040c. */


void FUN_0042fcc0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_0043040c();
  }
  else if (DAT_005c1fc4 != 0) {
    FUN_0042ff58(param_1);
    return;
  }
  return;
}
