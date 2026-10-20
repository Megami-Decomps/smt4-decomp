/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354834` (_code @ 0x354834, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4414(...);
int FUN_002c131c(unsigned int, int);

extern unsigned char LAB_003549cc; /* 0x3549cc */
extern unsigned char LAB_003549fc; /* 0x3549fc */

/* Supplied declaration required: FUN_002b4414. */
/* Supplied declaration required: FUN_002c131c. */


unsigned int FUN_00354834(int param_1)

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
      temp_v0 = FUN_002b4414(*(unsigned int *)(*piVar3 + temp_v2 * 8),&LAB_003549cc,0x40);
      if (temp_v0 == 0) {
        temp_v0 = *(int *)(*piVar3 + temp_v2 * 8 + 4);
        if (temp_v0 != 0) goto LAB_0035489c;
        goto LAB_00354890;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v5);
  }
  temp_v0 = 0;
LAB_00354890:
  FUN_002c131c(0xf9613903,0x35489c);
LAB_0035489c:
  temp_v1 = FUN_002b4414("REDEEMABLE",temp_v0,0xb);
  if (temp_v1 != 0) {
    temp_v4 = FUN_002b4414("REDEEMED",temp_v0,9);
    if (temp_v4 == 0) {
      temp_v3 = 0xc8a13900;
    }
    else {
      temp_v4 = FUN_002b4414("REVOKED",temp_v0,8);
      if (temp_v4 == 0) {
        temp_v3 = 0xc8a13901;
      }
      else {
        temp_v4 = FUN_002b4414("INACTIVE",temp_v0,9);
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
        temp_v0 = FUN_002b4414(*(unsigned int *)(*piVar3 + temp_v2 * 8),&LAB_003549fc,0x40);
        if (temp_v0 == 0) {
          temp_v4 = *(int *)(*piVar3 + temp_v2 * 8 + 4);
          if (temp_v4 != 0) goto LAB_00354978;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v5);
    }
    FUN_002c131c(0xf9613903,0x354978);
LAB_00354978:
    temp_v0 = FUN_002b4414("GUNIT",temp_v4,6);
    temp_v3 = 0;
    if (temp_v0 != 0) {
      temp_v4 = FUN_002b4414("POINTS",temp_v4,7);
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

} /* extern "C" */
