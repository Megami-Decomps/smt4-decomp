/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020610c` (_code @ 0x20610c, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002931f0. */
/* Supplied declaration required: FUN_00297e30. */
extern unsigned int FUN_00297f40(int, unsigned int);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002bdac0. */


void FUN_0020610c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bdac0(param_1 + 0x12b8,0);
  FUN_0029ccf8();
  *(unsigned int *)(param_1 + 0x5918) = 4;
  FUN_002a0f68(0);
  if (*(int *)(param_1 + 0x304c) - 8U < 6) {
    FUN_002931f0(param_1);
    return;
  }
  temp_v0 = FUN_00297f40(param_1,0);
  FUN_00297e30(param_1,temp_v0,*(unsigned int *)(param_1 + 0x305c));
  return;
}
