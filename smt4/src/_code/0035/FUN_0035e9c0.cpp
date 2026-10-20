/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e9c0` (_code @ 0x35e9c0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_0035e9c0(int *param_1,int param_2,int *param_3)

{
  int temp_v0;
  
  *param_1 = 0;
  for (temp_v0 = *(int *)(param_2 + 4);
      (*param_1 = temp_v0, temp_v0 != param_2 && (*(int *)(temp_v0 + 8) != *param_3));
      temp_v0 = *(int *)(temp_v0 + 4)) {
  }
  return;
}

} /* extern "C" */
