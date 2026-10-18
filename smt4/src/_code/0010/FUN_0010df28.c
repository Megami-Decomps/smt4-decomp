/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010df28` (_code @ 0x10df28, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002c415c. */


void FUN_0010df28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_002c415c();
  }
  FUN_002c415c(param_1);
  return;
}
