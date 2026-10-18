/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004529a0` (_code @ 0x4529a0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_004529a0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = *param_1;
  piVar2 = *(int **)(temp_v2 + 4);
  temp_v1 = *(int *)(temp_v2 + 0xc);
  temp_v3 = 0;
  if (temp_v1 != 0) {
    temp_v0 = temp_v2 + 0xc + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v4 = temp_v1 != 0;
    if (temp_v4) {
      temp_v1 = temp_v1 + temp_v2 + 0xc;
    }
    if (!temp_v4) {
      temp_v1 = 0;
    }
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2,temp_v1);
  }
  temp_v1 = *(int *)(temp_v2 + 8);
  if (temp_v1 != 0) {
    temp_v0 = temp_v2 + 8 + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    if (temp_v1 != 0) {
      temp_v3 = temp_v1 + temp_v2 + 8;
    }
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2,temp_v3);
  }
                    /* WARNING: Could not recover jumptable at 0x00452a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*piVar2 + 0xc))(piVar2,temp_v2);
  return;
}
