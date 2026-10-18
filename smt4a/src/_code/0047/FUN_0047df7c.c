/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047df7c` (_code @ 0x47df7c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00342010. */


void FUN_0047df7c(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(param_1 + 2) = param_2;
  param_1[1] = 0xc;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_0019a5a0();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_0019a5a0();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_0019c364();
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00342010();
    return;
  }
  return;
}
