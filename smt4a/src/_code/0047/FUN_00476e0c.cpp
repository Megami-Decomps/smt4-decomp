/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00476e0c` (_code @ 0x476e0c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_00476e0c(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  for (temp_v0 = 0; temp_v1 = param_1 + temp_v0 * 0x10 + *(int *)(param_1 + 0x14), temp_v1 != temp_v2;
      temp_v0 = temp_v0 + 1) {
    if ((*(int *)(temp_v1 + 4) != 0) && (temp_v2 == 0)) {
      temp_v2 = *(int *)(temp_v1 + 8) + param_1;
    }
  }
  *(int *)(param_1 + 0x10) = temp_v0;
  return;
}

} /* extern "C" */
