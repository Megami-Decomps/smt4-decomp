/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233e10` (_code @ 0x233e10, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_005806a4; /* 0x5806a4 */
extern int DAT_0058103c; /* 0x58103c */
extern int DAT_005f15fc; /* 0x5f15fc */
extern signed char DAT_005f1614; /* 0x5f1614 */

/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_0050245c. */


unsigned int FUN_00233e10(unsigned char param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = DAT_0058103c;
  temp_v5 = param_2 * 0x65;
  *(unsigned char *)(DAT_0058103c + 0x1c) = param_1;
  temp_v4 = DAT_0058103c + param_2 * 0x194;
  if (param_2 != -1) {
    temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x1dc);
  }
  if ((param_2 != -1 && temp_v5 != 0) && (DAT_005806a4[0x2c] != *(int *)(temp_v4 + 0x1fc))) {
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(char *)(temp_v0 + 0x1c) == '\0') {
    temp_v4 = 0;
    temp_v6 = 0x80;
    do {
      temp_v3 = temp_v0 + temp_v4 * 0x194;
      temp_v7 = *(char *)(temp_v3 + 0x1dc) != '\0';
      temp_v2 = 0;
      if (temp_v7) {
        temp_v2 = *(int *)(temp_v3 + 0x1f0);
      }
      if (((((temp_v7 && temp_v2 != 0x1d) && (temp_v2 != 0x31 && temp_v2 != 0x1e)) &&
           (temp_v2 != 0x1f && temp_v2 != 0x30)) &&
          ((temp_v2 != 0x22 && temp_v2 != 0x23 && (temp_v2 != 0x25 && temp_v2 != 0x28)))) &&
         ((temp_v2 = *(int *)(temp_v3 + 0x1e0), temp_v2 == 8 || temp_v2 == 10 ||
          ((temp_v2 == 0xc || temp_v2 == 0xe) || temp_v2 == 0x10)))) {
        *(unsigned int *)(temp_v3 + 0x1e0) = 6;
      }
      temp_v6 = temp_v6 - 1;
      temp_v4 = temp_v4 + 1;
    } while (temp_v6 != 0);
    return 1;
  }
  if (param_2 == -1) {
    return 0;
  }
  if (*(char *)(temp_v4 + 0x1dc) == '\0') {
    return 1;
  }
  if (*(int *)(temp_v4 + 0x1e0) != 6) {
    return 1;
  }
  if (*(int *)(temp_v4 + 0x1f0) >= 0x2d) {
    *(unsigned int *)(temp_v4 + 0x1e0) = 7;
    if (DAT_005f1614 != '\0') {
      *(unsigned short *)(temp_v4 + 0x208) = 0;
      return 1;
    }
    FUN_0050245c(temp_v4 + 0x238);
    FUN_003d4ed8(0x10002ab);
  }
  else {
    temp_v0 = *(int *)(temp_v4 + 0x1fc);
    if (temp_v0 == -1) {
      temp_v1 = 9;
      *(unsigned int *)(temp_v4 + 0x1e0) = temp_v1;
    }
    else {
      if (temp_v0 == -2) {
        temp_v1 = 0xb;
        *(unsigned int *)(temp_v4 + 0x1e0) = temp_v1;
        FUN_003d4ed8(0x10002ab);
        *(unsigned short *)(temp_v4 + 0x208) = 0;
        return 1;
      }
      if (temp_v0 == -3) {
        *(unsigned int *)(temp_v4 + 0x1e0) = 0xd;
      }
      else {
        if (*(int *)(temp_v4 + 0x368) != 0) {
          *(unsigned int *)(temp_v4 + 0x1e0) = 7;
          if ((DAT_005f1614 != '\0') && (*DAT_005806a4 == 0)) {
            *(unsigned short *)(temp_v4 + 0x208) = 0;
            return 1;
          }
          if (DAT_005f15fc < 100) {
            FUN_003d4ed8(0x10002ab);
            *(unsigned short *)(temp_v4 + 0x208) = 0;
            return 1;
          }
          FUN_0050245c(temp_v4 + 0x238);
          FUN_003d4ed8(0x10002ab);
          *(unsigned short *)(temp_v4 + 0x208) = 0;
          return 1;
        }
        *(unsigned int *)(temp_v4 + 0x1e0) = 0xf;
        if (DAT_005f1614 != '\0') {
          *(unsigned short *)(temp_v4 + 0x208) = 0;
          return 1;
        }
      }
    }
    FUN_003d4ed8(0x10002ab);
  }
  *(unsigned short *)(temp_v4 + 0x208) = 0;
  return 1;
}
