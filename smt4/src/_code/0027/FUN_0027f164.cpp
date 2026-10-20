/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027f164` (_code @ 0x27f164, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002903f0(void);
int FUN_0029be5c(int);

extern int FUN_00287894(void);
/* Supplied declaration required: FUN_002903f0. */
/* Supplied declaration required: FUN_0029be5c. */
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);
extern int gameGetPlayerData(void);
extern int gameGetOptions(void);
extern int FUN_002b6b38(void);


void FUN_0027f164(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short temp_v5;
  int temp_v6;
  short temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  if (param_2 < 1) {
    return;
  }
  if ((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
      (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x72) & 2) == 0)) &&
     (temp_v2 = gameGetPlayerData(), (*(unsigned short *)(temp_v2 + 0x72) & 0x400) == 0)) {
    temp_v2 = gameGetPlayerData();
    temp_v5 = *(short *)(temp_v2 + 0x1c);
    temp_v2 = gameGetPlayerData();
    temp_v1 = *(short *)(temp_v2 + 0x2a);
    temp_v2 = (temp_v5 * param_2) / 100;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v2 = temp_v1 - temp_v2;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v5 = (short)temp_v2;
    temp_v3 = gameGetPlayerData();
    temp_v7 = *(short *)(temp_v3 + 0x1c);
    if ((temp_v5 <= temp_v7) && (temp_v7 = temp_v5, temp_v5 < 1)) {
      temp_v7 = 1;
    }
    *(short *)(temp_v3 + 0x2a) = temp_v7;
    if (0 < temp_v1 - temp_v2) {
      FUN_0029be5c(0x17);
    }
  }
  if (param_1 >= 2) {
    if (param_1 == 2 || param_1 == 3) {
      temp_v2 = 3;
      temp_v3 = gameGetSlotTable();
      temp_v3 = temp_v3 + 0x9108;
      goto LAB_0027f25c;
    }
    if (param_1 != 4) {
      return;
    }
  }
  else {
    temp_v2 = gameCountUnits();
    temp_v3 = gameGetSlotTable();
    temp_v3 = temp_v3 + 0x90f0;
LAB_0027f25c:
    temp_v8 = 0;
    if (0 < temp_v2) {
      do {
        if (-1 < *(char *)(temp_v3 + temp_v8)) {
          temp_v4 = gameGetUnitRecord();
          temp_v0 = *(unsigned short *)(temp_v4 + 0x44);
          if (((temp_v0 & 2) == 0 && (temp_v0 & 0x400) == 0) && (temp_v0 & 4) == 0) {
            temp_v5 = *(short *)(temp_v4 + 0xe);
            temp_v1 = *(short *)(temp_v4 + 0x2a);
            temp_v6 = (temp_v5 * param_2) / 100;
            if (temp_v6 < 1) {
              temp_v6 = 1;
            }
            temp_v6 = temp_v1 - temp_v6;
            if (temp_v6 < 1) {
              temp_v6 = 1;
            }
            temp_v7 = (short)temp_v6;
            if (temp_v4 != 0) {
              if (((int)temp_v7 <= (int)temp_v5) && (temp_v5 = temp_v7, temp_v7 < 1)) {
                temp_v5 = 1;
              }
              *(short *)(temp_v4 + 0x2a) = temp_v5;
            }
            if (0 < temp_v1 - temp_v6) {
              FUN_0029be5c(0x17);
            }
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v2);
    }
    if (param_1 != 3) {
      if (param_1 != 4) {
        return;
      }
    }
  }
  temp_v2 = FUN_002b6b38();
  if ((temp_v2 == 2) &&
     ((((temp_v2 = FUN_002b6b38(), temp_v2 == 0 || (temp_v2 == 1)) || (temp_v2 != 2)) ||
      ((temp_v2 = gameGetOptions(), (*(unsigned short *)(temp_v2 + 0x44) & 2) == 0 &&
       (*(short *)(temp_v2 + 0x2a) != 0)))))) {
    temp_v3 = gameGetOptions();
    temp_v8 = (int)*(short *)(temp_v3 + 0xe);
    temp_v2 = (temp_v8 * param_2) / 100;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v2 = *(short *)(temp_v3 + 0x2a) - temp_v2;
    FUN_002903f0();
    temp_v4 = FUN_00287894();
    temp_v9 = temp_v2 == 0;
    if (temp_v2 < 1) {
      temp_v9 = temp_v4 != 4;
    }
    if (temp_v9) {
      temp_v2 = 1;
    }
    if (temp_v8 < temp_v2) {
      temp_v2 = temp_v8;
    }
    *(short *)(temp_v3 + 0x2a) = (short)temp_v2;
    if ((short)temp_v2 == 0) {
      *(unsigned short *)(temp_v3 + 0x44) = *(unsigned short *)(temp_v3 + 0x44) | 2;
    }
  }
  return;
}

} /* extern "C" */
