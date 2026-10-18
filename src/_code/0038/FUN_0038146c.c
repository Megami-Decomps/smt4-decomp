/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038146c` (_code @ 0x38146c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00421d58; /* 0x421d58 */

/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_00381324. */
/* Supplied declaration required: FUN_00381464. */


void FUN_0038146c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421d58;
  if (param_1[1] != 0) {
    FUN_00381324();
  }
  FUN_00381464(param_1);
  FUN_002b2520();
  return;
}
