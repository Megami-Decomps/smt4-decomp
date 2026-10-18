/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023cccc` (_code @ 0x23cccc, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;


void FUN_0023cccc(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0x5ec) = in_s0;
  *(unsigned int *)(param_1 + 0x6ac) = param_2;
  *(unsigned int *)(param_1 + 0x6b0) = 0;
  *(unsigned int *)(param_1 + 0x6b4) = param_3;
  puVar1 = (unsigned int *)(param_1 + 0x634);
  if (param_4 == 0) {
    *puVar1 = *puVar1 | 0x400;
  }
  else {
    *(unsigned int *)(param_1 + 0x630) = *(unsigned int *)(param_1 + 0x6a8);
    *puVar1 = *puVar1 | 0x200400;
  }
  *(unsigned int *)(param_1 + 0x6a8) = 0;
  return;
}
