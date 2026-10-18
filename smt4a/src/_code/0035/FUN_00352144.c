/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352144` (_code @ 0x352144, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_001aba54. */


int FUN_00352144(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 0;
  if (((DAT_005702a4 & param_1[1]) == 0 && (DAT_005702a0 & *param_1) == 0) &&
     ((param_1[1] & DAT_005702ac) == 0 && (*param_1 & DAT_005702a8) == 0)) {
    temp_v3 = 0;
    do {
      temp_v0 = *(short *)((int)param_1 + temp_v3 * 8 + 0x33a);
      if (temp_v0 == 2 || temp_v0 == 3) {
        temp_v2 = (int)(short)param_1[temp_v3 * 2 + 0xcf];
        FUN_001aba54();
        if ((temp_v2 != 0) && (param_2 == (*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb)) {
          temp_v4 = temp_v4 + 1;
        }
      }
      if (*(short *)((int)param_1 + temp_v3 * 8 + 0x33a) == 8) {
        temp_v2 = (int)(short)param_1[temp_v3 * 2 + 0xcf];
        FUN_00192550();
        if (((temp_v2 != 0) && (temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x32), temp_v1 != 0)) &&
           ((FUN_001aba54(), temp_v1 != 0 && (param_2 == (*(unsigned int *)(temp_v1 + 0x28) & 0xffff) >> 0xb))))
        {
          temp_v4 = temp_v4 + 1;
        }
      }
      temp_v0 = *(short *)((int)param_1 + temp_v3 * 8 + 0x33a);
      temp_v5 = temp_v0 == 1;
      if (temp_v5) {
        temp_v0 = (short)param_1[temp_v3 * 2 + 0xcf];
      }
      if ((temp_v5 && temp_v0 == 2) && (param_1[0xfe] != 0)) {
        temp_v1 = (unsigned int)*(unsigned short *)(param_1[0xfe] + 4);
        FUN_00192608();
        if ((temp_v1 != 0) && (param_2 == *(unsigned int *)(temp_v1 + 0x24) >> 0x14)) {
          temp_v4 = temp_v4 + 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 10);
  }
  else {
    if (*(short *)((int)param_1 + 0x32a) == 2 || *(short *)((int)param_1 + 0x32a) == 3) {
      temp_v3 = (int)(short)param_1[0xcb];
      FUN_001aba54();
      if ((temp_v3 != 0) && (param_2 == (*(unsigned int *)(temp_v3 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
      }
    }
    if (*(short *)((int)param_1 + 0x32a) == 8) {
      temp_v3 = (int)(short)param_1[0xcb];
      FUN_00192550();
      if ((((temp_v3 != 0) && (temp_v1 = (unsigned int)*(unsigned short *)(temp_v3 + 0x32), temp_v1 != 0)) &&
          (FUN_001aba54(), temp_v1 != 0)) && (param_2 == (*(unsigned int *)(temp_v1 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = temp_v4 + 1;
      }
    }
  }
  return temp_v4;
}
