/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047df1c` (_code @ 0x47df1c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0037b450. */


void FUN_0047df1c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0037b450();
    return;
  }
  return;
}
