/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fdcc` (_code @ 0x42fdcc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00430084(unsigned int);
int FUN_00430538(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_00430084. */
/* Supplied declaration required: FUN_00430538. */


void FUN_0042fdcc(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_00430538();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_00430084(param_1);
  }
  return;
}

} /* extern "C" */
