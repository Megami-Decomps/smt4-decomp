/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f0454` (_code @ 0x1f0454, 0x167c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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

extern unsigned char LAB_001f083c; /* 0x1f083c */
extern unsigned char LAB_001f0854; /* 0x1f0854 */
extern unsigned char LAB_001f085c; /* 0x1f085c */
extern unsigned char LAB_001f0b70; /* 0x1f0b70 */
extern unsigned char LAB_001f1208; /* 0x1f1208 */
extern unsigned char LAB_001f1210; /* 0x1f1210 */
extern unsigned char LAB_001f1224; /* 0x1f1224 */
extern unsigned char LAB_001f1980; /* 0x1f1980 */
extern unsigned char LAB_001f1998; /* 0x1f1998 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00258308. */
extern int FUN_00262a44(void);
/* Supplied declaration required: FUN_0026ac34. */
/* Supplied declaration required: FUN_00290c38. */
/* Supplied declaration required: FUN_0029a418. */
extern unsigned int FUN_0029abc0(unsigned short);
extern int FUN_0029cb94(unsigned char *);
/* Supplied declaration required: FUN_0029d080. */
extern int FUN_0029d8e4(int);
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029df14. */
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bcff0. */
extern unsigned int FUN_002bd020(short, unsigned int);
extern unsigned int FUN_002bd258(short);
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_001f0454(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
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
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  int *piVar16;
  unsigned int temp_v14;
  unsigned int in_fpscr;
  unsigned char temp_v15 [1548];
  int temp_v16;
  unsigned char temp_v17 [64];
  short temp_v18 [8];
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  
  temp_v21 = param_1;
  temp_v22 = param_2;
  temp_v23 = param_3;
  temp_v24 = param_4;
  temp_v1 = FUN_00262a44();
  temp_v12 = temp_v22;
  temp_v4 = temp_v21;
  if (temp_v1 != 0) {
    temp_v19 = 0;
    FUN_002bf558(2,0x24,1,temp_v21,temp_v22,0x65);
    FUN_002bf460(2,0x24,0x163,temp_v4,temp_v12,0x6a);
    FUN_002bf460(2,0x24,0x164,temp_v4,temp_v12,0x6a);
    FUN_002bf460(2,0x24,0x165,temp_v4,temp_v12,0x6f);
    FUN_002bf460(2,0x24,0x166,temp_v4,temp_v12,0x6a);
    FUN_002bf460(2,0x24,0x167,temp_v4,temp_v12,0x6f);
    FUN_002bf460(2,0x24,0x16a,temp_v4,temp_v12,0x6a);
    FUN_002bf460(2,0x24,0x16b,temp_v4,temp_v12,0x6f);
    FUN_002bf460(2,0x24,0x16c,temp_v4,temp_v12,0x74);
    temp_v2 = FUN_002bf6d0(0x24,0x168);
    FUN_002be7fc(temp_v17,&LAB_001f0854,&LAB_001f083c);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,0xff,temp_v17);
    temp_v2 = FUN_002bf6d0(0x24,0x169);
    FUN_002be7fc(temp_v17,&LAB_001f0854,&LAB_001f085c);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,0xff,temp_v17);
    FUN_002bf460(2,0x24,0x16d,
                 temp_v4 - ((int)(*(int *)(temp_v1 + 0x3fc) +
                               ((unsigned int)(*(int *)(temp_v1 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,temp_v12,
                 0x6f);
    FUN_002bf710();
    FUN_002bf460(2,0x24,0x16e,
                 temp_v4 - ((int)(*(int *)(temp_v1 + 0x3fc) +
                               ((unsigned int)(*(int *)(temp_v1 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3,temp_v12,
                 0x74);
    FUN_002bf710();
    FUN_002bf460(2,0x24,0x4f,temp_v4,temp_v12,0x6a);
    if (temp_v24 != 0) {
      psVar4 = (short *)(unsigned int)*(unsigned short *)(temp_v1 + 0x5210);
      FUN_002b9364();
    }
    else if (param_6 != 0) {
      psVar4 = (short *)((*(unsigned int *)(temp_v1 + 0x1394) & 0x1ffff) >> 2);
      FUN_002b9364();
    }
    else {
      psVar4 = (short *)((*(unsigned int *)(temp_v1 + (unsigned int)*(unsigned short *)(temp_v1 + 0x6ce2) * 8 + 0x1394) &
                         0x1ffff) >> 2);
      FUN_002b9364();
    }
    temp_v2 = FUN_002bf6d0(0x24,0x4d);
    temp_v3 = FUN_002bd258(*psVar4);
    FUN_002be7fc(temp_v17,&LAB_001f0854,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xffffffff,temp_v17);
    temp_v2 = FUN_002bf6d0(0x24,0x4e);
    temp_v3 = FUN_002bd020(*psVar4,0);
    FUN_002be7fc(temp_v17,&LAB_001f0854,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xf49800ff,temp_v17);
    temp_v2 = FUN_002bf6d0(0x24,0x51);
    FUN_002be16c(0,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v12,1,2,0x8d,
                 &LAB_001f0b70,*(unsigned char *)((int)psVar4 + 3));
    temp_v14 = 0;
    temp_v2 = FUN_0029d8e4(temp_v1 + 0x91a0);
    if (0 < temp_v2) {
      do {
        if (*(short *)(temp_v1 + temp_v14 * 2 + 0x9010) == 0) break;
        temp_v14 = temp_v14 + 1;
        temp_v2 = FUN_0029d8e4(temp_v1 + 0x91a0);
      } while ((int)temp_v14 < temp_v2);
    }
    temp_v2 = FUN_002bf6d0(0x24,0x1ed);
    FUN_002b6a98((int)*psVar4,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v12,0x8d,0);
    FUN_00258308(*psVar4,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v12,0x92);
    FUN_0029df14(*psVar4,temp_v15);
    temp_v4 = FUN_0029cb94(temp_v15);
    temp_v20 = temp_v1 + 0x9000;
    temp_v16 = temp_v1 + 0x9204;
    temp_v11 = 0;
    do {
      temp_v2 = temp_v22;
      temp_v12 = temp_v21;
      temp_v5 = FUN_002bf6d0(0x24,temp_v11 + 0x17d);
      if ((int)temp_v11 >= temp_v4) {
        FUN_002bf460(2,0x24,0x229,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
      }
      else {
        if ((int)temp_v11 < (int)(temp_v14 - *(int *)(temp_v20 + 0x26c))) {
          FUN_002bf460(2,0x24,0x172,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                       0x65);
        }
        else {
          temp_v13 = FUN_0029f0f4(temp_v16);
          if ((*(int *)(temp_v20 + 0x26c) < temp_v13) && (temp_v11 == temp_v14)) {
            if (temp_v23 != 1) {
              if ((temp_v23 == 2 || temp_v23 == 3) && (temp_v19 != 0)) {
                temp_v2 = temp_v2 + *(int *)(temp_v1 + 0x3fc) * -3;
              }
            }
            else if (*(int *)(temp_v1 + 0x3fc) < 1) {
              temp_v13 = 1 - *(int *)(temp_v1 + 0x3fc);
              VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_002bf710(temp_v13);
            }
            FUN_002bf460(2,0x24,0x173,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
          }
          else {
            if (temp_v23 != 1) {
              if (temp_v23 != 2) {
                if ((temp_v23 == 3) && (temp_v13 = *(int *)(temp_v1 + 0x3fc), temp_v13 < 6)) {
                  if (temp_v19 != 0) {
                    temp_v2 = temp_v2 + temp_v13 * -3;
                  }
                  temp_v6 = 7;
                  do {
                    temp_v9 = temp_v1 + temp_v6 * 2;
                    if (*(short *)(temp_v9 + 0x9010) != 0) break;
                    if (*(short *)(temp_v9 + 0x900e) != 0) {
                      temp_v6 = temp_v6 - 1;
                      break;
                    }
                    temp_v6 = temp_v6 - 2;
                  } while (temp_v6 < 0x80000000);
                  if (temp_v11 == temp_v6) {
                    VectorSignedToFloat(5 - temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                    FUN_002bf710(5 - temp_v13);
                    temp_v19 = 1;
                  }
                }
              }
              else if (*(int *)(temp_v1 + 0x3fc) < 6) {
                temp_v13 = FUN_0029f260(temp_v16);
                temp_v9 = FUN_0029f248(temp_v16);
                if (temp_v19 != 0) {
                  temp_v2 = temp_v2 + *(int *)(temp_v1 + 0x3fc) * -3;
                }
                if (*(short *)(temp_v1 + temp_v11 * 2 + 0x9010) ==
                    *(short *)(temp_v1 + (temp_v9 + temp_v13) * 2 + 0x9020)) {
                  temp_v13 = 5 - *(int *)(temp_v1 + 0x3fc);
                  VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002bf710(temp_v13);
                  temp_v19 = 1;
                }
              }
            }
            else if (0 < *(int *)(temp_v1 + 0x3fc)) {
              temp_v13 = FUN_0029f260(temp_v16);
              temp_v9 = FUN_0029f248(temp_v16);
              if (*(short *)(temp_v1 + temp_v11 * 2 + 0x9010) ==
                  *(short *)(temp_v1 + (temp_v9 + temp_v13) * 2 + 0x9020)) {
                temp_v13 = FUN_002bef7c(temp_v1 + 0x2e0);
                temp_v12 = temp_v12 + temp_v13;
                temp_v13 = FUN_002bef70(temp_v1 + 0x2e0);
                temp_v2 = temp_v2 + temp_v13;
                FUN_002bf710();
              }
            }
            FUN_002bf460(2,0x24,0x171,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
          }
        }
        FUN_002bf460(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65
                    );
        temp_v13 = temp_v1 + temp_v11 * 2;
        if (*(short *)(temp_v13 + 0x9010) != 0) {
          FUN_002bf460(2,0x24,0x174,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6a);
          FUN_002bf460(2,0x24,0x175,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6a);
          FUN_002bf460(2,0x24,0x176,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                       0x6f);
          temp_v3 = 0xff;
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v13 + 0x9010);
          if ((int)temp_v11 < (int)(temp_v14 - *(int *)(temp_v20 + 0x26c))) {
            temp_v3 = 0xffffffff;
          }
          FUN_002bcff0(temp_v6);
          FUN_002be7fc(temp_v17,&LAB_001f1208,temp_v6);
          temp_v9 = FUN_002bf6d0(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v12,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,temp_v3,temp_v17,(int)*(short *)(temp_v5 + 8));
          temp_v9 = FUN_002bf6d0(0x24,0x177);
          FUN_002b6f74((int)*(short *)(temp_v13 + 0x9010),
                       (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v12,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,0x74,0,0);
          temp_v9 = FUN_002bf6d0(0x24,0x17c);
          temp_v3 = FUN_0029abc0(*(unsigned short *)(temp_v13 + 0x9010));
          FUN_002be16c(1,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v12,
                       (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,1,4,0x79,
                       &LAB_001f0b70,temp_v3);
        }
        else {
          FUN_002be7fc(temp_v17,&LAB_001f1210);
          temp_v9 = FUN_002bf6d0(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v12,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,0xff,temp_v17,(int)*(short *)(temp_v5 + 8));
        }
        if ((temp_v23 == 1) && (*(int *)(temp_v1 + 0x3fc) >= 5)) {
          temp_v9 = FUN_0029f260(temp_v16);
          temp_v7 = FUN_0029f248(temp_v16);
          if (*(short *)(temp_v13 + 0x9010) == *(short *)(temp_v1 + (temp_v7 + temp_v9) * 2 + 0x9020)) {
            FUN_002bf710();
            temp_v13 = DAT_0044ea00;
            temp_v9 = FUN_002c5fa4(6,1,0);
            piVar16 = (int *)(temp_v13 + 0x12ac);
            temp_v7 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v9;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v7 != temp_v9) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
            FUN_002bf460(2,0x24,0x173,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,
                         0x65);
            temp_v12 = DAT_0044ea00;
            temp_v2 = FUN_002c5fa4(6,7,0);
            piVar16 = (int *)(temp_v12 + 0x12ac);
            temp_v5 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v2;
            if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
              (**(romwright_code **)(temp_v12 + 0x12c8))();
              *(unsigned char *)(temp_v12 + 0x12c4) = 0;
            }
          }
        }
        FUN_002bf710();
      }
      temp_v2 = temp_v22;
      temp_v12 = temp_v21;
      temp_v11 = temp_v11 + 1;
    } while ((int)temp_v11 < 8);
    temp_v18[0] = 0;
    temp_v18[1] = 0;
    temp_v18[2] = 0;
    temp_v18[3] = 0;
    temp_v18[4] = 0;
    temp_v18[5] = 0;
    temp_v18[6] = 0;
    temp_v18[7] = 0;
    temp_v4 = temp_v1 + 0x9010;
    FUN_0026ac34(*psVar4,*(unsigned char *)((int)psVar4 + 3),temp_v4,temp_v18,0);
    temp_v5 = 0;
    do {
      if (temp_v18[temp_v5] == 0) break;
      if (temp_v18[temp_v5 + 1] == 0) {
        temp_v5 = temp_v5 + 1;
        break;
      }
      temp_v5 = temp_v5 + 2;
    } while (temp_v5 < 8);
    if (temp_v5 >= 1) {
      temp_v13 = 0;
      do {
        temp_v9 = FUN_002bf6d0(0x24,temp_v13 + 0x193);
        FUN_002bf460(2,0x24,0x18e,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,
                     0x65);
        FUN_002bf460(2,0x24,399,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,400,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x191,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,
                     0x6a);
        temp_v7 = FUN_002bf6d0(0x24,0x192);
        FUN_002b6f74((int)temp_v18[temp_v13],
                     (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v12,
                     (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v7 + 10) + temp_v2,0x6f,0,0);
        temp_v13 = temp_v13 + 1;
      } while (temp_v13 < temp_v5);
    }
    else {
      temp_v5 = FUN_002bf6d0(0x24,0x197);
      FUN_002bf460(2,0x24,0x16f,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      FUN_002bf460(2,0x24,0x170,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      FUN_002bf460(2,0x24,0x171,*(short *)(temp_v5 + 8) + temp_v12,*(short *)(temp_v5 + 10) + temp_v2,0x65);
      temp_v13 = FUN_002bf6d0(0x24,0x178);
      FUN_002be7fc(temp_v17,&LAB_001f1224);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v13 + 8) + temp_v12,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,0x323232ff,temp_v17,(int)*(short *)(temp_v13 + 8));
    }
    temp_v5 = FUN_0029f260(temp_v16);
    temp_v13 = 0;
    do {
      temp_v9 = temp_v4;
      if ((param_5 == 0) || (temp_v7 = FUN_0029f248(temp_v16), temp_v9 = temp_v4, temp_v7 != temp_v13)) {
        temp_v7 = FUN_002bf6d0(0x24,temp_v13 + 0x185);
        FUN_002bf460(2,0x24,0x16f,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x170,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        FUN_002bf460(2,0x24,0x171,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,0x65
                    );
        temp_v8 = FUN_0029d8e4(temp_v16);
        temp_v4 = temp_v9;
        if (temp_v13 < temp_v8) {
          FUN_002bf460(2,0x24,0x174,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6a);
          FUN_002bf460(2,0x24,0x175,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6a);
          FUN_002bf460(2,0x24,0x176,*(short *)(temp_v7 + 8) + temp_v12,*(short *)(temp_v7 + 10) + temp_v2,
                       0x6f);
          temp_v3 = 0xff;
          temp_v8 = temp_v1 + (temp_v5 + temp_v13) * 2;
          temp_v4 = temp_v9;
          FUN_0029d080(temp_v9,8,*(unsigned short *)(temp_v8 + 0x9020));
          temp_v14 = (unsigned int)*(unsigned short *)(temp_v8 + 0x9020);
          if (temp_v9 != 0) {
            temp_v3 = 0x8400ff;
          }
          FUN_002bcff0(temp_v14);
          FUN_002be7fc(temp_v17,&LAB_001f1208,temp_v14);
          temp_v9 = FUN_002bf6d0(0x24,0x178);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v7 + 8) + temp_v12,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,temp_v3,temp_v17,(int)*(short *)(temp_v7 + 8));
          temp_v9 = FUN_002bf6d0(0x24,0x177);
          FUN_002b6f74((int)*(short *)(temp_v8 + 0x9020),
                       (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v12,
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,0x74,0,0);
          temp_v9 = FUN_002bf6d0(0x24,0x17c);
          temp_v3 = FUN_0029abc0(*(unsigned short *)(temp_v8 + 0x9020));
          FUN_002be16c(1,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v12,
                       (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,1,4,0x79,
                       &LAB_001f1980,temp_v3);
        }
      }
      temp_v13 = temp_v13 + 1;
    } while (temp_v13 < 8);
    temp_v5 = FUN_0029f260(temp_v16);
    temp_v13 = FUN_0029f248(temp_v16);
    if (param_5 != 0) {
      temp_v9 = FUN_0029f248(temp_v16);
      temp_v9 = FUN_002bf6d0(0x24,temp_v9 + 0x1a7);
      FUN_002bf710();
      FUN_002bf460(2,0x24,0x198,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x79
                  );
      FUN_002bf460(2,0x24,0x199,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x79
                  );
      FUN_002bf460(2,0x24,0x19a,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x79
                  );
      FUN_002bf710();
      FUN_002bf460(2,0x24,0x19b,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x7e
                  );
      temp_v7 = FUN_0029f248(temp_v16);
      temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v1 + temp_v7 * 2 + 0x438));
      temp_v8 = *(short *)(temp_v9 + 10) + temp_v2;
      temp_v10 = *(short *)(temp_v9 + 8) + temp_v12;
      if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6)) {
        FUN_002bf460(2,0x24,0x19c,temp_v10,temp_v8,0x7e);
      }
      else {
        FUN_002bf460(2,0x24,0x19d,temp_v10,temp_v8,0x7e);
      }
      temp_v8 = FUN_002bf6d0(0x24,0x19c);
      temp_v7 = DAT_0044ea00;
      piVar16 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v10 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = 3;
      if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v10 != 3) {
        (**(romwright_code **)(temp_v7 + 0x1328))();
        *(unsigned char *)(temp_v7 + 0x1324) = 0;
      }
      FUN_0029a418((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v12,
                   (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v2,
                   (int)**(short **)(temp_v8 + 0xc),(int)(*(short **)(temp_v8 + 0xc))[1],1);
      temp_v7 = FUN_002bef70(temp_v1 + 0xb0);
      temp_v0 = *(short *)(temp_v9 + 10);
      temp_v8 = FUN_002bef7c(temp_v1 + 0xb0);
      FUN_002bf460(2,0x24,0x19e,temp_v8 + temp_v12 + (int)*(short *)(temp_v9 + 8),
                   temp_v7 + temp_v2 + (int)temp_v0,0x83);
      temp_v7 = DAT_0044ea00;
      piVar16 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v8 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = 0;
      if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v8 != 0) {
        (**(romwright_code **)(temp_v7 + 0x1328))();
        *(unsigned char *)(temp_v7 + 0x1324) = 0;
      }
      FUN_002bf460(2,0x24,0x19f,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x83
                  );
      FUN_002bf460(2,0x24,0x1a0,*(short *)(temp_v9 + 8) + temp_v12,*(short *)(temp_v9 + 10) + temp_v2,0x83
                  );
      temp_v5 = temp_v1 + (temp_v5 + temp_v13) * 2;
      temp_v3 = 0xffffffff;
      FUN_0029d080(temp_v4,8,*(unsigned short *)(temp_v5 + 0x9020));
      if (temp_v4 != 0) {
        temp_v3 = 0x8400ff;
      }
      temp_v14 = (unsigned int)*(unsigned short *)(temp_v5 + 0x9020);
      FUN_002bcff0(temp_v14);
      FUN_002be7fc(temp_v17,&LAB_001f1998,temp_v14);
      temp_v4 = FUN_002bf6d0(0x24,0x1a2);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v12,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(3,temp_v3,temp_v17,(int)*(short *)(temp_v9 + 8));
      temp_v4 = FUN_002bf6d0(0x24,0x1a1);
      FUN_002b6f74((int)*(short *)(temp_v5 + 0x9020),
                   (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v12,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,0x8d,0,0);
      temp_v4 = FUN_002bf6d0(0x24,0x1a6);
      temp_v3 = FUN_0029abc0(*(unsigned short *)(temp_v5 + 0x9020));
      FUN_002be16c(1,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v12,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,1,4,0x8d,
                   &LAB_001f1980,temp_v3);
    }
    FUN_00290c38(temp_v16,temp_v12,temp_v2,0x24,0x2a,0x2b,0x2c,0x26,0x28,0x27,0x29,
                 (int)*(short *)(temp_v1 + 0x476),(int)*(short *)(temp_v1 + 0x472),
                 (int)*(short *)(temp_v1 + 0x474),0x97,0);
  }
  return;
}
