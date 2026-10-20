/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043865c` (_code @ 0x43865c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_0043865c(int *param_1,int param_2,int *param_3)

{
  int temp_v0;
  
  *param_1 = 0;
  temp_v0 = *(int *)(param_2 + 4);
  *param_1 = temp_v0;
  if (temp_v0 == param_2) {
    return;
  }
  do {
    if (*(int *)(temp_v0 + 8) == *param_3) {
      return;
    }
    temp_v0 = *(int *)(temp_v0 + 4);
    *param_1 = temp_v0;
  } while (temp_v0 != param_2);
  return;
}

} /* extern "C" */
