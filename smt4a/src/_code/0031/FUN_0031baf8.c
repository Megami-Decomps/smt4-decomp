/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031baf8` (_code @ 0x31baf8, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028322c. */
/* Supplied declaration required: FUN_002833d0. */
/* Supplied declaration required: FUN_00283428. */
/* Supplied declaration required: FUN_002e5154. */


void FUN_0031baf8(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (0 < (int)param_1[3]) {
      do {
        FUN_0028322c(param_1[temp_v0 + 0x14]);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)param_1[3]);
    }
    temp_v0 = 0;
    if (temp_v0 < (int)param_1[4]) {
      do {
        FUN_002e5154(param_1[temp_v0 + 0x24]);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)param_1[4]);
    }
    temp_v0 = 0;
    if (temp_v0 < (int)param_1[6]) {
      do {
        FUN_00283428(param_1[temp_v0 + 0x44]);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)param_1[6]);
    }
    temp_v0 = 0;
    if (temp_v0 < (int)param_1[5]) {
      do {
        FUN_002833d0(param_1[temp_v0 + 0x34]);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)param_1[5]);
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[1] = 0;
    if ((unsigned int *)*param_1 != (unsigned int *)0x0) {
      *(unsigned int *)*param_1 = 0;
    }
  }
  return;
}
