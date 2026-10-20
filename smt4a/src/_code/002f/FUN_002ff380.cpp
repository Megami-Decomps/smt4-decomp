/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff380` (_code @ 0x2ff380, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002eb404(void);
extern int FUN_002eb414(int, int, int);


void FUN_002ff380(int *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1[1];
  temp_v1 = *param_1;
  temp_v0 = FUN_002eb404();
  if (temp_v0 == 0) {
    temp_v0 = FUN_002eb414(temp_v2,param_1[1],temp_v1);
    for (; temp_v0 != param_1[1]; temp_v0 = temp_v0 + 4) {
    }
    param_1[1] = param_1[1] - ((temp_v2 - temp_v1) & 0xfffffffcU);
  }
  return;
}

} /* extern "C" */
