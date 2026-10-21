/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270498` (_code @ 0x270498, 0x33c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetSlotTable(void);
int FUN_0032fea0(int, int);
int unitRecordBuild(unsigned int);
int FUN_0034c340(short [16], int, int, int);
int findSkillMetadataById(void);
int FUN_004bcd90(int);
int FUN_004da6e0(unsigned int, int, int, int, int);
int wordAt1B0Clear(unsigned int);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int g_partyPanel; /* 0x57f268 */

extern int slotRecordFindById(unsigned int);
extern int gameGetSlotRecord(int);
/* Supplied declaration required: gameGetSlotTable. */
extern int gameSlotTableFindFree(void);
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_0034c340. */
/* Supplied declaration required: findSkillMetadataById. */
/* Supplied declaration required: FUN_004bcd90. */
extern int getUnlockedSlotCount(int);
/* Supplied declaration required: FUN_004da6e0. */
extern int FUN_004db650(unsigned int, int, int, int);
/* Supplied declaration required: wordAt1B0Clear. */
extern int FUN_004dc3a8(void);


unsigned int FUN_00270498(void)

{
/* irregular: 2 goto(s); 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [2];
  short temp_v8 [16];
  
  temp_v0 = g_partyPanel;
  gameGetSlotTable();
  temp_v3 = 0;
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  do {
    temp_v1 = slotRecordFindById(*(unsigned int *)(temp_v0 + temp_v3 * 4 + 0xe7c) & 0xffff);
    temp_v7[temp_v3] = temp_v1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 2);
  temp_v3 = 0;
  if (temp_v7[0] != 0) {
    temp_v3 = temp_v7[1];
  }
  if (temp_v7[0] != 0 && temp_v3 != 0) {
    wordAt1B0Clear(*(unsigned int *)(temp_v0 + 0x107c));
    if (*(char *)(temp_v0 + 0x9b4) != '\x12') {
      temp_v3 = FUN_004dc3a8();
    }
    else {
      temp_v3 = FUN_004db650(*(unsigned int *)(temp_v0 + 0x107c),temp_v7[0],temp_v7[1],temp_v0 + 0xe90);
    }
    if (temp_v3 != 0) {
      temp_v1 = temp_v0 + 0xe98;
      unitRecordBuild((*(unsigned int *)(temp_v0 + 0xe94) & 0x1ffff) >> 2);
      FUN_004da6e0(*(unsigned int *)(temp_v0 + 0x107c),temp_v7[0],temp_v7[1],0,temp_v1);
      temp_v8[0] = 0;
      temp_v8[1] = 0;
      temp_v8[2] = 0;
      temp_v8[3] = 0;
      temp_v8[4] = 0;
      temp_v8[5] = 0;
      temp_v8[6] = 0;
      temp_v8[7] = 0;
      temp_v8[8] = 0;
      temp_v8[9] = 0;
      temp_v8[10] = 0;
      temp_v8[0xb] = 0;
      temp_v8[0xc] = 0;
      temp_v8[0xd] = 0;
      temp_v8[0xe] = 0;
      temp_v8[0xf] = 0;
      temp_v2 = *(unsigned int *)(temp_v0 + 0xe90);
      temp_v5 = 0;
      temp_v4 = 0;
      temp_v3 = gameSlotTableFindFree();
      if (0 < temp_v3) {
        do {
          temp_v3 = gameGetSlotTable();
          temp_v3 = gameGetSlotRecord((int)*(char *)(temp_v3 + temp_v4 + 0x1c88));
          if ((unsigned int)*(unsigned short *)(temp_v3 + 0x62) == (temp_v2 & 0x7fff)) goto LAB_002705ec;
          temp_v4 = temp_v4 + 1;
          temp_v3 = gameSlotTableFindFree();
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = 0;
LAB_002705ec:
      temp_v4 = 0;
      do {
        temp_v6 = temp_v3 + temp_v4 * 2;
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0x34);
        if ((temp_v2 != 0) && ((findSkillMetadataById(), temp_v2 == 0 || ((*(unsigned char *)(temp_v2 + 3) & 0x20) != 0))))
        {
          psVar4 = temp_v8 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *psVar4 = *(short *)(temp_v6 + 0x34);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      temp_v2 = *(unsigned int *)(temp_v0 + 0xe90);
      temp_v4 = 0;
      temp_v3 = gameSlotTableFindFree();
      if (0 < temp_v3) {
        do {
          temp_v3 = gameGetSlotTable();
          temp_v3 = gameGetSlotRecord((int)*(char *)(temp_v3 + temp_v4 + 0x1c88));
          if ((unsigned int)*(unsigned short *)(temp_v3 + 0x62) == (temp_v2 & 0x3fffffff) >> 0xf) goto LAB_0027069c;
          temp_v4 = temp_v4 + 1;
          temp_v3 = gameSlotTableFindFree();
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = 0;
LAB_0027069c:
      temp_v4 = 0;
      do {
        temp_v6 = temp_v3 + temp_v4 * 2;
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v6 + 0x34);
        if ((temp_v2 != 0) && ((findSkillMetadataById(), temp_v2 == 0 || ((*(unsigned char *)(temp_v2 + 3) & 0x20) != 0))))
        {
          psVar4 = temp_v8 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *psVar4 = *(short *)(temp_v6 + 0x34);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
      if (*(char *)(temp_v0 + 0x9b4) == '\n') {
        FUN_0034c340(temp_v8,temp_v5,temp_v0 + 0xe90,0);
        temp_v3 = getUnlockedSlotCount(temp_v1);
        temp_v4 = 0;
        do {
          if (((temp_v8[temp_v4] != 0) &&
              (temp_v5 = temp_v0 + 0xecc, FUN_0032fea0(temp_v0 + 0xecc,temp_v3), temp_v5 == 0)) &&
             (temp_v5 = 0, 0 < temp_v3)) {
            do {
              if (*(short *)(temp_v0 + temp_v5 * 2 + 0xecc) == 0) {
                *(short *)(temp_v0 + temp_v5 * 2 + 0xecc) = temp_v8[temp_v4];
                break;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < temp_v3);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 8);
      }
      FUN_004bcd90(temp_v1);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
