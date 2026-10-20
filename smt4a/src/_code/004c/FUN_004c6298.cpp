/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6298` (_code @ 0x4c6298, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);
int SBORROW4(int, int);

extern unsigned int DAT_00571490; /* 0x571490 */
extern unsigned int DAT_00571494; /* 0x571494 */
extern unsigned int uRam005714c0; /* 0x5714c0 */
extern unsigned int uRam005714c4; /* 0x5714c4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int btlGetMainState(void);
extern int lcgRandomRange(unsigned int);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
/* Supplied declaration required: gameFlagSetValue. */
extern int bitsAt60Test(int, unsigned int);


unsigned int FUN_004c6298(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = btlGetMainState();
  if (*(int *)(temp_v1 + 0xf0) < 0) {
    temp_v8 = 0;
    temp_v1 = gameGetSlotTable();
    temp_v7 = 0;
    if (*(unsigned char *)(temp_v1 + 0x1ca3) != 0) {
      do {
        if (-1 < *(char *)(temp_v1 + temp_v7 + 0x1c88)) {
          temp_v2 = gameGetSlotRecord();
          temp_v3 = bitsAt60Test(temp_v2,10);
          if (temp_v3 != 0) {
            temp_v0 = *(unsigned char *)(temp_v2 + 0x12a);
            if (temp_v0 < 2) {
              temp_v3 = 0x19;
            }
            else if (temp_v0 == 2) {
              temp_v3 = 0x4b;
            }
            else if (temp_v0 == 3) {
              temp_v3 = 0x5a;
            }
            else {
              temp_v3 = 99;
            }
            temp_v4 = btlGetMainState();
            if ((uRam005714c4 & *(unsigned int *)(temp_v4 + 0x45ac)) != 0 ||
                (*(unsigned int *)(temp_v4 + 0x45a8) & uRam005714c0) != 0) {
              temp_v3 = 100;
            }
            temp_v5 = lcgRandomRange(99);
            temp_v9 = SBORROW4(temp_v5,temp_v3);
            temp_v4 = temp_v5 - temp_v3;
            if (temp_v5 < temp_v3) {
              temp_v9 = SBORROW4(temp_v8,1);
              temp_v4 = temp_v8 - 1;
            }
            if (temp_v4 < 0 != temp_v9) {
              temp_v4 = btlGetMainState();
              temp_v3 = temp_v8 * 4;
              temp_v8 = temp_v8 + 1;
              *(unsigned int *)(temp_v4 + temp_v3 + 0x194) = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
            }
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x1ca3));
      if (0 < temp_v8) {
        gameFlagSetValue(0x11d6,1);
        temp_v1 = btlGetMainState();
        temp_v6 = *(unsigned int *)(temp_v1 + 0x45a4) | DAT_00571494;
        *(unsigned int *)(temp_v1 + 0x45a0) = *(unsigned int *)(temp_v1 + 0x45a0) | DAT_00571490;
        *(unsigned int *)(temp_v1 + 0x45a4) = temp_v6;
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
