/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025d3fc` (_code @ 0x25d3fc, 0x1c98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_1_stack;

extern unsigned char LAB_0025d884; /* 0x25d884 */
extern unsigned char LAB_0025d888; /* 0x25d888 */
extern unsigned char LAB_0025d890; /* 0x25d890 */
extern unsigned char LAB_0025ded8; /* 0x25ded8 */
extern unsigned char LAB_0025dedc; /* 0x25dedc */
extern unsigned char LAB_0025e318; /* 0x25e318 */
extern unsigned char LAB_0025e710; /* 0x25e710 */
extern unsigned char LAB_0025e714; /* 0x25e714 */
extern unsigned char LAB_0025e71c; /* 0x25e71c */
extern unsigned char LAB_0025ec34; /* 0x25ec34 */
extern unsigned char LAB_0025ec38; /* 0x25ec38 */
extern unsigned char LAB_0025f094; /* 0x25f094 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0023de14(void);
/* Supplied declaration required: FUN_0024504c. */
extern unsigned int FUN_0025cdf8(unsigned int);
/* Supplied declaration required: FUN_0025ce3c. */
/* Supplied declaration required: FUN_0025ce6c. */
extern int FUN_0025ce8c(void);
/* Supplied declaration required: FUN_0025cec4. */
/* Supplied declaration required: FUN_0028d27c. */
extern short FUN_0028d4f0(void);
/* Supplied declaration required: FUN_0028d58c. */
extern unsigned int FUN_0028fde4(int);
/* Supplied declaration required: FUN_00290c38. */
extern int FUN_002931cc(int);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_00297f40(int, unsigned int);
/* Supplied declaration required: FUN_0029a418. */
extern unsigned int FUN_0029abc0(int);
extern unsigned int FUN_0029ac70(int, unsigned int);
extern int FUN_0029d8e4(unsigned int);
extern int FUN_0029d8fc(int);
extern int FUN_0029f0f4(unsigned int);
extern int FUN_0029f248(unsigned int);
extern int FUN_0029f260(unsigned int);
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002b70f0. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be548. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002be828(int, unsigned int);
extern int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c0ba8(unsigned int);


void FUN_0025d3fc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int *piVar18;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int in_fpscr;
  unsigned char temp_v19 [76];
  unsigned int *temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  unsigned int temp_v25;
  
  temp_v2 = param_1 + 0x3000;
  if ((*(int *)(param_1 + 0x305c) == 0) && (temp_v3 = FUN_0023de14(), temp_v3 != 0)) {
    return;
  }
  if (*(int *)(temp_v2 + 0x5c) == 1) {
    temp_v3 = 0xc2;
  }
  else if (*(int *)(temp_v2 + 0x5c) == 2) {
    temp_v3 = 0xbb;
  }
  else {
    temp_v3 = 0xb3;
  }
  temp_v20 = (unsigned int *)(param_1 + 0x340c);
  temp_v4 = FUN_0029d8e4(*temp_v20);
  if (*(int *)(temp_v2 + 0x48) == 0x10 || *(int *)(temp_v2 + 0x48) == 0x29) {
    if (*(char *)(temp_v2 + 0x7e) == '\0') {
      return;
    }
    temp_v4 = *(int *)(temp_v2 + 0x44) + 1;
    temp_v5 = FUN_0029d8e4(*temp_v20);
    if (temp_v5 < temp_v4) {
      temp_v4 = FUN_0029d8e4(*temp_v20);
    }
  }
  if (*(char *)(temp_v2 + 0x7e) == '\0') {
    return;
  }
  temp_v5 = *(int *)(temp_v2 + 0x48);
  temp_v24 = 0;
  if ((((temp_v5 == 8 || temp_v5 == 10) || temp_v5 == 0xc) &&
      (temp_v5 = FUN_0029d8e4(*temp_v20), temp_v5 <= temp_v4)) &&
     (*(int *)(param_1 + temp_v4 * 0x8c + 0xdec) >= 0x3f800000)) {
    temp_v24 = 1;
  }
  temp_v5 = *(int *)(temp_v2 + 0x48);
  temp_v23 = 0;
  if ((temp_v5 == 0x12 || temp_v5 == 0x13) || (temp_v5 == 0x14 || temp_v5 == 0x15)) {
    temp_v23 = 1;
  }
  temp_v22 = FUN_00297f40(param_1,0);
  temp_v6 = FUN_002bef7c();
  temp_v7 = FUN_002bef70(param_1 + 0x12b8);
  temp_v5 = 0;
  temp_v21 = 0;
  temp_v8 = FUN_0029f260(*temp_v20);
  temp_v16 = 0;
  if (temp_v16 < temp_v4) {
    do {
      if ((temp_v24 == 0) || (temp_v9 = FUN_0029f248(*temp_v20), temp_v9 != temp_v16)) {
        FUN_002bf710();
        temp_v9 = FUN_002bf6d0(0x15,temp_v3 + temp_v16);
        FUN_002bf460(2,0x15,0x72,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,0x3d
                    );
        FUN_002bf460(2,0x15,0x73,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,0x3d
                    );
        FUN_002bf460(2,0x15,0x74,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,0x3d
                    );
        if (temp_v22 != 1) {
          if (temp_v22 != 2) {
            if (temp_v22 != 7) {
              if (temp_v22 == 3) {
                temp_v10 = FUN_00293c98();
                if ((*(unsigned int *)(temp_v10 + 0x44a8) & 0x1000) != 0) {
                  temp_v21 = 1;
                  temp_v13 = FUN_0025cdf8((temp_v8 + temp_v16) & 0xff);
                  FUN_002be7fc(temp_v19,&LAB_0025dedc,temp_v13);
                }
                else {
                  temp_v10 = 0;
                  temp_v15 = 0;
                  temp_v14 = temp_v8 + temp_v16;
                  do {
                    temp_v11 = FUN_002931cc(temp_v15 + 0x2e);
                    if (temp_v11 != 0) {
                      if (temp_v14 == temp_v10) {
                        temp_v21 = 1;
                        temp_v13 = FUN_0025cdf8(temp_v15 & 0xff);
                        FUN_002be7fc(temp_v19,&LAB_0025dedc,temp_v13);
                        break;
                      }
                      temp_v10 = temp_v10 + 1;
                    }
                    temp_v15 = temp_v15 + 1;
                  } while ((int)temp_v15 < 6);
                }
                temp_v10 = FUN_002bf6d0(0x15,0x8b);
                temp_v14 = (int)*(short *)(temp_v9 + 8);
                VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) +
                                    temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(short *)(temp_v10 + 8) + temp_v14 + temp_v6,
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                if (temp_v21 != 0) {
                  FUN_002be77c(2,0xff,temp_v19,temp_v14);
                }
                else {
                  FUN_002be77c(2,0x787878ff,temp_v19,temp_v14);
                }
                temp_v10 = FUN_002bf6d0(0x15,0x8c);
                FUN_002b6f74(0xfffffffd,
                             (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                             (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,
                             0x49,0,0);
              }
            }
            else {
              FUN_002bf460(2,0x15,0x76,*(short *)(temp_v9 + 8) + temp_v6,
                           *(short *)(temp_v9 + 10) + temp_v7,0x3d);
              FUN_002bf460(2,0x15,0x75,*(short *)(temp_v9 + 8) + temp_v6,
                           *(short *)(temp_v9 + 10) + temp_v7,0x3e);
              temp_v10 = (int)*(short *)(param_1 + (temp_v8 + temp_v16) * 2 + 0x3480);
              temp_v13 = FUN_002be828(temp_v10,0);
              FUN_002be7fc(temp_v19,&LAB_0025dedc,temp_v13);
              temp_v13 = FUN_0028fde4(temp_v10);
              temp_v21 = 0;
              temp_v5 = temp_v10;
              FUN_0028d27c();
              if (temp_v10 == 0) {
                temp_v21 = 1;
              }
              temp_v10 = FUN_002bf6d0(0x15,0x8b);
              temp_v14 = (int)*(short *)(temp_v9 + 8);
              VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) +
                                  temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(*(short *)(temp_v10 + 8) + temp_v14 + temp_v6,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              if (temp_v21 != 0) {
                FUN_002be77c(2,0xff,temp_v19,temp_v14);
              }
              else {
                FUN_002be77c(2,0x787878ff,temp_v19,temp_v14);
              }
              temp_v10 = FUN_002bf6d0(0x15,0x8c);
              FUN_002be548(temp_v5,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                           (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,0x49,
                           0);
              temp_v10 = FUN_002bf6d0(0x15,0x8a);
              FUN_002be16c(2,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                           (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,1,1,
                           0x74,&LAB_0025e318);
              temp_v10 = FUN_002bf6d0(0x15,0x8a);
              FUN_002be16c(2,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                           (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,1,4,
                           0x49,&LAB_0025ded8,temp_v13);
            }
          }
          else {
            FUN_002bf460(2,0x15,0x76,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                         0x3d);
            FUN_002bf460(2,0x15,0x75,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                         0x3e);
            FUN_002bf460(2,0x15,0x77,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                         0x48);
            temp_v5 = FUN_00293c98();
            if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
              temp_v13 = FUN_00293c98();
              temp_v1 = FUN_0028d58c(temp_v13,temp_v8 + temp_v16);
            }
            else {
              FUN_00293c98();
              temp_v1 = FUN_0028d4f0();
            }
            temp_v14 = (int)temp_v1;
            temp_v21 = 1;
            temp_v5 = temp_v14;
            temp_v10 = FUN_002bf6d0(0x15,0x8c);
            FUN_002b6f74(temp_v14,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                         (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,0x49,0,
                         0);
            FUN_002bcff0(temp_v14);
            FUN_002be7fc(temp_v19,&LAB_0025dedc,temp_v14);
            temp_v10 = FUN_002bf6d0(0x15,0x8b);
            VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(2,0xff,temp_v19,(int)*(short *)(temp_v9 + 8));
            temp_v10 = FUN_002bf6d0(0x15,0x86);
            FUN_002be16c(2,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v6,
                         (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,1,4,
                         0x49,&LAB_0025ded8,0);
          }
        }
        else {
          FUN_002bf460(2,0x15,0x76,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                       0x3d);
          FUN_002bf460(2,0x15,0x75,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                       0x3e);
          FUN_002bf460(2,0x15,0x77,*(short *)(temp_v9 + 8) + temp_v6,*(short *)(temp_v9 + 10) + temp_v7,
                       0x48);
          if (*(int *)(temp_v2 + 0x5c) != 0) {
            temp_v0 = 1;
            temp_v25 = 0;
            temp_v10 = FUN_002a8a08();
            temp_v10 = FUN_002a89e4((int)*(char *)(*(int *)(temp_v2 + 0x5c) + temp_v10 + 0x9107));
            temp_v14 = temp_v8 + temp_v16;
            if (temp_v14 != 0) {
              temp_v5 = FUN_00293c98();
              if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
                temp_v10 = (int)(short)temp_v14;
                temp_v5 = temp_v10;
                FUN_002bcff0();
                FUN_002be7fc(temp_v19,&LAB_0025d884,temp_v10);
                temp_v13 = FUN_0029abc0(temp_v5);
              }
              else {
                temp_v10 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 0x10 + temp_v14 * 2 +
                                        0x341a);
                temp_v5 = temp_v10;
                FUN_002bcff0();
                FUN_002be7fc(temp_v19,&LAB_0025d884,temp_v10);
                temp_v13 = FUN_0029abc0(temp_v5);
              }
              temp_v10 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 2 + 0x38f4);
              if (-1 < temp_v10) {
                temp_v21 = FUN_0025ce3c(temp_v10,temp_v5);
              }
            }
            else {
              temp_v15 = (unsigned int)*(unsigned short *)(temp_v10 + 0x46);
              FUN_002b9364();
              if (*(char *)(temp_v15 + 10) != '\x01') {
                FUN_002be7fc(temp_v19,&LAB_0025d884,&LAB_0025d888);
              }
              else {
                FUN_002be7fc(temp_v19,&LAB_0025d884,&LAB_0025d890);
              }
              temp_v13 = 0;
              temp_v21 = 1;
              if (temp_v10 != 0) {
                temp_v1 = *(short *)(temp_v10 + 0x46);
                FUN_0024504c();
                temp_v5 = (int)temp_v1;
                temp_v0 = 0;
              }
            }
          }
          else {
            temp_v0 = 1;
            temp_v10 = temp_v8 + temp_v16;
            temp_v25 = 1;
            if (temp_v10 != 0) {
              if ((temp_v10 == 1) && (temp_v5 = FUN_0025ce8c(), temp_v5 != 0)) {
                FUN_002be7fc(temp_v19,&LAB_0025d884,&LAB_0025d890);
                temp_v1 = 1;
                temp_v13 = 0;
                temp_v21 = 1;
                FUN_0025ce6c();
                temp_v5 = (int)temp_v1;
                temp_v0 = 0;
              }
              else {
                temp_v5 = -2;
                temp_v14 = FUN_0025ce8c();
                if (temp_v14 == 0) {
                  temp_v5 = -1;
                }
                temp_v14 = FUN_00293c98();
                if ((*(unsigned int *)(temp_v14 + 0x44a8) & 0x40) != 0) {
                  temp_v14 = (int)(short)((short)(temp_v10 + temp_v5) + 1);
                  temp_v5 = temp_v14;
                  FUN_002bcff0();
                  FUN_002be7fc(temp_v19,&LAB_0025d884,temp_v14);
                  temp_v13 = FUN_0029ac70(temp_v5,1);
                }
                else {
                  temp_v14 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 0x10 +
                                           (temp_v10 + temp_v5) * 2 + 0x341c);
                  temp_v5 = temp_v14;
                  FUN_002bcff0();
                  FUN_002be7fc(temp_v19,&LAB_0025d884,temp_v14);
                  temp_v13 = FUN_0029ac70(temp_v5,1);
                }
                temp_v21 = FUN_0025ce3c(0xffffffff,temp_v5);
              }
            }
            else {
              FUN_002be7fc(temp_v19,&LAB_0025d884,&LAB_0025d888);
              temp_v1 = 1;
              temp_v13 = 0;
              temp_v21 = 1;
              FUN_0025cec4();
              temp_v5 = (int)temp_v1;
              temp_v0 = 0;
            }
            temp_v14 = FUN_002c0ba8(0x525);
            if (temp_v14 != 0) {
              if (temp_v10 == 0) {
                temp_v21 = 1;
              }
              else {
                temp_v21 = 0;
              }
            }
          }
          temp_v10 = FUN_002bf6d0(0x15,0x8c);
          if (temp_v0) {
            FUN_002b6f74(temp_v5,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                         (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,0x49,
                         temp_v25,0);
          }
          else {
            FUN_002b70f0(temp_v5,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                         (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,0x49);
          }
          temp_v10 = FUN_002bf6d0(0x15,0x8b);
          temp_v14 = (int)*(short *)(temp_v9 + 8);
          VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v10 + 8) + temp_v14 + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (temp_v21 != 0) {
            FUN_002be77c(2,0xff,temp_v19,temp_v14);
          }
          else {
            FUN_002be77c(2,0x787878ff,temp_v19,temp_v14);
          }
          temp_v10 = FUN_002bf6d0(0x15,0x86);
          FUN_002be16c(2,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v6,
                       (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v7,1,4,0x49,
                       &LAB_0025ded8,temp_v13);
        }
        FUN_002bf710();
      }
      temp_v16 = temp_v16 + 1;
    } while (temp_v16 < temp_v4);
  }
  if (temp_v24 == 0) {
    return;
  }
  temp_v3 = FUN_0029f260(*temp_v20);
  temp_v4 = FUN_0029f248(*temp_v20);
  temp_v15 = temp_v3 + temp_v4;
  if (*(int *)(temp_v2 + 0x5c) == 1) {
    temp_v3 = 0xd5;
  }
  else if (*(int *)(temp_v2 + 0x5c) == 2) {
    temp_v3 = 0xcf;
  }
  else {
    temp_v3 = 0xc9;
  }
  temp_v4 = FUN_0029f248(*temp_v20);
  temp_v3 = FUN_002bf6d0(0x15,temp_v4 + temp_v3);
  FUN_002bf710();
  FUN_002bf460(2,0x15,0x96,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x3d);
  FUN_002bf460(2,0x15,0x97,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x3d);
  FUN_002bf460(2,0x15,0x98,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x3d);
  FUN_002bf710();
  FUN_002bf460(2,0x15,0x99,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x5b);
  if (temp_v23 == 0) {
    temp_v4 = FUN_0029f248(*temp_v20);
    temp_v4 = FUN_0029d8fc((int)*(short *)(param_1 + temp_v4 * 2 + 0x572c));
    if ((temp_v4 != 1) && (temp_v4 != 2 && temp_v4 != 6)) {
      FUN_002bf460(2,0x15,0x9a,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x65);
    }
    else {
      FUN_002bf460(2,0x15,0x9b,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x65);
    }
  }
  else {
    FUN_002bf460(2,0x15,0x9b,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x65);
  }
  temp_v8 = FUN_002bf6d0(0x15,0x9a);
  temp_v4 = DAT_0044ea00;
  piVar18 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v16 = piVar18[*piVar18 + 2];
  piVar18[*piVar18 + 2] = 3;
  if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v16 != 3) {
    (**(romwright_code **)(temp_v4 + 0x1328))();
    *(unsigned char *)(temp_v4 + 0x1324) = 0;
  }
  FUN_0029a418((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v6,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v7,
               (int)**(short **)(temp_v8 + 0xc),(int)(*(short **)(temp_v8 + 0xc))[1],1);
  temp_v4 = FUN_002bef70(param_1 + 0x6b0);
  temp_v1 = *(short *)(temp_v3 + 10);
  temp_v8 = FUN_002bef7c(param_1 + 0x6b0);
  FUN_002bf460(2,0x15,0x9c,temp_v8 + temp_v6 + (int)*(short *)(temp_v3 + 8),temp_v4 + temp_v7 + (int)temp_v1,
               0x6f);
  temp_v4 = DAT_0044ea00;
  piVar18 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v8 = piVar18[*piVar18 + 2];
  piVar18[*piVar18 + 2] = 0;
  if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v8 != 0) {
    (**(romwright_code **)(temp_v4 + 0x1328))();
    *(unsigned char *)(temp_v4 + 0x1324) = 0;
  }
  if (temp_v22 != 1) {
    if (temp_v22 != 2) {
      if (temp_v22 != 7) {
        if (temp_v22 == 3) {
          FUN_002bf460(2,0x15,0x9d,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f
                      );
          temp_v4 = FUN_00293c98();
          if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x1000) == 0) {
            temp_v17 = 0;
            temp_v18 = temp_v17;
            do {
              temp_v4 = FUN_002931cc(temp_v17 + 0x2e);
              if (temp_v4 != 0) {
                if (temp_v18 == temp_v15) {
                  temp_v21 = 1;
                  temp_v13 = FUN_0025cdf8(temp_v17 & 0xff);
                  FUN_002be7fc(temp_v19,&LAB_0025ec38,temp_v13);
                  break;
                }
                temp_v18 = temp_v18 + 1;
              }
              temp_v17 = temp_v17 + 1;
            } while ((int)temp_v17 < 6);
          }
          else {
            temp_v21 = 1;
            temp_v13 = FUN_0025cdf8(temp_v15 & 0xff);
            FUN_002be7fc(temp_v19,&LAB_0025ec38,temp_v13);
          }
          temp_v4 = FUN_002bf6d0(0x15,0xa8);
          if (temp_v23 != 0) {
            VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(3,0x72e027ff,temp_v19,(int)*(short *)(temp_v4 + 10));
          }
          else {
            temp_v8 = (int)*(short *)(temp_v4 + 10);
            temp_v5 = *(short *)(temp_v3 + 10) + temp_v8;
            if (temp_v21 != 0) {
              VectorSignedToFloat(temp_v5 + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_002be77c(3,0xffffffff,temp_v19,temp_v8);
            }
            else {
              VectorSignedToFloat(temp_v5 + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_002be77c(3,0x787878ff,temp_v19,temp_v8);
            }
          }
          temp_v4 = FUN_002bf6d0(0x15,0xa9);
          FUN_002b6f74(0xfffffffd,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v7,0x74,0,0);
        }
      }
      else {
        temp_v5 = (int)*(short *)(param_1 + temp_v15 * 2 + 0x3480);
        temp_v4 = temp_v5;
        FUN_0028d27c();
        temp_v13 = FUN_002be828(temp_v4,0);
        FUN_002be7fc(temp_v19,&LAB_0025ec38,temp_v13);
        temp_v13 = FUN_0028fde4(temp_v4);
        FUN_002bf460(2,0x15,0x9d,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f);
        temp_v8 = FUN_002bf6d0(0x15,0xa8);
        if (temp_v23 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v7,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v6,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(3,0x72e027ff,temp_v19,(int)*(short *)(temp_v8 + 10));
        }
        else {
          temp_v9 = (int)*(short *)(temp_v8 + 10);
          temp_v16 = *(short *)(temp_v3 + 10) + temp_v9 + temp_v7;
          temp_v8 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v6;
          if (temp_v5 == 0) {
            VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(3,0xffffffff,temp_v19,temp_v9);
          }
          else {
            VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be77c(3,0x787878ff,temp_v19,temp_v9);
          }
        }
        temp_v5 = FUN_002bf6d0(0x15,0xa9);
        FUN_002be548(temp_v4,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v7,0x74,0);
        temp_v4 = FUN_002bf6d0(0x15,0xa7);
        FUN_002be16c(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,1,1,0x74,
                     &LAB_0025f094);
        temp_v4 = FUN_002bf6d0(0x15,0xa7);
        FUN_002be16c(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                     (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,1,4,0x74,
                     &LAB_0025ec34,temp_v13);
      }
    }
    else {
      FUN_002bf460(2,0x15,0x9e,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f);
      FUN_002bf460(2,0x15,0x9d,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f);
      temp_v4 = FUN_00293c98();
      if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x40) != 0) {
        temp_v13 = FUN_00293c98();
        temp_v1 = FUN_0028d58c(temp_v13,temp_v15);
      }
      else {
        FUN_00293c98();
        temp_v1 = FUN_0028d4f0();
      }
      temp_v4 = (int)temp_v1;
      FUN_002bcff0(temp_v4);
      FUN_002be7fc(temp_v19,&LAB_0025e710,temp_v4);
      temp_v4 = FUN_002bf6d0(0x15,0xa8);
      if (temp_v23 != 0) {
        VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(3,0x72e027ff,temp_v19,(int)*(short *)(temp_v4 + 10));
      }
      else {
        VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(3,0xffffffff,temp_v19,(int)*(short *)(temp_v4 + 10));
      }
      temp_v4 = FUN_002bf6d0(0x15,0xa9);
      FUN_002b6f74((int)temp_v1,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v7,0x74,0,0);
      temp_v4 = FUN_002bf6d0(0x15,0xa3);
      FUN_002be16c(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,1,4,0x74,
                   &LAB_0025ec34,0);
    }
  }
  else {
    FUN_002bf460(2,0x15,0x9e,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f);
    FUN_002bf460(2,0x15,0x9d,*(short *)(temp_v3 + 8) + temp_v6,*(short *)(temp_v3 + 10) + temp_v7,0x6f);
    if (*(int *)(temp_v2 + 0x5c) != 0) {
      temp_v13 = 0;
      temp_v0 = 1;
      temp_v4 = FUN_002a8a08();
      temp_v4 = FUN_002a89e4((int)*(char *)(*(int *)(temp_v2 + 0x5c) + temp_v4 + 0x9107));
      if (temp_v15 != 0) {
        temp_v4 = FUN_00293c98();
        if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x40) != 0) {
          temp_v4 = (int)(short)temp_v15;
          temp_v5 = temp_v4;
          FUN_002bcff0();
          FUN_002be7fc(temp_v19,&LAB_0025e710,temp_v4);
          temp_v12 = FUN_0029abc0(temp_v5);
        }
        else {
          temp_v4 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 0x10 + temp_v15 * 2 + 0x341a);
          temp_v5 = temp_v4;
          FUN_002bcff0();
          FUN_002be7fc(temp_v19,&LAB_0025e710,temp_v4);
          temp_v12 = FUN_0029abc0(temp_v5);
        }
        temp_v4 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 2 + 0x38f4);
        if (-1 < temp_v4) {
          temp_v21 = FUN_0025ce3c(temp_v4,temp_v5);
        }
      }
      else {
        temp_v15 = (unsigned int)*(unsigned short *)(temp_v4 + 0x46);
        FUN_002b9364();
        if (*(char *)(temp_v15 + 10) != '\x01') {
          FUN_002be7fc(temp_v19,&LAB_0025e710,&LAB_0025e714);
        }
        else {
          FUN_002be7fc(temp_v19,&LAB_0025e710,&LAB_0025e71c);
        }
        temp_v12 = 0;
        temp_v21 = 1;
        if (temp_v4 != 0) {
          temp_v1 = *(short *)(temp_v4 + 0x46);
          FUN_0024504c();
          temp_v5 = (int)temp_v1;
          temp_v0 = 0;
        }
      }
    }
    else {
      temp_v13 = 1;
      temp_v0 = 1;
      if (temp_v15 != 0) {
        if ((temp_v15 == 1) && (temp_v4 = FUN_0025ce8c(), temp_v4 != 0)) {
          FUN_002be7fc(temp_v19,&LAB_0025e710,&LAB_0025e71c);
          temp_v1 = 1;
          temp_v12 = 0;
          temp_v21 = 1;
          FUN_0025ce6c();
          temp_v5 = (int)temp_v1;
          temp_v0 = 0;
        }
        else {
          temp_v4 = -2;
          temp_v5 = FUN_0025ce8c();
          if (temp_v5 == 0) {
            temp_v4 = -1;
          }
          temp_v5 = FUN_00293c98();
          if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
            temp_v4 = (int)(short)((short)(temp_v15 + temp_v4) + 1);
            temp_v5 = temp_v4;
            FUN_002bcff0();
            FUN_002be7fc(temp_v19,&LAB_0025e710,temp_v4);
            temp_v12 = FUN_0029ac70(temp_v5,1);
          }
          else {
            temp_v4 = (int)*(short *)(param_1 + *(int *)(temp_v2 + 0x5c) * 0x10 + (temp_v15 + temp_v4) * 2 +
                                   0x341c);
            temp_v5 = temp_v4;
            FUN_002bcff0();
            FUN_002be7fc(temp_v19,&LAB_0025e710,temp_v4);
            temp_v12 = FUN_0029ac70(temp_v5,1);
          }
          temp_v21 = FUN_0025ce3c(0xffffffff,temp_v5);
        }
      }
      else {
        FUN_002be7fc(temp_v19,&LAB_0025e710,&LAB_0025e714);
        temp_v1 = 1;
        temp_v12 = 0;
        temp_v21 = 1;
        FUN_0025cec4();
        temp_v5 = (int)temp_v1;
        temp_v0 = 0;
      }
    }
    temp_v4 = FUN_002bf6d0(0x15,0xa9);
    if (temp_v0) {
      FUN_002b6f74(temp_v5,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,0x74,temp_v13,0);
    }
    else {
      FUN_002b70f0(temp_v5,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,0x74);
    }
    temp_v4 = FUN_002bf6d0(0x15,0xa8);
    if (temp_v23 != 0) {
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(3,0x72e027ff,temp_v19,(int)*(short *)(temp_v4 + 10));
    }
    else {
      temp_v5 = (int)*(short *)(temp_v4 + 10);
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v5 + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v6,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v21 != 0) {
        FUN_002be77c(3,0xffffffff,temp_v19,temp_v5);
      }
      else {
        FUN_002be77c(3,0x787878ff,temp_v19,temp_v5);
      }
    }
    temp_v4 = FUN_002bf6d0(0x15,0xa3);
    FUN_002be16c(2,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v6,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v7,1,4,0x74,
                 &LAB_0025ec34,temp_v12);
  }
  temp_v3 = FUN_0029f0f4(*temp_v20);
  if (temp_v3 >= 7) {
    if (*(int *)(temp_v2 + 0x5c) == 1) {
      temp_v13 = 200;
    }
    else if (*(int *)(temp_v2 + 0x5c) == 2) {
      temp_v13 = 0xc1;
    }
    else {
      temp_v13 = 0xb9;
    }
    temp_v2 = FUN_002bf6d0(0x15,temp_v13);
    FUN_00290c38(*temp_v20,*(short *)(temp_v2 + 8) + temp_v6,*(short *)(temp_v2 + 10) + temp_v7,0x15,0x7f,
                 0x80,0x81,0x7b,0x7d,0x7c,0x7e,(int)*(short *)(param_1 + 0x5726),
                 (int)*(short *)(param_1 + 0x5728),(int)*(short *)(param_1 + 0x572a),0x65,0);
  }
  return;
}
