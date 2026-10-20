/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360294` (_code @ 0x360294, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);
int FUN_003605e8(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdFatalError. */
/* Supplied declaration required: FUN_003605e8. */


void FUN_00360294(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_003605e8();
  if (param_1 < 0) {
    asdFatalError();
    return;
  }
  return;
}

} /* extern "C" */
