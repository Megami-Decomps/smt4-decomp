/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004801ac` (_code @ 0x4801ac, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_004ccbf0. */


unsigned int FUN_004801ac(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (((param_1 != 0) && (FUN_00192550(), param_2 != 0)) &&
     ((*(unsigned int *)(param_2 + 0x68) & 0x20) != 0)) {
    temp_v2 = 1;
    if ((*(short *)(param_2 + 0x48) != 0) &&
       (temp_v0 = FUN_004ccbf0(*(unsigned short *)(param_1 + 100)), temp_v0 != *(int *)(param_1 + 0x30))) {
      if (param_3 == 0) {
        temp_v0 = FUN_004ccbf0(*(unsigned short *)(param_1 + 100));
        *(int *)(param_1 + 0x30) =
             (int)((unsigned int)*(unsigned short *)(param_2 + 0x48) * temp_v0) / 100 + *(int *)(param_1 + 0x30);
        temp_v1 = FUN_004ccbf0(*(unsigned short *)(param_1 + 100));
        if (temp_v1 < *(unsigned int *)(param_1 + 0x30)) {
          temp_v2 = FUN_004ccbf0(*(unsigned short *)(param_1 + 100));
          *(unsigned int *)(param_1 + 0x30) = temp_v2;
        }
      }
      temp_v2 = 0;
    }
    return temp_v2;
  }
  return 1;
}
