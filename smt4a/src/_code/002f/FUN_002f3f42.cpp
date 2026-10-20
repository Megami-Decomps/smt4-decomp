/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3f42` (_code @ 0x2f3f42, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002f3f42(int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  temp_v1 = *(int *)(temp_v0 + 0xc);
  if (temp_v1 != 0) {
    *param_1 = temp_v1;
    while (temp_v1 = *(int *)(temp_v1 + 8), temp_v1 != 0) {
      *param_1 = temp_v1;
    }
  }
  else {
    while( 1 ) {
      temp_v0 = *(int *)(temp_v0 + 4);
      if (*param_1 != *(int *)(temp_v0 + 0xc)) break;
      *param_1 = temp_v0;
    }
    if (*(int *)(*param_1 + 0xc) != temp_v0) {
      *param_1 = temp_v0;
      return;
    }
  }
  return;
}

} /* extern "C" */
