/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013dd78` (_code @ 0x13dd78, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0013dd78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    (**(romwright_code **)((unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x5b3284))();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  FUN_0019a5a0(param_1);
  return;
}
