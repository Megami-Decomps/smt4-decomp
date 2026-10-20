/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba998` (_code @ 0x2ba998, 0x1c90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessDestroy(void);
int FUN_001f4908(...);
int FUN_002804b0(...);
int FUN_002b50e4(...);

int jobStop(...);
int sysPlaySe(...);
int FUN_00180118(...);
int FUN_00184310(void);
int asdMemFree(void);
int FUN_00203d04(...);
int FUN_00237898(...);
int FUN_002854d8(...);
int FUN_002b53e0(...);
int FUN_002d173c(void);
int FUN_002e342c(...);
int FUN_003180c4(...);
int FUN_0031cd00(...);
int FUN_0031f138(...);
int FUN_003984ac(...);
int FUN_003d2d6c(...);
int FUN_003ee138(...);
int FUN_003eee9c(...);
int FUN_003f135c(...);
int FUN_0041817c(...);
int FUN_004aa854(...);
int FUN_004bcb54(void);
int FUN_004c8b10(void);
int FUN_004f5e6c(...);
int FUN_004f6184(void);
int FUN_004fbeac(...);
int FUN_004fed5c(...);

int FUN_00270c18(void);
int FUN_00291bd4(...);
int FUN_002b4f28(...);
int FUN_002cf698(...);
int FUN_00363990(...);
int FUN_00385c44(...);
int FUN_003e49e8(void);
int FUN_003e854c(...);
int FUN_003e892c(...);
int FUN_003eaf20(void);
int FUN_003ebca0(void);
int FUN_003f26d4(...);
int FUN_003f29c0(...);
int FUN_00408184(...);
int FUN_004aa2e0(...);
int FUN_004abba8(...);
int FUN_004abbe8(...);
int FUN_004c8e30(...);
int FUN_004d7a70(...);
int FUN_004d7fe4(...);
int FUN_004d88fc(...);
int FUN_004d8d14(...);
int FUN_004d8f04(...);
int FUN_004f8f08(...);
int FUN_004fb670(...);
int FUN_004fdb18(...);
int FUN_004feecc(...);
int VectorSignedToFloat(...);

int FUN_0015688c(void);
int FUN_001695a0(void);
int FUN_0021c118(...);
int FUN_0023244c(...);
int FUN_0027243c(...);
int FUN_0027249c(...);
int FUN_002726b8(...);
int FUN_002919b4(...);
int FUN_00291ce8(...);
int FUN_002b5000(...);
int FUN_002b52a4(...);
int FUN_002cd8fc(void);
int sysMemClear(...);
int FUN_00301ad0(...);
int FUN_0037693c(...);
int FUN_00376a2c(...);
int FUN_003d2d34(...);
int FUN_003de02c(void);
int FUN_003e9cec(int, unsigned char [688], unsigned int, int);
int FUN_003e9fe4(int, int, int);
int FUN_003ea69c(int, unsigned char [688], unsigned int);
int FUN_003ec580(int, int);
int FUN_003ecfb4(...);
int FUN_003ef1e4(int, int);
int FUN_003f1d74(int);
int FUN_00409d8c(...);
int FUN_004a8edc(...);
int FUN_004c621c(void);
int FUN_004c6298(void);
int FUN_004ca63c(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp42C; /* 0x42c: local_42c */
    unsigned int sp430; /* 0x430: local_430 */
    unsigned int sp434; /* 0x434: local_434 */
    unsigned int sp438; /* 0x438: local_438 */
    unsigned int sp43C; /* 0x43c: local_43c */
    unsigned int sp440; /* 0x440: local_440 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern int g_btlEvent; /* 0x573898 */
extern int g_btlMain; /* 0x573920 */
extern int DAT_00573940; /* 0x573940 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739c8; /* 0x5739c8 */
extern unsigned int DAT_005739cc; /* 0x5739cc */
extern unsigned int DAT_005739e0; /* 0x5739e0 */
extern unsigned int DAT_005739e4; /* 0x5739e4 */
extern unsigned int DAT_005739e8; /* 0x5739e8 */
extern unsigned int DAT_005739ec; /* 0x5739ec */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_005739f8; /* 0x5739f8 */
extern unsigned int DAT_005739fc; /* 0x5739fc */
extern unsigned int DAT_00573a08; /* 0x573a08 */
extern unsigned int DAT_00573a0c; /* 0x573a0c */
extern unsigned int DAT_00573a18; /* 0x573a18 */
extern unsigned int DAT_00573a1c; /* 0x573a1c */
extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573a48; /* 0x573a48 */
extern unsigned int DAT_00573a4c; /* 0x573a4c */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int DAT_00573a58; /* 0x573a58 */
extern unsigned int DAT_00573a5c; /* 0x573a5c */
extern unsigned int DAT_00573a70; /* 0x573a70 */
extern unsigned int DAT_00573a74; /* 0x573a74 */
extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */
extern unsigned int DAT_00573ac8; /* 0x573ac8 */
extern unsigned int DAT_00573acc; /* 0x573acc */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */
extern unsigned int DAT_00573af0; /* 0x573af0 */
extern unsigned int DAT_00573af4; /* 0x573af4 */
extern unsigned int DAT_00573af8; /* 0x573af8 */
extern unsigned int DAT_00573afc; /* 0x573afc */
extern unsigned int DAT_00573b50; /* 0x573b50 */
extern unsigned int DAT_00573b54; /* 0x573b54 */
extern unsigned int DAT_00573b58; /* 0x573b58 */
extern unsigned int DAT_00573b5c; /* 0x573b5c */
extern unsigned int DAT_00573b60; /* 0x573b60 */
extern unsigned int DAT_00573b64; /* 0x573b64 */
extern unsigned int DAT_00573b68; /* 0x573b68 */
extern unsigned int DAT_00573b6c; /* 0x573b6c */
extern int DAT_00573c50; /* 0x573c50 */
extern unsigned int g_btlStageModel; /* 0x57a4f8 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015688c. */
/* Supplied declaration required: jobStop. */
extern int FUN_001633a0(unsigned int);
extern int jobIsValid(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
extern unsigned int FUN_0017760c(void);
/* Supplied declaration required: FUN_00180118. */
extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: asdMemFree. */
extern int gameGetOptions(void);
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_00213b5c(void);
/* Supplied declaration required: FUN_0021c118. */
extern unsigned int FUN_00228ab0(unsigned int);
/* Supplied declaration required: FUN_0023244c. */
/* Supplied declaration required: FUN_00237898. */
extern int FUN_002619e0(void);
/* Supplied declaration required: FUN_00270c18. */
/* Supplied declaration required: FUN_0027243c. */
/* Supplied declaration required: FUN_0027249c. */
/* Supplied declaration required: FUN_002726b8. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002854d8. */
/* Supplied declaration required: FUN_002919b4. */
/* Supplied declaration required: FUN_00291bd4. */
/* Supplied declaration required: FUN_00291ce8. */
/* Supplied declaration required: FUN_002b4f28. */
/* Supplied declaration required: FUN_002b5000. */
/* Supplied declaration required: FUN_002b50e4. */
/* Supplied declaration required: FUN_002b52a4. */
/* Supplied declaration required: FUN_002b53e0. */
/* Supplied declaration required: FUN_002cd8fc. */
/* Supplied declaration required: FUN_002cf698. */
/* Supplied declaration required: FUN_002d173c. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00301ad0. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031cd00. */
extern int FUN_0031d000(short);
/* Supplied declaration required: FUN_0031f138. */
/* Supplied declaration required: FUN_00363990. */
/* Supplied declaration required: FUN_0037693c. */
/* Supplied declaration required: FUN_00376a2c. */
/* Supplied declaration required: FUN_00385c44. */
/* Supplied declaration required: FUN_003984ac. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003de02c. */
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_003e49e8. */
/* Supplied declaration required: FUN_003e854c. */
/* Supplied declaration required: FUN_003e892c. */
/* Supplied declaration required: FUN_003e9cec. */
/* Supplied declaration required: FUN_003e9fe4. */
/* Supplied declaration required: FUN_003ea69c. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ebca0. */
/* Supplied declaration required: FUN_003ec580. */
/* Supplied declaration required: FUN_003ecfb4. */
/* Supplied declaration required: FUN_003ee138. */
/* Supplied declaration required: FUN_003eee9c. */
/* Supplied declaration required: FUN_003ef1e4. */
/* Supplied declaration required: FUN_003f135c. */
/* Supplied declaration required: FUN_003f1d74. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_003f29c0. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_00409d8c. */
/* Supplied declaration required: FUN_0041817c. */
/* Supplied declaration required: FUN_004a8edc. */
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004aa854. */
/* Supplied declaration required: FUN_004abba8. */
/* Supplied declaration required: FUN_004abbe8. */
/* Supplied declaration required: FUN_004bcb54. */
/* Supplied declaration required: FUN_004c621c. */
/* Supplied declaration required: FUN_004c6298. */
/* Supplied declaration required: FUN_004c8b10. */
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: FUN_004ca63c. */
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
extern int FUN_004d84e8(int);
/* Supplied declaration required: FUN_004d88fc. */
/* Supplied declaration required: FUN_004d8d14. */
/* Supplied declaration required: FUN_004d8f04. */
extern unsigned int *btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004f5e6c. */
/* Supplied declaration required: FUN_004f6184. */
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fdb18. */
/* Supplied declaration required: FUN_004fed5c. */
/* Supplied declaration required: FUN_004feecc. */
extern int NaviMain_GetPosX(void);


/* WARNING: Type propagation algorithm not settling */

void FUN_002ba998(unsigned int param_1)

{
/* irregular: 24 goto(s); irregular input(s): in_fpscr; 90 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int *piVar12;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int *piVar17;
  unsigned int *puVar18;
  unsigned int temp_v14;
  unsigned int *puVar20;
  int temp_v15;
  short *psVar22;
  int temp_v16;
  int unaff_r10;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned int in_fpscr;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22 [89];
  unsigned char temp_v23 [688];
  
  temp_v7 = g_btlMain;
  if (g_btlMain == 0) {
    return;
  }
  temp_v11 = *(unsigned int *)(g_btlMain + 0x88);
  *(unsigned int *)(g_btlMain + 0x88) = param_1;
  *(unsigned int *)(temp_v7 + 0x94) = 0;
  *(unsigned int *)(temp_v7 + 0x90) = temp_v11;
  *(unsigned int *)(temp_v7 + 0x8c) = 0xffffffff;
  *(unsigned int *)(temp_v7 + 0x9c) = 0;
  temp_v10 = DAT_005739cc;
  temp_v9 = DAT_005739c8;
  switch(*(unsigned int *)(temp_v7 + 0x88)) {
  case 1:
    FUN_002919b4(temp_v7,0);
    return;
  case 2:
    FUN_003ec580(temp_v7,*(int *)(temp_v7 + 0xf0) != 0x16a && *(int *)(temp_v7 + 0xf0) != 0x16c);
    if (*(int *)(temp_v7 + 0xf0) >= 1) {
      temp_v10 = DAT_005739e4 | *(unsigned int *)(temp_v7 + 0x45a4);
      temp_v9 = *(unsigned int *)(temp_v7 + 0x45a0) | DAT_005739e0;
    }
    else {
      temp_v9 = *(unsigned int *)(temp_v7 + 0x45a0) & ~DAT_005739e0;
      temp_v10 = *(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_005739e4;
    }
    *(unsigned int *)(temp_v7 + 0x45a0) = temp_v9;
    *(unsigned int *)(temp_v7 + 0x45a4) = temp_v10;
    sysMemClear((unsigned int *)(temp_v7 + 0xf4),0x84);
    *(unsigned int *)(temp_v7 + 0xf4) = 0;
    *(unsigned int *)(temp_v7 + 0xf8) = 0;
    *(unsigned int *)(temp_v7 + 0xfc) = 0;
    *(unsigned int *)(temp_v7 + 0x100) = 0;
    *(unsigned int *)(temp_v7 + 0x104) = 0;
    *(unsigned int *)(temp_v7 + 0x108) = 0;
    *(unsigned int *)(temp_v7 + 0x124) = 0x3f800000;
    *(unsigned int *)(temp_v7 + 0x128) = 0x3f800000;
    FUN_003e9fe4(temp_v7,temp_v7 + 0xf4,0);
    FUN_004c621c();
    FUN_004c6298();
    FUN_003ef1e4(temp_v7,0);
    if (*(short *)(temp_v7 + 0x11c) != 0) {
      FUN_003f1d74(temp_v7);
    }
    temp_v6 = FUN_001ab888();
    temp_v11 = FUN_001801a4();
    FUN_003ea69c(temp_v7,temp_v23,temp_v11);
    FUN_004ca63c(temp_v7,temp_v23,0,0,0);
    temp_v9 = 0;
    do {
      if (-1 < *(char *)(temp_v6 + temp_v9 + 0x1ca0)) {
        temp_v11 = FUN_00228ab0(temp_v9);
        FUN_003e9cec(temp_v7,temp_v23,temp_v11,0);
        FUN_004ca63c(temp_v7,temp_v23,0,temp_v9 + 1,0);
      }
      temp_v9 = (temp_v9 + 1) & 0xffff;
    } while (temp_v9 < 3);
    temp_v6 = FUN_0015688c();
    if (temp_v6 != 0) {
      FUN_003ecfb4(temp_v7,temp_v23,temp_v6,0);
      FUN_004ca63c(temp_v7,temp_v23,2,0x36,0);
    }
    temp_v6 = FUN_0015688c();
    if (temp_v6 != 0) {
      temp_v11 = FUN_0019acdc(*(unsigned short *)(temp_v6 + 300),0);
      switch(temp_v11) {
      default:
        break;
      case 1:
        temp_v11 = 0x10;
        FUN_00409d8c(temp_v11,1);
        break;
      case 2:
        temp_v11 = 0x11;
        FUN_00409d8c(temp_v11,1);
        break;
      case 3:
        temp_v11 = 0x12;
        FUN_00409d8c(temp_v11,1);
        break;
      case 4:
        temp_v11 = 0x14;
        FUN_00409d8c(temp_v11,1);
        break;
      case 5:
        temp_v11 = 0x13;
        FUN_00409d8c(temp_v11,1);
        break;
      case 6:
        temp_v11 = 0x15;
        FUN_00409d8c(temp_v11,1);
        break;
      case 7:
        FUN_00409d8c(0x16,1);
        break;
      }
    }
    FUN_0037693c(temp_v7);
    FUN_002b5000(temp_v7);
    FUN_0027243c(temp_v7);
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + 0x78));
    if (temp_v6 == 0) {
      FUN_0023244c(temp_v7);
    }
    FUN_004a8edc(DAT_0057a9c8,0);
    FUN_002726b8(temp_v7);
    FUN_00291ce8(temp_v7);
    FUN_002b52a4(temp_v7);
    FUN_00301ad0(temp_v7);
    FUN_0027249c(temp_v7);
    FUN_00376a2c(temp_v7);
    FUN_002cd8fc();
    FUN_001695a0();
    if (DAT_00573940 >= 0) {
      DAT_00573940 = -1;
    }
    else {
      FUN_003de02c();
    }
    temp_v6 = *(int *)(temp_v7 + 0x118);
    *(int *)(temp_v7 + 0x4ce8) = temp_v6;
    if (!((*(unsigned int *)(temp_v7 + 0x45a4) & DAT_005739e4) == 0 &&
         (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_005739e0) == 0)) {
      if ((*(unsigned int *)(temp_v7 + 0x10c) & 0x40000000) != 0) {
        temp_v15 = *(int *)(temp_v7 + 0x4ce4);
        if (temp_v15 == 0x100002b) {
          return;
        }
        temp_v6 = 0x100002b;
      }
      else {
        if (temp_v6 < 0) {
          return;
        }
        temp_v15 = *(int *)(temp_v7 + 0x4ce4);
        if (temp_v15 == temp_v6) {
          return;
        }
      }
    }
    else if (((*(unsigned int *)(temp_v7 + 0x45a4) & DAT_005739ec) == 0 &&
              (*(unsigned int *)(temp_v7 + 0x45a0) & DAT_005739e8) == 0) &&
            ((*(unsigned int *)(temp_v7 + 0x10c) & 0x40000000) != 0)) {
      temp_v15 = *(int *)(temp_v7 + 0x4ce4);
      if (temp_v15 == 0x100002b) {
        return;
      }
      temp_v6 = 0x100002b;
    }
    else {
      if (temp_v6 < 0) {
        return;
      }
      temp_v15 = *(int *)(temp_v7 + 0x4ce4);
      if (temp_v15 == temp_v6) {
        return;
      }
    }
    if (temp_v15 != -1) {
      FUN_0021c118(temp_v15,0);
    }
    FUN_003d2d34(temp_v6,0,10);
    *(int *)(temp_v7 + 0x4ce4) = temp_v6;
    break;
  case 3:
    *(unsigned int *)(temp_v7 + 0x178) = 0xffffffff;
    *(unsigned int *)(temp_v7 + 0x17c) = 0xffffffff;
    FUN_004d8d14(g_btlStageModel,temp_v7);
    FUN_004d88fc(g_btlStageModel,temp_v7);
    FUN_004d8f04(g_btlStageModel);
    break;
  case 4:
    *(unsigned char *)(temp_v7 + 0x45b8) = 0;
    *(unsigned char *)(temp_v7 + 0x45b9) = 0;
    *(unsigned int *)(temp_v7 + 0x2414) = 0;
    FUN_003e854c(temp_v7);
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + 0x74));
    if (temp_v6 == 0) {
      FUN_00291bd4(temp_v7);
    }
    FUN_002cf698(temp_v7);
    if ((*(unsigned int *)(temp_v7 + 0x45a8) & DAT_00573b58) != 0 ||
        (*(unsigned int *)(temp_v7 + 0x45ac) & DAT_00573b5c) != 0) {
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x10000000;
    }
    break;
  case 5:
    if ((*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573a24) != 0 ||
        (DAT_00573a20 & *(unsigned int *)(temp_v7 + 0x45a0)) != 0) {
      return;
    }
    temp_v6 = FUN_001633a0(99);
    temp_v15 = FUN_003e46f4(0x88);
    if (temp_v15 != 0) {
      temp_v5 = *(short *)(temp_v7 + 0x2000);
      if (temp_v5 != 1) {
        if (temp_v5 != 2) {
          if (temp_v5 != 3) {
            if (temp_v5 == 4) {
              if (temp_v6 < 5) {
                temp_v6 = 4;
                goto LAB_002bb220;
              }
              if (temp_v6 < 0xf) goto LAB_002bb16c;
              if (temp_v6 < 0x28) goto LAB_002bb20c;
joined_r0x002bb180:
              if (temp_v6 < 100) goto LAB_002bb21c;
            }
          }
          else if (temp_v6 >= 7) {
            if (temp_v6 < 0x1e) goto LAB_002bb20c;
            if (temp_v6 < 0x5f) goto LAB_002bb21c;
          }
          else {
LAB_002bb16c:
            temp_v6 = 3;
LAB_002bb220:
            temp_v12 = 0;
            temp_v19 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = 0;
            temp_v8 = 0;
            temp_v20 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 0x2000),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v21 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 0x2000),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v22[0] = 0;
            temp_v22[1] = 0;
            temp_v22[2] = 0;
            temp_v22[3] = 0;
            temp_v19 = temp_v19 / temp_v20;
            temp_v21 = 1.0f / temp_v21;
            temp_v20 = temp_v21 + 0.001f;
            do {
              puVar20 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v8 * 0x408);
              temp_v9 = *puVar20;
              temp_v10 = puVar20[1];
              if ((((((DAT_00573978 & temp_v9) != 0 || (DAT_0057397c & temp_v10) != 0) &&
                    ((DAT_005739a0 & temp_v9) == 0 && (DAT_005739a4 & temp_v10) == 0)) &&
                   ((temp_v9 & DAT_00573990) == 0 && (temp_v10 & DAT_00573994) == 0)) &&
                  (((short)puVar20[0x9d] == 0 || ((short)puVar20[0x9d] == 4)))) && (temp_v12 < temp_v6))
              {
                FUN_00270c18();
                if (temp_v19 < temp_v21) {
                  temp_v19 = temp_v19 + temp_v20;
                }
                else {
                  temp_v12 = temp_v12 + 1;
                  temp_v22[temp_v8] = 1;
                }
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < 4);
            do {
              puVar20 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v15 * 0x408);
              temp_v9 = *puVar20;
              temp_v10 = puVar20[1];
              if ((((DAT_00573978 & temp_v9) != 0 || (DAT_0057397c & temp_v10) != 0) &&
                  ((DAT_005739a0 & temp_v9) == 0 && (DAT_005739a4 & temp_v10) == 0)) &&
                 (((temp_v9 & DAT_00573990) == 0 && (temp_v10 & DAT_00573994) == 0 &&
                  ((((short)puVar20[0x9d] == 0 || ((short)puVar20[0x9d] == 4)) &&
                   (0 < (int)temp_v22[temp_v15])))))) {
                FUN_004fdb18(0,0,*(int *)(temp_v7 + 0x1ed4) + temp_v15 * 0x1d0,0x10,0);
              }
              temp_v15 = temp_v15 + 1;
            } while (temp_v15 < 4);
            if (temp_v6 != 0) {
              FUN_004c8e30(8,0,1);
            }
          }
        }
        else {
          if (temp_v6 < 0xf) goto LAB_002bb20c;
          if (temp_v6 < 0x55) goto LAB_002bb21c;
        }
      }
      else {
joined_r0x002bb1e8:
        if (temp_v6 < 0x4b) goto LAB_002bb21c;
      }
    }
    else {
      temp_v15 = FUN_003e46f4(0x87);
      temp_v5 = *(short *)(temp_v7 + 0x2000);
      if (temp_v15 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 != 2) {
            if (temp_v5 != 3) {
              if (temp_v5 == 4) {
                if (temp_v6 < 10) {
                  temp_v6 = 3;
                }
                else {
                  if (temp_v6 >= 0x1e) goto joined_r0x002bb180;
LAB_002bb20c:
                  temp_v6 = 2;
                }
                goto LAB_002bb220;
              }
            }
            else {
              if (temp_v6 < 0xd) goto LAB_002bb20c;
              if (temp_v6 < 0x50) goto LAB_002bb21c;
            }
          }
          else {
            if (temp_v6 < 7) goto LAB_002bb20c;
            if (temp_v6 < 0x46) goto LAB_002bb21c;
          }
        }
        else if (temp_v6 < 0x3c) {
LAB_002bb21c:
          temp_v6 = 1;
          goto LAB_002bb220;
        }
      }
      else if (temp_v5 != 1) {
        if (temp_v5 != 2) {
          if (temp_v5 != 3) {
            if (temp_v5 == 4) {
              if (temp_v6 >= 10) goto joined_r0x002bb1e8;
              goto LAB_002bb20c;
            }
          }
          else {
            if (temp_v6 < 6) goto LAB_002bb20c;
            if (temp_v6 < 0x48) goto LAB_002bb21c;
          }
        }
        else {
          if (temp_v6 < 2) goto LAB_002bb20c;
          if (temp_v6 < 0x39) goto LAB_002bb21c;
        }
      }
      else if (temp_v6 < 0x32) goto LAB_002bb21c;
    }
    if ((DAT_005739f8 & *(unsigned int *)(temp_v7 + 0x45a0)) != 0 ||
        (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_005739fc) != 0) {
      FUN_00408184(3,1);
    }
    break;
  case 6:
    FUN_004aa2e0(DAT_0057a9c8,0);
    temp_v6 = 4;
    do {
      puVar20 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v6 * 0x408);
      temp_v9 = *puVar20;
      temp_v10 = puVar20[1];
      if ((((DAT_00573978 & temp_v9) != 0 || (DAT_0057397c & temp_v10) != 0) &&
          ((temp_v10 & DAT_005739a4) == 0 && (temp_v9 & DAT_005739a0) == 0)) &&
         ((temp_v10 & DAT_00573994) != 0 || (DAT_00573990 & temp_v9) != 0)) {
        FUN_004fdb18(0,0,*(int *)(temp_v7 + 0x1ed4) + temp_v6 * 0x1d0,0x10,0);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x36);
    break;
  case 10:
    FUN_00385c44(temp_v7);
    break;
  case 0xb:
    temp_v6 = FUN_004d84e8(g_btlEvent);
    if (temp_v6 != 0) {
      return;
    }
    temp_v6 = g_btlEvent;
    if (!((DAT_005739f0 & *(unsigned int *)(temp_v7 + 0x45a0)) == 0 &&
         (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_005739f4) == 0)) {
      FUN_004d7a70(g_btlEvent,2,0xffffffff,0);
    }
    else {
      FUN_004d7a70(g_btlEvent,1,0xffffffff,0);
    }
    if (temp_v6 == 0) {
      return;
    }
    FUN_004d7fe4(g_btlEvent);
    break;
  case 0xc:
    *(unsigned int *)(temp_v7 + 0x4ccc) = 0xff;
    temp_v9 = DAT_00573a48;
    puVar20 = (unsigned int *)(temp_v7 + 0x45a0);
    temp_v10 = ~DAT_00573a70;
    *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_00573a74 & ~DAT_00573a4c;
    *puVar20 = *puVar20 & temp_v10 & ~temp_v9;
    temp_v6 = temp_v7;
    FUN_003ebca0();
    temp_v4 = DAT_005739cc;
    temp_v3 = DAT_005739c8;
    temp_v2 = DAT_005739a4;
    temp_v1 = DAT_005739a0;
    temp_v10 = DAT_0057397c;
    temp_v9 = DAT_00573978;
    if (temp_v6 == 0) {
      temp_v22[1] = temp_v7 + 0x3000;
      if ((*(short *)(temp_v7 + 0x301e) < 0) ||
         (*(short *)(temp_v7 + *(short *)(temp_v7 + 0x301e) * 2 + 0x3006) < 0)) {
        temp_v22[0] = DAT_005739a0;
        temp_v6 = 0;
        temp_v15 = 0xc;
        do {
          temp_v8 = temp_v7 + temp_v6 * 2;
          temp_v12 = (int)*(short *)(temp_v8 + 0x3006);
          if (-1 < temp_v12) {
            puVar18 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v12 * 0x408);
            temp_v13 = *puVar18;
            temp_v14 = puVar18[1];
            if ((((temp_v14 & temp_v10) == 0 && (temp_v13 & temp_v9) == 0) ||
                ((temp_v14 & temp_v2) != 0 || (temp_v13 & temp_v1) != 0)) ||
               ((temp_v13 & temp_v3) != 0 || (temp_v4 & temp_v14) != 0)) {
              *(unsigned short *)(temp_v8 + 0x3006) = 0xffff;
            }
          }
          temp_v15 = temp_v15 - 1;
          temp_v6 = temp_v6 + 1;
        } while (temp_v15 != 0);
        FUN_003e892c(temp_v7);
        FUN_004abbe8(DAT_0057a9c8);
      }
      piVar12 = (int *)(temp_v7 + 0x2410);
      temp_v5 = *(short *)(temp_v7 + *(short *)(temp_v22[1] + 0x1e) * 2 + 0x3006);
      piVar17 = (int *)(temp_v7 + 0x2414);
      *(unsigned int *)(*piVar12 + *piVar17 * 0x10) = 0;
      *(int *)(*piVar12 + *piVar17 * 0x10 + 4) = (int)temp_v5;
      *(unsigned int *)(*piVar12 + *piVar17 * 0x10 + 8) = 0;
      *(unsigned int *)(*piVar12 + *piVar17 * 0x10 + 0xc) = 0;
      *piVar17 = *piVar17 + 1;
    }
    temp_v6 = 0;
    do {
      puVar18 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v6 * 0x408);
      if ((((puVar18[1] & DAT_0057397c) != 0 || (*puVar18 & DAT_00573978) != 0) &&
          ((puVar18[1] & DAT_005739a4) == 0 && (*puVar18 & DAT_005739a0) == 0)) &&
         ((short)puVar18[0xcd] != 0)) {
        return;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x6d);
    temp_v9 = ~DAT_00573ac8;
    *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_00573acc;
    *puVar20 = *puVar20 & temp_v9;
    break;
  case 0xd:
    temp_v6 = temp_v7;
    FUN_003f29c0(temp_v7,temp_v22);
    if (temp_v6 != 0) {
      FUN_002b4f28(temp_v7,temp_v22[0],temp_v22[1],temp_v22[2],temp_v22[3]);
      temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + 0x3c));
      if (temp_v6 != 0) {
        return;
      }
      FUN_00363990(temp_v7);
      return;
    }
    temp_v11 = 0x16;
    if (g_btlMain != 0) {
      *(unsigned int *)(g_btlMain + 0x8c) = temp_v11;
    }
    break;
  case 0xe:
    *(unsigned int *)(temp_v7 + 0xa8) = 0;
    FUN_003f26d4(temp_v7);
    temp_v11 = 0xc;
    if (g_btlMain != 0) {
      *(unsigned int *)(g_btlMain + 0x8c) = temp_v11;
    }
    break;
  case 0xf:
    if (!((*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573ab4) == 0 &&
         (DAT_00573ab0 & *(unsigned int *)(temp_v7 + 0x45a0)) == 0)) {
      *(unsigned int *)(DAT_00573c50 + 8) = 4;
    }
    else {
      FUN_003f26d4(temp_v7);
      *(unsigned int *)(DAT_00573c50 + 8) = 1;
      FUN_004fb670(0,0);
      FUN_004feecc(1,0);
      temp_v6 = 0;
      do {
        temp_v15 = *(int *)(temp_v7 + 0x1ffc) + temp_v6 * 0x408;
        if (temp_v15 != -0x164) {
          *(unsigned short *)(temp_v15 + 0x332) = 0;
          *(unsigned short *)(temp_v15 + 0x334) = 0;
          *(unsigned short *)(temp_v15 + 0x336) = 0;
          *(unsigned short *)(temp_v15 + 0x338) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x6d);
      FUN_00409d8c(0xf,1);
    }
    break;
  case 0x10:
    *(unsigned int *)(temp_v7 + 0xa8) = 0;
    temp_v9 = DAT_00573ab4 | *(unsigned int *)(temp_v7 + 0x45a4);
    *(unsigned int *)(temp_v7 + 0x45a0) = DAT_00573ab0 | *(unsigned int *)(temp_v7 + 0x45a0);
    *(unsigned int *)(temp_v7 + 0x45a4) = temp_v9;
    *(unsigned int *)(temp_v7 + 0x8c) = 0xc;
    FUN_004abba8(DAT_0057a9c8,0);
    break;
  case 0x11:
    FUN_004f8f08(DAT_00573808);
    temp_v6 = temp_v7;
    FUN_003eaf20();
    temp_v11 = FUN_0015688c();
    FUN_003ecfb4(temp_v7,temp_v6 + 0x164,temp_v11,0);
    *(unsigned int *)(temp_v6 + 0x400) = temp_v11;
    break;
  case 0x13:
    temp_v9 = (*(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_00573ab4) | DAT_005739f4;
    *(unsigned int *)(temp_v7 + 0x45a0) = (*(unsigned int *)(temp_v7 + 0x45a0) & ~DAT_00573ab0) | DAT_005739f0;
    *(unsigned int *)(temp_v7 + 0x45a4) = temp_v9;
    FUN_003e49e8();
    if (DAT_00573808 != 0) {
      FUN_004f6184();
    }
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
    FUN_004f8f08(DAT_00573808);
    *(unsigned int *)(DAT_00573c50 + 8) = 8;
    *(unsigned char *)(temp_v7 + 0x4e4c) = 1;
    *(unsigned int *)(temp_v7 + 0x4d60) = 0;
    break;
  case 0x14:
    if (*(int *)(temp_v7 + 0xa8) == 8) {
      return;
    }
    puVar20 = (unsigned int *)btlUnitGet(g_btlScriptUnit);
    if ((*puVar20 & 0x10000) != 0) {
      if (*(short *)(temp_v7 + 0x2000) < 1) {
        return;
      }
    }
    else {
      temp_v10 = *(unsigned int *)puVar20[8];
      temp_v9 = ((unsigned int *)puVar20[8])[1];
      if ((temp_v9 & DAT_0057397c) == 0 && (temp_v10 & DAT_00573978) == 0) {
        return;
      }
      if ((temp_v9 & DAT_005739a4) != 0 || (temp_v10 & DAT_005739a0) != 0) {
        return;
      }
    }
    temp_v7 = FUN_004d84e8(g_btlEvent);
    if (temp_v7 != 0) {
      return;
    }
    temp_v7 = g_btlEvent;
    FUN_004d7a70(g_btlEvent,4,(int)*(short *)(puVar20[8] + 0x6e),0);
    if (temp_v7 == 0) {
      temp_v6 = g_btlEvent;
      FUN_004d7a70(g_btlEvent,10,(int)*(short *)(puVar20[8] + 0x6e),0);
      if (temp_v6 == 0) {
        return;
      }
    }
    FUN_004d7fe4(g_btlEvent);
    break;
  case 0x15:
    FUN_004fbeac(0,0,0,0x3a,0);
    FUN_0015688c();
    FUN_004bcb54();
    temp_v6 = FUN_0015688c();
    if (temp_v6 != 0) {
      FUN_003ecfb4(temp_v7,temp_v23,temp_v6,0);
      FUN_004ca63c(temp_v7,temp_v23,2,0x36,0);
    }
    temp_v9 = DAT_00573af4 | *(unsigned int *)(temp_v7 + 0x45a4);
    *(unsigned int *)(temp_v7 + 0x45a0) = DAT_00573af0 | *(unsigned int *)(temp_v7 + 0x45a0);
    *(unsigned int *)(temp_v7 + 0x45a4) = temp_v9;
    break;
  case 0x16:
    piVar17 = (int *)(temp_v7 + 0x1ffc);
    temp_v6 = 0;
    do {
      temp_v15 = temp_v6 + 1;
      puVar20 = (unsigned int *)(*piVar17 + temp_v6 * 0x408);
      *puVar20 = *puVar20 & ~temp_v9;
      puVar20[1] = puVar20[1] & ~temp_v10;
      temp_v6 = temp_v15;
    } while (temp_v15 < 0x6d);
    if ((*(int *)(temp_v7 + 0xa8) == 0) && (*(short *)(temp_v7 + 0x2002) == 0)) {
      if ((*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573a48) == 0 &&
          (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573a4c) == 0) {
        temp_v11 = 1;
      }
      else {
        temp_v11 = 5;
      }
      *(unsigned int *)(temp_v7 + 0xa8) = temp_v11;
    }
    puVar20 = (unsigned int *)*piVar17;
    temp_v18 = 1;
    if ((((puVar20[1] & DAT_0057397c) == 0 && (*puVar20 & DAT_00573978) == 0) ||
        ((DAT_005739a0 & *puVar20) != 0 || (DAT_005739a4 & puVar20[1]) != 0)) ||
       ((int)puVar20[0x96] < 1)) {
      if ((((((puVar20[0x103] & DAT_0057397c) != 0 || (puVar20[0x102] & DAT_00573978) != 0) &&
            ((puVar20[0x103] & DAT_005739a4) == 0 && (puVar20[0x102] & DAT_005739a0) == 0)) &&
           (0 < (int)puVar20[0x198])) ||
          ((((puVar20[0x205] & DAT_0057397c) != 0 || (puVar20[0x204] & DAT_00573978) != 0 &&
            ((puVar20[0x205] & DAT_005739a4) == 0 && (puVar20[0x204] & DAT_005739a0) == 0)) &&
           (0 < (int)puVar20[0x29a])))) ||
         ((((DAT_00573978 & puVar20[0x306]) != 0 || (DAT_0057397c & puVar20[0x307]) != 0 &&
           ((puVar20[0x307] & DAT_005739a4) == 0 && (puVar20[0x306] & DAT_005739a0) == 0)) &&
          (0 < (int)puVar20[0x39c])))) {
        temp_v18 = 0;
      }
    }
    else {
      temp_v18 = 0;
    }
    temp_v6 = FUN_00213b5c();
    if (((temp_v6 == 4) || (temp_v6 = FUN_003e46f4(0x80), temp_v6 != 0)) &&
       ((*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00573ae8) == 0 &&
        (DAT_00573aec & *(unsigned int *)(temp_v7 + 0x45a4)) == 0)) {
      temp_v10 = *(unsigned int *)*piVar17;
      temp_v9 = ((unsigned int *)*piVar17)[1];
      if ((DAT_00573978 & temp_v10) == 0 && (DAT_0057397c & temp_v9) == 0) {
        temp_v18 = 1;
      }
      if ((temp_v9 & DAT_005739a4) == 0 && (temp_v10 & DAT_005739a0) == 0) goto LAB_002bbdec;
      *(unsigned int *)(temp_v7 + 0xa8) = 2;
    }
    else {
LAB_002bbdec:
      if (temp_v18) {
        *(unsigned int *)(temp_v7 + 0xa8) = 2;
      }
    }
    temp_v6 = temp_v7;
    FUN_003ebca0();
    if (temp_v6 == 0) {
      if (0 < *(int *)(temp_v7 + 0xe8)) {
        temp_v9 = temp_v7 + 0x4c00;
        temp_v18 = *(short *)(temp_v7 + 0x4c74) == 0;
        if (temp_v18) {
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v7 + 0x4c76);
        }
        temp_v17 = temp_v18 && temp_v9 == 0;
        if (temp_v18 && temp_v9 == 0) {
          temp_v17 = *(int *)(temp_v7 + 0xe4) == 0;
        }
        if (((temp_v17) && (0 < *(short *)(temp_v7 + 0x2002))) &&
           (*(int *)(temp_v7 + 0xe8) - 1 <= (int)(unsigned int)*(unsigned char *)(temp_v7 + 0x45b9))) {
          *(unsigned int *)(temp_v7 + 0xa8) = 0xd;
        }
      }
      temp_v6 = *(int *)(temp_v7 + 0xa8);
      if (((temp_v6 == 1 || temp_v6 == 5) || temp_v6 == 10) && (*(char *)(temp_v7 + 0x45bc) != '\0')) {
        *(char *)(temp_v7 + 0x45bb) = *(char *)(temp_v7 + 0x45bb) + '\x01';
        *(unsigned int *)(temp_v7 + 0xa8) = 6;
      }
      temp_v9 = *(unsigned int *)(temp_v7 + 0x45a0);
      temp_v18 = (temp_v9 & DAT_00573ab0) == 0;
      temp_v17 = (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573ab4) == 0;
      temp_v6 = 0;
      if (!temp_v18 || !temp_v17) {
        temp_v6 = *(int *)(temp_v7 + 0xa8);
      }
      if (!((temp_v18 && temp_v17) || temp_v6 == 0)) {
        temp_v10 = ~DAT_00573ab4;
        *(unsigned int *)(temp_v7 + 0x45a0) = temp_v9 & ~DAT_00573ab0;
        *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & temp_v10;
        FUN_003e49e8();
        if (DAT_00573808 != 0) {
          FUN_004f6184();
        }
        *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
        FUN_004f8f08(DAT_00573808);
        temp_v7 = NaviMain_GetPosX();
        if (temp_v7 < 0) {
          FUN_00203d04(1);
        }
      }
      else if ((*(int *)(temp_v7 + 0x4d60) != 0) &&
              ((-1 < *(int *)(temp_v7 + 0xec) ||
               ((-1 < *(int *)(temp_v7 + 0xf0) && (*(int *)(temp_v7 + 0xa8) == 0)))))) {
        FUN_004fed5c(0);
        *(int *)(temp_v7 + 0x4d60) = 0;
      }
    }
    break;
  case 0x17:
    FUN_003984ac(temp_v7);
    break;
  case 0x19:
    puVar20 = (unsigned int *)(temp_v7 + 0x45a0);
    temp_v18 = (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573aec) == 0 && (*puVar20 & DAT_00573ae8) == 0;
    if (!temp_v18) {
      FUN_003eee9c();
      temp_v9 = ~DAT_00573afc;
      *puVar20 = *puVar20 & ~DAT_00573af8;
      *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & temp_v9;
    }
    else {
      FUN_003ee138(temp_v7);
    }
    FUN_004aa854(DAT_0057a9c8,temp_v18);
    break;
  case 0x1b:
    switch(*(unsigned int *)(temp_v7 + 0xa8)) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      break;
    default:
      temp_v7 = FUN_004d84e8(g_btlEvent);
      if ((temp_v7 == 0) &&
         (temp_v7 = g_btlEvent, FUN_004d7a70(g_btlEvent,8,0xffffffff,0), temp_v7 != 0)) {
        FUN_004d7fe4(g_btlEvent);
      }
      break;
    case 3:
      temp_v6 = gameGetOptions();
      temp_v9 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
      if ((temp_v9 != 0) && (temp_v10 = temp_v9, FUN_00184310(), temp_v10 != 0)) {
        sysMemClear(temp_v22,0x68);
        FUN_00180118(temp_v9);
        FUN_002e342c(temp_v22,temp_v9);
        FUN_003180c4(0xd,temp_v22);
        FUN_001695a0();
        FUN_00237898(*(unsigned int *)(temp_v7 + 0x2268),0,0,6,0);
        temp_v9 = DAT_00573a5c | *(unsigned int *)(temp_v7 + 0x45a4);
        *(unsigned int *)(temp_v7 + 0x45a0) = *(unsigned int *)(temp_v7 + 0x45a0) | DAT_00573a58;
        *(unsigned int *)(temp_v7 + 0x45a4) = temp_v9;
        sysPlaySe(0x92);
      }
    }
    break;
  case 0x1c:
    if ((*(unsigned int *)(temp_v7 + 0x110) & 2) == 0) {
      FUN_003d2d6c(0xf);
    }
    FUN_004f5e6c(DAT_00573808,temp_v7);
    temp_v9 = ~DAT_00573a08;
    temp_v10 = ~DAT_00573a18;
    *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_00573a0c & ~DAT_00573a1c;
    *(unsigned int *)(temp_v7 + 0x45a0) = *(unsigned int *)(temp_v7 + 0x45a0) & temp_v9 & temp_v10;
    FUN_004c8b10();
    temp_v6 = FUN_002619e0();
    if (temp_v6 != 0) {
      FUN_00203d04(1);
    }
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + 0x44));
    if (temp_v6 != 0) {
      jobStop(*(unsigned int *)(temp_v7 + 0x44),0);
    }
    FUN_0031cd00(temp_v7);
    break;
  case 0x1d:
    temp_v6 = 0;
    do {
      puVar20 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v6 * 0x408);
      if (((DAT_00573978 & *puVar20) != 0 || (DAT_0057397c & puVar20[1]) != 0) &&
         ((puVar20[1] & DAT_005739a4) == 0 && (*puVar20 & DAT_005739a0) == 0)) {
        if (puVar20[0xfe] != 0) {
          temp_v5 = *(short *)(puVar20[0xfe] + 0x1c);
          puVar20[0x97] = (int)temp_v5;
          temp_v0 = *(short *)(puVar20[0xfe] + 0x2a);
          if ((int)temp_v0 <= (int)temp_v5) {
            temp_v5 = temp_v0;
          }
          *(short *)(puVar20[0xfe] + 0x2a) = temp_v5;
        }
        else if (puVar20[0xff] != 0) {
          temp_v9 = FUN_0017760c();
          puVar20[0x97] = temp_v9;
          temp_v10 = (unsigned int)*(short *)(puVar20[0xff] + 0x2a);
          if ((int)temp_v10 <= (int)temp_v9) {
            temp_v9 = temp_v10;
          }
          *(short *)(puVar20[0xff] + 0x2a) = (short)temp_v9;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x6d);
    puVar20 = (unsigned int *)(temp_v7 + 0x45a0);
    if ((DAT_00573a54 & *(unsigned int *)(temp_v7 + 0x45a4)) == 0 && (*puVar20 & DAT_00573a50) == 0) {
      FUN_003f135c(temp_v7);
    }
    if ((DAT_00573ae8 & *puVar20) != 0 || (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573aec) != 0) {
      FUN_003eee9c(temp_v7);
    }
    temp_v6 = 0;
    do {
      temp_v15 = temp_v7 + temp_v6 * 4;
      psVar22 = (short *)(temp_v15 + 0x455c);
      if ((0 < *psVar22) && (*(short *)(temp_v15 + 0x455e) != 0)) {
        temp_v8 = FUN_0031d000(*psVar22);
        FUN_0031f138(*psVar22,(unsigned int)*(unsigned short *)(temp_v15 + 0x455e) + temp_v8);
        FUN_0041817c(*psVar22,*(unsigned short *)(temp_v15 + 0x455e));
        FUN_002854d8(*psVar22,1);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x10);
    temp_v9 = *(unsigned int *)(temp_v7 + 0x45a8);
    temp_v10 = *(unsigned int *)(temp_v7 + 0x45ac);
    if ((DAT_00573b50 & temp_v9) != 0 || (DAT_00573b54 & temp_v10) != 0) {
      *(unsigned int *)(temp_v7 + 0x1e4) = 0;
      *(unsigned int *)(temp_v7 + 0x1e8) = 0;
      *(unsigned int *)(temp_v7 + 0x1f0) = 0;
      *(unsigned int *)(temp_v7 + 500) = 0;
    }
    if ((DAT_00573b60 & temp_v9) != 0 || (DAT_00573b64 & temp_v10) != 0) {
      *(unsigned char *)(temp_v7 + 0x1ec) = 1;
    }
    if ((temp_v10 & DAT_00573b6c) != 0 || (DAT_00573b68 & temp_v9) != 0) {
      *(unsigned short *)(temp_v7 + 0x1ee) = 1;
    }
    *(unsigned int *)(temp_v7 + 500) = *(unsigned int *)(temp_v7 + 0x2368);
    *(int *)(temp_v7 + 0x1e0) = *(int *)(temp_v7 + 0x1e0) + *(int *)(temp_v7 + 0x23a0);
    temp_v6 = *(int *)(temp_v7 + 0x239c);
    do {
      temp_v15 = temp_v7 + temp_v6 * 4;
      if (*(int *)(temp_v15 + 0x236c) != 0) {
        temp_v18 = 1;
        temp_v8 = 0;
        do {
          temp_v12 = temp_v7 + temp_v8 * 4;
          temp_v16 = *(int *)(temp_v12 + 0x1b0);
          if (temp_v16 != 0) {
            unaff_r10 = *(int *)(temp_v15 + 0x236c);
          }
          if (temp_v16 == 0 || temp_v16 == unaff_r10) {
            *(unsigned int *)(temp_v12 + 0x1b0) = *(unsigned int *)(temp_v15 + 0x236c);
            unaff_r10 = *(int *)(temp_v15 + 0x2384);
            temp_v18 = 0;
            *(int *)(temp_v12 + 0x1c8) = *(int *)(temp_v12 + 0x1c8) + unaff_r10;
            *(unsigned int *)(temp_v15 + 0x236c) = 0;
            *(unsigned int *)(temp_v15 + 0x2384) = 0;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 6);
        if (temp_v18) break;
      }
      temp_v6 = temp_v6 - 1;
      if (temp_v6 < 0) {
        temp_v6 = 5;
      }
    } while (*(int *)(temp_v7 + 0x239c) != temp_v6);
    temp_v9 = ~DAT_00573a08;
    temp_v10 = ~DAT_00573a18;
    *(unsigned int *)(temp_v7 + 0x45a4) = *(unsigned int *)(temp_v7 + 0x45a4) & ~DAT_00573a0c & ~DAT_00573a1c;
    *puVar20 = *puVar20 & temp_v9 & temp_v10;
    FUN_004c8b10();
    if ((*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00573a54) == 0 && (*puVar20 & DAT_00573a50) == 0) {
      switch(*(unsigned int *)(temp_v7 + 0xa8)) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 10:
      case 0xb:
        if ((*(unsigned int *)(temp_v7 + 0x10c) & 0x800000) == 0) {
          FUN_004c8b10();
          FUN_002b53e0(temp_v7);
          FUN_002d173c();
        }
      }
    }
    break;
  case 0x1e:
    switch(*(unsigned char *)(temp_v7 + 0x123)) {
    case 1:
      if (*(int *)(temp_v7 + 0xa8) == 1) {
        piVar17 = (int *)(temp_v7 + 0x4d50);
        if (*piVar17 != 0) {
          asdMemFree();
          *piVar17 = 0;
        }
        if (*(int *)(temp_v7 + 0x4d54) != 0) {
          scrScriptProcessDestroy();
          *(int *)(temp_v7 + 0x4d54) = 0;
        }
        piVar12 = (int *)(temp_v7 + 0x4d58);
        *piVar12 = 0;
        FUN_002804b0("battle/Common/btlfade.bf",piVar17,0);
        *piVar12 = *piVar12 + 1;
        return;
      }
      break;
    case 2:
      FUN_001f4908(0,10,0xffffffff);
      FUN_001f4908(1,10,0xffffffff);
      return;
    case 3:
      return;
    case 4:
      if (*(int *)(temp_v7 + 0xa8) != 2) {
        return;
      }
    }
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    break;
  case 0x1f:
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0xa4) * 4 + 0xc));
    if (temp_v6 != 0) {
      jobStop(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0xa4) * 4 + 0xc),0);
    }
    *(unsigned int *)(temp_v7 + 0xa4) = 0;
    puVar8 = (unsigned int *)btlUnitGet(g_btlScriptUnit);
    *puVar8 = 0;
    FUN_002919b4(temp_v7,1);
    break;
  case 0x20:
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0xa4) * 4 + 0xc));
    if (temp_v6 != 0) {
      jobStop(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0xa4) * 4 + 0xc),0);
    }
    *(unsigned int *)(temp_v7 + 0xa4) = 0;
    puVar8 = (unsigned int *)btlUnitGet(g_btlScriptUnit);
    *puVar8 = 0;
    FUN_002b50e4(temp_v7);
  }
  return;
}

} /* extern "C" */
