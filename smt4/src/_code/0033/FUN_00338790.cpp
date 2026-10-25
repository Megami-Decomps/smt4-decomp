/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338790` (_code @ 0x338790, 0x444 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordClampCurrentCount(int, int);
int FUN_002485d4(int, unsigned short [30]);
int padClearBits(int);
int passiveSkillLookupRecord(void);
int FUN_00283f30(unsigned short [30], int);
int playerSetClampedStat(int);
int FUN_00333fec(int);
int selectionStateSetClamped(int, int);
int VectorSignedToFloat(...);

typedef struct fn_00338790_arg0 fn_00338790_arg0;
struct fn_00338790_arg0 {
    unsigned char pad_0x0[0x1c];
    short field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0xc];
    undefined2 field_0x2a; /* +0x2a */
    unsigned char pad_0x2c[0x5c];
    int field_0x88; /* +0x88 */
};

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: recordClampCurrentCount. */
/* Supplied declaration required: FUN_002485d4. */
/* Supplied declaration required: padClearBits. */
/* Supplied declaration required: passiveSkillLookupRecord. */
/* Supplied declaration required: FUN_00283f30. */
extern short FUN_0028d310(void);
extern int playerPadTestBit(unsigned int);
extern int flagWordTestBit(int, unsigned int);
extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameGetPlayerData(void);
extern short FUN_00333fb0(void);
/* Supplied declaration required: playerSetClampedStat. */
/* Supplied declaration required: FUN_00333fec. */
extern unsigned int FUN_00334038(void);
extern unsigned int FUN_00334048(void);
/* Supplied declaration required: selectionStateSetClamped. */


void FUN_00338790(fn_00338790_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned short temp_v19 [30];
  
  if (param_1->field_0x88 == 1 || param_1->field_0x88 == 10) {
    temp_v12 = 0.0f;
    temp_v9 = temp_v12;
    temp_v10 = temp_v12;
    FUN_00283f30(temp_v19,1);
    temp_v13 = 10.0f;
    temp_v14 = 7.0f;
    temp_v15 = 5.0f;
    temp_v16 = 3.5f;
    temp_v17 = 100.0f;
    temp_v6 = 0;
    do {
      temp_v2 = (unsigned int)temp_v19[temp_v6];
      if ((temp_v2 != 0) && (passiveSkillLookupRecord(), temp_v2 != 0)) {
        switch((*(unsigned int *)(temp_v2 + 0x38) & 0x1f) >> 2) {
        case 1:
          temp_v10 = temp_v10 + temp_v13;
          break;
        case 2:
          temp_v9 = temp_v9 + temp_v14;
          break;
        case 3:
          temp_v9 = temp_v17;
          temp_v10 = temp_v17;
          break;
        case 4:
          temp_v10 = temp_v10 + temp_v15;
          break;
        case 5:
          temp_v9 = temp_v9 + temp_v16;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 9);
    temp_v11 = temp_v12;
    if ((temp_v12 <= temp_v10) && (temp_v11 = temp_v10, (int)temp_v10 >= 0x42c80001)) {
      temp_v11 = temp_v17;
    }
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v9) << 0x1d);
    temp_v10 = temp_v12;
    if ((romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) && (temp_v10 = temp_v9, (int)temp_v9 >= 0x42c80001)) {
      temp_v10 = temp_v17;
    }
    temp_v6 = playerPadTestBit(1);
    temp_v18 = 0x3c23d70a;
    if (((temp_v6 == 0) && (temp_v6 = playerPadTestBit(10), temp_v6 == 0)) &&
       (temp_v6 = playerPadTestBit(2), temp_v6 == 0)) {
      temp_v1 = FUN_0028d310();
      temp_v3 = FUN_00334038();
      temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v6 = (int)(short)((short)(int)(temp_v9 * temp_v11 * (float)temp_v18) + temp_v1);
      playerSetClampedStat(temp_v6);
      if (temp_v6 == 0) {
        temp_v6 = gameGetPlayerData();
        *(unsigned short *)(temp_v6 + 0x2a) = 0;
      }
      temp_v1 = FUN_00333fb0();
      temp_v3 = FUN_00334048();
      temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v6 = (int)(short)((short)(int)(temp_v9 * temp_v10 * (float)temp_v18) + temp_v1);
      FUN_00333fec(temp_v6);
      if (temp_v6 == 0) {
        temp_v6 = gameGetPlayerData();
        *(unsigned short *)(temp_v6 + 0x2c) = 0;
      }
    }
    temp_v6 = gameGetSlotTable();
    temp_v0 = *(unsigned char *)(temp_v6 + 0x910b);
    temp_v6 = gameGetSlotTable();
    temp_v8 = 0;
    if (temp_v0 != 0) {
      do {
        if ((-1 < *(char *)(temp_v6 + temp_v8 + 0x90f0)) &&
           (temp_v9 = temp_v12, temp_v10 = temp_v12, temp_v4 = gameGetUnitRecord(), temp_v4 != 0)) {
          temp_v19[0] = 0;
          temp_v19[1] = 0;
          temp_v19[2] = 0;
          temp_v19[3] = 0;
          temp_v19[4] = 0;
          temp_v19[5] = 0;
          temp_v19[6] = 0;
          temp_v19[7] = 0;
          temp_v19[8] = 0;
          temp_v19[9] = 0;
          FUN_002485d4(temp_v4,temp_v19);
          temp_v7 = 0;
          do {
            temp_v5 = (unsigned int)temp_v19[temp_v7];
            if ((temp_v5 != 0) && (passiveSkillLookupRecord(), temp_v5 != 0)) {
              switch((*(unsigned int *)(temp_v5 + 0x38) & 0x1f) >> 2) {
              case 1:
                temp_v9 = temp_v9 + temp_v13;
                break;
              case 2:
                temp_v10 = temp_v10 + temp_v14;
                break;
              case 3:
                temp_v9 = temp_v17;
                temp_v10 = temp_v17;
                break;
              case 4:
                temp_v9 = temp_v9 + temp_v15;
                break;
              case 5:
                temp_v10 = temp_v10 + temp_v16;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 9);
          temp_v11 = temp_v12;
          if ((temp_v12 <= temp_v9) && (temp_v11 = temp_v9, (int)temp_v9 >= 0x42c80001)) {
            temp_v11 = temp_v17;
          }
          temp_v2 = (temp_v2 & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v10) << 0x1d);
          temp_v9 = temp_v12;
          if ((romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) && (temp_v9 = temp_v10, (int)temp_v10 >= 0x42c80001)) {
            temp_v9 = temp_v17;
          }
          temp_v7 = flagWordTestBit(temp_v4,1);
          if (((temp_v7 == 0) && (temp_v7 = flagWordTestBit(temp_v4,10), temp_v7 == 0)) &&
             (temp_v7 = flagWordTestBit(temp_v4,2), temp_v7 == 0)) {
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0xe),
                                                (unsigned char)(temp_v2 >> 0x16) & 3);
            temp_v7 = (int)(short)((short)(int)(temp_v10 * temp_v11 * (float)temp_v18) +
                                *(short *)(temp_v4 + 0x2a));
            recordClampCurrentCount(temp_v4,temp_v7);
            if (temp_v7 == 0) {
              *(unsigned short *)(temp_v4 + 0x2a) = 0;
            }
            temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0x10),
                                                (unsigned char)(temp_v2 >> 0x16) & 3);
            temp_v7 = (int)(short)((short)(int)(temp_v10 * temp_v9 * (float)temp_v18) +
                                *(short *)(temp_v4 + 0x2c));
            selectionStateSetClamped(temp_v4,temp_v7);
            if (temp_v7 == 0) {
              *(unsigned short *)(temp_v4 + 0x2c) = 0;
            }
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < (int)(unsigned int)temp_v0);
    }
  }
  temp_v6 = playerPadTestBit(1);
  if (temp_v6 == 0) {
    return;
  }
  padClearBits(2);
  playerSetClampedStat(1);
  return;
}

} /* extern "C" */
