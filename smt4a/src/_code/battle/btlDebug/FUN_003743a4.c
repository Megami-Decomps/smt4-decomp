/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003743a4` (_code @ 0x3743a4, 0x12cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_00374e3c; /* 0x374e3c */
extern unsigned char LAB_00374e40; /* 0x374e40 */
extern unsigned char LAB_00374e50; /* 0x374e50 */
extern unsigned char LAB_00375328; /* 0x375328 */
extern unsigned char LAB_00375334; /* 0x375334 */
extern unsigned char LAB_00375670; /* 0x375670 */
extern unsigned char LAB_00375678; /* 0x375678 */
extern unsigned int DAT_00573bf0; /* 0x573bf0 */
extern unsigned int DAT_00573bf4; /* 0x573bf4 */
extern unsigned int DAT_00573bf8; /* 0x573bf8 */
extern unsigned int DAT_00573bfc; /* 0x573bfc */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0014bd84. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001676b0. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00167860. */
/* Supplied declaration required: FUN_001689e8. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned char *FUN_001ab854(void);
extern int FUN_001ba3d4(int);
extern int FUN_00284140(int);
extern unsigned char *FUN_002919a4(void);
extern int FUN_002a4860(unsigned int);
extern int FUN_002a4894(unsigned int);
extern int FUN_002cc9e0(int, unsigned int);
extern unsigned int FUN_002f8e98(unsigned int);
extern int FUN_002fa75c(void);
extern int FUN_00372794(int, int, unsigned char *);
/* Supplied declaration required: FUN_00389d9c. */
/* Supplied declaration required: FUN_003b67d4. */
/* Supplied declaration required: FUN_003b67e8. */
/* Supplied declaration required: FUN_003c0d90. */
extern int FUN_003df57c(int, unsigned int);
extern int FUN_003e46f4(int);
extern short FUN_003ef9b8(unsigned int, unsigned int);
extern int FUN_004bcbb4(unsigned char *, int);


void FUN_003743a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 24 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char *puVar10;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int *piVar15;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  int temp_v16 [2];
  unsigned char *temp_v17;
  int temp_v18;
  unsigned char temp_v19 [64];
  int temp_v20;
  int *temp_v21;
  int *temp_v22;
  
  temp_v17 = (unsigned char *)0x0;
  temp_v2 = FUN_001654d8();
  temp_v3 = FUN_001654e4(param_1 + 0x11a0);
  temp_v4 = FUN_001654d8();
  temp_v4 = temp_v4 + temp_v2;
  temp_v2 = FUN_001654e4(param_1 + 0x12b8);
  temp_v2 = temp_v2 + temp_v3;
  FUN_001677c0();
  temp_v16[1] = 0xab;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x10e,temp_v4);
  temp_v16[1] = 0xb5;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x110,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x111,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x112,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x113,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x114,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x115,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x116,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x117,temp_v4);
  temp_v16[1] = 0xb6;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x118,temp_v4);
  temp_v16[1] = 0xb7;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x119,temp_v4);
  temp_v16[1] = 0xb7;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x11a,temp_v4);
  temp_v16[1] = 0xb7;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x11b,temp_v4);
  temp_v16[1] = 0xb5;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x11c,temp_v4);
  temp_v16[1] = 0xbb;
  temp_v16[0] = temp_v2;
  FUN_001835b4(2,0xd,0x11d,temp_v4);
  temp_v3 = FUN_00284140((int)*(short *)(param_1 + 0x4830));
  temp_v16[1] = 0xc3;
  if (!(temp_v3 == 1 || temp_v3 == 2)) {
    temp_v16[0] = temp_v2;
    FUN_001835b4(2,0xd,0x121,temp_v4);
  }
  else {
    temp_v16[0] = temp_v2;
    FUN_001835b4(2,0xd,0x122,temp_v4);
  }
  temp_v21 = (int *)(param_1 + 0x4850);
  temp_v18 = 0;
  if (0 < *temp_v21) {
    temp_v20 = param_1 + 0x122c;
    do {
      temp_v3 = param_1 + temp_v18 * 0x40;
      if (*(char *)(temp_v3 + 0x4870) != '\0') {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x4858);
        FUN_0019cac4();
        if ((*(unsigned short *)(temp_v5 + 2) & 0x8000) != 0) {
          if (*(char *)(param_1 + 0x4857) != '\0') {
            temp_v6 = FUN_001834a4(0xd,0x1a0);
          }
          else {
            temp_v5 = *(int *)(temp_v3 + 0x488c) - 0x13b;
            temp_v15 = temp_v5 >= 4;
            temp_v14 = temp_v5 == 4;
            if (temp_v5 >= 5) {
              temp_v5 = *(int *)(temp_v3 + 0x488c) - 0x159;
              temp_v15 = temp_v5 >= 3;
              temp_v14 = temp_v5 == 3;
            }
            if (!(temp_v15 && !temp_v14)) {
              temp_v6 = FUN_001834a4(0xd,0x19e);
            }
            else {
              temp_v6 = FUN_001834a4(0xd,0x19f);
            }
          }
          temp_v16[0] = *(short *)(temp_v6 + 10) + temp_v2;
          temp_v16[1] = 0xc9;
          FUN_00164b5c(2,0xd,9,*(short *)(temp_v6 + 8) + temp_v4);
          if (*(char *)(temp_v3 + 0x4894) != '\0') {
            FUN_001677c0();
            temp_v8 = DAT_0059dbb4;
            temp_v7 = FUN_00169294(6,1,0);
            piVar15 = (int *)(temp_v8 + 0x12b8);
            temp_v11 = piVar15[*piVar15 + 2];
            piVar15[*piVar15 + 2] = temp_v7;
            if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v11 != temp_v7) {
              (**(romwright_code **)(temp_v8 + 0x12d4))();
              *(unsigned char *)(temp_v8 + 0x12d0) = 0;
            }
            temp_v16[0] = *(short *)(temp_v6 + 10) + temp_v2;
            temp_v16[1] = 0xce;
            FUN_001835b4(2,0xd,0x19d,*(short *)(temp_v6 + 8) + temp_v4);
            temp_v6 = DAT_0059dbb4;
            temp_v8 = FUN_00169294(6,7,0);
            piVar15 = (int *)(temp_v6 + 0x12b8);
            temp_v7 = piVar15[*piVar15 + 2];
            piVar15[*piVar15 + 2] = temp_v8;
            if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v7 != temp_v8) {
              (**(romwright_code **)(temp_v6 + 0x12d4))();
              *(unsigned char *)(temp_v6 + 0x12d0) = 0;
            }
            FUN_001677c0();
          }
          temp_v22 = (int *)(temp_v3 + 0x488c);
          temp_v6 = 0;
          do {
            if (*(char *)(param_1 + 0x4857) != '\0') {
              temp_v8 = FUN_001834a4(0xd,temp_v6 + 0x1a1);
            }
            else {
              temp_v5 = *temp_v22 - 0x13b;
              temp_v15 = temp_v5 >= 4;
              temp_v14 = temp_v5 == 4;
              if (temp_v5 >= 5) {
                temp_v5 = *temp_v22 - 0x159;
                temp_v15 = temp_v5 >= 3;
                temp_v14 = temp_v5 == 3;
              }
              if (!(temp_v15 && !temp_v14)) {
                temp_v8 = FUN_001834a4(0xd,temp_v6 + 0x13b);
              }
              else {
                temp_v8 = FUN_001834a4(0xd,temp_v6 + 0x14a);
              }
            }
            FUN_00169a1c(*(unsigned short *)(param_1 + temp_v6 * 2 + 0x3da0),*(short *)(temp_v8 + 8) + temp_v4
                         ,*(short *)(temp_v8 + 10) + temp_v2,0xd3);
            if (*(char *)(temp_v3 + 0x4894) != '\0') {
              FUN_001677c0();
              temp_v7 = DAT_0059dbb4;
              temp_v11 = FUN_00169294(6,1,0);
              piVar15 = (int *)(temp_v7 + 0x12b8);
              temp_v10 = piVar15[*piVar15 + 2];
              piVar15[*piVar15 + 2] = temp_v11;
              if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v10 != temp_v11) {
                (**(romwright_code **)(temp_v7 + 0x12d4))();
                *(unsigned char *)(temp_v7 + 0x12d0) = 0;
              }
              temp_v16[1] = 0xd8;
              temp_v16[0] = *(short *)(temp_v8 + 10) + temp_v2;
              FUN_001835b4(2,0xd,0x124,*(short *)(temp_v8 + 8) + temp_v4);
              temp_v8 = DAT_0059dbb4;
              temp_v7 = FUN_00169294(6,7,0);
              piVar15 = (int *)(temp_v8 + 0x12b8);
              temp_v11 = piVar15[*piVar15 + 2];
              piVar15[*piVar15 + 2] = temp_v7;
              if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v11 != temp_v7) {
                (**(romwright_code **)(temp_v8 + 0x12d4))();
                *(unsigned char *)(temp_v8 + 0x12d0) = 0;
              }
              FUN_001677c0();
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 5);
        }
        else {
          temp_v6 = FUN_001834a4(0xd,*(unsigned int *)(temp_v3 + 0x488c));
          temp_v16[0] = 0;
          FUN_0018152c((int)*(short *)(temp_v3 + 0x4858),*(short *)(temp_v6 + 8) + temp_v4,
                       *(short *)(temp_v6 + 10) + temp_v2,0xc9);
          if (*(char *)(temp_v3 + 0x4894) != '\0') {
            FUN_001677c0();
            temp_v6 = FUN_001834a4(0xd,*(unsigned int *)(temp_v3 + 0x488c));
            temp_v3 = DAT_0059dbb4;
            temp_v8 = FUN_00169294(6,1,0);
            piVar15 = (int *)(temp_v3 + 0x12b8);
            temp_v7 = piVar15[*piVar15 + 2];
            piVar15[*piVar15 + 2] = temp_v8;
            if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v7 != temp_v8) {
              (**(romwright_code **)(temp_v3 + 0x12d4))();
              *(unsigned char *)(temp_v3 + 0x12d0) = 0;
            }
            temp_v16[0] = *(short *)(temp_v6 + 10) + temp_v2;
            temp_v16[1] = 0xce;
            FUN_001835b4(2,0xd,0x124,*(short *)(temp_v6 + 8) + temp_v4);
            temp_v3 = DAT_0059dbb4;
            temp_v6 = FUN_00169294(6,7,0);
            piVar15 = (int *)(temp_v3 + 0x12b8);
            temp_v8 = piVar15[*piVar15 + 2];
            piVar15[*piVar15 + 2] = temp_v6;
            if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v8 != temp_v6) {
              (**(romwright_code **)(temp_v3 + 0x12d4))();
              *(unsigned char *)(temp_v3 + 0x12d0) = 0;
            }
            FUN_001677c0();
          }
        }
      }
      temp_v18 = temp_v18 + 1;
    } while (temp_v18 < *temp_v21);
  }
  temp_v8 = 0;
  temp_v3 = FUN_002a4860(*(unsigned int *)(param_1 + 0x3c40));
  temp_v6 = FUN_002a4894(*(unsigned int *)(param_1 + 0x3c40));
  temp_v5 = temp_v3 + temp_v6;
  temp_v3 = FUN_002cc9e0(param_1,1);
  if (temp_v3 != 1) {
    temp_v3 = FUN_002cc9e0(param_1,1);
    if (temp_v3 != 2) {
      temp_v3 = FUN_002cc9e0(param_1,1);
      if (temp_v3 != 7) {
        temp_v3 = FUN_002cc9e0(param_1,1);
        if (temp_v3 != 3) {
          temp_v3 = FUN_002cc9e0(param_1,1);
          if (temp_v3 != 0xb) {
            temp_v3 = FUN_002cc9e0(param_1,1);
            if (temp_v3 == 0xc) {
              temp_v16[1] = 0xc3;
              temp_v16[0] = temp_v2;
              FUN_001835b4(2,0xd,0x11e,temp_v4);
              temp_v16[1] = 0xc3;
              temp_v16[0] = temp_v2;
              FUN_001835b4(2,0xd,0x11f,temp_v4);
              temp_v8 = (int)(short)*(unsigned int *)(param_1 + 0x3e18);
              temp_v9 = FUN_0014bd84(temp_v8);
              FUN_00100388(temp_v19,&LAB_00375670,temp_v9);
              temp_v3 = FUN_003df57c(temp_v8,1);
              temp_v6 = FUN_001834a4(0xd,0x12e);
              VectorSignedToFloat(*(short *)(temp_v6 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(short *)(temp_v6 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_00162790(3,0x57d8ffff,temp_v19);
              temp_v6 = FUN_001834a4(0xd,0x12f);
              temp_v16[0] = 0;
              temp_v16[1] = 0;
              FUN_00185e84(temp_v8,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,0xc9);
              temp_v6 = FUN_001834a4(0xd,0x129);
              temp_v16[0] = 4;
              temp_v16[1] = 0xc9;
              temp_v17 = &LAB_00375328;
              temp_v18 = temp_v3;
              FUN_00180310(2,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,1);
            }
          }
          else {
            FUN_00100388(temp_v19,&LAB_00375678);
            temp_v3 = FUN_001834a4(0xd,0x11c);
            puVar10 = temp_v19;
            FUN_0018408c(puVar10,3);
            temp_v1 = *(short *)(temp_v3 + 8);
            temp_v0 = **(short **)(temp_v3 + 0xc);
            temp_v3 = FUN_001834a4(0xd,0x12e,(int)temp_v1);
            VectorSignedToFloat(temp_v4 + (int)temp_v1 + ((int)temp_v0 - (int)puVar10) / 2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_00162790(3,0x57d8ffff,temp_v19);
          }
        }
        else {
          temp_v16[1] = 0xc3;
          temp_v16[0] = temp_v2;
          FUN_001835b4(2,0xd,0x11e,temp_v4);
          temp_v3 = FUN_0014aa78();
          if (!((DAT_00573bfc & *(unsigned int *)(temp_v3 + 0x45ac)) == 0 &&
               (DAT_00573bf8 & *(unsigned int *)(temp_v3 + 0x45a8)) == 0)) {
            temp_v9 = FUN_002f8e98(temp_v5 & 0xff);
            FUN_00100388(temp_v19,&LAB_00375670,temp_v9);
          }
          else {
            temp_v13 = 0;
            temp_v12 = 0;
            temp_v16[0] = 0x2e;
            temp_v16[1] = 0x32;
            temp_v17 = (unsigned char *)0x33;
            do {
              temp_v3 = FUN_003e46f4(temp_v16[temp_v12]);
              if (temp_v3 != 0) {
                if (temp_v13 == temp_v5) {
                  temp_v9 = FUN_002f8e98(temp_v12 & 0xff);
                  FUN_00100388(temp_v19,&LAB_00375670,temp_v9);
                  break;
                }
                temp_v13 = temp_v13 + 1;
              }
              temp_v12 = temp_v12 + 1;
            } while ((int)temp_v12 < 3);
          }
          temp_v3 = FUN_001834a4(0xd,0x12e);
          VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,0x57d8ffff,temp_v19);
          temp_v3 = FUN_001834a4(0xd,0x12f);
          temp_v16[0] = 0;
          temp_v16[1] = 0;
          FUN_00185e84(0xfffffffd,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9)
          ;
        }
      }
      else {
        temp_v16[1] = 0xc3;
        temp_v16[0] = temp_v2;
        FUN_001835b4(2,0xd,0x11e,temp_v4);
        temp_v8 = (int)*(short *)(param_1 + temp_v5 * 2 + 0x3ca8);
        temp_v3 = temp_v8;
        FUN_0015f858(temp_v8,0);
        FUN_00100388(temp_v19,&LAB_00374e3c,temp_v3);
        temp_v3 = FUN_001ba3d4(temp_v8);
        temp_v6 = FUN_001834a4(0xd,0x12e);
        VectorSignedToFloat(*(short *)(temp_v6 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v6 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,0x57d8ffff,temp_v19);
        temp_v6 = FUN_001834a4(0xd,0x12f);
        temp_v16[0] = 0;
        FUN_001689e8(temp_v8,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,0xc9);
        temp_v6 = FUN_001834a4(0xd,0x12d);
        temp_v17 = &LAB_00375334;
        temp_v16[0] = 1;
        temp_v16[1] = 0xc9;
        FUN_00180310(2,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,1);
        temp_v6 = FUN_001834a4(0xd,0x12d);
        temp_v16[0] = 4;
        temp_v16[1] = 0xc9;
        temp_v17 = &LAB_00375328;
        temp_v18 = temp_v3;
        FUN_00180310(2,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,1);
      }
    }
    else {
      temp_v16[1] = 0xc3;
      temp_v16[0] = temp_v2;
      FUN_001835b4(2,0xd,0x11e,temp_v4);
      temp_v16[1] = 0xc3;
      temp_v16[0] = temp_v2;
      FUN_001835b4(2,0xd,0x11f,temp_v4);
      temp_v3 = FUN_0014aa78();
      if (!((*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bf4) == 0 &&
           (DAT_00573bf0 & *(unsigned int *)(temp_v3 + 0x45a8)) == 0)) {
        temp_v9 = FUN_0014aa78();
        temp_v1 = FUN_003ef9b8(temp_v9,temp_v5);
      }
      else {
        FUN_0014aa78();
        temp_v1 = 0;
      }
      temp_v9 = FUN_0014bd84();
      FUN_00100388(temp_v19,&LAB_00374e3c,temp_v9);
      temp_v3 = FUN_001834a4(0xd,0x12e);
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0x57d8ffff,temp_v19);
      temp_v3 = FUN_001834a4(0xd,0x12f);
      temp_v16[0] = 0;
      temp_v16[1] = 0;
      FUN_00185e84((int)temp_v1,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9);
      temp_v3 = FUN_001834a4(0xd,0x129);
      temp_v16[0] = 4;
      temp_v16[1] = 0xc9;
      temp_v17 = &LAB_00375328;
      temp_v18 = 0;
      FUN_00180310(2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,1);
    }
  }
  else {
    temp_v16[1] = 0xc3;
    temp_v16[0] = temp_v2;
    FUN_001835b4(2,0xd,0x11e,temp_v4);
    temp_v16[1] = 0xc3;
    temp_v16[0] = temp_v2;
    FUN_001835b4(2,0xd,0x11f,temp_v4);
    piVar15 = (int *)(param_1 + 0x3890);
    temp_v1 = *(short *)(param_1 + *piVar15 * 2 + 0x4210);
    if (temp_v1 != -1) {
      temp_v14 = 1;
      temp_v16[0] = 0;
      if (temp_v1 != -2) {
        temp_v17 = (unsigned char *)FUN_001ab854();
      }
      else {
        temp_v17 = (unsigned char *)FUN_002919a4();
      }
      if (temp_v5 != 0) {
        temp_v3 = FUN_0014aa78();
        if (!((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_00573bf0) == 0 &&
             (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bf4) == 0)) {
          temp_v8 = (int)(short)temp_v5;
          temp_v9 = FUN_0014bd84(temp_v8);
          FUN_00100388(temp_v19,&LAB_00374e3c,temp_v9);
          temp_v3 = FUN_004bcbb4(temp_v17,temp_v8);
        }
        else {
          temp_v8 = (int)*(short *)(param_1 + *piVar15 * 0x10 + temp_v5 * 2 + 0x3c42);
          temp_v9 = FUN_0014bd84(temp_v8);
          FUN_00100388(temp_v19,&LAB_00374e3c,temp_v9);
          temp_v3 = FUN_004bcbb4(temp_v17,temp_v8);
        }
        temp_v14 = 1;
      }
      else {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v17 + 0x62);
        FUN_00184310();
        if (*(char *)(temp_v5 + 0xc) != '\x01') {
          FUN_00100388(temp_v19,&LAB_00374e3c,&LAB_00374e40);
        }
        else {
          FUN_00100388(temp_v19,&LAB_00374e3c,&LAB_00374e50);
        }
        temp_v3 = 0;
        if (temp_v17 != (unsigned char *)0x0) {
          temp_v1 = *(short *)(temp_v17 + 0x62);
          FUN_003b67d4(temp_v1);
          temp_v8 = (int)temp_v1;
          temp_v14 = 0;
        }
      }
    }
    else {
      temp_v16[0] = 1;
      if (temp_v5 != 0) {
        if ((temp_v5 == 1) && (temp_v3 = FUN_002fa75c(), temp_v3 != 0)) {
          puVar10 = temp_v19;
          FUN_00100388(puVar10,&LAB_00374e3c,&LAB_00374e50);
          temp_v1 = (short)puVar10;
          temp_v3 = 0;
          FUN_003b67e8();
          temp_v8 = (int)temp_v1;
          temp_v14 = 0;
        }
        else {
          temp_v6 = 2;
          temp_v3 = FUN_002fa75c();
          if (temp_v3 == 0) {
            temp_v6 = 1;
          }
          temp_v3 = FUN_0014aa78();
          if (!((*(unsigned int *)(temp_v3 + 0x45a8) & DAT_00573bf0) == 0 &&
               (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bf4) == 0)) {
            temp_v8 = (int)(short)(((short)temp_v5 - (short)temp_v6) + 1);
            temp_v9 = FUN_0014bd84(temp_v8);
            FUN_00100388(temp_v19,&LAB_00374e3c,temp_v9);
            temp_v3 = FUN_003df57c(temp_v8,1);
          }
          else {
            temp_v8 = (int)*(short *)(param_1 + *piVar15 * 0x10 + (temp_v5 - temp_v6) * 2 + 0x3c44);
            temp_v9 = FUN_0014bd84(temp_v8);
            FUN_00100388(temp_v19,&LAB_00374e3c,temp_v9);
            temp_v3 = FUN_003df57c(temp_v8,1);
          }
          temp_v14 = 1;
        }
      }
      else {
        puVar10 = temp_v19;
        FUN_00100388(puVar10,&LAB_00374e3c,&LAB_00374e40);
        temp_v1 = (short)puVar10;
        temp_v3 = 0;
        FUN_003c0d90();
        temp_v8 = (int)temp_v1;
        temp_v14 = 0;
      }
    }
    temp_v6 = FUN_001834a4(0xd,0x12e);
    VectorSignedToFloat(*(short *)(temp_v6 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v6 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0x57d8ffff,temp_v19);
    temp_v6 = FUN_00372794(param_1,temp_v8,temp_v17);
    temp_v7 = FUN_001834a4(0xd,0x12f);
    if (temp_v14) {
      if ((temp_v6 != 0) && (*(int *)(param_1 + 0x4ba4) >= 0x15)) {
        FUN_001676b0(4,*(short *)(temp_v7 + 8) + temp_v4,*(short *)(temp_v7 + 10) + temp_v2,0xc9);
      }
      else {
        temp_v16[1] = 0;
        FUN_00185e84(temp_v8,*(short *)(temp_v7 + 8) + temp_v4,*(short *)(temp_v7 + 10) + temp_v2,0xc9);
        temp_v16[0] = 0xc9;
        temp_v16[1] = 0;
        FUN_00389d9c(temp_v17,temp_v8,*(short *)(temp_v7 + 8) + temp_v4,*(short *)(temp_v7 + 10) + temp_v2);
      }
    }
    else {
      FUN_00167860(temp_v8,*(short *)(temp_v7 + 8) + temp_v4,*(short *)(temp_v7 + 10) + temp_v2,0xc9);
    }
    temp_v6 = FUN_001834a4(0xd,0x129);
    temp_v16[0] = 4;
    temp_v16[1] = 0xc9;
    temp_v17 = &LAB_00375328;
    temp_v18 = temp_v3;
    FUN_00180310(2,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,1);
  }
  FUN_001677c0();
  return;
}
