/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b31ac` (_code @ 0x1b31ac, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192798(void);
int FUN_001a6f60(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001a6f60. */


void FUN_001b31ac(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_1 + 0x45) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_001a6f60(*(int *)(param_1 + 0x48),0);
  FUN_00192798();
  return;
}

} /* extern "C" */
