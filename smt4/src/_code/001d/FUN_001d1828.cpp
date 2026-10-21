/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1828` (_code @ 0x1d1828, 0x360 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00269bc4(unsigned int);
int FUN_0029b130(short [20], unsigned int, int);
int FUN_0029c528(unsigned int, int, int, int, int);
int FUN_0029c6b0(int);
int FUN_0029cde0(int, int);
int FUN_0029dc74(unsigned int, int);
int gameGetSlotTable(void);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern int g_partyPanel; /* 0x43dcf0 */

extern int FUN_002624b8(unsigned int, int, int);
/* Supplied declaration required: FUN_00269bc4. */
/* Supplied declaration required: FUN_0029b130. */
/* Supplied declaration required: FUN_0029c528. */
/* Supplied declaration required: FUN_0029c6b0. */
extern int flagCountUnlockedSlots(int);
/* Supplied declaration required: FUN_0029cde0. */
/* Supplied declaration required: FUN_0029dc74. */
extern int gameGetUnitRecord(int);
/* Supplied declaration required: gameGetSlotTable. */
extern int gameCountUnits(void);
extern int partyMemberFindById(unsigned int);


unsigned int FUN_001d1828(void)

{
/* irregular: 2 goto(s); 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short *psVar7;
  short temp_v6;
  int temp_v7;
  short *psVar10;
  short temp_v8 [20];
  int temp_v9 [5];
  
  temp_v1 = g_partyPanel;
  gameGetSlotTable();
  temp_v7 = 0;
  temp_v9[0] = 0;
  temp_v9[1] = 0;
  do {
    temp_v2 = partyMemberFindById(*(unsigned int *)(temp_v1 + temp_v7 * 4 + 0xb34) & 0xffff);
    temp_v9[temp_v7] = temp_v2;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 2);
  temp_v7 = 0;
  if (temp_v9[0] != 0) {
    temp_v7 = temp_v9[1];
  }
  if (temp_v9[0] != 0 && temp_v7 != 0) {
    FUN_00269bc4(*(unsigned int *)(temp_v1 + 0x115c));
    temp_v7 = FUN_002624b8(*(unsigned int *)(temp_v1 + 0x115c),temp_v9[0],temp_v9[1]);
    if (temp_v7 != 0) {
      FUN_0029dc74((*(unsigned int *)(temp_v1 + 0xb4c) & 0x1ffff) >> 2,temp_v1 + 0xb50);
      FUN_0029c528(*(unsigned int *)(temp_v1 + 0x115c),temp_v9[0],temp_v9[1],0,temp_v1 + 0xb50);
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
      temp_v3 = *(unsigned int *)(temp_v1 + 0xb48);
      temp_v2 = 0;
      temp_v7 = gameCountUnits();
      if (0 < temp_v7) {
        do {
          temp_v7 = gameGetSlotTable();
          temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v7 + temp_v2 + 0x90f0));
          if ((unsigned int)*(unsigned short *)(temp_v7 + 0x46) == (temp_v3 & 0x7fff)) goto LAB_001d1974;
          temp_v2 = temp_v2 + 1;
          temp_v7 = gameCountUnits();
        } while (temp_v2 < temp_v7);
      }
      temp_v7 = 0;
LAB_001d1974:
      temp_v6 = *(short *)(temp_v7 + 0x34);
      if (temp_v6 != 0) {
        temp_v8[0] = temp_v6;
      }
      temp_v3 = (unsigned int)(temp_v6 != 0);
      temp_v6 = *(short *)(temp_v7 + 0x36);
      temp_v2 = 3;
      psVar7 = (short *)(temp_v7 + 0x34);
      do {
        temp_v0 = psVar7[2];
        if (temp_v6 != 0) {
          psVar10 = temp_v8 + temp_v3;
          temp_v3 = temp_v3 + 1;
          *psVar10 = temp_v6;
        }
        temp_v6 = psVar7[3];
        if (temp_v0 != 0) {
          psVar10 = temp_v8 + temp_v3;
          temp_v3 = temp_v3 + 1;
          *psVar10 = temp_v0;
        }
        temp_v2 = temp_v2 - 1;
        psVar7 = psVar7 + 2;
      } while (temp_v2 != 0);
      if (*(short *)(temp_v7 + 0x42) != 0) {
        psVar7 = temp_v8 + temp_v3;
        temp_v3 = temp_v3 + 1;
        *psVar7 = *(short *)(temp_v7 + 0x42);
      }
      temp_v4 = *(unsigned int *)(temp_v1 + 0xb48);
      temp_v2 = 0;
      temp_v7 = gameCountUnits();
      if (0 < temp_v7) {
        do {
          temp_v7 = gameGetSlotTable();
          temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v7 + temp_v2 + 0x90f0));
          if ((unsigned int)*(unsigned short *)(temp_v7 + 0x46) == (temp_v4 & 0x3fffffff) >> 0xf) goto LAB_001d1a4c;
          temp_v2 = temp_v2 + 1;
          temp_v7 = gameCountUnits();
        } while (temp_v2 < temp_v7);
      }
      temp_v7 = 0;
LAB_001d1a4c:
      if (*(short *)(temp_v7 + 0x34) != 0) {
        psVar7 = temp_v8 + temp_v3;
        temp_v3 = temp_v3 + 1;
        *psVar7 = *(short *)(temp_v7 + 0x34);
      }
      temp_v2 = 3;
      temp_v6 = *(short *)(temp_v7 + 0x36);
      psVar7 = (short *)(temp_v7 + 0x34);
      do {
        temp_v0 = psVar7[2];
        if (temp_v6 != 0) {
          psVar10 = temp_v8 + temp_v3;
          temp_v3 = temp_v3 + 1;
          *psVar10 = temp_v6;
        }
        temp_v6 = psVar7[3];
        if (temp_v0 != 0) {
          psVar10 = temp_v8 + temp_v3;
          temp_v3 = temp_v3 + 1;
          *psVar10 = temp_v0;
        }
        temp_v2 = temp_v2 - 1;
        psVar7 = psVar7 + 2;
      } while (temp_v2 != 0);
      if (*(short *)(temp_v7 + 0x42) != 0) {
        psVar7 = temp_v8 + temp_v3;
        temp_v3 = temp_v3 + 1;
        *psVar7 = *(short *)(temp_v7 + 0x42);
      }
      FUN_0029b130(temp_v8,temp_v3,0);
      temp_v7 = flagCountUnlockedSlots(temp_v1 + 0xb50);
      temp_v2 = 0;
      do {
        if (((temp_v8[temp_v2] != 0) &&
            (temp_v5 = temp_v1 + 0xb84, FUN_0029cde0(temp_v1 + 0xb84,temp_v7), temp_v5 == 0)) &&
           (temp_v5 = 0, 0 < temp_v7)) {
          do {
            if (*(short *)(temp_v1 + temp_v5 * 2 + 0xb84) == 0) {
              *(short *)(temp_v1 + temp_v5 * 2 + 0xb84) = temp_v8[temp_v2];
              break;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v7);
        }
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 8) {
          FUN_0029c6b0(temp_v1 + 0xb50);
          return 1;
        }
      } while( 1 );
    }
  }
  return 0;
}

} /* extern "C" */
