/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004acb54` (_code @ 0x4acb54, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00521984(int, int);
int FUN_00521d14(int, int, unsigned int);

/* Supplied declaration required: FUN_00521984. */
/* Supplied declaration required: FUN_00521d14. */


void FUN_004acb54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    temp_v0 = param_1 + 0x1c;
    FUN_00521984(temp_v0,*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x3c) * 0x10);
    if (temp_v0 != 0) {
      temp_v1 = *(int *)(param_1 + 0x3c);
      temp_v3 = temp_v1 + 1;
      temp_v0 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + temp_v1 * 0x10 + 4) + 0xc);
      temp_v2 = *(int *)(param_1 + 0x14) + temp_v0;
      if (*(unsigned int *)(param_1 + 0xc) <= temp_v2) {
        temp_v2 = temp_v2 - *(unsigned int *)(param_1 + 0xc);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - temp_v0;
      *(unsigned int *)(param_1 + 0x14) = temp_v2;
      temp_v2 = *(unsigned int *)(param_1 + 0x34);
      if (temp_v2 < temp_v3) {
        FUN_00521d14(param_1 + 0x2c,temp_v1,temp_v2);
        temp_v3 = temp_v3 - temp_v2;
        temp_v1 = 0;
      }
      FUN_00521d14(param_1 + 0x2c,temp_v1,temp_v3);
      temp_v2 = *(int *)(param_1 + 0x3c) + 1;
      if (*(unsigned int *)(param_1 + 0x34) <= temp_v2) {
        temp_v2 = temp_v2 - *(unsigned int *)(param_1 + 0x34);
      }
      *(unsigned int *)(param_1 + 0x3c) = temp_v2;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - 1;
    }
  }
  return;
}

} /* extern "C" */
