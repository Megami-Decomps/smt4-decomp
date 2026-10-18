/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b498` (_code @ 0x45b498, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_0045b498(int *param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  temp_v0 = 0;
  if (param_3 != 0) {
    do {
      temp_v1 = temp_v0 + 1;
      *(unsigned int *)(*param_1 + temp_v0 * 4) = 0;
      temp_v0 = temp_v1;
    } while (temp_v1 < param_3);
  }
  return;
}
