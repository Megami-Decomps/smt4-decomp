/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245228` (_code @ 0x245228, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_00245228(int param_1,int param_2,unsigned int param_3)

{
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4a24) = 0;
  *(unsigned int *)(param_1 + 0x4a2c) = 0;
  *(unsigned int *)(param_1 + 0x4a34) = param_3;
  *(unsigned int *)(param_1 + 0x4a14) = *(unsigned int *)(param_1 + 0x4a0c);
  *(unsigned int *)(param_1 + 0x4a1c) = 0;
  return;
}

} /* extern "C" */
