/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396318` (_code @ 0x396318, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_00396318(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  temp_v0 = 0;
  *(unsigned short *)(param_1 + 0x28) = 0;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v0 + 2;
    param_1[temp_v1 + 6] = 0;
    param_1[temp_v1 + 7] = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x20);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}
