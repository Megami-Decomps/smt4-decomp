/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a718` (_code @ 0x43a718, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int FUN_0043aa78(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_0043aa78. */


void FUN_0043a718(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0043aa78();
  if (param_1 < 0) {
    sysFatalBreak();
    return;
  }
  return;
}

} /* extern "C" */
