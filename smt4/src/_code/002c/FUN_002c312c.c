/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c312c` (_code @ 0x2c312c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_11: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_11_stack;


void FUN_002c312c(unsigned short *param_1,unsigned int param_2,unsigned short param_3,unsigned int param_4,
                 unsigned short param_5,unsigned int param_6,unsigned short param_7,unsigned int param_8,
                 unsigned short param_9,unsigned int param_10,unsigned short param_11)

{
  *param_1 = param_3;
  param_1[1] = param_5;
  param_1[2] = param_7;
  param_1[3] = param_9;
  param_1[4] = param_11;
  *(unsigned int *)(param_1 + 6) = param_2;
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 10) = param_6;
  *(unsigned int *)(param_1 + 0xc) = param_8;
  *(unsigned int *)(param_1 + 0xe) = param_10;
  return;
}
