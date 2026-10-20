/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003604a0` (_code @ 0x3604a0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);
int FUN_00360800(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdFatalError. */
/* Supplied declaration required: FUN_00360800. */


void FUN_003604a0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00360800();
  if (param_1 < 0) {
    asdFatalError();
    return;
  }
  return;
}

} /* extern "C" */
