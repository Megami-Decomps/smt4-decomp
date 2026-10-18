/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429a1c` (_code @ 0x429a1c, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00429bb4; /* 0x429bb4 */
extern unsigned char LAB_00429be4; /* 0x429be4 */

/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0019a37c. */


unsigned int FUN_00429a1c(int param_1)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = 0;
  piVar3 = *(int **)(param_1 + 4);
  temp_v3 = 0xf9613903;
  temp_v2 = 0;
  temp_v5 = piVar3[1];
  if (temp_v5 != 0) {
    do {
      temp_v0 = FUN_0019a37c(*(unsigned int *)(*piVar3 + temp_v2 * 8),&LAB_00429bb4,0x40);
      if (temp_v0 == 0) {
        temp_v0 = *(int *)(*piVar3 + temp_v2 * 8 + 4);
        if (temp_v0 != 0) goto LAB_00429a84;
        goto LAB_00429a78;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v5);
  }
  temp_v0 = 0;
LAB_00429a78:
  FUN_00189a38(0xf9613903,0x429a84);
LAB_00429a84:
  temp_v1 = FUN_0019a37c("REDEEMABLE",temp_v0,0xb);
  if (temp_v1 != 0) {
    temp_v4 = FUN_0019a37c("REDEEMED",temp_v0,9);
    if (temp_v4 == 0) {
      temp_v3 = 0xc8a13900;
    }
    else {
      temp_v4 = FUN_0019a37c("REVOKED",temp_v0,8);
      if (temp_v4 == 0) {
        temp_v3 = 0xc8a13901;
      }
      else {
        temp_v4 = FUN_0019a37c("INACTIVE",temp_v0,9);
        if (temp_v4 == 0) {
          temp_v3 = 0xc8a13902;
        }
      }
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 4);
    temp_v2 = 0;
    temp_v5 = piVar3[1];
    if (temp_v5 != 0) {
      do {
        temp_v0 = FUN_0019a37c(*(unsigned int *)(*piVar3 + temp_v2 * 8),&LAB_00429be4,0x40);
        if (temp_v0 == 0) {
          temp_v4 = *(int *)(*piVar3 + temp_v2 * 8 + 4);
          if (temp_v4 != 0) goto LAB_00429b60;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v5);
    }
    FUN_00189a38(0xf9613903,0x429b60);
LAB_00429b60:
    temp_v0 = FUN_0019a37c("GUNIT",temp_v4,6);
    temp_v3 = 0;
    if (temp_v0 != 0) {
      temp_v4 = FUN_0019a37c("POINTS",temp_v4,7);
      if (temp_v4 == 0) {
        temp_v3 = 0xc8a13904;
      }
      else {
        temp_v3 = 0xc8a13906;
      }
      return temp_v3;
    }
  }
  return temp_v3;
}
