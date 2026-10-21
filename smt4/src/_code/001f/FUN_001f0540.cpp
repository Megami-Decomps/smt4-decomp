/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f0540` (_code @ 0x1f0540, 0x167c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002580d4(...);
int FUN_0026a9cc(...);
int FUN_00290994(...);
int FUN_0029a17c(...);
int FUN_0029cde0(...);
int FUN_0029dc74(...);
int FUN_002b6758(...);
int FUN_002b6c34(...);
int devilGetRecord(void);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int efctSetSpeed(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_6: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int sp6BC; /* 0x6bc: local_6bc */
    unsigned int sp6C0; /* 0x6c0: local_6c0 */
    unsigned int sp6C4; /* 0x6c4: local_6c4 */
    unsigned int sp6C8; /* 0x6c8: local_6c8 */
    unsigned int sp6CC; /* 0x6cc: local_6cc */
    unsigned int sp6D0; /* 0x6d0: local_6d0 */
    unsigned int sp6D4; /* 0x6d4: local_6d4 */
    unsigned int sp6D8; /* 0x6d8: local_6d8 */
    unsigned int sp6DC; /* 0x6dc: local_6dc */
    unsigned int sp6E0; /* 0x6e0: local_6e0 */
    unsigned int sp6E4; /* 0x6e4: local_6e4 */
    unsigned int sp6E8; /* 0x6e8: local_6e8 */
} param_6_stack;

extern unsigned char LAB_001f0928; /* 0x1f0928 */
extern unsigned char LAB_001f0940; /* 0x1f0940 */
extern unsigned char LAB_001f0948; /* 0x1f0948 */
extern unsigned char LAB_001f0c5c; /* 0x1f0c5c */
extern unsigned char LAB_001f12f4; /* 0x1f12f4 */
extern unsigned char LAB_001f12fc; /* 0x1f12fc */
extern unsigned char LAB_001f1310; /* 0x1f1310 */
extern unsigned char LAB_001f1a6c; /* 0x1f1a6c */
extern unsigned char LAB_001f1a84; /* 0x1f1a84 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002580d4. */
extern int FUN_0026280c(void);
/* Supplied declaration required: FUN_0026a9cc. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
extern unsigned int FUN_0029a924(unsigned short);
extern int FUN_0029c8f4(unsigned char *);
/* Supplied declaration required: FUN_0029cde0. */
extern int FUN_0029d644(int);
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_0029dc74. */
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: devilGetRecord. */
extern unsigned int FUN_002bce00(unsigned short);
extern unsigned int FUN_002bce30(short, unsigned int);
extern unsigned int FUN_002bd068(short);
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


void FUN_001f0540(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int *piVar17;
  unsigned int temp_v15;
  unsigned int in_fpscr;
  unsigned char temp_v16 [1548];
  int temp_v17;
  unsigned char temp_v18 [64];
  short temp_v19 [8];
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  
  temp_v22 = param_1;
  temp_v23 = param_2;
  temp_v24 = param_3;
  temp_v25 = param_4;
  temp_v1 = FUN_0026280c();
  temp_v13 = temp_v23;
  temp_v4 = temp_v22;
  if (temp_v1 != 0) {
    temp_v20 = 0;
    FUN_002bf380(2,0x24,1,temp_v22,temp_v23,0x65);
    FUN_002bf288(2,0x24,0x163,temp_v4,temp_v13,0x6a);
    FUN_002bf288(2,0x24,0x164,temp_v4,temp_v13,0x6a);
    FUN_002bf288(2,0x24,0x165,temp_v4,temp_v13,0x6f);
    FUN_002bf288(2,0x24,0x166,temp_v4,temp_v13,0x6a);
    FUN_002bf288(2,0x24,0x167,temp_v4,temp_v13,0x6f);
    FUN_002bf288(2,0x24,0x16a,temp_v4,temp_v13,0x6a);
    FUN_002bf288(2,0x24,0x16b,temp_v4,temp_v13,0x6f);
    FUN_002bf288(2,0x24,0x16c,temp_v4,temp_v13,0x74);
    temp_v2 = FUN_002bf4f8(0x24,0x168);
    textFormatBuffer(temp_v18,&LAB_001f0940,&LAB_001f0928);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xff,temp_v18);
    temp_v2 = FUN_002bf4f8(0x24,0x169);
    textFormatBuffer(temp_v18,&LAB_001f0940,&LAB_001f0948);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xff,temp_v18);
    FUN_002bf288(2,0x24,0x16d,
                 temp_v4 - ((int)(*(int *)(temp_v1 + 0x3fc) +
                               ((unsigned int)(*(int *)(temp_v1 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,temp_v13,
                 0x6f);
    efctSetSpeed();
    FUN_002bf288(2,0x24,0x16e,
                 temp_v4 - ((int)(*(int *)(temp_v1 + 0x3fc) +
                               ((unsigned int)(*(int *)(temp_v1 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,temp_v13,
                 0x74);
    efctSetSpeed();
    FUN_002bf288(2,0x24,0x4f,temp_v4,temp_v13,0x6a);
    if (temp_v25 != 0) {
      psVar4 = (short *)(unsigned int)*(unsigned short *)(temp_v1 + 0x5210);
      devilGetRecord();
    }
    else if (param_6 != 0) {
      psVar4 = (short *)((*(unsigned int *)(temp_v1 + 0x1394) & 0x1ffff) >> 2);
      devilGetRecord();
    }
    else {
      psVar4 = (short *)((*(unsigned int *)(temp_v1 + (unsigned int)*(unsigned short *)(temp_v1 + 0x6ce2) * 8 + 0x1394) &
                         0x1ffff) >> 2);
      devilGetRecord();
    }
    temp_v2 = FUN_002bf4f8(0x24,0x4d);
    temp_v3 = FUN_002bd068(*psVar4);
    textFormatBuffer(temp_v18,&LAB_001f0940,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v18);
    temp_v2 = FUN_002bf4f8(0x24,0x4e);
    temp_v3 = FUN_002bce30(*psVar4,0);
    textFormatBuffer(temp_v18,&LAB_001f0940,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xf49800ff,temp_v18);
    temp_v2 = FUN_002bf4f8(0x24,0x51);
    FUN_002bdf94(0,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v13,1,2,0x8d,
                 &LAB_001f0c5c,*(unsigned char *)((int)psVar4 + 3));
    temp_v15 = 0;
    temp_v2 = FUN_0029d644(temp_v1 + 0x91a0);
    if (0 < temp_v2) {
      do {
        if (*(short *)(temp_v1 + temp_v15 * 2 + 0x9010) == 0) break;
        temp_v15 = temp_v15 + 1;
        temp_v2 = FUN_0029d644(temp_v1 + 0x91a0);
      } while ((int)temp_v15 < temp_v2);
    }
    temp_v2 = FUN_002bf4f8(0x24,0x1ed);
    FUN_002b6758((int)*psVar4,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v13,0x8d,0);
    FUN_002580d4(*psVar4,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v13,0x92);
    FUN_0029dc74(*psVar4,temp_v16);
    temp_v4 = FUN_0029c8f4(temp_v16);
    temp_v21 = temp_v1 + 0x9000;
    temp_v17 = temp_v1 + 0x9204;
    temp_v12 = 0;
    do {
      temp_v2 = temp_v23;
      temp_v13 = temp_v22;
      temp_v5 = FUN_002bf4f8(0x24,temp_v12 + 0x17d);
      if ((int)temp_v12 >= temp_v4) {
        FUN_002bf288(2,0x24,0x229,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
      }
      else {
        if ((int)temp_v12 < (int)(temp_v15 - *(int *)(temp_v21 + 0x26c))) {
          FUN_002bf288(2,0x24,0x172,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                       0x65);
        }
        else {
          temp_v14 = FUN_0029ee54(temp_v17);
          if ((*(int *)(temp_v21 + 0x26c) < temp_v14) && (temp_v12 == temp_v15)) {
            if (temp_v24 != 1) {
              if ((temp_v24 == 2 || temp_v24 == 3) && (temp_v20 != 0)) {
                temp_v2 = temp_v2 + *(int *)(temp_v1 + 0x3fc) * -3;
              }
            }
            else if (*(int *)(temp_v1 + 0x3fc) < 1) {
              temp_v14 = 1 - *(int *)(temp_v1 + 0x3fc);
              VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
              efctSetSpeed(temp_v14);
            }
            FUN_002bf288(2,0x24,0x173,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
          }
          else {
            if (temp_v24 != 1) {
              if (temp_v24 != 2) {
                if ((temp_v24 == 3) && (temp_v14 = *(int *)(temp_v1 + 0x3fc), temp_v14 < 6)) {
                  if (temp_v20 != 0) {
                    temp_v2 = temp_v2 + temp_v14 * -3;
                  }
                  temp_v6 = 7;
                  do {
                    temp_v10 = temp_v1 + temp_v6 * 2;
                    if (*(short *)(temp_v10 + 0x9010) != 0) break;
                    if (*(short *)(temp_v10 + 0x900e) != 0) {
                      temp_v6 = temp_v6 - 1;
                      break;
                    }
                    temp_v6 = temp_v6 - 2;
                  } while (temp_v6 < 0x80000000);
                  if (temp_v12 == temp_v6) {
                    VectorSignedToFloat(5 - temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                    efctSetSpeed(5 - temp_v14);
                    temp_v20 = 1;
                  }
                }
              }
              else if (*(int *)(temp_v1 + 0x3fc) < 6) {
                temp_v14 = FUN_0029efc0(temp_v17);
                temp_v10 = FUN_0029efa8(temp_v17);
                if (temp_v20 != 0) {
                  temp_v2 = temp_v2 + *(int *)(temp_v1 + 0x3fc) * -3;
                }
                if (*(short *)(temp_v1 + temp_v12 * 2 + 0x9010) ==
                    *(short *)(temp_v1 + (temp_v10 + temp_v14) * 2 + 0x9020)) {
                  temp_v14 = 5 - *(int *)(temp_v1 + 0x3fc);
                  VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                  efctSetSpeed(temp_v14);
                  temp_v20 = 1;
                }
              }
            }
            else if (0 < *(int *)(temp_v1 + 0x3fc)) {
              temp_v14 = FUN_0029efc0(temp_v17);
              temp_v10 = FUN_0029efa8(temp_v17);
              if (*(short *)(temp_v1 + temp_v12 * 2 + 0x9010) ==
                  *(short *)(temp_v1 + (temp_v10 + temp_v14) * 2 + 0x9020)) {
                temp_v14 = vec2GetXInt(temp_v1 + 0x2e0);
                temp_v13 = temp_v13 + temp_v14;
                temp_v14 = vec2GetYInt(temp_v1 + 0x2e0);
                temp_v2 = temp_v2 + temp_v14;
                efctSetSpeed();
              }
            }
            FUN_002bf288(2,0x24,0x171,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
          }
        }
        FUN_002bf288(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        temp_v14 = temp_v1 + temp_v12 * 2;
        if (*(short *)(temp_v14 + 0x9010) != 0) {
          FUN_002bf288(2,0x24,0x174,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6a);
          FUN_002bf288(2,0x24,0x175,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6a);
          FUN_002bf288(2,0x24,0x176,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6f);
          temp_v3 = 0xff;
          if ((int)temp_v12 < (int)(temp_v15 - *(int *)(temp_v21 + 0x26c))) {
            temp_v3 = 0xffffffff;
          }
          temp_v9 = FUN_002bce00(*(unsigned short *)(temp_v14 + 0x9010));
          textFormatBuffer(temp_v18,&LAB_001f12f4,temp_v9);
          temp_v10 = FUN_002bf4f8(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v13,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v3,temp_v18,(int)*(short *)(temp_v5 + 8));
          temp_v10 = FUN_002bf4f8(0x24,0x177);
          FUN_002b6c34((int)*(short *)(temp_v14 + 0x9010),
                       (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v13,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,0x74,0,0);
          temp_v10 = FUN_002bf4f8(0x24,0x17c);
          temp_v3 = FUN_0029a924(*(unsigned short *)(temp_v14 + 0x9010));
          FUN_002bdf94(1,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v13,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,1,4,0x79,
                       &LAB_001f0c5c,temp_v3);
        }
        else {
          textFormatBuffer(temp_v18,&LAB_001f12fc);
          temp_v10 = FUN_002bf4f8(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v13,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xff,temp_v18,(int)*(short *)(temp_v5 + 8));
        }
        if ((temp_v24 == 1) && (*(int *)(temp_v1 + 0x3fc) >= 5)) {
          temp_v10 = FUN_0029efc0(temp_v17);
          temp_v7 = FUN_0029efa8(temp_v17);
          if (*(short *)(temp_v14 + 0x9010) == *(short *)(temp_v1 + (temp_v7 + temp_v10) * 2 + 0x9020)) {
            efctSetSpeed();
            temp_v14 = g_titleScene;
            temp_v10 = packNibblesAndByte(6,1,0);
            piVar17 = (int *)(temp_v14 + 0x12ac);
            temp_v7 = piVar17[*piVar17 + 2];
            piVar17[*piVar17 + 2] = temp_v10;
            if (*(char *)(temp_v14 + 0x12c4) != '\0' || temp_v7 != temp_v10) {
              (**(romwright_code **)(temp_v14 + 0x12c8))();
              *(unsigned char *)(temp_v14 + 0x12c4) = 0;
            }
            FUN_002bf288(2,0x24,0x173,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
            temp_v13 = g_titleScene;
            temp_v2 = packNibblesAndByte(6,7,0);
            piVar17 = (int *)(temp_v13 + 0x12ac);
            temp_v5 = piVar17[*piVar17 + 2];
            piVar17[*piVar17 + 2] = temp_v2;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
          }
        }
        efctSetSpeed();
      }
      temp_v2 = temp_v23;
      temp_v13 = temp_v22;
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < 8);
    temp_v19[0] = 0;
    temp_v19[1] = 0;
    temp_v19[2] = 0;
    temp_v19[3] = 0;
    temp_v19[4] = 0;
    temp_v19[5] = 0;
    temp_v19[6] = 0;
    temp_v19[7] = 0;
    temp_v4 = temp_v1 + 0x9010;
    FUN_0026a9cc(*psVar4,*(unsigned char *)((int)psVar4 + 3),temp_v4,temp_v19,0);
    temp_v5 = 0;
    do {
      if (temp_v19[temp_v5] == 0) break;
      if (temp_v19[temp_v5 + 1] == 0) {
        temp_v5 = temp_v5 + 1;
        break;
      }
      temp_v5 = temp_v5 + 2;
    } while (temp_v5 < 8);
    if (temp_v5 >= 1) {
      temp_v14 = 0;
      do {
        temp_v10 = FUN_002bf4f8(0x24,temp_v14 + 0x193);
        FUN_002bf288(2,0x24,0x18e,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,
                     0x65);
        FUN_002bf288(2,0x24,399,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,400,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x191,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,
                     0x6a);
        temp_v7 = FUN_002bf4f8(0x24,0x192);
        FUN_002b6c34((int)temp_v19[temp_v14],
                     (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v13,
                     (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v7 + 10) + temp_v2,0x6f,0,0);
        temp_v14 = temp_v14 + 1;
      } while (temp_v14 < temp_v5);
    }
    else {
      temp_v5 = FUN_002bf4f8(0x24,0x197);
      FUN_002bf288(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      FUN_002bf288(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      FUN_002bf288(2,0x24,0x171,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      temp_v14 = FUN_002bf4f8(0x24,0x178);
      textFormatBuffer(temp_v18,&LAB_001f1310);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v14 + 10) + temp_v2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v13,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0x323232ff,temp_v18,(int)*(short *)(temp_v14 + 8));
    }
    temp_v5 = FUN_0029efc0(temp_v17);
    temp_v14 = 0;
    do {
      temp_v10 = temp_v4;
      if ((param_5 == 0) || (temp_v7 = FUN_0029efa8(temp_v17), temp_v10 = temp_v4, temp_v7 != temp_v14)) {
        temp_v7 = FUN_002bf4f8(0x24,temp_v14 + 0x185);
        FUN_002bf288(2,0x24,0x16f,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x170,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        FUN_002bf288(2,0x24,0x171,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        temp_v8 = FUN_0029d644(temp_v17);
        temp_v4 = temp_v10;
        if (temp_v14 < temp_v8) {
          FUN_002bf288(2,0x24,0x174,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6a);
          FUN_002bf288(2,0x24,0x175,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6a);
          FUN_002bf288(2,0x24,0x176,*(short *)(temp_v7 + 8) + temp_v13,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6f);
          temp_v3 = 0xff;
          temp_v8 = temp_v1 + (temp_v5 + temp_v14) * 2;
          temp_v4 = temp_v10;
          FUN_0029cde0(temp_v10,8,*(unsigned short *)(temp_v8 + 0x9020));
          if (temp_v10 != 0) {
            temp_v3 = 0x8400ff;
          }
          temp_v9 = FUN_002bce00(*(unsigned short *)(temp_v8 + 0x9020));
          textFormatBuffer(temp_v18,&LAB_001f12f4,temp_v9);
          temp_v10 = FUN_002bf4f8(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v7 + 8) + temp_v13,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,temp_v3,temp_v18,(int)*(short *)(temp_v7 + 8));
          temp_v10 = FUN_002bf4f8(0x24,0x177);
          FUN_002b6c34((int)*(short *)(temp_v8 + 0x9020),
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v13,
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,0x74,0,0);
          temp_v10 = FUN_002bf4f8(0x24,0x17c);
          temp_v3 = FUN_0029a924(*(unsigned short *)(temp_v8 + 0x9020));
          FUN_002bdf94(1,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v13,
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,1,4,0x79,
                       &LAB_001f1a6c,temp_v3);
        }
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 8);
    temp_v5 = FUN_0029efc0(temp_v17);
    temp_v14 = FUN_0029efa8(temp_v17);
    if (param_5 != 0) {
      temp_v10 = FUN_0029efa8(temp_v17);
      temp_v10 = FUN_002bf4f8(0x24,temp_v10 + 0x1a7);
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x198,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x79
                  );
      FUN_002bf288(2,0x24,0x199,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x79
                  );
      FUN_002bf288(2,0x24,0x19a,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x79
                  );
      efctSetSpeed();
      FUN_002bf288(2,0x24,0x19b,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x7e
                  );
      temp_v7 = FUN_0029efa8(temp_v17);
      temp_v7 = FUN_0029d65c((int)*(short *)(temp_v1 + temp_v7 * 2 + 0x438));
      temp_v8 = *(short *)(temp_v10 + 10) + temp_v2;
      temp_v11 = *(short *)(temp_v10 + 8) + temp_v13;
      if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6)) {
        FUN_002bf288(2,0x24,0x19c,temp_v11,temp_v8,0x7e);
      }
      else {
        FUN_002bf288(2,0x24,0x19d,temp_v11,temp_v8,0x7e);
      }
      temp_v8 = FUN_002bf4f8(0x24,0x19c);
      temp_v7 = g_titleScene;
      piVar17 = (int *)(g_titleScene + 0x130c);
      temp_v11 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = 3;
      if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v11 != 3) {
        (**(romwright_code **)(temp_v7 + 0x1328))();
        *(unsigned char *)(temp_v7 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v13,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v2,
                   (int)**(short **)(temp_v8 + 0xc),(int)(*(short **)(temp_v8 + 0xc))[1],1);
      temp_v7 = vec2GetYInt(temp_v1 + 0xb0);
      temp_v0 = *(short *)(temp_v10 + 10);
      temp_v8 = vec2GetXInt(temp_v1 + 0xb0);
      FUN_002bf288(2,0x24,0x19e,temp_v8 + temp_v13 + (int)*(short *)(temp_v10 + 8),
                   temp_v7 + temp_v2 + (int)temp_v0,0x83);
      temp_v7 = g_titleScene;
      piVar17 = (int *)(g_titleScene + 0x130c);
      temp_v8 = piVar17[*piVar17 + 2];
      piVar17[*piVar17 + 2] = 0;
      if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v8 != 0) {
        (**(romwright_code **)(temp_v7 + 0x1328))();
        *(unsigned char *)(temp_v7 + 0x1324) = 0;
      }
      FUN_002bf288(2,0x24,0x19f,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x83
                  );
      FUN_002bf288(2,0x24,0x1a0,*(short *)(temp_v10 + 8) + temp_v13,*(short *)(temp_v10 + 10) + temp_v2,0x83
                  );
      temp_v5 = temp_v1 + (temp_v5 + temp_v14) * 2;
      temp_v3 = 0xffffffff;
      FUN_0029cde0(temp_v4,8,*(unsigned short *)(temp_v5 + 0x9020));
      if (temp_v4 != 0) {
        temp_v3 = 0x8400ff;
      }
      temp_v9 = FUN_002bce00(*(unsigned short *)(temp_v5 + 0x9020));
      textFormatBuffer(temp_v18,&LAB_001f1a84,temp_v9);
      temp_v4 = FUN_002bf4f8(0x24,0x1a2);
      VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v13,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,temp_v3,temp_v18,(int)*(short *)(temp_v10 + 8));
      temp_v4 = FUN_002bf4f8(0x24,0x1a1);
      FUN_002b6c34((int)*(short *)(temp_v5 + 0x9020),
                   (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v13,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,0x8d,0,0);
      temp_v4 = FUN_002bf4f8(0x24,0x1a6);
      temp_v3 = FUN_0029a924(*(unsigned short *)(temp_v5 + 0x9020));
      FUN_002bdf94(1,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v13,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v2,1,4,0x8d,
                   &LAB_001f1a6c,temp_v3);
    }
    FUN_00290994(temp_v17,temp_v13,temp_v2,0x24,0x2a,0x2b,0x2c,0x26,0x28,0x27,0x29,
                 (int)*(short *)(temp_v1 + 0x476),(int)*(short *)(temp_v1 + 0x472),
                 (int)*(short *)(temp_v1 + 0x474),0x97,0);
  }
  return;
}

} /* extern "C" */
