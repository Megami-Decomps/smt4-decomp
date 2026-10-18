/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc3bc` (_code @ 0x2dc3bc, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_002dc3bc(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 4;
  *(unsigned char *)(param_1 + param_2 + 0x389c) = 1;
  *(unsigned int *)(temp_v0 + 0x38a4) = 0;
  *(unsigned int *)(temp_v0 + 0x38b8) = param_3;
  return;
}
