/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bee04` (_code @ 0x2bee04, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002bee04(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  param_1 = param_1 + param_2 * 0x20;
  piVar3 = (int *)(param_1 + 0x11ec);
  temp_v0 = *piVar3;
  temp_v1 = piVar3[temp_v0 + 2];
  *piVar3 = temp_v0 + 1;
  piVar3[temp_v0 + 3] = param_3;
  if (*(char *)(param_1 + 0x1204) != '\0' || temp_v1 != param_3) {
    (**(romwright_code **)(param_1 + 0x1208))();
    *(unsigned char *)(param_1 + 0x1204) = 0;
  }
  return;
}

} /* extern "C" */
