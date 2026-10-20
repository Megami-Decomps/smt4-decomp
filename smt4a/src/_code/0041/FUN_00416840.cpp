/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416840` (_code @ 0x416840, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int msgBoxFlagsClearBit7(unsigned int);
int pairSetFirstResetSecond(int, int);

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: msgBoxFlagsClearBit7. */
/* Supplied declaration required: pairSetFirstResetSecond. */


void FUN_00416840(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  do {
    temp_v4 = param_1 + temp_v3 * 0xb0;
    temp_v5 = *(char *)(temp_v4 + 0xa0) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v4 + 0xa4);
    }
    if (temp_v5 && temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 != 2) {
          if ((temp_v2 == 3) && (FUN_00163aa4(temp_v4 + 0x14), *(char *)(temp_v4 + 0x9b) != '\0')) {
            *(unsigned int *)(temp_v4 + 0xa4) = 0;
            *(unsigned char *)(temp_v4 + 0xa0) = 0;
            msgBoxFlagsClearBit7(*(unsigned int *)(temp_v4 + 0xa8));
          }
        }
        else {
          temp_v2 = *(int *)(temp_v4 + 4) + 1;
          *(int *)(temp_v4 + 4) = temp_v2;
          if (temp_v2 >= 6) {
            *(unsigned int *)(temp_v4 + 4) = 0;
          }
          pairSetFirstResetSecond(temp_v4 + 0x14,*(int *)(temp_v4 + 4) / 2 + 0x8b);
        }
      }
      else {
        FUN_00163aa4(temp_v4 + 0x14);
        temp_v0 = *(unsigned char *)(temp_v4 + 0x9b);
        temp_v1 = *(unsigned char *)(temp_v4 + 0x9c);
        temp_v2 = *(int *)(temp_v4 + 4) + 1;
        *(int *)(temp_v4 + 4) = temp_v2;
        if (temp_v2 >= 6) {
          *(unsigned int *)(temp_v4 + 4) = 0;
        }
        pairSetFirstResetSecond(temp_v4 + 0x14,*(int *)(temp_v4 + 4) / 2 + 0x8b);
        if ((temp_v0 & temp_v1) != 0) {
          *(unsigned int *)(temp_v4 + 0xa4) = 2;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xc);
  return;
}

} /* extern "C" */
