/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049f700` (_code @ 0x49f700, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetPlayerData(void);
int FUN_001fef70(unsigned short [11], int, int);
int FUN_003dfad4(unsigned short [11], unsigned int);

extern int randRange(unsigned int);
/* Supplied declaration required: gameGetPlayerData. */
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);
/* Supplied declaration required: FUN_001fef70. */
/* Supplied declaration required: FUN_003dfad4. */


void FUN_0049f700(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short temp_v8 [11];
  unsigned short uStack_3a;
  
  if (param_3 < 1) {
    return;
  }
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x5e) & 2) == 0)) &&
      (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x5e) & 0x400) == 0)) &&
     ((temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x5e) & temp_v0) == 0 &&
      (temp_v2 = randRange(99), temp_v2 < param_3)))) {
    if (param_2 != 5) {
      temp_v2 = gameGetPlayerData();
      *(unsigned short *)(temp_v2 + 0x5e) = *(unsigned short *)(temp_v2 + 0x5e) | (unsigned short)temp_v0;
    }
    else {
      temp_v4 = gameGetPlayerData();
      FUN_003dfad4(temp_v8,temp_v4);
      uStack_3a = uStack_3a >> 10;
      if (!((uStack_3a == 1 || uStack_3a == 3) || uStack_3a == 4)) {
        temp_v2 = gameGetPlayerData();
        *(unsigned short *)(temp_v2 + 0x5e) = *(unsigned short *)(temp_v2 + 0x5e) | (unsigned short)temp_v0;
      }
    }
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v7 = 3;
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x1ca0;
  }
  else {
    temp_v7 = gameSlotTableFindFree();
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x1c88;
  }
  temp_v6 = 0;
  if (temp_v6 < temp_v7) {
    do {
      if (-1 < *(char *)(temp_v2 + temp_v6)) {
        temp_v3 = gameGetSlotRecord();
        temp_v1 = *(unsigned short *)(temp_v3 + 0x60);
        if ((((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && (temp_v1 & temp_v0) == 0) &&
           (temp_v5 = randRange(99), temp_v5 < param_3)) {
          if (param_2 != 5) {
            *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | (unsigned short)temp_v0;
          }
          else {
            FUN_001fef70(temp_v8,temp_v3,0xb);
            temp_v1 = temp_v8[0] >> 10;
            if (!((temp_v1 == 1 || temp_v1 == 3) || temp_v1 == 4)) {
              *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | (unsigned short)temp_v0;
            }
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7);
  }
  return;
}

} /* extern "C" */
