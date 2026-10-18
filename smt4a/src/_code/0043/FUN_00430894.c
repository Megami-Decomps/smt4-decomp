/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430894` (_code @ 0x430894, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_004302fc. */
/* Supplied declaration required: FUN_004307b0. */


void FUN_00430894(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_004307b0();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_004302fc(param_1);
  }
  return;
}
