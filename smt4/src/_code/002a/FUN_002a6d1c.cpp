/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6d1c` (_code @ 0x2a6d1c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_5_stack;


void FUN_002a6d1c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned short *)(param_1 + 0xb) = 1;
  *(unsigned short *)((int)param_1 + 0x2e) = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

} /* extern "C" */
