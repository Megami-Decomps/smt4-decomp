/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b49a0` (_code @ 0x3b49a0, 0x1580 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int contentEntryFlagTest(void);
int FUN_0029a17c(...);
int FUN_0029cde0(...);
int FUN_0029efa8(...);
int FUN_002b6c34(...);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int efctSetSpeed(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_3_stack;

extern unsigned char LAB_003b4cc8; /* 0x3b4cc8 */
extern unsigned char LAB_003b532c; /* 0x3b532c */
extern unsigned char LAB_003b56f8; /* 0x3b56f8 */
extern unsigned char LAB_003b5704; /* 0x3b5704 */
extern unsigned char LAB_003b5cd8; /* 0x3b5cd8 */
extern unsigned char LAB_003b5f20; /* 0x3b5f20 */
extern unsigned char LAB_003b5f24; /* 0x3b5f24 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: contentEntryFlagTest. */
/* Supplied declaration required: FUN_0029a17c. */
extern unsigned int FUN_0029a924(unsigned short);
extern int FUN_0029aafc(void);
extern int flagCountUnlockedSlots(int);
/* Supplied declaration required: FUN_0029cde0. */
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: FUN_0029efa8. */
extern int gameGetUnitRecord(int);
extern int playerGetSkillRank(unsigned short);
/* Supplied declaration required: FUN_002b6c34. */
extern unsigned int aocIndexValueOrDefault(unsigned short);
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00333ea8(unsigned short, int);


void FUN_003b49a0(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar11;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [68];
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int *temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  
  temp_v11 = 0x28;
  temp_v14 = gameGetUnitRecord((int)*(char *)(param_1 + *(int *)(param_1 + 0xcf78) * 0x620 + 0x3654));
  temp_v9 = 0;
  temp_v19 = 0;
  temp_v18 = 0;
  temp_v16 = 0;
  temp_v1 = *(int *)(param_1 + 0x3534);
  temp_v20 = 0;
  if (temp_v1 == 2) {
    temp_v19 = 1;
  }
  else {
    temp_v9 = temp_v1 == 3;
    if (!temp_v9) {
      if (temp_v1 == 4) {
        temp_v16 = 1;
      }
      else if (temp_v1 == 5) {
        temp_v20 = 1;
      }
      else if (temp_v1 == 10) {
        temp_v18 = 1;
      }
    }
  }
  FUN_002bf380(2,0x28,0xb,param_2,param_3,0x65);
  FUN_002bf288(2,0x28,0xd1,param_2,param_3,0x65);
  FUN_002bf288(2,0x28,0xd2,param_2,param_3,0x6a);
  temp_v1 = FUN_002bf4f8(0x28,0xd3);
  temp_v2 = gameGetPlayerName();
  textFormatBuffer(temp_v10,&LAB_003b4cc8,temp_v2);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,0xff,temp_v10);
  FUN_002bf288(2,0x28,0xd4,param_2,param_3,0x65);
  FUN_002bf288(2,0x28,0xd5,param_2,param_3,0x6a);
  temp_v1 = FUN_002bf4f8(0x28,0xd6);
  temp_v2 = FUN_002bd068(*(unsigned short *)(temp_v14 + 0x46));
  textFormatBuffer(temp_v10,&LAB_003b4cc8,temp_v2);
  VectorSignedToFloat(*(short *)(temp_v1 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v1 + 8) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,0xff,temp_v10);
  temp_v1 = FUN_002bf4f8(0x28,0x3ec);
  FUN_002bf288(2,0x28,*(unsigned int *)(param_1 + 0x628),*(short *)(temp_v1 + 8) + param_2,
               *(short *)(temp_v1 + 10) + param_3,0x65);
  temp_v15 = FUN_0029aafc();
  temp_v25 = (int *)(param_1 + 0x3544);
  temp_v26 = temp_v16 | temp_v18;
  temp_v13 = param_1 + 0xd134;
  temp_v23 = param_1 + 0xd000;
  temp_v24 = param_1 + 0xd04c;
  piVar11 = (int *)0x0;
  do {
    if ((!temp_v9) || (piVar4 = (int *)FUN_0029efa8(temp_v24), piVar4 != piVar11)) {
      piVar5 = (int *)FUN_002bf4f8(temp_v11,piVar11 + 0x39);
      piVar4 = piVar5;
      temp_v1 = param_2;
      temp_v3 = param_3;
      if ((temp_v16 != 0) && (piVar4 = (int *)FUN_0029efa8(temp_v24), piVar4 == piVar11)) {
        if (*temp_v25 < 1) {
          VectorSignedToFloat(1 - *temp_v25,(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar4 = temp_v25;
        }
        else {
          temp_v1 = vec2GetXInt(param_1 + 0x6b0);
          temp_v1 = param_2 + temp_v1;
          temp_v3 = vec2GetYInt(param_1 + 0x6b0);
          temp_v3 = param_3 + temp_v3;
          piVar4 = (int *)(param_1 + 0x6b0);
        }
      }
      temp_v5 = 0;
      if (((temp_v20 != 0) && (temp_v5 = 0, *(char *)((int)piVar11 + param_1 + 0xd2d0) != '\0')) &&
         (temp_v5 = *temp_v25, piVar4 = temp_v25, temp_v5 < 7)) {
        temp_v5 = 6 - temp_v5;
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      efctSetSpeed(piVar4,temp_v5);
      FUN_002bf380(2,temp_v11,9,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3,0x65);
      if ((int)piVar11 >= temp_v15) {
        FUN_002bf288(2,temp_v11,0x118,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3,
                     0x6f);
      }
      else {
        temp_v5 = param_1 + (int)piVar11 * 2;
        temp_v27 = temp_v5 + 0xd100;
        if (*(short *)(temp_v5 + 0xd114) != 0) {
          FUN_002bf288(2,temp_v11,0xdb,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3
                       ,0x6a);
          FUN_002bf288(2,temp_v11,0xdc,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3
                       ,0x6f);
          FUN_002bf288(2,temp_v11,0xdd,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3
                       ,0x74);
          temp_v2 = 0xff;
          temp_v17 = *(unsigned short *)(temp_v27 + 0x24);
          temp_v5 = temp_v13;
          FUN_0029cde0(temp_v13,*(unsigned int *)(temp_v23 + 0x2c4),*(unsigned short *)(temp_v27 + 0x14));
          if (temp_v5 != 0) {
            temp_v2 = 0x8400ff;
          }
          temp_v5 = FUN_002bf4f8(temp_v11,0xde);
          FUN_002b6c34((int)*(short *)(temp_v27 + 0x14),
                       (int)*(short *)(temp_v5 + 8) + (int)(short)piVar5[2] + temp_v1,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)((int)piVar5 + 10) + temp_v3,0x6a,
                       1,temp_v17);
          temp_v12 = FUN_002bf4f8(temp_v11,0xdf);
          temp_v4 = aocIndexValueOrDefault(*(unsigned short *)(temp_v27 + 0x14));
          textFormatBuffer(temp_v10,&LAB_003b4cc8,temp_v4);
          VectorSignedToFloat((int)*(short *)((int)piVar5 + 10) + (int)*(short *)(temp_v12 + 10) +
                              temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)(short)piVar5[2] + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v2,temp_v10,(int)(short)piVar5[2]);
          temp_v5 = playerGetSkillRank(*(unsigned short *)(temp_v27 + 0x14));
          temp_v2 = FUN_00333ea8(*(unsigned short *)(temp_v27 + 0x14),temp_v5 + temp_v17);
          temp_v5 = FUN_002bf4f8(temp_v11,0xe3);
          FUN_002bdf94(1,(int)(short)piVar5[2] + (int)*(short *)(temp_v5 + 8) + temp_v1,
                       (int)*(short *)((int)piVar5 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,1,4,
                       0x79,&LAB_003b532c,temp_v2);
        }
        else {
          temp_v12 = FUN_002bf4f8(temp_v11,0xdf);
          textFormatBuffer(temp_v10,&LAB_003b5704);
          VectorSignedToFloat((int)*(short *)((int)piVar5 + 10) + (int)*(short *)(temp_v12 + 10) +
                              temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)(short)piVar5[2] + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xff,temp_v10,(int)(short)piVar5[2]);
        }
        if ((temp_v26 != 0) && (*(short *)(param_1 + (int)piVar11 * 0x8c + 0x824) != 0)) {
          temp_v5 = g_titleScene;
          temp_v6 = packNibblesAndByte(6,1,0);
          piVar4 = (int *)(temp_v5 + 0x12ac);
          temp_v7 = piVar4[*piVar4 + 2];
          piVar4[*piVar4 + 2] = temp_v6;
          if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
            (**(romwright_code **)(temp_v5 + 0x12c8))(temp_v6);
            *(unsigned char *)(piVar4 + 6) = 0;
          }
          efctSetSpeed();
          FUN_002bf288(2,temp_v11,0xda,(short)piVar5[2] + temp_v1,*(short *)((int)piVar5 + 10) + temp_v3
                       ,0x97);
          efctSetSpeed();
          temp_v1 = g_titleScene;
          temp_v3 = packNibblesAndByte(6,7,0);
          piVar4 = (int *)(temp_v1 + 0x12ac);
          temp_v5 = piVar4[*piVar4 + 2];
          piVar4[*piVar4 + 2] = temp_v3;
          if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v5 != temp_v3) {
            (**(romwright_code **)(temp_v1 + 0x12c8))();
            *(unsigned char *)(temp_v1 + 0x12c4) = 0;
          }
        }
        efctSetSpeed();
      }
    }
    piVar11 = (int *)((int)piVar11 + 1);
  } while ((int)piVar11 < 8);
  if (temp_v9) {
    temp_v15 = FUN_0029efa8(temp_v24);
    temp_v1 = FUN_002bf4f8(temp_v11,temp_v15 + 0x103);
    efctSetSpeed();
    efctSetSpeed();
    FUN_002bf380(2,temp_v11,10,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0xbf
                );
    efctSetSpeed();
    FUN_002bf288(2,temp_v11,0xf7,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                 0xc4);
    temp_v3 = FUN_0029efa8(temp_v24);
    temp_v3 = ifTouchGetSelectionModeForRegion((int)*(short *)(param_1 + temp_v3 * 2 + 0x357e));
    temp_v5 = *(short *)(temp_v1 + 10) + param_3;
    temp_v6 = *(short *)(temp_v1 + 8) + param_2;
    if (!((temp_v3 == 1 || temp_v3 == 2) || temp_v3 == 6)) {
      FUN_002bf288(2,temp_v11,0xf8,temp_v6,temp_v5,0xc4);
    }
    else {
      FUN_002bf288(2,temp_v11,0xf9,temp_v6,temp_v5,0xc4);
    }
    temp_v5 = FUN_002bf4f8(temp_v11,0xf8);
    temp_v3 = g_titleScene;
    piVar11 = (int *)(g_titleScene + 0x130c);
    temp_v6 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 3;
    if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v6 != 3) {
      (**(romwright_code **)(temp_v3 + 0x1328))(3);
      *(unsigned char *)(temp_v3 + 0x1324) = 0;
    }
    FUN_0029a17c((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,
                 (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1],1);
    temp_v3 = vec2GetYInt(param_1 + 0x480);
    temp_v0 = *(short *)(temp_v1 + 10);
    temp_v5 = vec2GetXInt(param_1 + 0x480);
    FUN_002bf288(2,temp_v11,0xfa,temp_v5 + param_2 + (int)*(short *)(temp_v1 + 8),
                 temp_v3 + param_3 + (int)temp_v0,0xc9);
    temp_v3 = g_titleScene;
    piVar11 = (int *)(g_titleScene + 0x130c);
    temp_v5 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 0;
    if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v5 != 0) {
      (**(romwright_code **)(temp_v3 + 0x1328))(0);
      *(unsigned char *)(temp_v3 + 0x1324) = 0;
    }
    temp_v3 = param_1 + temp_v15 * 2;
    if (*(short *)(temp_v3 + 0xd114) != 0) {
      FUN_002bf288(2,temp_v11,0xfb,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                   0xc4);
      FUN_002bf288(2,temp_v11,0xfc,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                   0xc9);
      temp_v2 = 0xffffffff;
      temp_v8 = *(unsigned short *)(temp_v3 + 0xd124) & 0xff;
      temp_v5 = temp_v13;
      FUN_0029cde0(temp_v13,*(unsigned int *)(temp_v23 + 0x2c4),*(unsigned short *)(temp_v3 + 0xd114));
      if (temp_v5 != 0) {
        temp_v2 = 0x8400ff;
      }
      temp_v5 = FUN_002bf4f8(temp_v11,0xfe);
      temp_v4 = aocIndexValueOrDefault(*(unsigned short *)(temp_v3 + 0xd114));
      textFormatBuffer(temp_v10,&LAB_003b56f8,temp_v4);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,temp_v2,temp_v10,(int)*(short *)(temp_v1 + 8));
      temp_v5 = FUN_002bf4f8(temp_v11,0xfd);
      FUN_002b6c34((int)*(short *)(temp_v3 + 0xd114),
                   (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,0xc9,1,temp_v8
                  );
      temp_v5 = playerGetSkillRank(*(unsigned short *)(temp_v3 + 0xd114));
      temp_v2 = FUN_00333ea8(*(unsigned short *)(temp_v3 + 0xd114),temp_v5 + temp_v8);
      temp_v3 = FUN_002bf4f8(temp_v11,0x102);
      FUN_002bdf94(1,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0xc9,
                   &LAB_003b532c,temp_v2);
    }
    else {
      temp_v3 = FUN_002bf4f8(temp_v11,0xfe);
      textFormatBuffer(temp_v10,&LAB_003b5704);
      VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xffffffff,temp_v10,(int)*(short *)(temp_v1 + 8));
    }
  }
  temp_v15 = flagCountUnlockedSlots(temp_v14);
  temp_v21 = param_1 + 0xd0b0;
  temp_v1 = 0;
  do {
    if ((temp_v19 == 0) || (temp_v3 = FUN_0029efa8(temp_v21), temp_v3 != temp_v1)) {
      temp_v3 = FUN_002bf4f8(temp_v11,temp_v1 + 0xec);
      efctSetSpeed();
      FUN_002bf380(2,temp_v11,9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                   0x97);
      if (temp_v1 >= temp_v15) {
        FUN_002bf288(2,temp_v11,0x118,*(short *)(temp_v3 + 8) + param_2,
                     *(short *)(temp_v3 + 10) + param_3,0x9c);
      }
      else {
        if ((temp_v9) && (temp_v5 = FUN_0029efa8(temp_v21), temp_v5 == temp_v1)) {
          FUN_002bf288(2,temp_v11,0xda,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0x9a);
        }
        temp_v22 = temp_v14 + temp_v1 * 2;
        if (*(short *)(temp_v22 + 0x34) != 0) {
          FUN_002bf288(2,temp_v11,0xdb,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0x9c);
          FUN_002bf288(2,temp_v11,0xdc,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xa1);
          FUN_002bf288(2,temp_v11,0xdd,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xa6);
          temp_v5 = FUN_002bf4f8(temp_v11,0xde);
          FUN_002b6c34((int)*(short *)(temp_v22 + 0x34),
                       (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,0x9c,0,0)
          ;
          temp_v2 = 0xff;
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v22 + 0x34);
          contentEntryFlagTest();
          if (temp_v8 == 0) {
            temp_v2 = 0x5a5a5aff;
          }
          temp_v5 = temp_v13;
          FUN_0029cde0(temp_v13,*(unsigned int *)(temp_v23 + 0x2c4),*(unsigned short *)(temp_v22 + 0x34));
          if (temp_v5 != 0) {
            temp_v2 = 0x5a5a5aff;
          }
          if ((temp_v9) && (temp_v5 = FUN_0029efa8(temp_v21), temp_v5 == temp_v1)) {
            temp_v2 = 0xff;
          }
          temp_v12 = FUN_002bf4f8(temp_v11,0xdf);
          temp_v4 = aocIndexValueOrDefault(*(unsigned short *)(temp_v22 + 0x34));
          textFormatBuffer(temp_v10,&LAB_003b56f8,temp_v4);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v12 + 10) + param_3
                              ,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v2,temp_v10,(int)*(short *)(temp_v3 + 8));
          temp_v2 = FUN_0029a924(*(unsigned short *)(temp_v22 + 0x34));
          temp_v5 = FUN_002bf4f8(temp_v11,0xe3);
          FUN_002bdf94(1,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,1,4,0xab,
                       &LAB_003b5cd8,temp_v2);
        }
        else {
          temp_v12 = FUN_002bf4f8(temp_v11,0xdf);
          textFormatBuffer(temp_v10,&LAB_003b5f24);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v12 + 10) + param_3
                              ,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xff,temp_v10,(int)*(short *)(temp_v3 + 8));
        }
        if ((temp_v18 != 0) && (*(short *)(param_1 + temp_v1 * 0x8c + 0xc84) != 0)) {
          temp_v5 = g_titleScene;
          temp_v6 = packNibblesAndByte(6,1,0);
          piVar11 = (int *)(temp_v5 + 0x12ac);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v6;
          if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v6) {
            (**(romwright_code **)(temp_v5 + 0x12c8))(temp_v6);
            *(unsigned char *)(piVar11 + 6) = 0;
          }
          efctSetSpeed();
          FUN_002bf288(2,temp_v11,0xda,*(short *)(temp_v3 + 8) + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xab);
          efctSetSpeed();
          temp_v3 = g_titleScene;
          temp_v5 = packNibblesAndByte(6,7,0);
          piVar11 = (int *)(temp_v3 + 0x12ac);
          temp_v6 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v5;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  if (temp_v20 != 0 || temp_v19 != 0) {
    temp_v1 = FUN_0029efa8(temp_v21);
    temp_v3 = FUN_002bf4f8(temp_v11,temp_v1 + 0x10b);
    efctSetSpeed();
    efctSetSpeed();
    FUN_002bf380(2,temp_v11,10,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0xbf
                );
    efctSetSpeed();
    FUN_002bf288(2,temp_v11,0xf7,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                 0xc4);
    temp_v5 = FUN_0029efa8(temp_v21);
    temp_v5 = ifTouchGetSelectionModeForRegion((int)*(short *)(param_1 + temp_v5 * 2 + 0x358e));
    temp_v6 = *(short *)(temp_v3 + 10) + param_3;
    temp_v7 = *(short *)(temp_v3 + 8) + param_2;
    if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
      FUN_002bf288(2,temp_v11,0xf8,temp_v7,temp_v6,0xc4);
    }
    else {
      FUN_002bf288(2,temp_v11,0xf9,temp_v7,temp_v6,0xc4);
    }
    FUN_002bf288(2,temp_v11,0xfb,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                 0xc4);
    temp_v6 = FUN_002bf4f8(temp_v11,0xf8);
    temp_v5 = g_titleScene;
    piVar11 = (int *)(g_titleScene + 0x130c);
    temp_v7 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 3;
    if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v7 != 3) {
      (**(romwright_code **)(temp_v5 + 0x1328))();
      *(unsigned char *)(temp_v5 + 0x1324) = 0;
    }
    FUN_0029a17c((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_2,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_3,
                 (int)**(short **)(temp_v6 + 0xc),(int)(*(short **)(temp_v6 + 0xc))[1],1);
    temp_v5 = vec2GetYInt(param_1 + 0x480);
    temp_v0 = *(short *)(temp_v3 + 10);
    temp_v6 = vec2GetXInt(param_1 + 0x480);
    FUN_002bf288(2,temp_v11,0xfa,temp_v6 + param_2 + (int)*(short *)(temp_v3 + 8),
                 temp_v5 + param_3 + (int)temp_v0,0xc9);
    temp_v5 = g_titleScene;
    piVar11 = (int *)(g_titleScene + 0x130c);
    temp_v6 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 0;
    if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
      (**(romwright_code **)(temp_v5 + 0x1328))();
      *(unsigned char *)(temp_v5 + 0x1324) = 0;
    }
    FUN_002bf288(2,temp_v11,0xfc,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                 0xc9);
    temp_v2 = 0xffffffff;
    temp_v1 = temp_v14 + temp_v1 * 2;
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v1 + 0x34);
    contentEntryFlagTest();
    if (temp_v8 == 0) {
      temp_v2 = 0x5a5a5aff;
    }
    temp_v5 = temp_v13;
    FUN_0029cde0(temp_v13,*(unsigned int *)(temp_v23 + 0x2c4),*(unsigned short *)(temp_v1 + 0x34));
    if (temp_v5 != 0) {
      temp_v2 = 0x5a5a5aff;
    }
    temp_v5 = FUN_002bf4f8(temp_v11,0xfe);
    temp_v4 = aocIndexValueOrDefault(*(unsigned short *)(temp_v1 + 0x34));
    textFormatBuffer(temp_v10,&LAB_003b5f20,temp_v4);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + param_3,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v2,temp_v10,(int)*(short *)(temp_v5 + 8));
    temp_v5 = FUN_002bf4f8(temp_v11,0xfd);
    FUN_002b6c34((int)*(short *)(temp_v1 + 0x34),
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v5 + 8) + param_2,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,0xc9,0,0);
    temp_v2 = FUN_0029a924(*(unsigned short *)(temp_v1 + 0x34));
    temp_v1 = FUN_002bf4f8(temp_v11,0x102);
    FUN_002bdf94(1,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_2,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,1,4,0xc9,
                 &LAB_003b5cd8,temp_v2);
  }
  return;
}

} /* extern "C" */
