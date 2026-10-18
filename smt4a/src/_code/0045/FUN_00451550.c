/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451550` (_code @ 0x451550, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00451550(int *param_1)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *(int *)(*param_1 + 0x38);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x38 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  piVar2 = *(int **)(temp_v0 + 0x10);
  temp_v0 = *(int *)(*param_1 + 0x38);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + *param_1 + 0x38;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    if (*(int *)(temp_v0 + 0xc) != 0 && *(int *)(temp_v0 + 0xc) + temp_v0 + 0xc != 0) {
      (**(romwright_code **)(*piVar2 + 0xc))();
    }
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2,temp_v0);
  }
  (**(romwright_code **)(*piVar2 + 0xc))(piVar2,*param_1);
  *param_1 = 0;
  return;
}
