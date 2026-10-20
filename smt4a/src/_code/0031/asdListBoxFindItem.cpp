/* NON_MATCHING: romwright 0.5.0 decompilation of `asdListBoxFindItem` (_code @ 0x3174bc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *jobGetWork(void);


unsigned int asdListBoxFindItem(unsigned int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)jobGetWork();
  temp_v0 = *piVar1;
  while( 1 ) {
    if (temp_v0 == 0) {
      return 0;
    }
    if (**(int **)(temp_v0 + 8) == param_2) break;
    temp_v0 = *(int *)(temp_v0 + 0x18);
  }
  if (temp_v0 == 0) {
    return 0;
  }
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
