/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b350c` (_code @ 0x1b350c, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


unsigned int * FUN_001b350c(unsigned char *param_1,unsigned int *param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = *param_1;
  *param_2 = ((unsigned int)param_1[0xb] << 10) | ((unsigned int)param_1[10] << 0x14) | (unsigned int)param_1[0xc];
  param_2[1] = ((unsigned int)temp_v0 * 0x10 + 0x140) | 0x80bf0000;
  param_2[2] = (unsigned int)param_1[0xf] | ((unsigned int)param_1[0xe] << 10) | ((unsigned int)param_1[0xd] << 0x14);
  param_2[3] = (unsigned int)param_1[6] | ((unsigned int)param_1[5] << 10) | ((unsigned int)param_1[4] << 0x14);
  param_2[4] = (unsigned int)param_1[9] | ((unsigned int)param_1[8] << 10) | ((unsigned int)param_1[7] << 0x14);
  param_2[5] = *(unsigned int *)(param_1 + 0x10);
  param_2[6] = *(unsigned int *)(param_1 + 0x14);
  param_2[7] = *(unsigned int *)(param_1 + 0x24);
  param_2[8] = *(unsigned int *)(param_1 + 0x28);
  param_2[9] = 0;
  param_2[10] = (unsigned int)param_1[0x18] | ((unsigned int)(param_1[1] != 0) << 1) |
                ((unsigned int)(param_1[2] != 0) << 2) | ((unsigned int)(param_1[3] != 0) << 3);
  param_2[0xb] = *(unsigned int *)(param_1 + 0x1c);
  param_2[0xc] = *(unsigned int *)(param_1 + 0x20);
  param_2[0xd] = 0;
  return param_2 + 0xe;
}
