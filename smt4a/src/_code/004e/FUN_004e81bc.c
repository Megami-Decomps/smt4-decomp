/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e81bc` (_code @ 0x4e81bc, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_004f3ee0. */
/* Supplied declaration required: FUN_004f3f1c. */
/* Supplied declaration required: FUN_004f41b0. */


unsigned int FUN_004e81bc(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00571508;
  temp_v1 = *(int *)(param_2 + 0x56c);
  if (param_3 != 0) {
    if (temp_v1 == 0xf) {
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x100000;
      FUN_004f3ee0(temp_v0,0x32,1);
      FUN_004f3f1c(DAT_00571508,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x42) {
      return 0;
    }
  }
  else {
    if (temp_v1 != 0xf) {
      if (temp_v1 != 0x23) {
        if (temp_v1 == 0x29) {
          FUN_004f41b0(DAT_00571508,0,2);
        }
      }
      else {
        FUN_004f3ee0(DAT_00571508,6,1);
        FUN_004f3f1c(DAT_00571508,6,1);
      }
    }
    else {
      FUN_004f3ee0(DAT_00571508,0x32,1);
      FUN_004f3f1c(DAT_00571508,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x2c) {
      return 0;
    }
  }
  return 1;
}
