/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257108` (_code @ 0x257108, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00257108(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x1c) - 1;
  *(int *)(param_1 + 0x1c) = temp_v0;
  if (temp_v0 == 0) {
    temp_v1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        FUN_002c0894(*(unsigned int *)(*(int *)(param_1 + 0x14) + temp_v1 * 4));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(unsigned int *)(param_1 + 4));
    }
    FUN_002c415c(*(unsigned int *)(param_1 + 0x24));
    return;
  }
  return;
}
