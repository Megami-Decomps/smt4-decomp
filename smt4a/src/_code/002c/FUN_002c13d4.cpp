/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c13d4` (_code @ 0x2c13d4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern int DAT_0057f56c; /* 0x57f56c */


void FUN_002c13d4(unsigned short param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x14) = 6;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned int *)(temp_v0 + 0x2c0) = param_2;
  *(unsigned int *)(temp_v0 + 0x2c4) = param_3;
  *(unsigned char *)(temp_v0 + 0x2b1) = 0;
  return;
}

} /* extern "C" */
