/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407424` (_code @ 0x407424, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00407424(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    temp_v0 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    temp_v1 = *(unsigned int *)(temp_v0 + 4);
    if (param_2 != 0) {
      temp_v1 = temp_v1 & 0xfffffffe;
    }
    else {
      temp_v1 = temp_v1 | 1;
    }
    *(unsigned int *)(temp_v0 + 4) = temp_v1;
  }
  return;
}

} /* extern "C" */
