/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d270` (_code @ 0x28d270, 0x24cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001676b0(...);
int FUN_00167860(...);
int FUN_00184310(void);
int FUN_001aba54(void);
int FUN_00344cd0(...);
int FUN_00389d9c(...);
int FUN_003b67d4(void);
int FUN_003b67e8(void);
int FUN_003c0d90(void);
int FUN_004bd098(...);

int FUN_00100388(...);
int btlGetMainState(void);
int FUN_0014bd84(...);
int FUN_0015f858(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_001689e8(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00185e84(...);
int FUN_001ab854(...);
int FUN_002ccdb4(...);
int FUN_003e46f4(...);
int halfTableGet(...);
int FUN_0040082c(void);
int VectorSignedToFloat(...);

/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_1_stack;

extern unsigned char LAB_0028d738; /* 0x28d738 */
extern unsigned char LAB_0028d73c; /* 0x28d73c */
extern unsigned char LAB_0028da40; /* 0x28da40 */
extern unsigned char LAB_0028e034; /* 0x28e034 */
extern unsigned char LAB_0028e038; /* 0x28e038 */
extern unsigned char LAB_0028e43c; /* 0x28e43c */
extern unsigned char LAB_0028e7e8; /* 0x28e7e8 */
extern unsigned char LAB_0028ec00; /* 0x28ec00 */
extern unsigned char LAB_0028ec08; /* 0x28ec08 */
extern unsigned char LAB_0028f0c0; /* 0x28f0c0 */
extern unsigned char LAB_0028f0c8; /* 0x28f0c8 */
extern unsigned char LAB_0028f5a0; /* 0x28f5a0 */
extern unsigned char LAB_0028f5a4; /* 0x28f5a4 */
extern unsigned char LAB_0028f73c; /* 0x28f73c */
extern unsigned int DAT_00573bf0; /* 0x573bf0 */
extern unsigned int DAT_00573bf4; /* 0x573bf4 */
extern unsigned int DAT_00573bf8; /* 0x573bf8 */
extern unsigned int DAT_00573bfc; /* 0x573bfc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_0014bd84. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001676b0. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00167860. */
/* Supplied declaration required: FUN_001689e8. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00185e84. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001ab854. */
/* Supplied declaration required: FUN_001aba54. */
extern unsigned int FUN_001ba3d4(int);
extern int FUN_00284140(int);
extern int btlMainGetUnk14(void);
extern int FUN_002a4860(unsigned int);
extern int FUN_002a4894(unsigned int);
extern int FUN_002c2c68(unsigned int);
extern int FUN_002cc9e0(int, unsigned int);
extern unsigned int FUN_002ccd74(int, int);
/* Supplied declaration required: FUN_002ccdb4. */
extern unsigned int FUN_002f8e98(unsigned int);
extern int FUN_002fa75c(void);
/* Supplied declaration required: FUN_00344cd0. */
extern int FUN_00348ed0(unsigned int);
/* Supplied declaration required: FUN_00389d9c. */
/* Supplied declaration required: FUN_003b67d4. */
/* Supplied declaration required: FUN_003b67e8. */
/* Supplied declaration required: FUN_003c0d90. */
extern unsigned int FUN_003df57c(int, unsigned int);
extern int playerHasFlagBit(unsigned int);
/* Supplied declaration required: FUN_003e46f4. */
/* Supplied declaration required: halfTableGet. */
/* Supplied declaration required: FUN_0040082c. */
extern unsigned int FUN_004bcbb4(int, int);
/* Supplied declaration required: FUN_004bd098. */
extern int bitsAt60Test(int, unsigned int);


void FUN_0028d270(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 28 native warning(s); review required */
  unsigned int *puVar1;
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar10;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  unsigned char *temp_v14 [3];
  int temp_v15;
  int temp_v16;
  int temp_v17 [4];
  int temp_v18;
  int temp_v19;
  unsigned char temp_v20 [76];
  int temp_v21;
  int temp_v22;
  unsigned int temp_v23;
  unsigned int *temp_v24;
  int *temp_v25;
  unsigned int temp_v26;
  int *temp_v27;
  int temp_v28;
  unsigned int *temp_v29;
  int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  
  temp_v25 = (int *)(param_1 + 0x3890);
  temp_v18 = 0;
  if (*temp_v25 == 1) {
    temp_v16 = 0xc2;
  }
  else if (*temp_v25 == 2) {
    temp_v16 = 0xbb;
  }
  else {
    temp_v16 = 0xb3;
  }
  temp_v24 = (unsigned int *)(param_1 + 0x3c40);
  temp_v22 = FUN_00348ed0(*temp_v24);
  piVar10 = (int *)(param_1 + 0x387c);
  if (*piVar10 == 0x10 || *piVar10 == 0x29) {
    if (*(char *)(param_1 + 0x38b2) == '\0') {
      return;
    }
    temp_v22 = *(int *)(param_1 + 0x3878) + 1;
    temp_v1 = FUN_00348ed0(*temp_v24);
    if (temp_v1 < temp_v22) {
      temp_v22 = FUN_00348ed0(*temp_v24);
    }
  }
  if (*(char *)(param_1 + 0x38b2) == '\0') {
    return;
  }
  temp_v1 = *piVar10;
  temp_v31 = 0;
  if ((((temp_v1 == 8 || temp_v1 == 10) || temp_v1 == 0xc) &&
      (temp_v1 = FUN_00348ed0(*temp_v24), temp_v1 <= temp_v22)) &&
     (*(int *)(param_1 + temp_v22 * 0x8c + 0xdec) >= 0x3f800000)) {
    temp_v31 = 1;
  }
  temp_v1 = *piVar10;
  temp_v21 = 0;
  if ((temp_v1 == 0x12 || temp_v1 == 0x13) || (temp_v1 == 0x14 || temp_v1 == 0x15)) {
    temp_v21 = 1;
  }
  temp_v30 = FUN_002cc9e0(param_1,0);
  temp_v1 = FUN_001654d8();
  temp_v2 = FUN_001654e4(param_1 + 0x12b8);
  temp_v15 = 0;
  temp_v23 = 0;
  temp_v19 = FUN_002a4860(*temp_v24);
  temp_v0 = *(short *)(param_1 + *temp_v25 * 2 + 0x4210);
  if (temp_v0 != -1) {
    if (temp_v0 != -2) {
      temp_v18 = FUN_001ab854();
    }
    else {
      temp_v18 = btlMainGetUnk14();
    }
    temp_v28 = bitsAt60Test(temp_v18,4);
  }
  else {
    temp_v28 = playerHasFlagBit(4);
  }
  temp_v11 = 0;
  temp_v27 = (int *)(param_1 + 0x4ba4);
  temp_v29 = (unsigned int *)(param_1 + 0x3e18);
  puVar1 = (unsigned int *)(param_1 + 0x3e18);
  if (0 < temp_v22) {
    do {
      if ((temp_v31 == 0) || (temp_v3 = FUN_002a4894(*temp_v24), temp_v3 != temp_v11)) {
        efctSetSpeed();
        temp_v3 = FUN_001834a4(0xd,temp_v16 + temp_v11);
        temp_v14[0] = (unsigned char *)0x3d;
        FUN_001835b4(2,0xd,0x72,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
        temp_v14[0] = (unsigned char *)0x3d;
        FUN_001835b4(2,0xd,0x73,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
        temp_v14[0] = (unsigned char *)0x3d;
        FUN_001835b4(2,0xd,0x74,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
        temp_v14[0] = (unsigned char *)0x3d;
        FUN_001835b4(2,0xd,0x78,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
        temp_v14[0] = (unsigned char *)0x3d;
        FUN_001835b4(2,0xd,0x79,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
        if (temp_v30 != 1) {
          if (temp_v30 != 2) {
            if (temp_v30 != 7) {
              if (temp_v30 != 3) {
                if (temp_v30 == 0xc) {
                  temp_v15 = (int)(short)*temp_v29;
                  temp_v6 = FUN_0014bd84();
                  FUN_00100388(temp_v20,&LAB_0028e038,temp_v6);
                  temp_v6 = FUN_003df57c(temp_v15,1);
                  temp_v23 = FUN_002ccdb4(0xffffffff,temp_v15);
                  temp_v14[0] = (unsigned char *)0x3d;
                  FUN_001835b4(2,0xd,0x76,*(short *)(temp_v3 + 8) + temp_v1,
                               *(short *)(temp_v3 + 10) + temp_v2);
                  temp_v14[0] = (unsigned char *)0x3e;
                  FUN_001835b4(2,0xd,0x75,*(short *)(temp_v3 + 8) + temp_v1,
                               *(short *)(temp_v3 + 10) + temp_v2);
                  temp_v14[0] = (unsigned char *)0x48;
                  FUN_001835b4(2,0xd,0x77,*(short *)(temp_v3 + 8) + temp_v1,
                               *(short *)(temp_v3 + 10) + temp_v2);
                  temp_v4 = FUN_001834a4(0xd,0x8c);
                  temp_v9 = (int)*(short *)(temp_v3 + 8);
                  VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) +
                                      temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9 + temp_v1,
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  if (temp_v23 != 0) {
                    FUN_00162790(2,0xffffffff,temp_v20,temp_v9);
                  }
                  else {
                    FUN_00162790(2,0x9b9b9bff,temp_v20,temp_v9);
                  }
                  temp_v4 = FUN_001834a4(0xd,0x86);
                  temp_v14[0] = (unsigned char *)0x49;
                  temp_v14[1] = &LAB_0028e7e8;
                  temp_v14[2] = (unsigned char *)temp_v6;
                  FUN_00180310(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,4
                              );
                }
              }
              else {
                temp_v4 = btlGetMainState();
                if (!((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bf8) == 0 &&
                     (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bfc) == 0)) {
                  temp_v23 = 1;
                  temp_v6 = FUN_002f8e98((temp_v19 + temp_v11) & 0xff);
                  FUN_00100388(temp_v20,&LAB_0028e038,temp_v6);
                }
                else {
                  temp_v4 = 0;
                  temp_v10 = 0;
                  temp_v14[2] = (unsigned char *)0x33;
                  temp_v14[0] = (unsigned char *)0x2e;
                  temp_v14[1] = (unsigned char *)0x32;
                  temp_v9 = temp_v19 + temp_v11;
                  do {
                    temp_v7 = FUN_003e46f4(temp_v14[temp_v10]);
                    if (temp_v7 != 0) {
                      if (temp_v9 == temp_v4) {
                        temp_v23 = 1;
                        temp_v6 = FUN_002f8e98(temp_v10 & 0xff);
                        FUN_00100388(temp_v20,&LAB_0028e038,temp_v6);
                        break;
                      }
                      temp_v4 = temp_v4 + 1;
                    }
                    temp_v10 = temp_v10 + 1;
                  } while ((int)temp_v10 < 3);
                }
                temp_v4 = FUN_001834a4(0xd,0x8b);
                temp_v7 = (int)*(short *)(temp_v3 + 8);
                temp_v9 = (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2;
                temp_v4 = *(short *)(temp_v4 + 8) + temp_v7 + temp_v1;
                if (temp_v23 != 0) {
                  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_00162790(2,0xffffffff,temp_v20,temp_v7);
                }
                else {
                  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_00162790(2,0x9b9b9bff,temp_v20,temp_v7);
                }
                temp_v4 = FUN_001834a4(0xd,0x8c);
                temp_v14[0] = (unsigned char *)0x0;
                FUN_00185e84(0xfffffffd,
                             (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                             (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49,
                             0);
              }
            }
            else {
              temp_v14[0] = (unsigned char *)0x3d;
              FUN_001835b4(2,0xd,0x76,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
              temp_v14[0] = (unsigned char *)0x3e;
              FUN_001835b4(2,0xd,0x75,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
              temp_v4 = (int)*(short *)(param_1 + (temp_v19 + temp_v11) * 2 + 0x3ca8);
              temp_v15 = temp_v4;
              FUN_0015f858(temp_v4,0);
              FUN_00100388(temp_v20,&LAB_0028e038,temp_v4);
              temp_v6 = FUN_001ba3d4(temp_v15);
              temp_v23 = 0;
              temp_v4 = temp_v15;
              FUN_0040082c();
              if (temp_v4 == 0) {
                temp_v23 = 1;
              }
              temp_v4 = FUN_001834a4(0xd,0x8b);
              temp_v9 = (int)*(short *)(temp_v3 + 8);
              VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9 + temp_v1,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              if (temp_v23 != 0) {
                FUN_00162790(2,0xffffffff,temp_v20,temp_v9);
              }
              else {
                FUN_00162790(2,0x9b9b9bff,temp_v20,temp_v9);
              }
              temp_v4 = FUN_001834a4(0xd,0x8c);
              FUN_001689e8(temp_v15,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49,0)
              ;
              temp_v4 = FUN_001834a4(0xd,0x8a);
              temp_v14[0] = (unsigned char *)0x74;
              temp_v14[1] = &LAB_0028e43c;
              FUN_00180310(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,1);
              temp_v4 = FUN_001834a4(0xd,0x8a);
              temp_v14[0] = (unsigned char *)0x49;
              temp_v14[1] = &LAB_0028e034;
              temp_v14[2] = (unsigned char *)temp_v6;
              FUN_00180310(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,4);
            }
          }
          else {
            temp_v14[0] = (unsigned char *)0x3d;
            FUN_001835b4(2,0xd,0x76,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
            temp_v14[0] = (unsigned char *)0x3e;
            FUN_001835b4(2,0xd,0x75,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
            temp_v14[0] = (unsigned char *)0x48;
            FUN_001835b4(2,0xd,0x77,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
            temp_v4 = btlGetMainState();
            if (!((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bf0) == 0 &&
                 (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bf4) == 0)) {
              temp_v6 = btlGetMainState();
              temp_v0 = halfTableGet(temp_v6,temp_v19 + temp_v11);
              temp_v15 = (int)temp_v0;
            }
            else {
              btlGetMainState();
              temp_v15 = 0;
            }
            temp_v4 = temp_v15;
            temp_v23 = 1;
            temp_v9 = FUN_001834a4(0xd,0x8c);
            temp_v14[0] = (unsigned char *)0x0;
            FUN_00185e84(temp_v4,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                         (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v2,0x49,0);
            temp_v6 = FUN_0014bd84(temp_v4);
            FUN_00100388(temp_v20,&LAB_0028e038,temp_v6);
            temp_v4 = FUN_001834a4(0xd,0x8b);
            VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00162790(2,0xffffffff,temp_v20,(int)*(short *)(temp_v3 + 8));
            temp_v4 = FUN_001834a4(0xd,0x86);
            temp_v14[0] = (unsigned char *)0x49;
            temp_v14[1] = &LAB_0028e034;
            temp_v14[2] = (unsigned char *)0x0;
            FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                         (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,4);
          }
        }
        else {
          temp_v4 = (int)*(short *)(param_1 + *temp_v25 * 2 + 0x4210);
          if (temp_v4 != -1) {
            temp_v32 = 0;
            temp_v17[2] = 1;
            if (temp_v4 != -2) {
              temp_v18 = FUN_001ab854(temp_v4);
            }
            else {
              temp_v18 = btlMainGetUnk14();
            }
            temp_v4 = temp_v19 + temp_v11;
            if (temp_v4 != 0) {
              temp_v9 = btlGetMainState();
              if (!((*(unsigned int *)(temp_v9 + 0x45ac) & DAT_00573bf4) == 0 &&
                   (DAT_00573bf0 & *(unsigned int *)(temp_v9 + 0x45a8)) == 0)) {
                temp_v15 = (int)(short)temp_v4;
                temp_v6 = FUN_0014bd84(temp_v15);
                FUN_00100388(temp_v20,&LAB_0028d738,temp_v6);
                temp_v26 = FUN_004bcbb4(temp_v18,temp_v15);
              }
              else {
                temp_v15 = (int)*(short *)(param_1 + *temp_v25 * 0x10 + temp_v4 * 2 + 0x3c42);
                temp_v6 = FUN_0014bd84(temp_v15);
                FUN_00100388(temp_v20,&LAB_0028d738,temp_v6);
                temp_v26 = FUN_004bcbb4(temp_v18,temp_v15);
              }
              temp_v0 = *(short *)(param_1 + *temp_v25 * 2 + 0x4210);
              if ((-1 < temp_v0) || (temp_v0 == -2)) {
                temp_v23 = FUN_002ccd74(temp_v18,temp_v15);
              }
            }
            else {
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v18 + 0x62);
              FUN_00184310();
              if (*(char *)(temp_v10 + 0xc) != '\x01') {
                FUN_00100388(temp_v20,&LAB_0028d738,&LAB_0028d73c);
              }
              else {
                FUN_00100388(temp_v20,&LAB_0028d738,&LAB_0028da40);
              }
              temp_v26 = 0;
              temp_v23 = 1;
              if (temp_v18 != 0) {
                temp_v0 = *(short *)(temp_v18 + 0x62);
                FUN_003b67d4();
                temp_v15 = (int)temp_v0;
                temp_v17[2] = 0;
              }
            }
          }
          else {
            temp_v4 = temp_v19 + temp_v11;
            temp_v32 = 1;
            temp_v17[2] = 1;
            if (temp_v4 != 0) {
              if ((temp_v4 == 1) && (temp_v9 = FUN_002fa75c(), temp_v9 != 0)) {
                puVar6 = temp_v20;
                FUN_00100388(puVar6,&LAB_0028d738,&LAB_0028da40);
                temp_v0 = (short)(int)puVar6;
                temp_v26 = 0;
                temp_v23 = 1;
                FUN_003b67e8();
                temp_v15 = (int)temp_v0;
                temp_v17[2] = 0;
              }
              else {
                temp_v9 = -2;
                temp_v7 = FUN_002fa75c();
                if (temp_v7 == 0) {
                  temp_v9 = -1;
                }
                temp_v7 = btlGetMainState();
                if (!((*(unsigned int *)(temp_v7 + 0x45a8) & DAT_00573bf0) == 0 &&
                     (*(unsigned int *)(temp_v7 + 0x45ac) & DAT_00573bf4) == 0)) {
                  temp_v15 = (int)(short)((short)(temp_v4 + temp_v9) + 1);
                  temp_v6 = FUN_0014bd84(temp_v15);
                  FUN_00100388(temp_v20,&LAB_0028d738,temp_v6);
                  temp_v26 = FUN_003df57c(temp_v15,1);
                }
                else {
                  temp_v15 = (int)*(short *)(param_1 + *temp_v25 * 0x10 + (temp_v4 + temp_v9) * 2 +
                                            0x3c44);
                  temp_v6 = FUN_0014bd84(temp_v15);
                  FUN_00100388(temp_v20,&LAB_0028d738,temp_v6);
                  temp_v26 = FUN_003df57c(temp_v15,1);
                }
                temp_v23 = FUN_002ccdb4(0xffffffff,temp_v15);
              }
            }
            else {
              puVar6 = temp_v20;
              FUN_00100388(puVar6,&LAB_0028d738,&LAB_0028d73c);
              temp_v0 = (short)(int)puVar6;
              temp_v26 = 0;
              temp_v23 = 1;
              FUN_003c0d90();
              temp_v15 = (int)temp_v0;
              temp_v17[2] = 0;
            }
            temp_v9 = FUN_0018719c(0x525);
            if (temp_v9 != 0) {
              temp_v23 = (unsigned int)(temp_v4 == 0);
            }
          }
          temp_v4 = temp_v18;
          temp_v14[1] = (unsigned char *)temp_v15;
          temp_v0 = *(short *)(param_1 + *temp_v25 * 2 + 0x4210);
          if (temp_v0 != -1) {
            if (temp_v18 != 0) {
              if (temp_v0 != -2) {
                temp_v4 = FUN_001ab854();
              }
              else {
                temp_v4 = btlMainGetUnk14();
              }
              temp_v9 = bitsAt60Test(temp_v4,4);
              goto LAB_0028d9e0;
            }
            temp_v13 = 0;
            if (temp_v13) {
              temp_v14[0] = (unsigned char *)0x3d;
              FUN_001835b4(2,0xd,0x1df,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2)
              ;
            }
          }
          else {
            temp_v9 = playerHasFlagBit(4);
LAB_0028d9e0:
            temp_v13 = 0;
            if (temp_v9 != 0) {
              puVar6 = temp_v14[1];
              FUN_001aba54();
              temp_v10 = temp_v5;
              if (puVar6 != (unsigned char *)0x0) {
                temp_v10 = (unsigned int)*(unsigned short *)((int)puVar6 + 0x86);
              }
              if (puVar6 != (unsigned char *)0x0 && temp_v10 != 0) {
                temp_v13 = temp_v4 == 0;
                if (!temp_v13) {
                  temp_v4 = FUN_004bd098(temp_v4,temp_v14[1]);
                  if (-1 < temp_v4) {
                    temp_v13 = 1;
                    temp_v14[0] = (unsigned char *)0x3d;
                    FUN_001835b4(2,0xd,0x1df,*(short *)(temp_v3 + 8) + temp_v1,
                                 *(short *)(temp_v3 + 10) + temp_v2);
                  }
                }
                else if (temp_v13) {
                  temp_v14[0] = (unsigned char *)0x3d;
                  FUN_001835b4(2,0xd,0x1df,*(short *)(temp_v3 + 8) + temp_v1,
                               *(short *)(temp_v3 + 10) + temp_v2);
                }
              }
            }
          }
          temp_v14[0] = (unsigned char *)0x3d;
          FUN_001835b4(2,0xd,0x76,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
          temp_v14[0] = (unsigned char *)0x3e;
          FUN_001835b4(2,0xd,0x75,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
          temp_v14[0] = (unsigned char *)0x48;
          FUN_001835b4(2,0xd,0x77,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2);
          temp_v4 = FUN_001834a4(0xd,0x8c);
          if (temp_v17[2] != 0) {
            if ((temp_v13) && (*temp_v27 >= 0x15)) {
              FUN_001676b0(4,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49);
            }
            else {
              temp_v14[0] = (unsigned char *)0x0;
              FUN_00185e84(temp_v15,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49,
                           temp_v32);
              temp_v14[0] = (unsigned char *)0x0;
              FUN_00389d9c(temp_v18,temp_v15,
                           (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                           (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49);
            }
          }
          else {
            FUN_00167860(temp_v15,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                         (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x49);
          }
          temp_v4 = FUN_001834a4(0xd,0x8b);
          temp_v9 = (int)*(short *)(temp_v3 + 8);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9 + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (temp_v23 != 0) {
            FUN_00162790(2,0xffffffff,temp_v20,temp_v9);
          }
          else {
            FUN_00162790(2,0x9b9b9bff,temp_v20,temp_v9);
          }
          temp_v4 = FUN_001834a4(0xd,0x86);
          temp_v14[0] = (unsigned char *)0x49;
          temp_v14[1] = &LAB_0028e034;
          temp_v14[2] = (unsigned char *)temp_v26;
          FUN_00180310(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,4);
        }
        efctSetSpeed();
      }
      temp_v11 = temp_v11 + 1;
      puVar1 = temp_v29;
    } while (temp_v11 < temp_v22);
  }
  temp_v29 = puVar1;
  if (temp_v31 == 0) {
    efctSetSpeed();
    return;
  }
  temp_v11 = FUN_002a4860(*temp_v24);
  temp_v3 = FUN_002a4894(*temp_v24);
  temp_v10 = temp_v11 + temp_v3;
  if (*temp_v25 == 1) {
    temp_v11 = 0xd5;
  }
  else if (*temp_v25 == 2) {
    temp_v11 = 0xcf;
  }
  else {
    temp_v11 = 0xc9;
  }
  temp_v3 = FUN_002a4894(*temp_v24);
  temp_v11 = FUN_001834a4(0xd,temp_v3 + temp_v11);
  efctSetSpeed();
  temp_v14[0] = (unsigned char *)0x3d;
  FUN_001835b4(2,0xd,0x96,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
  temp_v14[0] = (unsigned char *)0x3d;
  FUN_001835b4(2,0xd,0x97,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
  temp_v14[0] = (unsigned char *)0x3d;
  FUN_001835b4(2,0xd,0x98,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
  efctSetSpeed();
  temp_v14[0] = (unsigned char *)0x5b;
  FUN_001835b4(2,0xd,0x99,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
  temp_v3 = FUN_002a4894(*temp_v24);
  temp_v3 = FUN_00284140((int)*(short *)(param_1 + temp_v3 * 2 + 0x4824));
  if (((temp_v3 == 1 || temp_v3 == 2) || temp_v3 == 6) || (temp_v21 != 0)) {
    temp_v16 = -0xa006001;
    temp_v14[0] = (unsigned char *)0x60;
    FUN_001835b4(2,0xd,0x1f9,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v14[0] = (unsigned char *)0x60;
    FUN_001835b4(2,0xd,0x1fa,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v14[0] = (unsigned char *)0x62;
    FUN_001835b4(2,0xd,0x1fb,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    efctSetSpeed();
    temp_v14[0] = (unsigned char *)0x62;
    FUN_001835b4(2,0xd,0x1fc,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    efctSetSpeed();
  }
  else {
    temp_v16 = -0x60180001;
    temp_v14[0] = (unsigned char *)0x60;
    FUN_001835b4(2,0xd,0x9a,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v14[0] = (unsigned char *)0x60;
    FUN_001835b4(2,0xd,0x9b,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v14[0] = (unsigned char *)0x62;
    FUN_001835b4(2,0xd,0x1ee,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    efctSetSpeed();
    temp_v14[0] = (unsigned char *)0x62;
    FUN_001835b4(2,0xd,0x9c,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    efctSetSpeed();
  }
  if (temp_v30 != 1) {
    if (temp_v30 != 2) {
      if (temp_v30 != 7) {
        if (temp_v30 != 3) {
          if (temp_v30 == 0xc) {
            temp_v14[0] = (unsigned char *)0x6f;
            FUN_001835b4(2,0xd,0x9e,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
            temp_v14[0] = (unsigned char *)0x6f;
            FUN_001835b4(2,0xd,0x9d,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
            temp_v9 = (int)(short)*temp_v29;
            temp_v6 = FUN_0014bd84(temp_v9);
            FUN_00100388(temp_v20,&LAB_0028f5a4,temp_v6);
            temp_v6 = FUN_003df57c(temp_v9,1);
            temp_v3 = FUN_002ccdb4(0xffffffff,temp_v9);
            temp_v4 = FUN_001834a4(0xd,0xa9);
            temp_v14[0] = (unsigned char *)0x0;
            FUN_00185e84(temp_v9,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                         (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,0x74,0);
            temp_v4 = FUN_001834a4(0xd,0xa8);
            temp_v9 = (int)*(short *)(temp_v4 + 10);
            VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v9 + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            if (temp_v3 != 0) {
              FUN_00162790(3,temp_v16,temp_v20,temp_v9);
            }
            else {
              FUN_00162790(3,0x9b9b9bff,temp_v20,temp_v9);
            }
            temp_v3 = FUN_001834a4(0xd,0xa3);
            temp_v14[0] = (unsigned char *)0x74;
            temp_v14[1] = &LAB_0028f73c;
            temp_v14[2] = (unsigned char *)temp_v6;
            FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                         (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,1,4);
          }
        }
        else {
          temp_v14[0] = (unsigned char *)0x6f;
          FUN_001835b4(2,0xd,0x9d,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
          temp_v3 = btlGetMainState();
          if (!((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_00573bf8) == 0 &&
               (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bfc) == 0)) {
            temp_v23 = 1;
            temp_v6 = FUN_002f8e98(temp_v10 & 0xff);
            FUN_00100388(temp_v20,&LAB_0028f0c8,temp_v6);
          }
          else {
            temp_v12 = 0;
            temp_v8 = 0;
            temp_v17[2] = 0x33;
            temp_v17[0] = 0x2e;
            temp_v17[1] = 0x32;
            do {
              temp_v3 = FUN_003e46f4(temp_v17[temp_v8]);
              if (temp_v3 != 0) {
                if (temp_v12 == temp_v10) {
                  temp_v23 = 1;
                  temp_v6 = FUN_002f8e98(temp_v8 & 0xff);
                  FUN_00100388(temp_v20,&LAB_0028f0c8,temp_v6);
                  break;
                }
                temp_v12 = temp_v12 + 1;
              }
              temp_v8 = temp_v8 + 1;
            } while ((int)temp_v8 < 3);
          }
          temp_v3 = FUN_001834a4(0xd,0xa8);
          if (temp_v21 != 0) {
            VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00162790(3,0x72e027ff,temp_v20,(int)*(short *)(temp_v3 + 10));
          }
          else {
            temp_v4 = (int)*(short *)(temp_v3 + 10);
            VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v4 + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3
                               );
            VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            if (temp_v23 != 0) {
              FUN_00162790(3,temp_v16,temp_v20,temp_v4);
            }
            else {
              FUN_00162790(3,0x9b9b9bff,temp_v20,temp_v4);
            }
          }
          temp_v3 = FUN_001834a4(0xd,0xa9);
          temp_v14[0] = (unsigned char *)0x0;
          FUN_00185e84(0xfffffffd,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                       (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v2,0x74,0);
        }
      }
      else {
        temp_v9 = (int)*(short *)(param_1 + temp_v10 * 2 + 0x3ca8);
        temp_v3 = temp_v9;
        FUN_0040082c();
        temp_v4 = temp_v9;
        FUN_0015f858(temp_v9,0);
        FUN_00100388(temp_v20,&LAB_0028f0c8,temp_v4);
        temp_v6 = FUN_001ba3d4(temp_v9);
        temp_v14[0] = (unsigned char *)0x6f;
        FUN_001835b4(2,0xd,0x9d,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
        temp_v4 = FUN_001834a4(0xd,0xa8);
        if (temp_v21 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,0x72e027ff,temp_v20,(int)*(short *)(temp_v4 + 10));
        }
        else if (temp_v3 == 0) {
          VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,temp_v16,temp_v20,(int)*(short *)(temp_v11 + 8));
        }
        else {
          VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,0x9b9b9bff,temp_v20,(int)*(short *)(temp_v4 + 10));
        }
        temp_v3 = FUN_001834a4(0xd,0xa9);
        FUN_001689e8(temp_v9,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,0x74,0);
        temp_v3 = FUN_001834a4(0xd,0xa7);
        temp_v14[1] = &LAB_0028f5a0;
        temp_v14[0] = (unsigned char *)0x74;
        FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,1,1);
        temp_v3 = FUN_001834a4(0xd,0xa7);
        temp_v14[0] = (unsigned char *)0x74;
        temp_v14[1] = &LAB_0028f0c0;
        temp_v14[2] = (unsigned char *)temp_v6;
        FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,1,4);
      }
    }
    else {
      temp_v14[0] = (unsigned char *)0x6f;
      FUN_001835b4(2,0xd,0x9e,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
      temp_v14[0] = (unsigned char *)0x6f;
      FUN_001835b4(2,0xd,0x9d,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
      temp_v3 = btlGetMainState();
      if (!((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_00573bf0) == 0 &&
           (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bf4) == 0)) {
        temp_v6 = btlGetMainState();
        temp_v0 = halfTableGet(temp_v6,temp_v10);
      }
      else {
        btlGetMainState();
        temp_v0 = 0;
      }
      temp_v6 = FUN_0014bd84((int)temp_v0);
      FUN_00100388(temp_v20,&LAB_0028ec00,temp_v6);
      temp_v3 = FUN_001834a4(0xd,0xa8);
      temp_v4 = (int)*(short *)(temp_v3 + 10);
      VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v4 + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v21 != 0) {
        FUN_00162790(3,0x72e027ff,temp_v20,temp_v4);
      }
      else {
        FUN_00162790(3,temp_v16,temp_v20,temp_v4);
      }
      temp_v3 = FUN_001834a4(0xd,0xa9);
      temp_v14[0] = (unsigned char *)0x0;
      FUN_00185e84((int)temp_v0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v2,0x74,0);
      temp_v3 = FUN_001834a4(0xd,0xa3);
      temp_v14[0] = (unsigned char *)0x74;
      temp_v14[1] = &LAB_0028f0c0;
      temp_v14[2] = (unsigned char *)0x0;
      FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,1,4);
    }
  }
  else {
    temp_v14[0] = (unsigned char *)0x6f;
    FUN_001835b4(2,0xd,0x9e,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v14[0] = (unsigned char *)0x6f;
    FUN_001835b4(2,0xd,0x9d,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v0 = *(short *)(param_1 + *temp_v25 * 2 + 0x4210);
    if (temp_v0 != -1) {
      temp_v13 = 1;
      temp_v32 = 0;
      if (temp_v0 != -2) {
        temp_v18 = FUN_001ab854();
      }
      else {
        temp_v18 = btlMainGetUnk14();
      }
      if (temp_v10 != 0) {
        temp_v3 = btlGetMainState();
        if (!((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_00573bf0) == 0 &&
             (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bf4) == 0)) {
          temp_v15 = (int)(short)temp_v10;
          temp_v6 = FUN_0014bd84();
          FUN_00100388(temp_v20,&LAB_0028ec00,temp_v6);
          temp_v6 = FUN_004bcbb4(temp_v18,temp_v15);
        }
        else {
          temp_v15 = (int)*(short *)(param_1 + *temp_v25 * 0x10 + temp_v10 * 2 + 0x3c42);
          temp_v6 = FUN_0014bd84();
          FUN_00100388(temp_v20,&LAB_0028ec00,temp_v6);
          temp_v6 = FUN_004bcbb4(temp_v18,temp_v15);
        }
        temp_v0 = *(short *)(param_1 + *temp_v25 * 2 + 0x4210);
        if ((-1 < temp_v0) || (temp_v0 == -2)) {
          temp_v23 = FUN_002ccd74(temp_v18,temp_v15);
          temp_v13 = 1;
        }
      }
      else {
        temp_v10 = (unsigned int)*(unsigned short *)(temp_v18 + 0x62);
        FUN_00184310();
        if (*(char *)(temp_v10 + 0xc) != '\x01') {
          FUN_00100388(temp_v20,&LAB_0028ec00,&LAB_0028d73c);
        }
        else {
          FUN_00100388(temp_v20,&LAB_0028ec00,&LAB_0028ec08);
        }
        temp_v6 = 0;
        temp_v23 = 1;
        if (temp_v18 != 0) {
          temp_v0 = *(short *)(temp_v18 + 0x62);
          FUN_003b67d4();
          temp_v15 = (int)temp_v0;
          temp_v13 = 0;
        }
      }
    }
    else {
      temp_v32 = 1;
      if (temp_v10 != 0) {
        if ((temp_v10 == 1) && (temp_v3 = FUN_002fa75c(), temp_v3 != 0)) {
          FUN_00100388(temp_v20,&LAB_0028ec00,&LAB_0028ec08);
          temp_v0 = 1;
          temp_v6 = 0;
          temp_v23 = 1;
          FUN_003b67e8();
          temp_v15 = (int)temp_v0;
          temp_v13 = 0;
        }
        else {
          temp_v3 = -2;
          temp_v4 = FUN_002fa75c();
          if (temp_v4 == 0) {
            temp_v3 = -1;
          }
          temp_v4 = btlGetMainState();
          if (!((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573bf0) == 0 &&
               (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573bf4) == 0)) {
            temp_v15 = (int)(short)((short)(temp_v10 + temp_v3) + 1);
            temp_v6 = FUN_0014bd84();
            FUN_00100388(temp_v20,&LAB_0028ec00,temp_v6);
            temp_v6 = FUN_003df57c(temp_v15,1);
          }
          else {
            temp_v15 = (int)*(short *)(param_1 + *temp_v25 * 0x10 + (temp_v10 + temp_v3) * 2 + 0x3c44);
            temp_v6 = FUN_0014bd84();
            FUN_00100388(temp_v20,&LAB_0028ec00,temp_v6);
            temp_v6 = FUN_003df57c(temp_v15,1);
          }
          temp_v23 = FUN_002ccdb4(0xffffffff,temp_v15);
          temp_v13 = 1;
        }
      }
      else {
        FUN_00100388(temp_v20,&LAB_0028ec00,&LAB_0028d73c);
        temp_v0 = 1;
        temp_v6 = 0;
        temp_v23 = 1;
        FUN_003c0d90();
        temp_v15 = (int)temp_v0;
        temp_v13 = 0;
      }
    }
    temp_v17[0] = 0;
    if (temp_v28 != 0) {
      temp_v3 = temp_v15;
      FUN_001aba54();
      temp_v0 = 0;
      if (temp_v3 != 0) {
        temp_v0 = *(short *)(temp_v3 + 0x86);
      }
      if ((temp_v3 != 0 && temp_v0 != 0) && (temp_v3 = FUN_004bd098(temp_v18,temp_v15), -1 < temp_v3)) {
        temp_v17[0] = 1;
      }
    }
    temp_v3 = FUN_001834a4(0xd,0xa9);
    if (temp_v13) {
      if ((temp_v17[0] != 0) && (*temp_v27 >= 0x15)) {
        FUN_001676b0(4,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,0x74);
      }
      else {
        temp_v14[0] = (unsigned char *)0x0;
        FUN_00185e84(temp_v15,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,0x74,
                     temp_v32);
        temp_v14[0] = (unsigned char *)0x0;
        FUN_00389d9c(temp_v18,temp_v15,
                     (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,0x74);
      }
    }
    else {
      FUN_00167860(temp_v15,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,0x74);
    }
    temp_v3 = FUN_001834a4(0xd,0xa8);
    if (!(temp_v21 == 0 && temp_v17[0] == 0)) {
      VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0x72e027ff,temp_v20,(int)*(short *)(temp_v3 + 10));
    }
    else {
      temp_v4 = (int)*(short *)(temp_v3 + 10);
      VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v4 + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v23 != 0) {
        FUN_00162790(3,temp_v16,temp_v20,temp_v4);
      }
      else {
        FUN_00162790(3,0x9b9b9bff,temp_v20,temp_v4);
      }
    }
    temp_v3 = FUN_001834a4(0xd,0xa3);
    temp_v14[0] = (unsigned char *)0x74;
    temp_v14[1] = &LAB_0028f0c0;
    temp_v14[2] = (unsigned char *)temp_v6;
    FUN_00180310(2,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v1,
                 (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v2,1,4);
  }
  temp_v11 = FUN_002c2c68(*temp_v24);
  if (temp_v11 >= 7) {
    if (*temp_v25 == 1) {
      temp_v6 = 200;
    }
    else if (*temp_v25 == 2) {
      temp_v6 = 0xc1;
    }
    else {
      temp_v6 = 0xb9;
    }
    temp_v11 = FUN_001834a4(0xd,temp_v6);
    temp_v14[0] = (unsigned char *)0x64;
    FUN_001835b4(2,0xd,0x7a,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2);
    temp_v17[2] = (int)*(short *)(param_1 + 0x4820);
    temp_v17[3] = (int)*(short *)(param_1 + 0x4822);
    temp_v18 = 0x65;
    temp_v19 = 0;
    temp_v17[1] = (int)*(short *)(param_1 + 0x481e);
    temp_v15 = 0x7d;
    temp_v16 = 0x7c;
    temp_v17[0] = 0x7e;
    temp_v14[0] = (unsigned char *)0x80;
    temp_v14[2] = (unsigned char *)0x7b;
    temp_v14[1] = (unsigned char *)0x81;
    FUN_00344cd0(*temp_v24,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2,0xd,0x7f);
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
