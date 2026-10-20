/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b4d0` (_code @ 0x45b4d0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;


void FUN_0045b4d0(unsigned int *param_1,int *param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  if (param_3 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = ((*param_2 + param_4) - 1U) & ~(param_4 - 1U);
    *param_2 = temp_v0 + param_3;
  }
  *param_1 = temp_v0;
  param_1[1] = param_3;
  return;
}

} /* extern "C" */
