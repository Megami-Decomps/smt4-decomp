/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c94c` (_code @ 0x32c94c, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

/* Supplied declaration required: FUN_00292310. */
extern int FUN_002c1f28(void);
extern int FUN_002c583c(unsigned int);


unsigned int FUN_0032c94c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v5 = 0;
  temp_v0 = 0;
  temp_v4 = 0;
  temp_v1 = FUN_002c583c(1);
  if (temp_v1 != 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  temp_v1 = FUN_002c1f28();
  if (temp_v1 != 0) {
    FUN_00292310(0xffffffff,0,1);
  }
  piVar6 = (int *)&DAT_004c53c4;
  if ((DAT_0044e09c != 0) && (piVar3 = (int *)&DAT_004c53c4, piVar6 = (int *)0x0, DAT_0044e09c == 1)) {
    piVar6 = (int *)&DAT_004c53e4;
  }
  else {
    piVar3 = (int *)&DAT_004c53e4;
  }
  temp_v2 = piVar6[7];
  if ((((temp_v2 & 2) != 0) && ((temp_v2 & 0x3c) == 0)) && (temp_v5 = piVar6[3] == param_1, !temp_v5)) {
    if ((temp_v2 & 0x70) != 0) {
      temp_v2 = temp_v2 | 0x800;
      temp_v0 = 1;
      piVar6[2] = 0x2d;
      piVar6[7] = temp_v2;
    }
    else if ((temp_v2 & 0x800) != 0) {
      temp_v2 = 0;
      piVar6[3] = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[4] = 0;
      piVar6[6] = 0;
      piVar6[5] = 0;
      piVar6[7] = temp_v2;
    }
    else {
      piVar6[7] = temp_v2 | 8;
      temp_v0 = 1;
      piVar6[2] = 0x2d;
    }
  }
  temp_v2 = piVar3[7];
  if (!(temp_v2 == 0 && !temp_v5)) {
    if ((temp_v2 & 0x20) != 0) {
      if ((piVar6[7] & 0x20U) == 0) {
        piVar6[4] = param_1;
        piVar6[6] = param_2;
        temp_v4 = 1;
        piVar6[7] = piVar6[7] | 0x100;
      }
    }
    else if ((temp_v2 & 8) != 0) {
      if ((piVar6[7] & 0x238U) != 0) {
        piVar3[4] = param_1;
        piVar3[6] = param_2;
        temp_v4 = 1;
        piVar3[7] = temp_v2 | 0x100;
      }
      else if (piVar6[7] == 0) {
        piVar6[7] = 5;
        piVar6[3] = param_1;
        piVar6[1] = param_2;
        DAT_0044e09c = *piVar6;
      }
    }
  }
  else {
    temp_v3 = temp_v2 | 5;
    piVar3[7] = temp_v3;
    piVar3[3] = param_1;
    piVar3[1] = param_2;
    DAT_0044e09c = *piVar3;
    if (temp_v0) {
      temp_v3 = temp_v2 | 0x805;
    }
    temp_v4 = 1;
    if (temp_v0) {
      piVar3[7] = temp_v3;
    }
  }
  return temp_v4;
}
