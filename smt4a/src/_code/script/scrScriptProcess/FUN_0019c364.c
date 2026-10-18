/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c364` (_code @ 0x19c364, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00588e30; /* 0x588e30 */
extern int DAT_00588e34; /* 0x588e34 */
extern int DAT_00588e38; /* 0x588e38 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0019c364(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0xd4) = 0;
  }
  if (DAT_00588e34 == param_1) {
    DAT_00588e34 = *(int *)(param_1 + 0xf4);
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xf0) + 0xf4) = *(unsigned int *)(param_1 + 0xf4);
  }
  if (DAT_00588e38 == param_1) {
    DAT_00588e38 = *(int *)(param_1 + 0xf0);
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xf4) + 0xf0) = *(unsigned int *)(param_1 + 0xf0);
  }
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  DAT_00588e30 = DAT_00588e30 - 1;
  FUN_0019a5a0(param_1);
  return;
}
