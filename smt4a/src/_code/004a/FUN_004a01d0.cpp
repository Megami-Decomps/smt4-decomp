/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a01d0` (_code @ 0x4a01d0, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameGetPlayerData(void);
extern int FUN_0018416c(unsigned short);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);


void FUN_004a01d0(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  unsigned long long in_d8;
  int temp_v11;
  
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v3 = gameGetPlayerData(), (*(unsigned short *)(temp_v3 + 0x5e) & 2) == 0)) &&
      (temp_v3 = gameGetPlayerData(), (*(unsigned short *)(temp_v3 + 0x5e) & 0x400) == 0)) &&
     (temp_v3 = gameGetPlayerData(), (*(unsigned short *)(temp_v3 + 0x5e) & temp_v0) != 0)) {
    temp_v3 = gameGetPlayerData();
    temp_v2 = *(short *)(temp_v3 + 0x1c);
    temp_v4 = gameGetPlayerData();
    temp_v3 = (temp_v2 * param_3) / 100;
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v3 = *(short *)(temp_v4 + 0x2a) - temp_v3;
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v2 = (short)temp_v3;
    temp_v3 = gameGetPlayerData();
    temp_v8 = *(short *)(temp_v3 + 0x1c);
    if ((temp_v2 <= *(short *)(temp_v3 + 0x1c)) && (temp_v8 = temp_v2, temp_v2 < 1)) {
      temp_v8 = 1;
    }
    *(short *)(temp_v3 + 0x2a) = temp_v8;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v4 = 3;
    temp_v3 = gameGetSlotTable();
    temp_v3 = temp_v3 + 0x1ca0;
  }
  else {
    temp_v4 = gameSlotTableFindFree();
    temp_v3 = gameGetSlotTable();
    temp_v3 = temp_v3 + 0x1c88;
  }
  if (0 < temp_v4) {
    in_d8 = 0x3fa00000;
  }
  temp_v9 = 0;
  if (temp_v9 < temp_v4) {
    do {
      if (-1 < *(char *)(temp_v3 + temp_v9)) {
        temp_v5 = gameGetSlotRecord();
        temp_v1 = *(unsigned short *)(temp_v5 + 0x60);
        if (((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && ((temp_v1 & temp_v0) != 0)) {
          if (temp_v5 == 0) {
            temp_v6 = 0;
          }
          else {
            temp_v6 = (int)*(short *)(temp_v5 + 0xe);
            temp_v7 = FUN_0018416c(*(unsigned short *)(temp_v5 + 0x62));
            if (temp_v7 != 0) {
              temp_v10 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v6 = (int)(short)(int)(temp_v10 * (float)in_d8);
            }
          }
          temp_v6 = (temp_v6 * param_3) / 100;
          if (temp_v6 < 1) {
            temp_v6 = 1;
          }
          temp_v6 = *(short *)(temp_v5 + 0x2a) - temp_v6;
          if (temp_v6 < 1) {
            temp_v6 = 1;
          }
          temp_v6 = (int)(short)temp_v6;
          if (temp_v5 != 0) {
            temp_v11 = (int)*(short *)(temp_v5 + 0xe);
            temp_v7 = FUN_0018416c(*(unsigned short *)(temp_v5 + 0x62));
            if (temp_v7 != 0) {
              temp_v10 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (int)(short)(int)(temp_v10 * (float)in_d8);
            }
            if ((temp_v6 <= temp_v11) && (temp_v11 = temp_v6, temp_v6 < 1)) {
              temp_v11 = 1;
            }
            *(short *)(temp_v5 + 0x2a) = (short)temp_v11;
          }
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v4);
  }
  return;
}

} /* extern "C" */
