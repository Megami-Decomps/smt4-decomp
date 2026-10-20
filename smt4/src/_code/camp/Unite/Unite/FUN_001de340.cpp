/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001de340` (_code @ 0x1de340, 0x1360 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(...);
int FUN_0029d684(...);
int FUN_0029defc(...);
int FUN_0029f848(...);
int FUN_002b7bca(...);
int devilGetRecord(void);
int asdMemFree(...);

int FUN_002624c4(...);
int FUN_00262770(...);
int FUN_00269bc4(...);
int FUN_00288154(int, unsigned short [14]);
int FUN_002b066c(...);
int FUN_002bb150(...);
int memClear(int *, int);
int asdMemoryAlloc(...);
int FUN_003c8bb8(int, int);
int FUN_003c8da0(...);
int FUN_003c8f58(int);
int FUN_003c8fb4(int, int);
int FUN_003c8fc8(...);
int FUN_003c90ec(...);
int FUN_003c9100(...);
int FUN_003c9590(...);
int FUN_003c9744(...);
int SBORROW4(...);

/* stack frame of param_1: 24 slot(s), 94 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned short spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern int FUN_001d1d78(...); /* 0x1d1d78 */
extern int FUN_001f6524(...); /* 0x1f6524 */
extern int FUN_002073e4(...); /* 0x2073e4 */
extern int FUN_00219720(...); /* 0x219720 */
extern int FUN_002c6e90(...); /* 0x2c6e90 */
extern int FUN_002d0544(...); /* 0x2d0544 */
extern int FUN_002dcf14(...); /* 0x2dcf14 */
extern unsigned char LAB_002dcf9c; /* 0x2dcf9c */
extern int FUN_002e4b30(...); /* 0x2e4b30 */
extern int FUN_002f28c4(...); /* 0x2f28c4 */
extern int *g_unite; /* 0x43dd68 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002624c4. */
/* Supplied declaration required: FUN_00262770. */
/* Supplied declaration required: FUN_00269bc4. */
/* Supplied declaration required: FUN_00288154. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_0029d684. */
extern int FUN_0029dde0(void);
/* Supplied declaration required: FUN_0029defc. */
extern int FUN_0029ea68(unsigned short);
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: FUN_0029f848. */
extern int FUN_002a0d0c(void);
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);
/* Supplied declaration required: FUN_002b066c. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002bb150. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_003c8bb8. */
/* Supplied declaration required: FUN_003c8da0. */
/* Supplied declaration required: FUN_003c8f58. */
/* Supplied declaration required: FUN_003c8fb4. */
/* Supplied declaration required: FUN_003c8fc8. */
/* Supplied declaration required: FUN_003c90ec. */
/* Supplied declaration required: FUN_003c9100. */
/* Supplied declaration required: FUN_003c9590. */
/* Supplied declaration required: FUN_003c9744. */


void FUN_001de340(int *param_1)

{
/* irregular: 6 goto(s); 36 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int *piVar9;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  int *temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned int temp_v14;
  int *piVar19;
  unsigned char *pbVar20;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  int *temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  int *temp_v22;
  int temp_v23;
  unsigned short temp_v24 [14];
  unsigned char temp_v25 [24];
  short *temp_v26;
  int *temp_v27;
  unsigned int *temp_v28;
  int *temp_v29;
  int *temp_v30;
  int *temp_v31;
  int *temp_v32;
  int *temp_v33;
  int *temp_v34;
  int *temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  int *temp_v39;
  int *temp_v40;
  int temp_v41;
  
  temp_v32 = param_1 + 0x2540;
  temp_v33 = param_1 + 0x2519;
  temp_v19 = param_1 + 0x4e4;
  temp_v22 = param_1 + 0x186c;
  temp_v27 = param_1 + 0x1885;
  temp_v34 = param_1 + 0x1880;
  temp_v30 = param_1 + 0x2500;
  temp_v31 = param_1 + 0x2518;
  temp_v35 = param_1 + 0x2514;
  temp_v28 = (unsigned int *)(param_1 + 0x199c);
  temp_v29 = param_1 + 0x16d;
  do {
    if ((char)temp_v32[0x38] != '\0') {
      return;
    }
    temp_v2 = FUN_002a0d0c();
    temp_v3 = param_1[0x100];
    temp_v26 = (short *)(temp_v2 + 0x1c);
    if (((temp_v3 == 5) || (temp_v3 == 6 || temp_v3 == 2)) && ((char)temp_v30[0x14] != '\0')) {
      FUN_003c8f58(*param_1);
      param_1[0x16c] = 300;
      if (param_1[0x100] == 5) {
        temp_v2 = (int)*temp_v26;
        temp_v16 = -1 < temp_v2;
        if (!temp_v16) {
          temp_v2 = -1;
        }
        FUN_003c8da0(*param_1,temp_v16,temp_v2,0xffffffff);
        temp_v2 = (int)temp_v26[1];
        temp_v16 = -1 < temp_v2;
        if (!temp_v16) {
          temp_v2 = -1;
        }
        FUN_003c90ec(*param_1,temp_v16,temp_v2,0xffffffff);
        FUN_003c8fb4(*param_1,0 < temp_v26[4]);
        FUN_003c8bb8(*param_1,temp_v26[5] != 0);
        temp_v2 = (int)*(char *)((int)temp_v26 + 0x15);
        if (temp_v2 >= 0) {
          temp_v3 = *param_1;
          temp_v13 = *(unsigned int *)(temp_v2 * 4 + 0x4032e8) & 0xffff;
        }
        else {
          temp_v13 = 0;
          temp_v3 = *param_1;
        }
        FUN_003c9744(temp_v3,temp_v2 >= 0,temp_v13);
        *(unsigned char *)(*param_1 + 0x142) = (char)temp_v26[10] < '\x01';
        *(unsigned char *)(*param_1 + 0x17c) = '\0' < (char)temp_v26[0xb];
        *(unsigned char *)(*param_1 + 0x17d) = '\0' < *(char *)((int)temp_v26 + 0x17);
        if (temp_v26[7] >= 0) {
          temp_v17 = (romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v17 + 2)),temp_v26[7]) & 0xffff03ff) | 0x1400;
          temp_v2 = *param_1;
          puVar16 = &temp_v17;
        }
        else {
          puVar16 = (unsigned int *)0x0;
          temp_v2 = *param_1;
        }
        FUN_003c9100(temp_v2,temp_v26[7] >= 0,puVar16);
        if (temp_v26[6] != 0) {
          temp_v37 = 0;
          temp_v38 = 0;
          temp_v39 = (int *)0x0;
          puVar17 = &temp_v36;
          temp_v36 = (unsigned int)(unsigned short)temp_v26[6];
          temp_v2 = *param_1;
        }
        else {
          puVar17 = (unsigned int *)0x0;
          temp_v2 = *param_1;
        }
        FUN_003c8fc8(temp_v2,temp_v26[6] != 0,0,puVar17);
      }
      if (param_1[0x100] == 2) {
        *(unsigned char *)(*param_1 + 0x17d) = 1;
        *(unsigned char *)(*param_1 + 0x142) = 1;
        FUN_003c8da0(*param_1,0,0xffffffff);
        FUN_003c90ec(*param_1,0,0xffffffff);
        FUN_003c8fb4(*param_1,0);
        FUN_003c8bb8(*param_1,0);
        FUN_003c9744(*param_1,0);
        *(unsigned char *)(*param_1 + 0x17c) = 0;
        FUN_003c9100(*param_1,0);
        FUN_003c8fc8(*param_1,0,0);
        param_1[0x16c] = 2000;
      }
      param_1[0x16d] = 0;
      *temp_v28 = 0;
      memClear(temp_v19,16000);
      param_1[0x16e] = 0;
      temp_v16 = *(char *)((int)temp_v26 + 0x13) == '\0';
      temp_v2 = 0;
      if (!temp_v16) {
        temp_v2 = param_1[0x100];
      }
      if (!(temp_v16 || temp_v2 == 2)) {
        if (*temp_v26 >= 0) {
          temp_v2 = FUN_0029dde0();
          if (*temp_v33 < temp_v2) {
            temp_v2 = *temp_v33;
          }
          temp_v3 = temp_v2 - 10;
          if (temp_v3 >= 0x4d) {
            temp_v3 = 0x4c;
          }
          else if (temp_v3 < 1) {
            temp_v3 = 1;
            temp_v2 = 0xb;
          }
          temp_v4 = gameGetUnitRecord((int)*temp_v26);
          temp_v5 = flagWordTestBit(temp_v4,10);
          if (temp_v5 == 0) {
            temp_v5 = flagWordTestBit(temp_v4,2);
            temp_v1 = 0;
            if (temp_v5 == 0) {
              do {
                if ((unsigned int)param_1[0x16c] <= (unsigned int)param_1[0x16d]) break;
                temp_v5 = FUN_0029ea68(temp_v1);
                if (temp_v5 != 0) {
                  FUN_00269bc4(*param_1);
                  FUN_00262770(*param_1,0,temp_v4 + 0x34);
                  param_1[param_1[0x16d] * 2 + 0x4e4] =
                       (param_1[param_1[0x16d] * 2 + 0x4e4] & 0x3fffffffU) | 0x40000000;
                  temp_v5 = FUN_002b066c(temp_v1);
                  if (((temp_v5 == 0) || (temp_v6 = flagWordTestBit(temp_v5,10), temp_v6 != 0)) ||
                     (temp_v6 = flagWordTestBit(temp_v5,2), temp_v6 != 0)) {
                    FUN_00288154(temp_v1,temp_v24);
                    if ('\0' < *(char *)((int)temp_v26 + 0x17)) {
                      temp_v13 = (unsigned int)temp_v24[0];
                      temp_v16 = SBORROW4(temp_v13,temp_v3);
                      temp_v5 = temp_v13 - temp_v3;
                      if (temp_v3 <= (int)temp_v13) {
                        temp_v16 = SBORROW4(temp_v2,temp_v13);
                        temp_v5 = temp_v2 - temp_v13;
                      }
                      if (temp_v5 < 0 != temp_v16) goto LAB_001dea48;
                    }
                    param_1[param_1[0x16d] * 2 + 0x4e5] = param_1[param_1[0x16d] * 2 + 0x4e5] | 3;
                    FUN_00262770(*param_1,1,temp_v25);
                  }
                  else {
                    param_1[param_1[0x16d] * 2 + 0x4e5] =
                         (param_1[param_1[0x16d] * 2 + 0x4e5] & 0xfffffffcU) | 1;
                    FUN_00262770(*param_1,1,temp_v5 + 0x34);
                  }
                  temp_v5 = FUN_002624c4(*param_1,*(unsigned short *)(temp_v4 + 0x46),temp_v1,
                                       param_1 + param_1[0x16d] * 2 + 0x4e4);
                  if (temp_v5 != 0) {
                    *temp_v29 = param_1[0x16d] + 1;
                  }
                }
LAB_001dea48:
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < 0x4b1);
            }
          }
          temp_v2 = param_1[0x16f];
          while (temp_v2 < 0x1e) {
            FUN_002bb150(10000000,0);
            temp_v2 = param_1[0x16f];
          }
        }
        else {
          if (*(char *)(*param_1 + 0x118) != '\0') {
            param_1[0x16c] = 2000;
          }
          if ('\0' < *(char *)((int)temp_v26 + 0x17)) {
            param_1[0x16c] = 2000;
          }
          piVar9 = g_unite;
          temp_v2 = FUN_002a0d0c();
          temp_v17 = 1;
          temp_v13 = 0x100;
          asdMemoryAlloc(0x100,0x100,0,0xa00);
          temp_v3 = *piVar9;
          temp_v17 = temp_v13;
          FUN_003c9590(temp_v3,temp_v13);
          temp_v18 = FUN_0029dde0();
          if (piVar9[0x2519] < temp_v18) {
            temp_v18 = piVar9[0x2519];
          }
          temp_v36 = temp_v18 - 10;
          temp_v16 = SBORROW4(temp_v36,0x4c);
          temp_v4 = temp_v18 - 0x56;
          if ((int)temp_v36 >= 0x4d) {
            temp_v36 = 0x4c;
          }
          else {
            temp_v16 = SBORROW4(temp_v36,1);
            temp_v4 = temp_v18 - 0xb;
          }
          if (temp_v4 < 0 != temp_v16) {
            temp_v36 = 1;
            temp_v18 = 0xb;
          }
          temp_v20 = 0;
          if (0 < temp_v3) {
            temp_v39 = piVar9 + 0x16e;
            temp_v40 = piVar9 + 0x16d;
            do {
              if (((unsigned int)piVar9[0x16c] <= (unsigned int)piVar9[0x16d]) || ((char)piVar9[0x2514] == '\0'))
              break;
              temp_v21 = (unsigned int)*(unsigned short *)(temp_v17 + temp_v20 * 2);
              temp_v4 = FUN_002b066c(temp_v21);
              temp_v5 = temp_v20 + 1;
              if (temp_v5 < temp_v3) {
                temp_v41 = temp_v21 * 0xd;
                do {
                  if (((unsigned int)piVar9[0x16c] <= (unsigned int)piVar9[0x16d]) || ((char)piVar9[0x2514] == '\0')
                     ) break;
                  FUN_00269bc4(*piVar9);
                  if ((temp_v4 == 0) ||
                     ((temp_v6 = flagWordTestBit(temp_v4,10), temp_v6 != 0 ||
                      (temp_v6 = flagWordTestBit(temp_v4,2), temp_v6 != 0)))) {
                    temp_v6 = gameDataBlocksGetSaveData();
                    temp_v6 = temp_v6 + temp_v41 * 4;
                    if (*(char *)(temp_v2 + 0x33) < '\x01') {
LAB_001deca0:
                      FUN_00262770(*piVar9,0,temp_v6 + 0xc18c);
                      piVar12 = piVar9 + piVar9[0x16d] * 2;
                      temp_v13 = piVar12[0x4e4] | 0xc0000000;
                      goto LAB_001decc4;
                    }
                    temp_v13 = (unsigned int)*(unsigned short *)(temp_v6 + 0xc170);
                    temp_v16 = SBORROW4(temp_v13,temp_v36);
                    temp_v0 = temp_v13 - temp_v36;
                    if ((int)temp_v36 <= (int)temp_v13) {
                      temp_v16 = SBORROW4(temp_v18,temp_v13);
                      temp_v0 = temp_v18 - temp_v13;
                    }
                    if (temp_v0 < 0 == temp_v16) goto LAB_001deca0;
                  }
                  else {
                    FUN_00262770(*piVar9,0,temp_v4 + 0x34);
                    piVar12 = piVar9 + piVar9[0x16d] * 2;
                    temp_v13 = (piVar12[0x4e4] & 0x3fffffffU) | 0x40000000;
LAB_001decc4:
                    piVar12[0x4e4] = temp_v13;
                    temp_v13 = (unsigned int)*(unsigned short *)(temp_v17 + temp_v5 * 2);
                    temp_v23 = FUN_002b066c(temp_v13);
                    if (((temp_v23 == 0) || (temp_v6 = flagWordTestBit(temp_v23,10), temp_v6 != 0)) ||
                       (temp_v6 = flagWordTestBit(temp_v23,2), temp_v6 != 0)) {
                      temp_v6 = gameDataBlocksGetSaveData();
                      temp_v6 = temp_v6 + temp_v13 * 0x34;
                      if ('\0' < *(char *)(temp_v2 + 0x33)) {
                        temp_v14 = (unsigned int)*(unsigned short *)(temp_v6 + 0xc170);
                        temp_v16 = SBORROW4(temp_v14,temp_v36);
                        temp_v0 = temp_v14 - temp_v36;
                        if ((int)temp_v36 <= (int)temp_v14) {
                          temp_v16 = SBORROW4(temp_v18,temp_v14);
                          temp_v0 = temp_v18 - temp_v14;
                        }
                        if (temp_v0 < 0 != temp_v16) goto LAB_001dedf4;
                      }
                      FUN_00262770(*piVar9,1,temp_v6 + 0xc18c);
                      temp_v6 = piVar9[0x16d];
                      piVar9[temp_v6 * 2 + 0x4e4] = piVar9[temp_v6 * 2 + 0x4e4];
                      piVar9[temp_v6 * 2 + 0x4e5] = piVar9[temp_v6 * 2 + 0x4e5] | 3;
                    }
                    else {
                      FUN_00262770(*piVar9,1,temp_v23 + 0x34);
                      temp_v6 = piVar9[0x16d];
                      piVar9[temp_v6 * 2 + 0x4e4] = piVar9[temp_v6 * 2 + 0x4e4];
                      piVar9[temp_v6 * 2 + 0x4e5] = (piVar9[temp_v6 * 2 + 0x4e5] & 0xfffffffcU) | 1;
                    }
                    temp_v6 = FUN_002624c4(*piVar9,temp_v21,temp_v13,piVar9 + piVar9[0x16d] * 2 + 0x4e4)
                    ;
                    if (temp_v6 != 0) {
                      *temp_v40 = piVar9[0x16d] + 1;
                    }
                  }
LAB_001dedf4:
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < temp_v3);
              }
              *temp_v39 = piVar9[0x16e] + 1;
              temp_v20 = temp_v20 + 1;
            } while (temp_v20 < temp_v3);
          }
          asdMemFree(temp_v17);
          temp_v2 = param_1[0x16f];
          while (temp_v2 < 0x1e) {
            FUN_002bb150(10000000,0);
            temp_v2 = param_1[0x16f];
          }
        }
      }
      else {
        temp_v3 = 0;
        temp_v2 = gameCountUnits();
        if (0 < temp_v2) {
          do {
            if ((unsigned int)param_1[0x16c] <= (unsigned int)param_1[0x16d]) break;
            temp_v4 = temp_v3 + 1;
            temp_v2 = gameCountUnits();
            if (temp_v4 < temp_v2) {
              do {
                if ((unsigned int)param_1[0x16c] <= (unsigned int)param_1[0x16d]) break;
                temp_v2 = gameGetSlotTable();
                temp_v2 = gameGetUnitRecord((int)*(char *)(temp_v2 + temp_v3 + 0x90f0));
                temp_v5 = gameGetSlotTable();
                temp_v5 = gameGetUnitRecord((int)*(char *)(temp_v5 + temp_v4 + 0x90f0));
                if (temp_v2 == 0 || temp_v5 == 0) break;
                temp_v6 = flagWordTestBit(temp_v2,10);
                if (((temp_v6 == 0) && (temp_v6 = flagWordTestBit(temp_v5,10), temp_v6 == 0)) &&
                   ((temp_v6 = flagWordTestBit(temp_v2,2), temp_v6 == 0 &&
                    (temp_v6 = flagWordTestBit(temp_v5,2), temp_v6 == 0)))) {
                  FUN_00269bc4(*param_1);
                  FUN_00262770(*param_1,0,temp_v2 + 0x34);
                  FUN_00262770(*param_1,1,temp_v5 + 0x34);
                  temp_v6 = param_1[0x16d];
                  temp_v13 = param_1[temp_v6 * 2 + 0x4e5];
                  temp_v14 = (param_1[temp_v6 * 2 + 0x4e4] & 0x3fffffffU) | 0x40000000;
                  param_1[temp_v6 * 2 + 0x4e4] = temp_v14;
                  temp_v6 = *temp_v29;
                  param_1[temp_v6 * 2 + 0x4e4] = temp_v14;
                  param_1[temp_v6 * 2 + 0x4e5] = (temp_v13 & 0xfffffffc) | 1;
                  temp_v2 = FUN_002624c4(*param_1,*(unsigned short *)(temp_v2 + 0x46),
                                       *(unsigned short *)(temp_v5 + 0x46),param_1 + *temp_v29 * 2 + 0x4e4
                                      );
                  if (temp_v2 != 0) {
                    *temp_v29 = param_1[0x16d] + 1;
                  }
                }
                temp_v4 = temp_v4 + 1;
                temp_v2 = gameCountUnits();
              } while (temp_v4 < temp_v2);
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = gameCountUnits();
          } while (temp_v3 < temp_v2);
        }
      }
      if ((char)temp_v30[0x14] != '\0') {
        if ((((unsigned int)param_1[0x16d] < (unsigned int)param_1[0x16c]) && (param_1[0x16d] != 0)) &&
           (param_1[0x100] == 2)) {
          temp_v2 = 0;
          temp_v17 = 1;
          piVar8 = (int *)0x100;
          asdMemoryAlloc(0x100,0x100,0,param_1[0x16d] << 3);
          piVar19 = (int *)0x0;
          piVar9 = (int *)0x0;
          piVar12 = temp_v9;
          if (*temp_v29 != 0) {
            do {
              temp_v13 = (param_1[(int)piVar19 * 2 + 0x4e5] & 0x1ffffU) >> 2;
              devilGetRecord();
              temp_v3 = gameGetPlayerData();
              piVar12 = (int *)(*(unsigned char *)(temp_v3 + 0x76) - 10);
              if ((int)piVar12 < (int)(unsigned int)*(unsigned char *)(temp_v13 + 3)) {
                piVar12 = param_1 + (int)piVar19 * 2 + 0x4e4;
                temp_v3 = temp_v2 * 2;
                temp_v4 = param_1[(int)piVar19 * 2 + 0x4e5];
                temp_v2 = temp_v2 + 1;
                piVar8[temp_v3] = *piVar12;
                (piVar8 + temp_v3)[1] = temp_v4;
              }
              piVar19 = (int *)((int)piVar19 + 1);
              piVar9 = (int *)param_1[0x16d];
            } while (piVar19 < piVar9);
          }
          temp_v16 = temp_v2 != 0;
          if (temp_v16) {
            piVar12 = (int *)0x0;
            piVar9 = piVar8;
          }
          param_1[0x16d] = temp_v2;
          while (temp_v16) {
            temp_v3 = *piVar9;
            temp_v4 = piVar9[1];
            piVar9 = piVar9 + 2;
            temp_v2 = temp_v2 - 1;
            temp_v16 = temp_v2 != 0;
            param_1[(int)piVar12 * 2 + 0x4e4] = temp_v3;
            param_1[(int)piVar12 * 2 + 0x4e5] = temp_v4;
            piVar12 = (int *)((int)piVar12 + 1);
          }
          asdMemFree(piVar8);
        }
        temp_v13 = param_1[0x16d];
        if ((temp_v13 < (unsigned int)param_1[0x16c]) && (temp_v13 != 0)) {
          if (param_1[0x100] != 2) {
            if (*(char *)((int)temp_v26 + 0x17) >= '\x01') {
              temp_v2 = 0;
              temp_v17 = 1;
              piVar8 = (int *)0x100;
              asdMemoryAlloc(0x100,0x100,0,param_1[0x16d] << 3);
              piVar19 = (int *)0x0;
              piVar9 = (int *)0x0;
              piVar12 = temp_v10;
              if (*temp_v29 != 0) {
                do {
                  temp_v13 = (param_1[(int)piVar19 * 2 + 0x4e5] & 0x1ffffU) >> 2;
                  devilGetRecord();
                  temp_v3 = gameGetPlayerData();
                  piVar12 = (int *)(*(unsigned char *)(temp_v3 + 0x76) - 10);
                  if ((int)piVar12 < (int)(unsigned int)*(unsigned char *)(temp_v13 + 3)) {
                    piVar12 = piVar8 + temp_v2 * 2;
                    temp_v3 = param_1[(int)piVar19 * 2 + 0x4e5];
                    temp_v2 = temp_v2 + 1;
                    *piVar12 = param_1[(int)piVar19 * 2 + 0x4e4];
                    piVar12[1] = temp_v3;
                  }
                  piVar19 = (int *)((int)piVar19 + 1);
                  piVar9 = (int *)param_1[0x16d];
                } while (piVar19 < piVar9);
              }
              temp_v16 = temp_v2 != 0;
              if (temp_v16) {
                piVar12 = (int *)0x0;
                piVar9 = piVar8;
              }
              param_1[0x16d] = temp_v2;
              while (temp_v16) {
                temp_v3 = *piVar9;
                temp_v4 = piVar9[1];
                piVar9 = piVar9 + 2;
                temp_v2 = temp_v2 - 1;
                temp_v16 = temp_v2 != 0;
                param_1[(int)piVar12 * 2 + 0x4e4] = temp_v3;
                param_1[(int)piVar12 * 2 + 0x4e5] = temp_v4;
                piVar12 = (int *)((int)piVar12 + 1);
              }
              asdMemFree(piVar8);
              FUN_002b7bca(temp_v19,param_1[0x16d],8,&LAB_002dcf9c);
            }
            else {
              FUN_002b7bca(temp_v19,temp_v13,8,FUN_002d0544);
            }
          }
          else {
            gameFlagSetValue(0x461,0);
            FUN_002b7bca(temp_v19,param_1[0x16d],8,&LAB_002dcf9c);
            temp_v13 = 0;
            temp_v14 = 0;
            if (*temp_v29 != 0) {
              do {
                temp_v8 = temp_v13;
                if ((param_1[temp_v14 * 2 + 0x4e5] & 0x1fffcU) != 0) {
                  if ((int)temp_v13 >= 1) {
                    temp_v12 = temp_v13 & 1;
                    temp_v7 = temp_v12;
                  }
                  else {
                    temp_v12 = temp_v13;
                    temp_v7 = 0;
                  }
                  temp_v11 = 0;
                  if (0 < (int)temp_v12) {
                    do {
                      if (((param_1[temp_v14 * 2 + 0x4e5] ^ param_1[temp_v11 * 2 + 0x250f]) & 0x1ffffU)
                          >> 2 == 0) goto LAB_001df284;
                      temp_v11 = temp_v11 + 1;
                    } while ((int)temp_v11 < (int)temp_v7);
                  }
                  temp_v11 = temp_v7;
                  if ((int)temp_v7 < (int)temp_v13) {
                    do {
                      temp_v11 = temp_v7;
                      if ((((param_1[temp_v14 * 2 + 0x4e5] ^ param_1[temp_v7 * 2 + 0x250f]) & 0x1ffffU)
                           >> 2 == 0) ||
                         (temp_v11 = temp_v7 + 1,
                         ((param_1[temp_v14 * 2 + 0x4e5] ^ param_1[temp_v7 * 2 + 0x2511]) & 0x1ffffU)
                         >> 2 == 0)) break;
                      temp_v7 = temp_v7 + 2;
                      temp_v11 = temp_v7;
                    } while ((int)temp_v7 < (int)temp_v13);
                  }
LAB_001df284:
                  if ((int)temp_v13 <= (int)temp_v11) {
                    gameFlagSetValue(0x461,1);
                    temp_v2 = param_1[temp_v14 * 2 + 0x4e5];
                    temp_v8 = temp_v13 + 1;
                    param_1[temp_v13 * 2 + 0x250e] = param_1[temp_v14 * 2 + 0x4e4];
                    param_1[temp_v13 * 2 + 0x250f] = temp_v2;
                    if ((int)temp_v8 >= 3) break;
                  }
                }
                temp_v14 = temp_v14 + 1;
                temp_v13 = temp_v8;
              } while (temp_v14 < (unsigned int)param_1[0x16d]);
            }
          }
          temp_v13 = 0;
          if (temp_v13 < (unsigned int)param_1[0x16d]) {
            do {
              temp_v14 = 0;
              temp_v8 = *temp_v28;
              if (temp_v8 != 0) {
                temp_v12 = temp_v8 & 1;
              }
              else {
                temp_v12 = 0;
              }
              if ((temp_v8 != 0 && temp_v12 != 0) && -1 < (int)temp_v12) {
                do {
                  if ((unsigned int)*(unsigned short *)((int)param_1 + temp_v14 * 2 + 0x6278) ==
                      (param_1[temp_v13 * 2 + 0x4e5] & 0x1ffffU) >> 2) goto LAB_001df3cc;
                  temp_v14 = temp_v14 + 1;
                } while ((int)temp_v14 < (int)temp_v12);
              }
              temp_v14 = temp_v12;
              if (temp_v12 < temp_v8) {
                temp_v7 = (param_1[temp_v13 * 2 + 0x4e5] & 0x1ffffU) >> 2;
                do {
                  temp_v14 = temp_v12;
                  if ((*(unsigned short *)((int)param_1 + temp_v12 * 2 + 0x6278) == temp_v7) ||
                     (temp_v14 = temp_v12 + 1, *(unsigned short *)((int)param_1 + temp_v12 * 2 + 0x627a) == temp_v7
                     )) break;
                  temp_v12 = temp_v12 + 2;
                  temp_v14 = temp_v12;
                } while (temp_v12 < temp_v8);
              }
LAB_001df3cc:
              if (temp_v8 <= temp_v14) {
                *(unsigned short *)((int)param_1 + temp_v14 * 2 + 0x6278) =
                     (unsigned short)((unsigned int)(param_1[temp_v13 * 2 + 0x4e5] << 0xf) >> 0x11);
                *temp_v28 = *temp_v28 + 1;
              }
              temp_v13 = temp_v13 + 1;
            } while (temp_v13 < (unsigned int)param_1[0x16d]);
          }
          if ('\0' < *(char *)((int)temp_v26 + 0x17)) {
            temp_v13 = *temp_v28;
            if (temp_v13 >= 11) {
              temp_v13 = 10;
            }
            *temp_v28 = temp_v13;
          }
          temp_v18 = 1;
          temp_v17 = 1;
          FUN_0029f848(temp_v22,*temp_v28,10,1);
          temp_v18 = 1;
          temp_v17 = 1;
          FUN_0029f848(temp_v27,*temp_v28,1,4);
          if (param_1[0x100] != 2) {
            FUN_0029defc((int)(short)temp_v34[0x1e],0);
            FUN_0029d684(1);
          }
          piVar9 = g_unite;
          if ((char)g_unite[0x108] != '\x01') {
            temp_v2 = FUN_002a0d0c();
            pbVar20 = (unsigned char *)(temp_v2 + 0x11);
          }
          else {
            temp_v2 = FUN_002a0d0c();
            pbVar20 = (unsigned char *)(temp_v2 + 0x12);
          }
          temp_v15 = ~(*pbVar20 >> 7) & 1;
          if ((*pbVar20 & 0x7f) == 1) {
            if (temp_v15 != 0) {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_002073e4);
            }
            else {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_002e4b30);
            }
          }
          if ((*pbVar20 & 0x7f) == 2) {
            if (temp_v15 != 0) {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_001d1d78);
            }
            else {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_002c6e90);
            }
          }
          if ((*pbVar20 & 0x7f) == 0x31) {
            if (temp_v15 != 0) {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_00219720);
            }
            else {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_002f28c4);
            }
          }
          if ((*pbVar20 & 0x7f) == 3) {
            if (temp_v15 != 0) {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_001f6524);
            }
            else {
              FUN_002b7bca(piVar9 + 0x189e,piVar9[0x199c],2,FUN_002dcf14);
            }
          }
        }
        if ((param_1[0x100] == 5) && ((char)temp_v30[0x14] != '\0')) {
          if ((unsigned int)param_1[0x16d] < (unsigned int)param_1[0x16c]) {
            temp_v2 = 2;
          }
          else {
            temp_v2 = 0xc;
          }
          *temp_v31 = temp_v2;
        }
        *(unsigned char *)temp_v35 = 0;
      }
    }
    FUN_002bb150(10000000,0);
  } while( 1 );
}

} /* extern "C" */
