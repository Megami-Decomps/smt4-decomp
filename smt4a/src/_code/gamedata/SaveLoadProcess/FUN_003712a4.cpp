/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003712a4` (_code @ 0x3712a4, 0x4a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameDataBlocksGetSaveData(void);
int asdMemoryAlloc(int, int, int, unsigned int, int);
int asdMemFree(unsigned int);
int wordPairCopy(unsigned int, int);
int FUN_00268250(...);
int FUN_002c9104(void);
int FUN_002f4374(void);
int FUN_00388068(void);
int gameFlagSetValue(int, int);
int FUN_0046e238(unsigned int);
int bitsAt60Clear(int, int);
int FUN_004d0c4c(void);
int FUN_004d0d70(void);
int rt_memcpy_w(unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned char g_saveLoadProcess; /* 0x57f6bc */
extern unsigned char DAT_0057f6bf; /* 0x57f6bf */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern int DAT_0057f6c4; /* 0x57f6c4 */

/* Supplied declaration required: gameDataBlocksGetSaveData. */
/* Supplied declaration required: asdMemoryAlloc. */
extern int jobGetWork(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: wordPairCopy. */
extern int gameGetSlotRecord(int);
extern int gameGetSlotTable(void);
extern int partyFindSlotById(unsigned int);
extern unsigned int configGetSettings(void);
extern int FUN_00229c9c(void);
extern unsigned int *FUN_00239294(void);
extern unsigned int gameDataBlocksGetTable(void);
/* Supplied declaration required: FUN_00268250. */
/* Supplied declaration required: FUN_002c9104. */
/* Supplied declaration required: FUN_002f4374. */
extern int byte1IsZero(void);
/* Supplied declaration required: FUN_00388068. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_0046e238. */
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: bitsAt60Clear. */
/* Supplied declaration required: FUN_004d0c4c. */
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003712a4(void)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  char temp_v10;
  unsigned int *puVar13;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  
  temp_v1 = jobGetWork();
  switch(*(unsigned int *)(temp_v1 + 4)) {
  case 6:
    *(unsigned int *)(temp_v1 + 0xc) = 0x2a7a4;
    temp_v6 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,*(unsigned int *)(temp_v1 + 0xc),1);
    *(unsigned int *)(temp_v1 + 8) = temp_v6;
    FUN_00268250();
    temp_v6 = 7;
    *(unsigned int *)(temp_v1 + 4) = temp_v6;
    break;
  case 7:
    temp_v4 = FUN_00229c9c();
    if (temp_v4 != 1) goto joined_r0x003716c0;
    temp_v4 = byte1IsZero();
    if (temp_v4 == 0) {
      temp_v4 = *(int *)(temp_v1 + 8);
      temp_v6 = gameDataBlocksGetTable();
      rt_memcpy_w(temp_v6,temp_v4,0x80);
      temp_v6 = configGetSettings();
      wordPairCopy(temp_v6,temp_v4 + 0x80);
      temp_v6 = gameDataBlocksGetSaveData();
      rt_memcpy_w(temp_v6,temp_v4 + 0x88,0x2a71c);
      FUN_002f4374();
      if (*(char *)(temp_v1 + 0x18) == '\0') {
        temp_v4 = gameFlagIsSet(0x595);
        if (temp_v4 == 0) {
          gameFlagSetValue(0x595,1);
          temp_v4 = 0;
          do {
            temp_v2 = partyFindSlotById(0);
            if (-1 < temp_v2) {
              FUN_004d0d70();
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          temp_v4 = 0;
          do {
            temp_v2 = gameGetSlotTable();
            temp_v10 = *(char *)(temp_v2 + temp_v4 + 0x1c88);
            temp_v3 = temp_v4 + 1;
            if (0 < 0x18 - temp_v3) {
              temp_v5 = 0;
              temp_v8 = 0x18 - temp_v3;
              do {
                temp_v14 = temp_v3 + temp_v5 + temp_v2;
                temp_v5 = temp_v5 + 1;
                if (temp_v10 == *(char *)(temp_v14 + 0x1c88)) {
                  *(unsigned char *)(temp_v14 + 0x1c88) = 0xff;
                }
                temp_v8 = temp_v8 - 1;
              } while (temp_v8 != 0);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          FUN_004d0c4c();
          temp_v4 = 0;
          do {
            temp_v2 = gameGetSlotRecord(temp_v4);
            if (((temp_v2 != 0) && (*(short *)(temp_v2 + 0x62) == 0)) &&
               (temp_v3 = bitsAt60Test(temp_v2,2), temp_v3 != 0)) {
              bitsAt60Clear(temp_v2,4);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          temp_v4 = 0;
          do {
            temp_v2 = gameGetSlotRecord(temp_v4);
            if ((temp_v2 != 0) && (temp_v2 = bitsAt60Test(temp_v2,2), temp_v2 != 0)) goto LAB_0037156c;
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x18);
          temp_v4 = gameDataBlocksGetSaveData();
          *(unsigned short *)(temp_v4 + 0x27e0c) = 0;
        }
LAB_0037156c:
        if (*(char *)(temp_v1 + 0x18) == '\0') {
          FUN_00388068();
          FUN_0046e238(g_aocSystem);
        }
      }
      temp_v0 = (char)*(unsigned int *)(temp_v1 + 0x10);
      temp_v10 = temp_v0 - '\x01';
      if (*(int *)(temp_v1 + 0x14) == 1) {
        temp_v10 = temp_v0;
      }
      if (*(char *)(temp_v1 + 0x18) == '\0') {
        temp_v4 = gameDataBlocksGetSaveData();
        *(char *)(temp_v4 + 3) = temp_v10;
        FUN_002c9104();
        if (*(char *)(temp_v1 + 0x18) == '\0') {
          asdMemFree(*(unsigned int *)(temp_v1 + 8));
          *(unsigned int *)(temp_v1 + 4) = 8;
          *(unsigned int *)(temp_v1 + 8) = 0;
          return 0;
        }
      }
      *(unsigned int *)(temp_v1 + 4) = 10;
      return 0;
    }
    temp_v6 = 0xb;
    *(unsigned int *)(temp_v1 + 4) = temp_v6;
    break;
  case 8:
    *(unsigned int *)(temp_v1 + 0xc) = 0x20;
    temp_v6 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,*(unsigned int *)(temp_v1 + 0xc),1);
    *(unsigned int *)(temp_v1 + 8) = temp_v6;
    if (*(char *)(temp_v1 + 0x18) == '\0') {
      FUN_00268250(3,0,0x62,temp_v6,*(unsigned int *)(temp_v1 + 0xc));
    }
    *(unsigned int *)(temp_v1 + 4) = 9;
    break;
  case 9:
    temp_v4 = FUN_00229c9c();
    if (temp_v4 == 1) {
      temp_v4 = byte1IsZero();
      if (temp_v4 == 0) {
        puVar13 = *(unsigned int **)(temp_v1 + 8);
        puVar6 = (unsigned int *)FUN_00239294();
        temp_v6 = *puVar13;
        temp_v7 = puVar13[1];
        temp_v9 = puVar13[2];
        temp_v15 = puVar13[3];
        temp_v11 = puVar13[4];
        temp_v12 = puVar13[5];
        temp_v13 = puVar13[6];
        puVar6[7] = puVar13[7];
        *puVar6 = temp_v6;
        puVar6[1] = temp_v7;
        puVar6[2] = temp_v9;
        puVar6[3] = temp_v15;
        puVar6[4] = temp_v11;
        puVar6[5] = temp_v12;
        puVar6[6] = temp_v13;
        *(unsigned int *)(temp_v1 + 4) = 10;
        return 0;
      }
      *(unsigned int *)(temp_v1 + 4) = 10;
      return 0;
    }
joined_r0x003716c0:
    DAT_0057f6c4 = DAT_0057f6c4 + 1;
    if (DAT_0057f6c4 >= 8) {
      DAT_0057f6c2 = DAT_0057f6c2 + 1;
      if (DAT_0057f6c2 >= 3) {
        DAT_0057f6c2 = 0;
      }
      DAT_0057f6c4 = 0;
    }
    break;
  case 10:
    DAT_0057f6bf = 1;
    g_saveLoadProcess = 1;
    return 0xffffffff;
  case 0xb:
    DAT_0057f6bf = 0;
    g_saveLoadProcess = 1;
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
