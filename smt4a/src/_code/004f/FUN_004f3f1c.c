/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f3f1c` (_code @ 0x4f3f1c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;


void FUN_004f3f1c(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 0x604) = in_s0;
  *(unsigned int *)(param_1 + 0x718) = param_2;
  *(unsigned int *)(param_1 + 0x71c) = 0;
  *(unsigned int *)(param_1 + 0x720) = param_3;
  puVar1 = (unsigned int *)(param_1 + 0x64c);
  if (param_4 == 0) {
    *puVar1 = *puVar1 | 0x400;
  }
  else {
    *(unsigned int *)(param_1 + 0x648) = *(unsigned int *)(param_1 + 0x714);
    *puVar1 = *puVar1 | 0x200400;
  }
  *(unsigned int *)(param_1 + 0x714) = 0;
  return;
}
