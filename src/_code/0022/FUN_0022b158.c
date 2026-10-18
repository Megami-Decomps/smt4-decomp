/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b158` (_code @ 0x22b158, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00152de4. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_003418f4. */


void FUN_0022b158(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x14) = 0;
  FUN_00152de4(param_1);
  FUN_003418f4(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(unsigned int *)(param_1 + 0x1658) = *(unsigned int *)(param_1 + 0x1664);
    *(unsigned int *)(param_1 + 0x165c) = *(unsigned int *)(param_1 + 0x1668);
    *(unsigned int *)(param_1 + 0x1660) = *(unsigned int *)(param_1 + 0x166c);
    FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0x1658);
    return;
  }
  return;
}
