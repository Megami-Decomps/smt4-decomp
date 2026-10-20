/* NON_MATCHING: romwright 0.5.0 decompilation of `treeSkew` (_code @ 0x232920, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void treeSkew(int *param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  piVar2 = (int *)*param_1;
  temp_v0 = *piVar2;
  if (*(char *)(temp_v0 + 0xc) == (char)piVar2[3]) {
    temp_v1 = piVar2[2];
    *piVar2 = *(int *)(temp_v0 + 4);
    *(int *)(temp_v0 + 4) = *param_1;
    *param_1 = temp_v0;
    piVar2 = *(int **)(temp_v0 + 4);
    *(int *)(temp_v0 + 8) = temp_v1;
    piVar2[2] = *param_1;
    *(int **)(*piVar2 + 8) = piVar2;
  }
  return;
}

} /* extern "C" */
