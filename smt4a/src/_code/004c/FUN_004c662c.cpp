/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c662c` (_code @ 0x4c662c, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bc420(unsigned int, unsigned int, int);

extern unsigned int DAT_00571490; /* 0x571490 */
extern unsigned int DAT_00571494; /* 0x571494 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714a0; /* 0x5714a0 */
extern unsigned int DAT_005714a4; /* 0x5714a4 */
extern unsigned int DAT_005714e0; /* 0x5714e0 */
extern unsigned int DAT_005714e4; /* 0x5714e4 */
extern unsigned int DAT_005714f0; /* 0x5714f0 */
extern unsigned int DAT_005714f4; /* 0x5714f4 */

extern int btlGetMainState(void);
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_004bc420. */


unsigned int FUN_004c662c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  temp_v3 = btlGetMainState();
  temp_v7 = *(unsigned int *)(temp_v3 + 0x45a8);
  if (!((*(unsigned int *)(temp_v3 + 0x45ac) & DAT_005714f4) == 0 && (temp_v7 & DAT_005714f0) == 0)) {
    if (*(unsigned int *)(temp_v3 + 0x3030) >= 0xd) {
      *(unsigned int *)(temp_v3 + 0x3030) = 2;
    }
  }
  else {
    temp_v4 = *(unsigned int *)(temp_v3 + 0x45a0);
    temp_v6 = *(unsigned int *)(temp_v3 + 0x45a4);
    if (((((DAT_00571490 & temp_v4) != 0 || (DAT_00571494 & temp_v6) != 0) ||
         ((DAT_0057149c & temp_v6) != 0 || (DAT_00571498 & temp_v4) != 0)) ||
        ((temp_v4 & DAT_005714a0) != 0 || (temp_v6 & DAT_005714a4) != 0)) ||
       ((-1 < *(int *)(temp_v3 + 0xec) && (*(unsigned char *)(temp_v3 + 0x45bb) >= 3)))) {
      return 0;
    }
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x14a);
    if ((-1 < *(int *)(temp_v3 + 0xec)) && (*(char *)(temp_v3 + 0x45bb) != '\0')) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x14e);
    }
    temp_v0 = *(unsigned short *)(temp_v3 + 0x148);
    if (*(char *)(temp_v3 + 0x45bb) != '\0') {
      temp_v0 = *(unsigned short *)(temp_v3 + 0x14c);
    }
    temp_v1 = (DAT_005714e4 & *(unsigned int *)(temp_v3 + 0x45ac)) == 0;
    temp_v2 = (DAT_005714e0 & temp_v7) == 0;
    temp_v8 = temp_v1 && temp_v2;
    if (temp_v1 && temp_v2) {
      temp_v8 = temp_v0 == 0;
    }
    if (temp_v8) {
      return 0;
    }
    temp_v5 = lcgRandomRange(99);
    if ((*(unsigned int *)(temp_v3 + 0x45ac) & DAT_005714e4) != 0 ||
        (*(unsigned int *)(temp_v3 + 0x45a8) & DAT_005714e0) != 0) {
      temp_v5 = -1;
    }
    if ((int)((unsigned int)*(unsigned char *)(temp_v3 + 0x45b9) + (unsigned int)temp_v0) <= temp_v5) {
      return 0;
    }
    if (temp_v4 == 0) {
      temp_v4 = *(unsigned int *)(temp_v3 + 0x180);
      FUN_004bc420(temp_v4,*(unsigned int *)(temp_v3 + 0x184),1);
      if (temp_v4 == 0) {
        return 0;
      }
    }
    if (*(int *)(temp_v3 + 0xec) >= 0) {
      *(unsigned int *)(temp_v3 + 0xec) = temp_v4;
    }
    else {
      if (*(int *)(temp_v3 + 0xf0) < 0) {
        return 0;
      }
      *(unsigned int *)(temp_v3 + 0xf0) = temp_v4;
    }
  }
  return 1;
}

} /* extern "C" */
