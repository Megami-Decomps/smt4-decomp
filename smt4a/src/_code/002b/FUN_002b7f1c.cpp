/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7f1c` (_code @ 0x2b7f1c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002b7f1c(int *param_1)

{
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int **)(temp_v0 + 0xcbf8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v0 + 0xcbf8) + 4))();
    *(unsigned int *)(temp_v0 + 0xcbf8) = 0;
  }
  *(unsigned char *)(temp_v0 + 0xcbdc) = 0;
  return;
}

} /* extern "C" */
