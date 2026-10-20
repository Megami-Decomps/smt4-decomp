/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027efb8` (_code @ 0x27efb8, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e354(unsigned short [11], int, int);
int FUN_00253d60(unsigned short [11], unsigned int);
int gameGetPlayerData(void);

/* Supplied declaration required: FUN_0022e354. */
/* Supplied declaration required: FUN_00253d60. */
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);
/* Supplied declaration required: gameGetPlayerData. */
extern int randNextInRange(unsigned int);


void FUN_0027efb8(unsigned int param_1,unsigned int param_2,int param_3)

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
  unsigned short uStack_32;
  
  if (param_3 < 1) {
    return;
  }
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x72) & 2) == 0)) &&
      (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x72) & 0x400) == 0)) &&
     ((temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x72) & temp_v0) == 0 &&
      (temp_v2 = randNextInRange(99), temp_v2 < param_3)))) {
    if (param_2 != 5) {
      temp_v2 = gameGetPlayerData();
      *(unsigned short *)(temp_v2 + 0x72) = *(unsigned short *)(temp_v2 + 0x72) | (unsigned short)temp_v0;
    }
    else {
      temp_v4 = gameGetPlayerData();
      FUN_00253d60(temp_v8,temp_v4);
      uStack_32 = uStack_32 >> 10;
      if (!((uStack_32 == 1 || uStack_32 == 3) || uStack_32 == 4)) {
        temp_v2 = gameGetPlayerData();
        *(unsigned short *)(temp_v2 + 0x72) = *(unsigned short *)(temp_v2 + 0x72) | (unsigned short)temp_v0;
      }
    }
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v7 = 3;
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x9108;
  }
  else {
    temp_v7 = gameCountUnits();
    temp_v2 = gameGetSlotTable();
    temp_v2 = temp_v2 + 0x90f0;
  }
  temp_v6 = 0;
  if (temp_v6 < temp_v7) {
    do {
      if (-1 < *(char *)(temp_v2 + temp_v6)) {
        temp_v3 = gameGetUnitRecord();
        temp_v1 = *(unsigned short *)(temp_v3 + 0x44);
        if ((((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) &&
            ((temp_v1 & 4) == 0 && (temp_v1 & temp_v0) == 0)) &&
           (temp_v5 = randNextInRange(99), temp_v5 < param_3)) {
          if (param_2 != 5) {
            *(unsigned short *)(temp_v3 + 0x44) = *(unsigned short *)(temp_v3 + 0x44) | (unsigned short)temp_v0;
          }
          else {
            FUN_0022e354(temp_v8,temp_v3,0xb);
            temp_v1 = temp_v8[0] >> 10;
            if (!((temp_v1 == 1 || temp_v1 == 3) || temp_v1 == 4)) {
              *(unsigned short *)(temp_v3 + 0x44) = *(unsigned short *)(temp_v3 + 0x44) | (unsigned short)temp_v0;
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
