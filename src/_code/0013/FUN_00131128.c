/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131128` (_code @ 0x131128, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001408c0(int, int);
/* Supplied declaration required: FUN_002bf774. */


void FUN_00131128(char *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 == '\0') {
    temp_v2 = 0;
    temp_v0 = param_3 * -0x55555555;
    param_3 = param_3 / 0x60;
    if (param_3 != 0) {
      do {
        if (param_2 == 0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = FUN_001408c0(param_2,temp_v0);
        }
        FUN_002bf774(param_1 + 0x10,param_1 + 0x14,temp_v0 + 0x58);
        temp_v2 = temp_v2 + 1;
        param_2 = param_2 + 0x60;
        temp_v0 = temp_v1;
      } while (temp_v2 < (int)param_3);
    }
    *(unsigned int *)(param_1 + 0x20) = param_3;
    *param_1 = '\x01';
    *(unsigned int *)(param_1 + 0x1c) = param_3;
  }
  return;
}
