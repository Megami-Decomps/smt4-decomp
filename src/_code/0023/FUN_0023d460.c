/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d460` (_code @ 0x23d460, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_0023d460(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0xc;
  *param_1 = 0;
  temp_v0 = 0;
  do {
    *(unsigned char *)((int)param_1 + temp_v0 + 4) = 0;
    param_1[temp_v0 + 4] = 0;
    temp_v1 = temp_v1 - 1;
    param_1[temp_v0 + 0x10] = 0xffffffff;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}
