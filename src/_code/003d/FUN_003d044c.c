/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d044c` (_code @ 0x3d044c, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0023cccc. */
/* Supplied declaration required: FUN_0023cd20. */
/* Supplied declaration required: FUN_003d88cc. */


unsigned int FUN_003d044c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_004342c8;
  temp_v1 = *(int *)(param_2 + 0x56c);
  if (param_3 != 0) {
    if (temp_v1 == 0xf) {
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x100000;
      FUN_0023cd20(temp_v0,0x32,1);
      FUN_0023cccc(DAT_004342c8,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x42) {
      return 0;
    }
  }
  else {
    if (temp_v1 != 0xf) {
      if (temp_v1 != 0x23) {
        if (temp_v1 == 0x29) {
          FUN_003d88cc(DAT_004342c8,0,2);
        }
      }
      else {
        FUN_0023cd20(DAT_004342c8,6,1);
        FUN_0023cccc(DAT_004342c8,6,1);
      }
    }
    else {
      FUN_0023cd20(DAT_004342c8,0x32,1);
      FUN_0023cccc(DAT_004342c8,0x32,1,0);
    }
    if (*(unsigned int *)(param_2 + 0x56c) < 0x2c) {
      return 0;
    }
  }
  return 1;
}
