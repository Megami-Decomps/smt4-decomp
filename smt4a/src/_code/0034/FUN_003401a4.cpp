/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003401a4` (_code @ 0x3401a4, 0x7f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_002237a0(void);
int FUN_00234b30(void);
int FUN_0025cb1c(void);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_002d88e0(void);
int FUN_0031297c(void);
int mapPlaceSet(unsigned int, unsigned int);
int FUN_003254a0(void);
int FUN_0033e014(unsigned int, unsigned int);
int mapIfReleaseFirstOverlay(void);
int mapIfClose(void);
int mapIfReleaseSlot0AndReset(void);
int sub68OwnerCall7(void);
int sub68OwnerCall9(void);
int FUN_003868dc(int);
int sysPlayVoice(int);
int FUN_003d4ed8(int);
int FUN_00483834(int);
int partyTryInflictCondition(int, int, int);
int FUN_0049f8a4(int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int g_lmapMainState; /* 0x580238 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f1660; /* 0x5f1660 */
extern unsigned int DAT_005f1664; /* 0x5f1664 */
extern unsigned int DAT_005f1668; /* 0x5f1668 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_002237a0. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_0025cb1c. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002d88e0. */
/* Supplied declaration required: FUN_0031297c. */
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_003254a0. */
/* Supplied declaration required: FUN_0033e014. */
/* Supplied declaration required: mapIfReleaseFirstOverlay. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned int *);
/* Supplied declaration required: mapIfClose. */
/* Supplied declaration required: mapIfReleaseSlot0AndReset. */
/* Supplied declaration required: sub68OwnerCall7. */
/* Supplied declaration required: sub68OwnerCall9. */
/* Supplied declaration required: FUN_003868dc. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: FUN_00483834. */
/* Supplied declaration required: partyTryInflictCondition. */
/* Supplied declaration required: FUN_0049f8a4. */
extern short __aeabi_idivmod(int, int);


void FUN_003401a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  float *pfVar9;
  unsigned int *puVar10;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14 [11];
  
  FUN_002237a0();
  FUN_003254a0();
  temp_v7 = g_lmapScene;
  temp_v11 = 0.0f;
  temp_v12 = 2.0f;
  switch(*(unsigned int *)(param_1 + 0xcc)) {
  case 1:
    FUN_003868dc(param_1);
    return;
  case 2:
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(unsigned int *)(param_1 + 200) = 0x3f800000;
      *(unsigned int *)(param_1 + 0xd0) = 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int *)(param_1 + 0xc4) = 0x40000000;
      return;
    }
    if ((*(int *)(param_1 + 0xd0) == 1) &&
       (temp_v11 = *(float *)(param_1 + 200) - 0.033333335f, *(float *)(param_1 + 200) = temp_v11,
       (int)temp_v11 < 0x3c23d70a)) {
      *(unsigned int *)(param_1 + 200) = 0x3c23d70a;
      *(unsigned int *)(param_1 + 0xd0) = 2;
      *(unsigned int *)(param_1 + 0xd4) = 0;
    }
    break;
  case 3:
    temp_v7 = *(int *)(param_1 + 0xd0);
    if (temp_v7 == 0) {
      *(unsigned int *)(param_1 + 200) = 0;
      *(unsigned int *)(param_1 + 0xd0) = 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int *)(param_1 + 0xc4) = 0x40000000;
      return;
    }
    if (temp_v7 != 1) {
      if ((temp_v7 == 2) && (temp_v4 = 1, *(int *)(g_lmapMainState + 0xcc) != 1)) {
        temp_v7 = g_lmapMainState;
        *(unsigned int *)(g_lmapMainState + 0xcc) = temp_v4;
        *(unsigned int *)(temp_v7 + 0xd0) = 0;
        *(unsigned int *)(temp_v7 + 0xd4) = 0;
        return;
      }
    }
    else {
      temp_v11 = *(float *)(param_1 + 200) + 0.06666667f;
      *(float *)(param_1 + 200) = temp_v11;
      if ((int)temp_v11 >= 0x3f800001) {
        *(unsigned int *)(param_1 + 200) = 0x3f800000;
        *(unsigned int *)(param_1 + 0xd0) = 2;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
    }
    break;
  case 4:
    *(unsigned int *)(param_1 + 200) = 0;
    return;
  case 5:
    temp_v11 = *(float *)(param_1 + 0x9334);
    temp_v12 = *(float *)(param_1 + 0x932c);
    temp_v9 = *(float *)(param_1 + 0x9330);
    *(float *)(g_lmapScene + 0x1c) =
         *(float *)(g_lmapScene + 0x1c) + *(float *)(param_1 + 0x9328) * temp_v11;
    *(float *)(temp_v7 + 0x20) = *(float *)(temp_v7 + 0x20) + temp_v12 * temp_v11;
    *(float *)(temp_v7 + 0x24) = *(float *)(temp_v7 + 0x24) + temp_v9 * temp_v11;
    temp_v7 = g_lmapScene;
    puVar10 = (unsigned int *)(g_lmapScene + 0x20);
    temp_v4 = *(unsigned int *)(g_lmapScene + 0x24);
    *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x1c);
    *(unsigned int *)(temp_v7 + 0x2c) = *puVar10;
    *(unsigned int *)(temp_v7 + 0x30) = temp_v4;
    if (*(int *)(param_1 + 0x9338) == 0) {
      *(unsigned char *)(param_1 + 0x94) = 1;
      FUN_0031297c();
    }
    if (*(int *)(param_1 + 0x933c) >= 0x1f) {
      if (*(int *)(param_1 + 0x9338) == *(int *)(param_1 + 0x933c) - 0x1e) {
        FUN_0033e014(g_gameState,DAT_005f1600);
      }
    }
    else if (*(int *)(param_1 + 0x9338) == 1) {
      FUN_0033e014(g_gameState,DAT_005f1600);
    }
    temp_v3 = *(int *)(param_1 + 0x9338) + 1;
    *(int *)(param_1 + 0x9338) = temp_v3;
    temp_v7 = g_lmapScene;
    if (*(int *)(param_1 + 0x933c) <= temp_v3) {
      temp_v4 = *(unsigned int *)(param_1 + 0x931c);
      temp_v5 = *(unsigned int *)(param_1 + 0x9320);
      temp_v6 = *(unsigned int *)(param_1 + 0x9324);
      puVar10 = (unsigned int *)(g_lmapScene + 0x28);
      *(unsigned int *)(g_lmapScene + 0x1c) = temp_v4;
      *(unsigned int *)(temp_v7 + 0x20) = temp_v5;
      *(unsigned int *)(temp_v7 + 0x24) = temp_v6;
      *puVar10 = temp_v4;
      *(unsigned int *)(temp_v7 + 0x2c) = temp_v5;
      *(unsigned int *)(temp_v7 + 0x30) = temp_v6;
      temp_v4 = 6;
      if (*(int *)(g_lmapMainState + 0xcc) == 6) {
        return;
      }
      temp_v7 = g_lmapMainState;
      *(unsigned int *)(g_lmapMainState + 0xcc) = temp_v4;
      *(unsigned int *)(temp_v7 + 0xd0) = 0;
      *(unsigned int *)(temp_v7 + 0xd4) = 0;
      return;
    }
    break;
  case 7:
    temp_v14[5] = 0.6f;
    temp_v14[3] = 0.6f;
    temp_v14[4] = 0.6f;
    if (*(int *)(param_1 + 0xd0) == 0) {
      FUN_003d4ed8(0x1000224);
      temp_v12 = 3.0f;
      temp_v9 = 15.0f;
      temp_v7 = gameDataFlagTestBit(0x84);
      if (temp_v7 != 0) {
        temp_v12 = 1.5f;
        temp_v9 = 7.5f;
      }
      FUN_0049f8a4(2,(int)temp_v12);
      partyTryInflictCondition(2,5,(int)temp_v9);
      *(unsigned short *)(param_1 + 0x9340) = 0xf;
      *(unsigned short *)(param_1 + 0x9344) = 4000;
      *(unsigned short *)(param_1 + 0x9342) = 0x640;
      *(unsigned short *)(param_1 + 0x9346) = 0x640;
      *(float *)(param_1 + 0x9348) = temp_v11;
      *(float *)(param_1 + 0x934c) = temp_v11;
      *(float *)(param_1 + 0x9350) = temp_v11;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    }
    if (*(int *)(param_1 + 0xd0) != 1) {
      return;
    }
    if (*(short *)(param_1 + 0x9340) != 0) {
      temp_v13 = 0.5f;
      temp_v7 = 0;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9342),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[0] = temp_v9 * 0.01f;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9344),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[1] = temp_v9 * 0.01f;
      temp_v9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9346),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14[2] = temp_v9 * 0.01f;
      do {
        pfVar9 = temp_v14 + temp_v7;
        temp_v9 = *pfVar9;
        if (temp_v9 != temp_v11) {
          FUN_0025cb1c();
          temp_v10 = *pfVar9;
          temp_v3 = param_1 + temp_v7 * 4;
          temp_v8 = *(float *)(temp_v3 + 0x9348);
          temp_v9 = temp_v9 * temp_v13 * temp_v10 + temp_v10 * temp_v13;
          if (romwright_fabs_4(temp_v8) >= temp_v10 * temp_v14[temp_v7 + 3]) {
            if (temp_v8 <= temp_v11) {
              temp_v8 = temp_v8 + temp_v9;
            }
            else {
              temp_v8 = temp_v8 - temp_v9;
            }
            *(float *)(temp_v3 + 0x9348) = temp_v8;
          }
          else {
            FUN_0025cb1c();
            *(float *)(temp_v3 + 0x9348) =
                 *(float *)(temp_v3 + 0x9348) + (temp_v8 - temp_v13) * temp_v9 * temp_v12;
          }
          temp_v9 = -*pfVar9;
          if (-*pfVar9 < *(float *)(temp_v3 + 0x9348)) {
            temp_v9 = *(float *)(temp_v3 + 0x9348);
          }
          *(float *)(temp_v3 + 0x9348) = temp_v9;
          if (*pfVar9 < temp_v9) {
            temp_v9 = *pfVar9;
          }
          *(float *)(temp_v3 + 0x9348) = temp_v9;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      temp_v0 = *(short *)(param_1 + 0x9340);
      temp_v7 = (int)temp_v0;
      if (0 < temp_v7) {
        temp_v1 = *(short *)(param_1 + 0x9342);
        temp_v2 = __aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x9342) = temp_v1 - temp_v2;
        temp_v1 = *(short *)(param_1 + 0x9344);
        temp_v2 = __aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x9344) = temp_v1 - temp_v2;
        temp_v1 = *(short *)(param_1 + 0x9346);
        temp_v2 = __aeabi_idivmod((int)temp_v1,temp_v7 + 5);
        *(short *)(param_1 + 0x9346) = temp_v1 - temp_v2;
        *(short *)(param_1 + 0x9340) = temp_v0 - 1;
      }
      temp_v7 = g_lmapScene;
      *(float *)(g_lmapScene + 0x1c) =
           *(float *)(g_lmapScene + 0x28) + *(float *)(param_1 + 0x9348);
      *(float *)(temp_v7 + 0x20) = *(float *)(temp_v7 + 0x2c) + *(float *)(param_1 + 0x934c);
      *(float *)(temp_v7 + 0x24) = *(float *)(temp_v7 + 0x30) + *(float *)(param_1 + 0x9350);
      return;
    }
    *(unsigned int *)(g_lmapScene + 0x1c) = *(unsigned int *)(g_lmapScene + 0x28);
    *(unsigned int *)(temp_v7 + 0x20) = *(unsigned int *)(temp_v7 + 0x2c);
    *(unsigned int *)(temp_v7 + 0x24) = *(unsigned int *)(temp_v7 + 0x30);
    temp_v4 = 1;
    if (*(int *)(g_lmapMainState + 0xcc) == 1) {
      return;
    }
    temp_v7 = g_lmapMainState;
    *(unsigned int *)(g_lmapMainState + 0xcc) = temp_v4;
    *(unsigned int *)(temp_v7 + 0xd0) = 0;
    *(unsigned int *)(temp_v7 + 0xd4) = 0;
    return;
  case 8:
    switch(*(unsigned int *)(param_1 + 0xd0)) {
    case 0:
      DAT_005f1859 = 0;
      sub68OwnerCall9();
      FUN_002d88e0();
      temp_v7 = g_lmapScene;
      puVar10 = (unsigned int *)(g_lmapScene + 0x20);
      temp_v4 = *(unsigned int *)(g_lmapScene + 0x24);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x1c);
      *(unsigned int *)(temp_v7 + 0x2c) = *puVar10;
      *(unsigned int *)(temp_v7 + 0x30) = temp_v4;
      FUN_001695a0();
      mapPlaceSet(0xffffffff,0xffffffff);
      DAT_005f1658 = 0;
      DAT_005f1668 = 0x747331;
      DAT_005f1660 = 0x5f726373;
      DAT_005f1664 = 0x70616d6c;
      temp_v4 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x9ec),&DAT_005f1660);
      *(unsigned int *)(param_1 + 0x9e4) = temp_v4;
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x9f4),temp_v4);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 1:
      if (*(int *)(param_1 + 0xd4) == 2) {
        sysPlayVoice(0x1000219);
      }
      if (*(int *)(param_1 + 0xd4) == 0x2d) {
        sysPlayVoice(0x10000c9);
      }
      if (*(int *)(param_1 + 0xd4) == 0x9c) {
        sysPlayVoice(0x10000c8);
      }
      if (*(int *)(param_1 + 0xd4) == 0xf0) {
        sysPlayVoice(0x10002aa);
      }
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
      temp_v7 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x9f4));
      if ((temp_v7 == 2) && (*(int *)(param_1 + 0xd4) >= 0xf1)) {
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
      break;
    case 2:
      temp_v7 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = temp_v7;
      if (temp_v7 >= 0x5b) {
        *(unsigned int *)(param_1 + 0xd0) = 3;
        *(unsigned int *)(param_1 + 0xd4) = 0;
        return;
      }
      break;
    case 3:
      mapIfReleaseSlot0AndReset();
      FUN_0033e014(g_gameState,DAT_005f1600);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 4:
      *(unsigned int *)(param_1 + 0xd0) = 5;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 5:
      mapIfReleaseFirstOverlay();
      sub68OwnerCall7();
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
      *(unsigned int *)(param_1 + 0xd4) = 0;
      return;
    case 6:
      temp_v7 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = temp_v7;
      if (temp_v7 >= 10) {
        FUN_00483834(param_1 + 0xf4);
        FUN_00234b30();
      }
      if (*(int *)(param_1 + 0xd4) == 0x14) {
        mapIfClose();
      }
      if (*(int *)(param_1 + 0xd4) >= 0x1f) {
        temp_v4 = 1;
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        if (*(int *)(g_lmapMainState + 0xcc) == 1) {
          return;
        }
        temp_v7 = g_lmapMainState;
        *(unsigned int *)(g_lmapMainState + 0xcc) = temp_v4;
        *(unsigned int *)(temp_v7 + 0xd0) = 0;
        *(unsigned int *)(temp_v7 + 0xd4) = 0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
