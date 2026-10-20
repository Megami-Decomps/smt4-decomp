/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b361c` (_code @ 0x1b361c, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


unsigned int * FUN_001b361c(unsigned char *param_1,unsigned int *param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = *param_1;
  *param_2 = (unsigned int)param_1[0xc] | ((unsigned int)param_1[0xb] << 10) | ((unsigned int)param_1[10] << 0x14);
  param_2[1] = ((unsigned int)temp_v0 * 0x10 + 0x140) | 0x803f0000;
  param_2[2] = ((unsigned int)param_1[0xe] << 10) | ((unsigned int)param_1[0xd] << 0x14) | (unsigned int)param_1[0xf];
  param_2[3] = ((unsigned int)param_1[5] << 10) | ((unsigned int)param_1[4] << 0x14) | (unsigned int)param_1[6];
  param_2[4] = (unsigned int)param_1[9] | ((unsigned int)param_1[8] << 10) | ((unsigned int)param_1[7] << 0x14);
  param_2[5] = 0;
  return param_2 + 6;
}

} /* extern "C" */
