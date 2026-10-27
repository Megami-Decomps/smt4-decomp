/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037be64` (_code @ 0x37be64, 0x5b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "code/Code0019.h"

extern "C" {

int recordGetScaledMaximum(...);
int FUN_00184310(void);
int slotRecordFindById(...);
int gameDataCopySaveEntry(...);
int FUN_002e59f8(int, unsigned int [11], int);
int rt_aeabi_memclr(int, int);
int FUN_0031654c(unsigned int, int);
int gameSavedItemClearCounter(int);
int FUN_0036fcd0(unsigned int, int);
int partyRefreshSlotValues(void);
int recordSetClampedCurrent(int, unsigned int);

/* stack frame of void: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp32; /* 0x32: local_32 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern int gameDataBlocksGetSaveData(void);
extern int randRange(unsigned int);
/* Supplied declaration required: recordGetScaledMaximum. */
/* Supplied declaration required: FUN_00184310. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: slotRecordFindById. */
/* Supplied declaration required: gameDataCopySaveEntry. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_0031654c. */
/* Supplied declaration required: gameSavedItemClearCounter. */
/* Supplied declaration required: FUN_0036fcd0. */
/* Supplied declaration required: partyRefreshSlotValues. */
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: recordSetClampedCurrent. */


void FUN_0037be64(void)

{
/* irregular: 7 goto(s); 12 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  short *psVar13;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned short temp_v15;
  unsigned int temp_v16 [11];
  unsigned int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned char temp_v20 [78];
  unsigned short temp_v21;
  
  temp_v6 = gameDataBlocksGetSaveData();
  FUN_002e59f8(temp_v6 + 0x28310,temp_v16,0x28);
  rt_aeabi_memclr(temp_v6 + 0x28310,0x50);
  rt_aeabi_memclr(temp_v6 + 0x28360,0x30);
  gameFlagSetValue(0x4c7, 1, 1);
  temp_v19 = temp_v6 + 0x28300;
  temp_v15 = 0;
  do {
    temp_v15 = temp_v15 + 1;
    temp_v7 = (unsigned int)temp_v15;
    gameDataCopySaveEntry(temp_v7,temp_v20);
    temp_v0 = temp_v21;
    if (((temp_v21 != 0) && (FUN_00184310(), temp_v7 != 0)) && ((*(unsigned short *)(temp_v7 + 10) & 1) != 0)) {
      temp_v13 = 0;
LAB_0037bf0c:
      temp_v8 = temp_v6 + temp_v13 * 4;
      temp_v3 = *(unsigned short *)(temp_v8 + 0x28312) & 0x3ff;
      if ((temp_v0 <= temp_v3) && ((temp_v3 != temp_v0 || (temp_v9 = randRange(1), temp_v9 == 0))))
      goto LAB_0037c014;
      if (temp_v13 >= 9) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = (9U - temp_v13) & 1;
        if (temp_v7 == 1) {
          *(unsigned short *)(temp_v19 + 0x34) = *(unsigned short *)(temp_v19 + 0x30);
          *(unsigned short *)(temp_v19 + 0x36) =
               (*(unsigned short *)(temp_v19 + 0x36) & 0xfc00) | (*(unsigned short *)(temp_v19 + 0x32) & 0x3ff);
        }
      }
      for (temp_v9 = 8 - temp_v7; temp_v13 - 1 < temp_v9; temp_v9 = temp_v9 - 2) {
        temp_v10 = temp_v6 + temp_v9 * 4;
        *(unsigned short *)(temp_v10 + 0x28314) = *(unsigned short *)(temp_v10 + 0x28310);
        *(unsigned short *)(temp_v10 + 0x28316) =
             (*(unsigned short *)(temp_v10 + 0x28316) & 0xfc00) | (*(unsigned short *)(temp_v10 + 0x28312) & 0x3ff);
        *(unsigned short *)(temp_v10 + 0x28310) = *(unsigned short *)(temp_v10 + 0x2830c);
        *(unsigned short *)(temp_v10 + 0x28312) =
             (*(unsigned short *)(temp_v10 + 0x28312) & 0xfc00) | (*(unsigned short *)(temp_v10 + 0x2830e) & 0x3ff);
      }
      *(unsigned short *)(temp_v8 + 0x28312) =
           (*(unsigned short *)(temp_v6 + temp_v13 * 4 + 0x28312) & 0xfc00) | (temp_v0 & 0x3ff);
      *(unsigned short *)(temp_v8 + 0x28310) = temp_v15;
    }
LAB_0037c020:;
  } while (temp_v15 < 0x500);
  temp_v13 = 0;
  temp_v15 = 0;
  temp_v8 = 0;
  temp_v9 = 10;
  do {
    temp_v10 = temp_v6 + temp_v8 * 4;
    temp_v0 = *(unsigned short *)(temp_v10 + 0x28312);
    temp_v3 = temp_v0 & 0x3ff;
    if (temp_v3 != temp_v15) {
      temp_v13 = temp_v8 + 1;
      temp_v15 = temp_v0 & 0x3ff;
    }
    temp_v9 = temp_v9 - 1;
    temp_v8 = temp_v8 + 1;
    *(unsigned short *)(temp_v10 + 0x28312) = temp_v3 | (unsigned short)(temp_v13 << 10);
  } while (temp_v9 != 0);
  temp_v11 = dataTableGet(10,0);
  temp_v18 = dataTableGetEntries();
  temp_v7 = dataTableGetCount(temp_v11);
  temp_v14 = 0;
  if (temp_v7 != 0) {
    do {
      psVar13 = (short *)(temp_v18 + temp_v14 * 8);
      temp_v1 = psVar13[1];
      temp_v2 = *psVar13;
      if (temp_v1 != 0 && temp_v2 != 0) {
        temp_v11 = FUN_0019acdc(temp_v2, 0);
        temp_v4 = FUN_0036fcd0(temp_v11,0);
        if (temp_v4 != temp_v2) {
          temp_v11 = FUN_0019acdc(temp_v2, 0);
          temp_v5 = FUN_0036fcd0(temp_v11,0);
          temp_v11 = FUN_0019e52c(temp_v5);
          gameDataCopySaveEntry(temp_v1,temp_v20);
          FUN_0031654c(temp_v11,temp_v21);
          gameSavedItemClearCounter(temp_v1);
        }
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < temp_v7);
  }
  temp_v14 = 0;
  if (temp_v7 != 0) {
    do {
      psVar13 = (short *)(temp_v18 + temp_v14 * 8);
      temp_v1 = psVar13[1];
      temp_v2 = *psVar13;
      if (temp_v1 != 0 && temp_v2 != 0) {
        temp_v11 = FUN_0019acdc(temp_v2, 0);
        temp_v4 = FUN_0036fcd0(temp_v11,0);
        if (temp_v4 == temp_v2) {
          temp_v17 = FUN_0019acdc(temp_v2, 0);
          temp_v17 = temp_v17 & 0xffff;
          gameDataCopySaveEntry(temp_v1,temp_v20);
          temp_v13 = 0;
LAB_0037c1b4:
          if (temp_v21 <= (*(unsigned short *)(temp_v6 + temp_v13 * 4 + 0x28362) & 0x3ff)) goto LAB_0037c2a4;
          if (temp_v13 >= 6) {
            temp_v12 = 0;
          }
          else {
            temp_v12 = (6U - temp_v13) & 1;
            if (temp_v12 == 1) {
              *(unsigned short *)(temp_v19 + 0x78) = *(unsigned short *)(temp_v19 + 0x74);
              *(unsigned short *)(temp_v19 + 0x7a) =
                   (*(unsigned short *)(temp_v19 + 0x7a) & 0xfc00) | (*(unsigned short *)(temp_v19 + 0x76) & 0x3ff);
            }
          }
          for (temp_v8 = 5 - temp_v12; temp_v13 - 1 < temp_v8; temp_v8 = temp_v8 - 2) {
            temp_v9 = temp_v6 + temp_v8 * 4;
            *(unsigned short *)(temp_v9 + 0x28364) = *(unsigned short *)(temp_v9 + 0x28360);
            *(unsigned short *)(temp_v9 + 0x28366) =
                 (*(unsigned short *)(temp_v9 + 0x28366) & 0xfc00) | (*(unsigned short *)(temp_v9 + 0x28362) & 0x3ff);
            *(unsigned short *)(temp_v9 + 0x28360) = *(unsigned short *)(temp_v9 + 0x2835c);
            *(unsigned short *)(temp_v9 + 0x28362) =
                 (*(unsigned short *)(temp_v9 + 0x28362) & 0xfc00) | (*(unsigned short *)(temp_v9 + 0x2835e) & 0x3ff);
          }
          temp_v13 = temp_v6 + temp_v13 * 4;
          *(short *)(temp_v13 + 0x28360) = (short)temp_v17;
          *(unsigned short *)(temp_v13 + 0x28362) =
               (*(unsigned short *)(temp_v13 + 0x28362) & 0xfc00) | (temp_v21 & 0x3ff);
        }
      }
LAB_0037c2b0:
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < temp_v7);
  }
  temp_v13 = 0;
  temp_v15 = 0;
  temp_v8 = 0;
  temp_v9 = 7;
  do {
    temp_v10 = temp_v6 + temp_v8 * 4;
    temp_v0 = *(unsigned short *)(temp_v10 + 0x28362);
    temp_v3 = temp_v0 & 0x3ff;
    if (temp_v3 != temp_v15) {
      temp_v13 = temp_v8 + 1;
      temp_v15 = temp_v0 & 0x3ff;
    }
    temp_v9 = temp_v9 - 1;
    temp_v8 = temp_v8 + 1;
    *(unsigned short *)(temp_v10 + 0x28362) = temp_v3 | (unsigned short)(temp_v13 << 10);
  } while (temp_v9 != 0);
  temp_v13 = 0;
  do {
    if ((((temp_v16[temp_v13] & 0xffff) != 0) && (temp_v8 = slotRecordFindById(), temp_v8 != 0)) &&
       (temp_v9 = recordGetScaledMaximum(), temp_v9 < *(short *)(temp_v8 + 0x2a))) {
      temp_v11 = recordGetScaledMaximum(temp_v8);
      recordSetClampedCurrent(temp_v8,temp_v11);
    }
    temp_v13 = temp_v13 + 1;
  } while (temp_v13 < 10);
  temp_v13 = 0;
  do {
    temp_v7 = *(unsigned int *)(temp_v6 + temp_v13 * 4 + 0x28310) & 0xffff;
    if ((temp_v7 != 0) && (temp_v8 = slotRecordFindById(temp_v7), temp_v8 != 0)) {
      temp_v9 = 0;
      do {
        if (((temp_v16[temp_v9] & 0xffff) != 0) && ((temp_v16[temp_v9] & 0xffff) == temp_v7))
        goto LAB_0037c3fc;
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < 10);
      temp_v9 = bitsAt60Test(temp_v8,1);
      if (temp_v9 == 0) {
        temp_v9 = recordGetScaledMaximum(temp_v8);
        temp_v1 = ((short)temp_v9 - *(short *)(temp_v8 + 0xe)) + *(short *)(temp_v8 + 0x2a);
        if (temp_v1 <= temp_v9) {
          temp_v9 = (int)temp_v1;
        }
        *(short *)(temp_v8 + 0x2a) = temp_v1;
        *(short *)(temp_v8 + 0x2a) = (short)temp_v9;
      }
    }
LAB_0037c3fc:
    temp_v13 = temp_v13 + 1;
    if (9 < temp_v13) {
      partyRefreshSlotValues();
      return;
    }
  } while( 1 );
LAB_0037c014:
  temp_v13 = temp_v13 + 1;
  if (9 < temp_v13) goto LAB_0037c020;
  goto LAB_0037bf0c;
LAB_0037c2a4:
  temp_v13 = temp_v13 + 1;
  if (6 < temp_v13) goto LAB_0037c2b0;
  goto LAB_0037c1b4;
}

} /* extern "C" */
