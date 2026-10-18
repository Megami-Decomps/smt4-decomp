/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225238` (_code @ 0x225238, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_00225238(int param_1,short param_2,short param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int unaff_r8;
  
  if (param_1 != 0) {
    temp_v0 = 0;
    param_2 = *(short *)(param_1 + 0x218c) + param_2;
    *(short *)(param_1 + 0x218c) = param_2;
    if (0 < param_2) {
      unaff_r8 = param_1 + 0x2000;
    }
    *(short *)(param_1 + 0x218e) = *(short *)(param_1 + 0x218e) + param_3;
    if (0 < param_2) {
      do {
        temp_v1 = param_1 + temp_v0 * 0x8c;
        FUN_002bee58(temp_v1 + 0xb10,6);
        FUN_002bee58(temp_v1 + 0x1088,4);
        FUN_002bee58(temp_v1 + 0x598,0);
        FUN_002bee58(temp_v1 + 0x20,2);
        FUN_002b8da0(temp_v1 + 0x20,*(int *)(unaff_r8 + 0x184) != 0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(short *)(param_1 + 0x218c));
    }
    if (0 < *(short *)(param_1 + 0x218e)) {
      temp_v0 = 0;
      do {
        temp_v1 = param_1 + ((*(short *)(param_1 + 0x218c) - temp_v0) - 1) * 0x8c;
        FUN_002b8da0(temp_v1 + 0x598,6);
        FUN_002bee58(temp_v1 + 0x598,1);
        FUN_002bee58(temp_v1 + 0xb10,6);
        FUN_002bee58(temp_v1 + 0x1088,4);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(short *)(param_1 + 0x218e));
    }
    return;
  }
  return;
}
