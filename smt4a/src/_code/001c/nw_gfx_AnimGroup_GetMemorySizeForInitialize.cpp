/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimGroup_GetMemorySizeForInitialize` (_code @ 0x1cb6d0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void nw_gfx_AnimGroup_GetMemorySizeForInitialize(int *param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_2 + 0x10) * 4;
  temp_v1 = ((((((((((((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) +
                   *(int *)(param_2 + 0x18) * 4 + param_1[1]) - 1) & ~(param_1[1] - 1U)) + temp_v0 +
               param_1[1]) - 1) & ~(param_1[1] - 1U)) + temp_v0 + param_1[1]) - 1) &
          ~(param_1[1] - 1U)) + temp_v0;
  *param_1 = temp_v1;
  if (param_3 != 0) {
    *param_1 = temp_v0 + (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U));
  }
  return;
}

} /* extern "C" */
