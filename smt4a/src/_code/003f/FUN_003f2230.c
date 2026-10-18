/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2230` (_code @ 0x3f2230, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_003f2230(int param_1,int param_2,unsigned int param_3)

{
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4d30) = 0;
  *(unsigned int *)(param_1 + 0x4d38) = 0;
  *(unsigned int *)(param_1 + 0x4d40) = param_3;
  *(unsigned int *)(param_1 + 0x4d20) = *(unsigned int *)(param_1 + 0x4d18);
  *(unsigned int *)(param_1 + 0x4d28) = 0;
  return;
}
