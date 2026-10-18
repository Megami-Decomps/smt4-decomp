/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016d17c` (_code @ 0x16d17c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_0016d17c(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  param_1[2] = 0xf0;
  param_1[3] = 400;
  param_1[8] = (unsigned int)param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *(unsigned char *)(param_1 + 10) = 3;
  param_1[0xb] = 0xf0;
  param_1[0xc] = 400;
  param_1[0xd] = 0x3f800000;
  *(unsigned char *)(param_1 + 0xe) = 0;
  param_1[0xf] = (unsigned int)param_1;
  param_1[0x10] = 0xf0;
  param_1[0x11] = 400;
  return;
}
