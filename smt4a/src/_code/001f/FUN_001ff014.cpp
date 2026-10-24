/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ff014` (_code @ 0x1ff014, 0x704 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6894(...);
int FUN_00408184(...);

int qsort(...);
int FUN_00184310(void);
int slotRecordFindById(...);
int partyFindSlotById(int);
int FUN_002a5e7c(...);
int arrayContainsU16(...);
int FUN_0035ad50(unsigned int, unsigned char [98]);
int findSkillMetadataById(void);
int FUN_004bcd90(...);
int FUN_004bd17c(...);
int dispatchIfFound(unsigned int, unsigned int, int);
int bitsAt60Clear(int, int);
int FUN_004d0d70(void);
int FUN_004da6e0(...);
int FUN_004db914(int, int, unsigned int, int *);
int rt_memcpy_w(...);

/* stack frame of param_1: 23 slot(s), 86 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned short sp10E; /* 0x10e: local_10e */
    unsigned short sp23A; /* 0x23a: local_23a */
    unsigned short sp366; /* 0x366: local_366 */
    unsigned int sp3CC; /* 0x3cc: local_3cc */
    unsigned int sp3D0; /* 0x3d0: local_3d0 */
    unsigned int sp3D4; /* 0x3d4: local_3d4 */
    unsigned int sp3D8; /* 0x3d8: local_3d8 */
    unsigned int sp3DC; /* 0x3dc: local_3dc */
    unsigned int sp3E0; /* 0x3e0: local_3e0 */
    unsigned int sp3E4; /* 0x3e4: local_3e4 */
    unsigned int sp3E8; /* 0x3e8: local_3e8 */
    unsigned int sp3EC; /* 0x3ec: local_3ec */
    unsigned int sp3F0; /* 0x3f0: local_3f0 */
    unsigned int sp3F4; /* 0x3f4: local_3f4 */
    unsigned int sp3F8; /* 0x3f8: local_3f8 */
    unsigned int sp3FC; /* 0x3fc: local_3fc */
    unsigned int sp400; /* 0x400: local_400 */
    unsigned int sp404; /* 0x404: local_404 */
    unsigned int sp408; /* 0x408: local_408 */
    unsigned int sp410; /* 0x410: local_410 */
} param_1_stack;

extern int uiCompareMaskedRecordRankDescending(...); /* 0x34f3b4 */
extern int *g_unite; /* 0x57f290 */

/* Supplied declaration required: qsort. */
extern int randRange(unsigned int);
extern unsigned short recordGetScaledMaximum(int);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: slotRecordFindById. */
extern int gameGetSlotRecord(void);
/* Supplied declaration required: partyFindSlotById. */
extern int FUN_002a4b28(unsigned int);
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a6894. */
/* Supplied declaration required: arrayContainsU16. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: findSkillMetadataById. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd17c. */
extern int getUnlockedSlotCount(int);
/* Supplied declaration required: dispatchIfFound. */
/* Supplied declaration required: bitsAt60Clear. */
extern unsigned int FUN_004d0cd4(void);
/* Supplied declaration required: FUN_004d0d70. */
extern int FUN_004da520(int, unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_004da6e0. */
/* Supplied declaration required: FUN_004db914. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char FUN_001ff014(int param_1)

{
/* irregular: 19 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar10;
  int temp_v7;
  int temp_v8;
  short *psVar13;
  int temp_v9;
  unsigned char temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned char temp_v30 [98];
  unsigned short temp_v31;
  unsigned char temp_v32 [98];
  unsigned short temp_v33;
  unsigned char temp_v34 [98];
  unsigned short temp_v35;
  unsigned int temp_v36;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int temp_v37;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned char *temp_v38;
  
  piVar1 = g_unite;
  temp_v10 = 0;
  temp_v5 = (unsigned int)g_unite[param_1 * 2 + 0x4ee] >> 0x1e;
  temp_v2 = g_unite[param_1 * 2 + 0x4ee] & 0x7fff;
  if (temp_v5 != 1) {
    if (temp_v5 == 3) {
      FUN_0035ad50(temp_v2,temp_v32);
    }
  }
  else {
    temp_v3 = slotRecordFindById(temp_v2);
    rt_memcpy_w(temp_v32,temp_v3,300);
  }
  temp_v5 = (piVar1[param_1 * 2 + 0x4ee] & 0x3fffffffU) >> 0xf;
  temp_v38 = temp_v32;
  if ((piVar1[param_1 * 2 + 0x4ef] & 3U) != 1) {
    if ((piVar1[param_1 * 2 + 0x4ef] & 3U) == 3) {
      FUN_0035ad50(temp_v5,temp_v30);
    }
  }
  else {
    temp_v3 = slotRecordFindById(temp_v5);
    rt_memcpy_w(temp_v30,temp_v3,300);
  }
  temp_v5 = (piVar1[param_1 * 2 + 0x4ef] & 0x1ffffU) >> 2;
  temp_v1 = FUN_004da520(*piVar1,temp_v38,temp_v30);
  if (temp_v1 != 0) {
    temp_v1 = *piVar1;
    FUN_004db914(temp_v1,piVar1[param_1 * 2 + 0x4ee] & 0x7fff,
                 (piVar1[param_1 * 2 + 0x4ee] & 0x3fffffffU) >> 0xf,piVar1 + param_1 * 2 + 0x4ee);
    temp_v10 = temp_v1 != 0;
    if (!temp_v10) {
      piVar1[param_1 * 2 + 0x4ef] = (temp_v5 << 2) | (piVar1[param_1 * 2 + 0x4ef] & 0xfffe0003U);
    }
  }
  temp_v2 = partyFindSlotById(temp_v33);
  if ((temp_v2 < 0x18) && (temp_v1 = gameGetSlotRecord(), temp_v1 != 0)) {
    bitsAt60Clear(temp_v1,4);
  }
  temp_v2 = partyFindSlotById(temp_v31);
  if ((temp_v2 < 0x18) && (temp_v1 = gameGetSlotRecord(), temp_v1 != 0)) {
    bitsAt60Clear(temp_v1,4);
  }
  if ((unsigned int)piVar1[param_1 * 2 + 0x4ee] >> 0x1e == 1) {
    partyFindSlotById(temp_v33);
    FUN_004d0d70();
  }
  if ((piVar1[param_1 * 2 + 0x4ef] & 3U) == 1) {
    partyFindSlotById(temp_v31);
    FUN_004d0d70();
  }
  temp_v3 = FUN_004d0cd4();
  temp_v1 = FUN_002a4b28((piVar1[param_1 * 2 + 0x4ef] & 0x1ffffU) >> 2);
  dispatchIfFound(temp_v3,(piVar1[param_1 * 2 + 0x4ef] & 0x1ffffU) >> 2,0);
  if (temp_v10 != 0) {
    temp_v35 = (unsigned short)((unsigned int)(piVar1[param_1 * 2 + 0x4ef] << 0xf) >> 0x11);
    FUN_004da6e0(*piVar1,temp_v38,temp_v30,0,temp_v34);
    temp_v4 = slotRecordFindById(temp_v35);
    *(unsigned int *)(temp_v4 + 0x68) = temp_v36;
    *(unsigned int *)(temp_v4 + 0x6c) = uStack_104;
    *(unsigned int *)(temp_v4 + 0x70) = uStack_100;
    *(unsigned int *)(temp_v4 + 0x74) = uStack_fc;
    *(unsigned int *)(temp_v4 + 0x78) = uStack_f8;
    *(unsigned int *)(temp_v4 + 0x7c) = uStack_f4;
    *(unsigned int *)(temp_v4 + 0x80) = uStack_f0;
    *(unsigned int *)(temp_v4 + 0x84) = uStack_ec;
    *(unsigned int *)(temp_v4 + 0x88) = temp_v37;
    *(unsigned int *)(temp_v4 + 0x8c) = uStack_e4;
    *(unsigned int *)(temp_v4 + 0x90) = uStack_e0;
    *(unsigned int *)(temp_v4 + 0x94) = uStack_dc;
    *(unsigned int *)(temp_v4 + 0x98) = uStack_d8;
    *(unsigned int *)(temp_v4 + 0x9c) = uStack_d4;
    *(unsigned int *)(temp_v4 + 0xa0) = uStack_d0;
    *(unsigned int *)(temp_v4 + 0xa4) = uStack_cc;
    temp_v26 = 0;
    temp_v27 = 0;
    temp_v28 = 0;
    temp_v29 = 0;
    temp_v14 = piVar1[0x22dc];
    temp_v15 = piVar1[0x22dd];
    temp_v16 = piVar1[0x22de];
    temp_v17 = piVar1[0x22df];
    temp_v18 = piVar1[0x22e0];
    temp_v19 = piVar1[0x22e1];
    temp_v20 = piVar1[0x22e2];
    temp_v21 = piVar1[0x22e3];
    temp_v22 = piVar1[0x22e4];
    temp_v25 = piVar1[0x22e7];
    temp_v23 = piVar1[0x22e5];
    temp_v24 = piVar1[0x22e6];
    FUN_00184310();
    temp_v7 = 0;
    do {
      temp_v8 = temp_v5 + temp_v7 * 2;
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v8 + 0x40);
      if ((temp_v2 != 0) && (findSkillMetadataById(), (*(unsigned char *)(temp_v2 + 3) & 0x20) != 0)) {
        puVar7 = &temp_v14;
        arrayContainsU16(puVar7,0x20,*(unsigned short *)(temp_v8 + 0x40));
        if (puVar7 == (unsigned int *)0x0) {
          *(unsigned short *)((int)&temp_v26 + temp_v7 * 2) = *(unsigned short *)(temp_v8 + 0x40);
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    temp_v5 = (piVar1[param_1 * 2 + 0x4ef] & 0x1ffffU) >> 2;
    FUN_00184310();
    if (!(*(char *)(temp_v5 + 2) == '3' || *(char *)(temp_v5 + 2) == '*')) {
      temp_v7 = 0;
      do {
        temp_v8 = temp_v4 + temp_v7 * 2;
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 0x34);
        findSkillMetadataById();
        if ((*(unsigned char *)(temp_v5 + 3) & 0x20) != 0) {
          puVar7 = &temp_v14;
          arrayContainsU16(&temp_v14,0x20,*(unsigned short *)(temp_v8 + 0x34));
          if (puVar7 == (unsigned int *)0x0) {
            *(unsigned short *)((int)&temp_v26 + temp_v7 * 2) = *(unsigned short *)(temp_v8 + 0x34);
          }
          *(unsigned short *)(temp_v8 + 0x34) = 0;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 8);
      qsort(temp_v4 + 0x34,8,2,uiCompareMaskedRecordRankDescending);
      qsort(&temp_v14,0x20,2,uiCompareMaskedRecordRankDescending);
      temp_v7 = getUnlockedSlotCount(temp_v4);
      temp_v8 = 0;
      if (temp_v8 < temp_v7) {
        do {
          temp_v9 = temp_v4 + temp_v8 * 2;
          if ((*(short *)(temp_v9 + 0x34) == 0) && ((temp_v14 & 0xffff) != 0)) {
            if (temp_v8 >= 4) {
              temp_v6 = 0;
              do {
                if (*(short *)((int)&temp_v14 + temp_v6 * 2) == 0) break;
                if (*(short *)((int)&temp_v14 + temp_v6 * 2 + 2) == 0) {
                  temp_v6 = temp_v6 + 1;
                  break;
                }
                temp_v6 = temp_v6 + 2;
              } while (temp_v6 < 0x20);
              temp_v6 = randRange((temp_v6 - 1U) & 0xffff);
              puVar10 = (unsigned short *)((int)&temp_v14 + temp_v6 * 2);
              *(unsigned short *)(temp_v9 + 0x34) = *puVar10;
              *puVar10 = 0;
            }
            else {
              *(unsigned short *)(temp_v9 + 0x34) = (unsigned short)temp_v14;
              temp_v14 = temp_v14 & 0xffff0000;
            }
            qsort(&temp_v14,0x20,2,uiCompareMaskedRecordRankDescending);
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < temp_v7);
      }
    }
    else {
      qsort(&temp_v14,0x20,2,uiCompareMaskedRecordRankDescending);
      temp_v7 = getUnlockedSlotCount(temp_v4);
      temp_v8 = 0;
      do {
        psVar13 = (short *)((int)&temp_v14 + temp_v8 * 2);
        if (*psVar13 != 0) {
          temp_v9 = temp_v4 + 0x34;
          arrayContainsU16(temp_v9,8);
          if (temp_v9 == 0) {
            temp_v9 = 0;
            if (temp_v9 < temp_v7) {
              do {
                if (*(short *)(temp_v4 + temp_v9 * 2 + 0x34) == 0) {
                  *(short *)(temp_v4 + temp_v9 * 2 + 0x34) = *psVar13;
                  break;
                }
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < temp_v7);
            }
            if (temp_v9 == temp_v7) break;
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x20);
    }
    FUN_004bcd90(temp_v4);
    piVar1[0x2426] = 1;
    piVar1[0x2427] = (unsigned int)*(unsigned short *)(temp_v4 + 100);
    *(unsigned int *)(temp_v4 + 0x44) = 0;
    *(unsigned int *)(temp_v4 + 0x48) = 0;
    FUN_004bd17c(temp_v4);
  }
  else {
    temp_v4 = slotRecordFindById(*(unsigned short *)((int)piVar1 + 0x66fe));
    temp_v7 = piVar1[0x19c2];
    temp_v8 = piVar1[0x19c3];
    temp_v9 = piVar1[0x19c4];
    temp_v6 = piVar1[0x19c5];
    temp_v11 = piVar1[0x19c6];
    temp_v12 = piVar1[0x19c7];
    temp_v13 = piVar1[0x19c8];
    *(int *)(temp_v4 + 0x68) = piVar1[0x19c1];
    *(int *)(temp_v4 + 0x6c) = temp_v7;
    *(int *)(temp_v4 + 0x70) = temp_v8;
    *(int *)(temp_v4 + 0x74) = temp_v9;
    *(int *)(temp_v4 + 0x78) = temp_v6;
    *(int *)(temp_v4 + 0x7c) = temp_v11;
    *(int *)(temp_v4 + 0x80) = temp_v12;
    *(int *)(temp_v4 + 0x84) = temp_v13;
    temp_v7 = piVar1[0x19ca];
    temp_v8 = piVar1[0x19cb];
    temp_v9 = piVar1[0x19cc];
    temp_v6 = piVar1[0x19cd];
    temp_v11 = piVar1[0x19ce];
    temp_v12 = piVar1[0x19cf];
    temp_v13 = piVar1[0x19d0];
    *(int *)(temp_v4 + 0x88) = piVar1[0x19c9];
    *(int *)(temp_v4 + 0x8c) = temp_v7;
    *(int *)(temp_v4 + 0x90) = temp_v8;
    *(int *)(temp_v4 + 0x94) = temp_v9;
    *(int *)(temp_v4 + 0x98) = temp_v6;
    *(int *)(temp_v4 + 0x9c) = temp_v11;
    *(int *)(temp_v4 + 0xa0) = temp_v12;
    *(int *)(temp_v4 + 0xa4) = temp_v13;
    temp_v7 = getUnlockedSlotCount(temp_v4);
    rt_memcpy_w(temp_v4 + 0x34,piVar1 + 0x19b4,temp_v7 << 1);
    FUN_004bcd90(temp_v4);
    piVar1[0x2426] = 1;
    piVar1[0x2427] = (unsigned int)*(unsigned short *)(temp_v4 + 100);
    *(unsigned int *)(temp_v4 + 0x44) = 0;
    *(unsigned int *)(temp_v4 + 0x48) = 0;
    FUN_004bd17c(temp_v4,temp_v4);
  }
  temp_v0 = recordGetScaledMaximum(temp_v4);
  *(unsigned short *)(temp_v4 + 0x2a) = temp_v0;
  *(unsigned short *)(temp_v4 + 0x2c) = *(unsigned short *)(temp_v4 + 0x10);
  if (temp_v1 == 0) {
    FUN_002a5e7c(*(unsigned short *)(temp_v4 + 0x62));
  }
  FUN_00408184(0x26,1);
  if (temp_v10 != 0) {
    FUN_00408184(0x27,1);
  }
  FUN_002a6894(temp_v4);
  return temp_v10;
}

} /* extern "C" */
