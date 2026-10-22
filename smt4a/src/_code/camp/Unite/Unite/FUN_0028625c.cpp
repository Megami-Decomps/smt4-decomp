/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028625c` (_code @ 0x28625c, 0x1304 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00184310(void);
int asdMemFree(...);
int FUN_00203b40(...);
int FUN_002a7324(...);
int FUN_0031f718(...);
int gameFlagSetValue(...);

int asdMemoryAlloc(...);
int slotRecordFindById(...);
int svcSleepThread(...);
int gameDataCopySaveEntry(int, unsigned short [14]);
int sysMemClear(int *, int);
int recSet148(int, int);
int recSet150(int, int);
int recSet16E(...);
int FUN_004dafd0(int);
int recSet14C(int, int);
int FUN_004db048(...);
int recSet174(...);
int rec16ASet(...);
int FUN_004db65c(...);
int fusionCollectEligibleDemonsByRace(...);
int recSet17B(...);
int idListAppendEightNonzero(...);
int wordAt1B0Clear(...);
int SBORROW4(...);

/* stack frame of param_1: 22 slot(s), 86 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_1_stack;

extern int FUN_00270d74(...); /* 0x270d74 */
extern int FUN_002b2ca8(...); /* 0x2b2ca8 */
extern int devilCompareByRankGradeAscending(...); /* 0x2ce824 */
extern int FUN_002fe074(...); /* 0x2fe074 */
extern int FUN_00321cc0(...); /* 0x321cc0 */
extern int FUN_00337110(...); /* 0x337110 */
extern int btlDevilCompareValueKindAndOrder(...); /* 0x34f6fc */
extern unsigned char LAB_0034f784; /* 0x34f784 */
extern int recordKindOrderCompare(...); /* 0x3603a0 */
extern int FUN_00375b80(...); /* 0x375b80 */
extern int *g_unite; /* 0x57f290 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: qsort. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemoryAlloc. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: slotRecordFindById. */
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: gameDataCopySaveEntry. */
extern int FUN_0026140c(void);
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_002a7324. */
extern int computeCountLimit(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: gameFlagSetValue. */
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: recSet148. */
/* Supplied declaration required: recSet150. */
/* Supplied declaration required: recSet16E. */
/* Supplied declaration required: FUN_004dafd0. */
/* Supplied declaration required: recSet14C. */
/* Supplied declaration required: FUN_004db048. */
/* Supplied declaration required: recSet174. */
/* Supplied declaration required: rec16ASet. */
/* Supplied declaration required: FUN_004db65c. */
/* Supplied declaration required: fusionCollectEligibleDemonsByRace. */
/* Supplied declaration required: recSet17B. */
/* Supplied declaration required: idListAppendEightNonzero. */
/* Supplied declaration required: wordAt1B0Clear. */


void FUN_0028625c(int *param_1)

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
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int temp_v13;
  int *piVar18;
  unsigned char *pbVar19;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  int *temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  short *temp_v25;
  unsigned short temp_v26 [14];
  unsigned char temp_v27 [52];
  int *temp_v28;
  int *temp_v29;
  unsigned int *temp_v30;
  int *temp_v31;
  int *temp_v32;
  int *temp_v33;
  int *temp_v34;
  int temp_v35;
  int *temp_v36;
  int *temp_v37;
  int temp_v38;
  
  temp_v33 = param_1 + 0x2480;
  temp_v18 = param_1 + 0x4ee;
  temp_v28 = param_1 + 0x1876;
  temp_v29 = param_1 + 0x188f;
  temp_v34 = param_1 + 0x1880;
  temp_v31 = param_1 + 0x2400;
  temp_v30 = (unsigned int *)(param_1 + 0x19a6);
  temp_v32 = param_1 + 0x172;
  do {
    if ((char)temp_v33[0x19] != '\0') {
      return;
    }
    temp_v2 = FUN_0026140c();
    temp_v3 = param_1[0x100];
    temp_v25 = (short *)(temp_v2 + 0x20);
    if (((temp_v3 == 5) || (temp_v3 == 6 || temp_v3 == 2)) && ((char)temp_v31[0x24] != '\0')) {
      FUN_004dafd0(*param_1);
      param_1[0x171] = 300;
      if (param_1[0x100] == 5) {
        temp_v2 = (int)*temp_v25;
        temp_v15 = -1 < temp_v2;
        if (!temp_v15) {
          temp_v2 = -1;
        }
        recSet16E(*param_1,temp_v15,temp_v2,0xffffffff);
        temp_v2 = (int)temp_v25[1];
        temp_v15 = -1 < temp_v2;
        if (!temp_v15) {
          temp_v2 = -1;
        }
        recSet174(*param_1,temp_v15,temp_v2,0xffffffff);
        recSet14C(*param_1,0 < temp_v25[4]);
        recSet150(*param_1,'\0' < *(char *)((int)temp_v25 + 0x23));
        recSet148(*param_1,temp_v25[5] != 0);
        temp_v2 = (int)*(char *)((int)temp_v25 + 0x15);
        if (temp_v2 >= 0) {
          temp_v3 = *param_1;
          temp_v12 = *(unsigned int *)(temp_v2 * 4 + 0x52f210) & 0xffff;
        }
        else {
          temp_v12 = 0;
          temp_v3 = *param_1;
        }
        recSet17B(temp_v3,temp_v2 >= 0,temp_v12);
        *(unsigned char *)(*param_1 + 0x17a) = (char)temp_v25[10] < '\x01';
        *(unsigned char *)(*param_1 + 0x1b4) = (*(unsigned char *)(temp_v25 + 0xb) & 1) != 0;
        *(unsigned char *)(*param_1 + 0x1b5) = '\0' < *(char *)((int)temp_v25 + 0x17);
        if (temp_v25[7] >= 0) {
          temp_v16 = (romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v16 + 2)),temp_v25[7]) & 0xffff03ff) | 0x1400;
          temp_v2 = *param_1;
          puVar15 = &temp_v16;
        }
        else {
          puVar15 = (unsigned int *)0x0;
          temp_v2 = *param_1;
        }
        rec16ASet(temp_v2,temp_v25[7] >= 0,puVar15);
        if (temp_v25[6] != 0) {
          temp_v21 = 0;
          temp_v22 = 0;
          temp_v23 = 0;
          puVar16 = &temp_v20;
          temp_v20 = (unsigned int)(unsigned short)temp_v25[6];
          temp_v2 = *param_1;
        }
        else {
          puVar16 = (unsigned int *)0x0;
          temp_v2 = *param_1;
        }
        FUN_004db048(temp_v2,temp_v25[6] != 0,0,puVar16);
        *(unsigned char *)(*param_1 + 0x1b6) = '\0' < *(char *)((int)temp_v25 + 0x17);
      }
      if (param_1[0x100] == 2) {
        *(unsigned char *)(*param_1 + 0x1b5) = 1;
        *(unsigned char *)(*param_1 + 0x17a) = 1;
        recSet16E(*param_1,0,0xffffffff);
        recSet174(*param_1,0,0xffffffff);
        recSet14C(*param_1,0);
        recSet150(*param_1,0);
        recSet148(*param_1,0);
        recSet17B(*param_1,0);
        *(unsigned char *)(*param_1 + 0x1b4) = 0;
        rec16ASet(*param_1,0);
        FUN_004db048(*param_1,0,0);
        param_1[0x171] = 2000;
      }
      param_1[0x172] = 0;
      *temp_v30 = 0;
      sysMemClear(temp_v18,16000);
      param_1[0x173] = 0;
      temp_v15 = *(char *)((int)temp_v25 + 0x13) == '\0';
      temp_v2 = 0;
      if (!temp_v15) {
        temp_v2 = param_1[0x100];
      }
      if (!(temp_v15 || temp_v2 == 2)) {
        if (*temp_v25 >= 0) {
          temp_v2 = computeCountLimit();
          if (temp_v31[0x29] < temp_v2) {
            temp_v2 = temp_v31[0x29];
          }
          temp_v3 = temp_v2 - 10;
          if (temp_v3 >= 0x4d) {
            temp_v3 = 0x4c;
          }
          else if (temp_v3 < 1) {
            temp_v3 = 1;
            temp_v2 = 0xb;
          }
          temp_v4 = gameGetSlotRecord((int)*temp_v25);
          temp_v5 = bitsAt60Test(temp_v4,10);
          temp_v1 = 0;
          if (temp_v5 == 0) {
            do {
              if ((unsigned int)param_1[0x171] <= (unsigned int)param_1[0x172]) break;
              temp_v5 = FUN_002a4b28(temp_v1);
              if (temp_v5 != 0) {
                wordAt1B0Clear(*param_1);
                idListAppendEightNonzero(*param_1,0,temp_v4 + 0x34);
                param_1[param_1[0x172] * 2 + 0x4ee] =
                     (param_1[param_1[0x172] * 2 + 0x4ee] & 0x3fffffffU) | 0x40000000;
                temp_v5 = slotRecordFindById(temp_v1);
                if ((temp_v5 == 0) || (temp_v6 = bitsAt60Test(temp_v5,10), temp_v6 != 0)) {
                  gameDataCopySaveEntry(temp_v1,temp_v26);
                  if ('\0' < *(char *)((int)temp_v25 + 0x17)) {
                    temp_v12 = (unsigned int)temp_v26[0];
                    temp_v15 = SBORROW4(temp_v12,temp_v3);
                    temp_v5 = temp_v12 - temp_v3;
                    if (temp_v3 <= (int)temp_v12) {
                      temp_v15 = SBORROW4(temp_v2,temp_v12);
                      temp_v5 = temp_v2 - temp_v12;
                    }
                    if (temp_v5 < 0 != temp_v15) goto LAB_00286938;
                  }
                  param_1[param_1[0x172] * 2 + 0x4ef] = param_1[param_1[0x172] * 2 + 0x4ef] | 3;
                  idListAppendEightNonzero(*param_1,1,temp_v27);
                }
                else {
                  param_1[param_1[0x172] * 2 + 0x4ef] =
                       (param_1[param_1[0x172] * 2 + 0x4ef] & 0xfffffffcU) | 1;
                  idListAppendEightNonzero(*param_1,1,temp_v5 + 0x34);
                }
                temp_v5 = FUN_004db65c(*param_1,*(unsigned short *)(temp_v4 + 0x62),temp_v1,
                                     param_1 + param_1[0x172] * 2 + 0x4ee);
                if (temp_v5 != 0) {
                  *temp_v32 = param_1[0x172] + 1;
                }
              }
LAB_00286938:
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 0x4b1);
          }
          temp_v2 = param_1[0x174];
          while (temp_v2 < 0x1e) {
            svcSleepThread(10000000,0);
            temp_v2 = param_1[0x174];
          }
        }
        else {
          if (*(char *)(*param_1 + 0x148) != '\0') {
            param_1[0x171] = 2000;
          }
          if ('\0' < *(char *)((int)temp_v25 + 0x17)) {
            param_1[0x171] = 2000;
          }
          piVar9 = g_unite;
          temp_v2 = FUN_0026140c();
          temp_v16 = 1;
          temp_v12 = 0x100;
          asdMemoryAlloc(0x100,0x100,0,0xa00);
          temp_v3 = *piVar9;
          temp_v16 = temp_v12;
          fusionCollectEligibleDemonsByRace(temp_v3,temp_v12);
          temp_v4 = computeCountLimit();
          temp_v17 = piVar9[0x2429];
          if (temp_v4 <= temp_v17) {
            temp_v17 = temp_v4;
          }
          temp_v35 = temp_v17 - 10;
          temp_v15 = SBORROW4(temp_v35,0x4c);
          temp_v4 = temp_v17 - 0x56;
          if (temp_v35 >= 0x4d) {
            temp_v35 = 0x4c;
          }
          else {
            temp_v15 = SBORROW4(temp_v35,1);
            temp_v4 = temp_v17 - 0xb;
          }
          if (temp_v4 < 0 != temp_v15) {
            temp_v35 = 1;
            temp_v17 = 0xb;
          }
          temp_v19 = 0;
          if (0 < temp_v3) {
            temp_v36 = piVar9 + 0x173;
            temp_v37 = piVar9 + 0x172;
            do {
              if (((unsigned int)piVar9[0x171] <= (unsigned int)piVar9[0x172]) || ((char)piVar9[0x2424] == '\0'))
              break;
              temp_v24 = (unsigned int)*(unsigned short *)(temp_v16 + temp_v19 * 2);
              temp_v4 = slotRecordFindById(temp_v24);
              temp_v5 = temp_v19 + 1;
              if (temp_v5 < temp_v3) {
                temp_v38 = temp_v24 * 5;
                do {
                  if (((unsigned int)piVar9[0x171] <= (unsigned int)piVar9[0x172]) || ((char)piVar9[0x2424] == '\0')
                     ) break;
                  wordAt1B0Clear(*piVar9);
                  if ((temp_v4 == 0) || (temp_v6 = bitsAt60Test(temp_v4,10), temp_v6 != 0)) {
                    temp_v6 = gameDataBlocksGetSaveData();
                    temp_v6 = temp_v6 + temp_v38 * 0x10;
                    if (*(char *)(temp_v2 + 0x37) < '\x01') {
LAB_00286b78:
                      idListAppendEightNonzero(*piVar9,0,temp_v6 + 0x5ea0);
                      piVar8 = piVar9 + piVar9[0x172] * 2;
                      temp_v12 = piVar8[0x4ee] | 0xc0000000;
                      goto LAB_00286b9c;
                    }
                    temp_v12 = (unsigned int)*(unsigned short *)(temp_v6 + 0x5e84);
                    temp_v15 = SBORROW4(temp_v12,temp_v35);
                    temp_v0 = temp_v12 - temp_v35;
                    if (temp_v35 <= (int)temp_v12) {
                      temp_v15 = SBORROW4(temp_v17,temp_v12);
                      temp_v0 = temp_v17 - temp_v12;
                    }
                    if (temp_v0 < 0 == temp_v15) goto LAB_00286b78;
                  }
                  else {
                    idListAppendEightNonzero(*piVar9,0,temp_v4 + 0x34);
                    piVar8 = piVar9 + piVar9[0x172] * 2;
                    temp_v12 = (piVar8[0x4ee] & 0x3fffffffU) | 0x40000000;
LAB_00286b9c:
                    piVar8[0x4ee] = temp_v12;
                    temp_v12 = (unsigned int)*(unsigned short *)(temp_v16 + temp_v5 * 2);
                    temp_v22 = slotRecordFindById(temp_v12);
                    if ((temp_v22 == 0) || (temp_v6 = bitsAt60Test(temp_v22,10), temp_v6 != 0)) {
                      temp_v6 = gameDataBlocksGetSaveData();
                      temp_v6 = temp_v6 + temp_v12 * 0x50;
                      if ('\0' < *(char *)(temp_v2 + 0x37)) {
                        temp_v13 = (unsigned int)*(unsigned short *)(temp_v6 + 0x5e84);
                        temp_v15 = SBORROW4(temp_v13,temp_v35);
                        temp_v0 = temp_v13 - temp_v35;
                        if (temp_v35 <= (int)temp_v13) {
                          temp_v15 = SBORROW4(temp_v17,temp_v13);
                          temp_v0 = temp_v17 - temp_v13;
                        }
                        if (temp_v0 < 0 != temp_v15) goto LAB_00286c80;
                      }
                      idListAppendEightNonzero(*piVar9,1,temp_v6 + 0x5ea0);
                      temp_v6 = piVar9[0x172];
                      piVar9[temp_v6 * 2 + 0x4ee] = piVar9[temp_v6 * 2 + 0x4ee];
                      piVar9[temp_v6 * 2 + 0x4ef] = piVar9[temp_v6 * 2 + 0x4ef] | 3;
                    }
                    else {
                      idListAppendEightNonzero(*piVar9,1,temp_v22 + 0x34);
                      temp_v6 = piVar9[0x172];
                      piVar9[temp_v6 * 2 + 0x4ee] = piVar9[temp_v6 * 2 + 0x4ee];
                      piVar9[temp_v6 * 2 + 0x4ef] = (piVar9[temp_v6 * 2 + 0x4ef] & 0xfffffffcU) | 1;
                    }
                    temp_v6 = FUN_004db65c(*piVar9,temp_v24,temp_v12,piVar9 + piVar9[0x172] * 2 + 0x4ee)
                    ;
                    if (temp_v6 != 0) {
                      *temp_v37 = piVar9[0x172] + 1;
                    }
                  }
LAB_00286c80:
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < temp_v3);
              }
              *temp_v36 = piVar9[0x173] + 1;
              temp_v19 = temp_v19 + 1;
            } while (temp_v19 < temp_v3);
          }
          asdMemFree(temp_v16);
          temp_v2 = param_1[0x174];
          while (temp_v2 < 0x1e) {
            svcSleepThread(10000000,0);
            temp_v2 = param_1[0x174];
          }
        }
      }
      else {
        temp_v3 = 0;
        temp_v2 = gameSlotTableFindFree();
        if (0 < temp_v2) {
          do {
            if ((unsigned int)param_1[0x171] <= (unsigned int)param_1[0x172]) break;
            temp_v4 = temp_v3 + 1;
            temp_v2 = gameSlotTableFindFree();
            if (temp_v4 < temp_v2) {
              do {
                if ((unsigned int)param_1[0x171] <= (unsigned int)param_1[0x172]) break;
                temp_v2 = gameGetSlotTable();
                temp_v2 = gameGetSlotRecord((int)*(char *)(temp_v2 + temp_v3 + 0x1c88));
                temp_v5 = gameGetSlotTable();
                temp_v5 = gameGetSlotRecord((int)*(char *)(temp_v5 + temp_v4 + 0x1c88));
                if (temp_v2 == 0 || temp_v5 == 0) break;
                temp_v6 = bitsAt60Test(temp_v2,10);
                if ((temp_v6 == 0) && (temp_v6 = bitsAt60Test(temp_v5,10), temp_v6 == 0)) {
                  wordAt1B0Clear(*param_1);
                  idListAppendEightNonzero(*param_1,0,temp_v2 + 0x34);
                  idListAppendEightNonzero(*param_1,1,temp_v5 + 0x34);
                  temp_v6 = param_1[0x172];
                  temp_v12 = param_1[temp_v6 * 2 + 0x4ef];
                  temp_v13 = (param_1[temp_v6 * 2 + 0x4ee] & 0x3fffffffU) | 0x40000000;
                  param_1[temp_v6 * 2 + 0x4ee] = temp_v13;
                  temp_v6 = *temp_v32;
                  param_1[temp_v6 * 2 + 0x4ee] = temp_v13;
                  param_1[temp_v6 * 2 + 0x4ef] = (temp_v12 & 0xfffffffc) | 1;
                  temp_v2 = FUN_004db65c(*param_1,*(unsigned short *)(temp_v2 + 0x62),
                                       *(unsigned short *)(temp_v5 + 0x62),param_1 + *temp_v32 * 2 + 0x4ee
                                      );
                  if (temp_v2 != 0) {
                    *temp_v32 = param_1[0x172] + 1;
                  }
                }
                temp_v4 = temp_v4 + 1;
                temp_v2 = gameSlotTableFindFree();
              } while (temp_v4 < temp_v2);
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = gameSlotTableFindFree();
          } while (temp_v3 < temp_v2);
        }
      }
      if ((char)temp_v31[0x24] != '\0') {
        if ((((unsigned int)param_1[0x172] < (unsigned int)param_1[0x171]) && (param_1[0x172] != 0)) &&
           (param_1[0x100] == 2)) {
          temp_v3 = 0;
          temp_v16 = 1;
          temp_v2 = 0;
          piVar8 = (int *)0x100;
          asdMemoryAlloc();
          piVar18 = (int *)0x0;
          piVar9 = (int *)0x0;
          if (*temp_v32 != 0) {
            do {
              temp_v12 = (param_1[(int)piVar18 * 2 + 0x4ef] & 0x1ffffU) >> 2;
              FUN_00184310();
              temp_v4 = gameGetPlayerData();
              if ((int)(*(unsigned short *)(temp_v4 + 0x62) - 10) < (int)(unsigned int)*(unsigned short *)(temp_v12 + 6)) {
                temp_v4 = temp_v3 * 2;
                temp_v2 = param_1[(int)piVar18 * 2 + 0x4ef];
                temp_v3 = temp_v3 + 1;
                piVar8[temp_v4] = param_1[(int)piVar18 * 2 + 0x4ee];
                (piVar8 + temp_v4)[1] = temp_v2;
              }
              piVar18 = (int *)((int)piVar18 + 1);
              piVar9 = (int *)param_1[0x172];
            } while (piVar18 < piVar9);
          }
          temp_v15 = temp_v3 != 0;
          if (temp_v15) {
            temp_v2 = 0;
            piVar9 = piVar8;
          }
          param_1[0x172] = temp_v3;
          while (temp_v15) {
            temp_v4 = *piVar9;
            temp_v5 = piVar9[1];
            piVar9 = piVar9 + 2;
            temp_v3 = temp_v3 - 1;
            temp_v15 = temp_v3 != 0;
            param_1[temp_v2 * 2 + 0x4ee] = temp_v4;
            param_1[temp_v2 * 2 + 0x4ef] = temp_v5;
            temp_v2 = temp_v2 + 1;
          }
          asdMemFree(piVar8);
        }
        temp_v12 = param_1[0x172];
        if ((temp_v12 < (unsigned int)param_1[0x171]) && (temp_v12 != 0)) {
          if (param_1[0x100] != 2) {
            if (*(char *)((int)temp_v25 + 0x17) >= '\x01') {
              temp_v3 = 0;
              temp_v16 = 1;
              piVar8 = (int *)0x100;
              asdMemoryAlloc(0x100,0x100,0,param_1[0x172] << 3);
              piVar18 = (int *)0x0;
              piVar9 = (int *)0x0;
              temp_v2 = temp_v9;
              if (*temp_v32 != 0) {
                do {
                  temp_v12 = (param_1[(int)piVar18 * 2 + 0x4ef] & 0x1ffffU) >> 2;
                  FUN_00184310();
                  temp_v2 = gameGetPlayerData();
                  temp_v2 = *(unsigned short *)(temp_v2 + 0x62) - 10;
                  if (temp_v2 < (int)(unsigned int)*(unsigned short *)(temp_v12 + 6)) {
                    temp_v4 = temp_v3 * 2;
                    temp_v2 = param_1[(int)piVar18 * 2 + 0x4ee];
                    temp_v5 = param_1[(int)piVar18 * 2 + 0x4ef];
                    temp_v3 = temp_v3 + 1;
                    piVar8[temp_v4] = temp_v2;
                    (piVar8 + temp_v4)[1] = temp_v5;
                  }
                  piVar18 = (int *)((int)piVar18 + 1);
                  piVar9 = (int *)param_1[0x172];
                } while (piVar18 < piVar9);
              }
              temp_v15 = temp_v3 != 0;
              if (temp_v15) {
                temp_v2 = 0;
                piVar9 = piVar8;
              }
              param_1[0x172] = temp_v3;
              while (temp_v15) {
                temp_v4 = *piVar9;
                temp_v5 = piVar9[1];
                piVar9 = piVar9 + 2;
                temp_v3 = temp_v3 - 1;
                temp_v15 = temp_v3 != 0;
                param_1[temp_v2 * 2 + 0x4ee] = temp_v4;
                param_1[temp_v2 * 2 + 0x4ef] = temp_v5;
                temp_v2 = temp_v2 + 1;
              }
              asdMemFree(piVar8);
              qsort(temp_v18,param_1[0x172],8,&LAB_0034f784);
            }
            else {
              qsort(temp_v18,temp_v12,8,FUN_00337110);
            }
          }
          else {
            gameFlagSetValue(0x461,0);
            qsort(temp_v18,param_1[0x172],8,&LAB_0034f784);
            temp_v12 = 0;
            temp_v13 = 0;
            if (*temp_v32 != 0) {
              do {
                temp_v8 = temp_v12;
                if ((param_1[temp_v13 * 2 + 0x4ef] & 0x1fffcU) != 0) {
                  if ((int)temp_v12 >= 1) {
                    temp_v11 = temp_v12 & 1;
                    temp_v7 = temp_v11;
                  }
                  else {
                    temp_v11 = temp_v12;
                    temp_v7 = 0;
                  }
                  temp_v10 = 0;
                  if (0 < (int)temp_v11) {
                    do {
                      if (((param_1[temp_v13 * 2 + 0x4ef] ^ param_1[temp_v10 * 2 + 0x241f]) & 0x1ffffU)
                          >> 2 == 0) goto LAB_00287134;
                      temp_v10 = temp_v10 + 1;
                    } while ((int)temp_v10 < (int)temp_v7);
                  }
                  temp_v10 = temp_v7;
                  if ((int)temp_v7 < (int)temp_v12) {
                    do {
                      temp_v10 = temp_v7;
                      if ((((param_1[temp_v13 * 2 + 0x4ef] ^ param_1[temp_v7 * 2 + 0x241f]) & 0x1ffffU)
                           >> 2 == 0) ||
                         (temp_v10 = temp_v7 + 1,
                         ((param_1[temp_v13 * 2 + 0x4ef] ^ param_1[temp_v7 * 2 + 0x2421]) & 0x1ffffU)
                         >> 2 == 0)) break;
                      temp_v7 = temp_v7 + 2;
                      temp_v10 = temp_v7;
                    } while ((int)temp_v7 < (int)temp_v12);
                  }
LAB_00287134:
                  if ((int)temp_v12 <= (int)temp_v10) {
                    gameFlagSetValue(0x461,1);
                    temp_v2 = param_1[temp_v13 * 2 + 0x4ef];
                    temp_v8 = temp_v12 + 1;
                    param_1[temp_v12 * 2 + 0x241e] = param_1[temp_v13 * 2 + 0x4ee];
                    param_1[temp_v12 * 2 + 0x241f] = temp_v2;
                    if ((int)temp_v8 >= 3) break;
                  }
                }
                temp_v13 = temp_v13 + 1;
                temp_v12 = temp_v8;
              } while (temp_v13 < (unsigned int)param_1[0x172]);
            }
          }
          temp_v12 = 0;
          if (temp_v12 < (unsigned int)param_1[0x172]) {
            do {
              temp_v13 = 0;
              temp_v8 = *temp_v30;
              if (temp_v8 != 0) {
                temp_v11 = temp_v8 & 1;
              }
              else {
                temp_v11 = 0;
              }
              if ((temp_v8 != 0 && temp_v11 != 0) && -1 < (int)temp_v11) {
                do {
                  if ((unsigned int)*(unsigned short *)((int)param_1 + temp_v13 * 2 + 0x62a0) ==
                      (param_1[temp_v12 * 2 + 0x4ef] & 0x1ffffU) >> 2) goto LAB_0028727c;
                  temp_v13 = temp_v13 + 1;
                } while ((int)temp_v13 < (int)temp_v11);
              }
              temp_v13 = temp_v11;
              if (temp_v11 < temp_v8) {
                temp_v7 = (param_1[temp_v12 * 2 + 0x4ef] & 0x1ffffU) >> 2;
                do {
                  temp_v13 = temp_v11;
                  if ((*(unsigned short *)((int)param_1 + temp_v11 * 2 + 0x62a0) == temp_v7) ||
                     (temp_v13 = temp_v11 + 1, *(unsigned short *)((int)param_1 + temp_v11 * 2 + 0x62a2) == temp_v7
                     )) break;
                  temp_v11 = temp_v11 + 2;
                  temp_v13 = temp_v11;
                } while (temp_v11 < temp_v8);
              }
LAB_0028727c:
              if (temp_v8 <= temp_v13) {
                *(unsigned short *)((int)param_1 + temp_v13 * 2 + 0x62a0) =
                     (unsigned short)((unsigned int)(param_1[temp_v12 * 2 + 0x4ef] << 0xf) >> 0x11);
                *temp_v30 = *temp_v30 + 1;
              }
              temp_v12 = temp_v12 + 1;
            } while (temp_v12 < (unsigned int)param_1[0x172]);
          }
          if ('\0' < *(char *)((int)temp_v25 + 0x17)) {
            temp_v12 = *temp_v30;
            if (temp_v12 >= 11) {
              temp_v12 = 10;
            }
            *temp_v30 = temp_v12;
          }
          temp_v16 = 1;
          temp_v17 = 1;
          FUN_00203b40(temp_v28,*temp_v30,10,1);
          temp_v16 = 1;
          temp_v17 = 1;
          FUN_00203b40(temp_v29,*temp_v30,1,4);
          if (param_1[0x100] != 2) {
            FUN_0031f718((int)(short)temp_v34[0x28],0);
            FUN_002a7324(1);
          }
          piVar9 = g_unite;
          if ((char)g_unite[0x108] != '\x02') {
            temp_v2 = FUN_0026140c();
            pbVar19 = (unsigned char *)(temp_v2 + 0x11);
          }
          else {
            temp_v2 = FUN_0026140c();
            pbVar19 = (unsigned char *)(temp_v2 + 0x12);
          }
          temp_v14 = ~(*pbVar19 >> 7) & 1;
          if ((*pbVar19 & 0x7f) == 1) {
            if (temp_v14 != 0) {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,devilCompareByRankGradeAscending);
            }
            else {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,recordKindOrderCompare);
            }
          }
          if ((*pbVar19 & 0x7f) == 2) {
            if (temp_v14 != 0) {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,FUN_00270d74);
            }
            else {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,FUN_00321cc0);
            }
          }
          if ((*pbVar19 & 0x7f) == 0x31) {
            if (temp_v14 != 0) {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,FUN_002fe074);
            }
            else {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,FUN_00375b80);
            }
          }
          if ((*pbVar19 & 0x7f) == 3) {
            if (temp_v14 != 0) {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,FUN_002b2ca8);
            }
            else {
              qsort(piVar9 + 0x18a8,piVar9[0x19a6],2,btlDevilCompareValueKindAndOrder);
            }
          }
        }
        if ((param_1[0x100] == 5) && ((char)temp_v31[0x24] != '\0')) {
          if ((unsigned int)param_1[0x172] >= (unsigned int)param_1[0x171]) {
            temp_v31[0x28] = 0xd;
          }
          else {
            temp_v31[0x28] = 2;
          }
        }
        *(unsigned char *)(temp_v31 + 0x24) = 0;
      }
    }
    svcSleepThread(10000000,0);
  } while( 1 );
}

} /* extern "C" */
