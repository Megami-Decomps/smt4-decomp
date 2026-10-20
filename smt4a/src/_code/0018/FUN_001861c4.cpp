/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001861c4` (_code @ 0x1861c4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0059dbb8; /* 0x59dbb8 */


int FUN_001861c4(int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(DAT_0059dbb8 + param_1 * 0x18);
  temp_v0 = 0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = *piVar1 + param_2 * 0x20;
  }
  return temp_v0;
}

} /* extern "C" */
