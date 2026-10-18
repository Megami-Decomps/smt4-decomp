/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003316d0` (_code @ 0x3316d0, 0xa00 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_00331b78; /* 0x331b78 */
extern unsigned char LAB_00331ba0; /* 0x331ba0 */
extern unsigned char LAB_00331bb0; /* 0x331bb0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024205c. */
/* Supplied declaration required: FUN_002420c8. */
/* Supplied declaration required: FUN_00282c44. */
/* Supplied declaration required: FUN_00290c38. */
extern int FUN_002931cc(unsigned int);
extern unsigned int FUN_00295f90(void);
/* Supplied declaration required: FUN_0029a418. */
/* Supplied declaration required: FUN_0029a504. */
extern int FUN_0029d8e4(int);
extern int FUN_0029d8fc(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002b6ecc. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_003316d0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  unsigned char temp_v13 [84];
  
  temp_v0 = FUN_002bef7c(param_1 + 0x2d8);
  temp_v1 = FUN_002bef70(param_1 + 0x2d8);
  temp_v11 = 0;
  temp_v12 = 0;
  FUN_002bf558(2,0x1d,9,temp_v0,temp_v1,0x65);
  FUN_002bf460(2,0x1d,0x57c,temp_v0,temp_v1,0x6a);
  FUN_002bf460(2,0x1d,0x57d,temp_v0,temp_v1,0x6a);
  FUN_002bf460(2,0x1d,0x57e,temp_v0,temp_v1,0x6a);
  FUN_002bf460(2,0x1d,0x57f,temp_v0,temp_v1,0x6a);
  temp_v2 = FUN_002bf6d0(0x1d,0x583);
  temp_v3 = FUN_00295f90();
  FUN_002be7fc(temp_v13,&LAB_00331b78,temp_v3);
  FUN_002be16c(0,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,1,4,0x6a,temp_v13);
  temp_v9 = 0;
  temp_v2 = FUN_0029d8e4(param_1 + 0x10);
  if (0 < temp_v2) {
    do {
      if ((*(int *)(param_1 + 8) != 2 && *(int *)(param_1 + 8) != 3) ||
         (temp_v2 = FUN_0029f248(param_1 + 0x10), temp_v2 != temp_v9)) {
        temp_v2 = FUN_0029f260(param_1 + 0x10);
        temp_v10 = *(unsigned int *)(param_1 + (temp_v2 + temp_v9) * 4 + 0x74);
        temp_v2 = FUN_002bf6d0(0x1d,temp_v9 + 0x40e);
        temp_v4 = FUN_002bf6d0(0x1d,0x58f);
        FUN_002b6ecc(temp_v10 & 0xffff,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0
                     ,(int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,0x6a);
        temp_v4 = FUN_002931cc(temp_v10);
        if (temp_v4 != 0) {
          temp_v11 = 0x8400ff;
          temp_v4 = FUN_002bf6d0(0x1d,0x595);
          FUN_002bf558(2,0x1d,8,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,0x6a);
        }
        else {
          FUN_002bf460(2,0x1d,0x58b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          FUN_002bf460(2,0x1d,0x58c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          FUN_002bf460(2,0x1d,0x58d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,
                       0x6a);
          temp_v5 = temp_v10;
          FUN_00282c44();
          if (temp_v5 != 0) {
            if (temp_v5 != 1) {
              if (temp_v5 == 2) {
                temp_v11 = 0x5a5a5aff;
                temp_v12 = 0x787878ff;
                FUN_002be7fc(temp_v13,&LAB_00331bb0);
              }
            }
            else {
              temp_v11 = 0x5a5a5aff;
              temp_v12 = 0xdc0f14ff;
              temp_v5 = temp_v10;
              FUN_0024205c(temp_v10);
              FUN_002be7fc(temp_v13,&LAB_00331ba0,temp_v5);
            }
          }
          else {
            temp_v12 = 0xffffffff;
            temp_v11 = 0xff;
            temp_v5 = temp_v10;
            FUN_0024205c(temp_v10);
            FUN_002be7fc(temp_v13,&LAB_00331ba0,temp_v5);
          }
          temp_v4 = FUN_002bf6d0(0x1d,0x594);
          FUN_002be4dc(temp_v12);
          FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0,
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,1,4,0x6f,
                       temp_v13);
          FUN_002bef14();
        }
        temp_v4 = FUN_002bf6d0(0x1d,0x590);
        FUN_002420c8(temp_v10);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,temp_v11,temp_v10,(int)*(short *)(temp_v2 + 8));
      }
      temp_v9 = temp_v9 + 1;
      temp_v2 = FUN_0029d8e4(param_1 + 0x10);
    } while (temp_v9 < temp_v2);
  }
  if (*(int *)(param_1 + 8) == 2 || *(int *)(param_1 + 8) == 3) {
    temp_v2 = FUN_0029f260(param_1 + 0x10);
    temp_v9 = FUN_0029f248(param_1 + 0x10);
    temp_v10 = *(unsigned int *)(param_1 + (temp_v9 + temp_v2) * 4 + 0x74);
    temp_v2 = FUN_0029f248(param_1 + 0x10);
    temp_v2 = FUN_002bf6d0(0x1d,temp_v2 + 0x42f);
    FUN_002bf710();
    FUN_002bf558(2,0x1d,6,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x79);
    FUN_002bf710();
    FUN_002bf460(2,0x1d,0x429,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x7e);
    temp_v9 = FUN_0029f248(param_1 + 0x10);
    temp_v9 = FUN_0029d8fc((int)*(short *)(param_1 + temp_v9 * 2 + 0x508));
    temp_v4 = *(short *)(temp_v2 + 10) + temp_v1;
    temp_v8 = *(short *)(temp_v2 + 8) + temp_v0;
    if (!((temp_v9 == 1 || temp_v9 == 2) || temp_v9 == 6)) {
      FUN_002bf460(2,0x1d,0x42a,temp_v8,temp_v4,0x83);
    }
    else {
      FUN_002bf460(2,0x1d,0x42b,temp_v8,temp_v4,0x83);
    }
    temp_v4 = FUN_002bf6d0(0x1d,0x42a);
    temp_v8 = FUN_002bef7c(param_1 + 0x3f0);
    temp_v6 = FUN_002bef70(param_1 + 0x3f0);
    temp_v9 = DAT_0044ea00;
    piVar11 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v7 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 3;
    if (*(char *)(temp_v9 + 0x1324) != '\0' || temp_v7 != 3) {
      (**(romwright_code **)(temp_v9 + 0x1328))();
      *(unsigned char *)(temp_v9 + 0x1324) = 0;
    }
    FUN_0029a418((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v0,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v1,
                 (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1],1,temp_v6);
    FUN_002bf460(2,0x1d,0x42c,(int)*(short *)(temp_v2 + 8) + temp_v8 + temp_v0,
                 temp_v6 + temp_v1 + (int)*(short *)(temp_v2 + 10),0x88);
    temp_v9 = DAT_0044ea00;
    piVar11 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v4 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = 0;
    if (*(char *)(temp_v9 + 0x1324) != '\0' || temp_v4 != 0) {
      (**(romwright_code **)(temp_v9 + 0x1328))(0);
      *(unsigned char *)(temp_v9 + 0x1324) = 0;
    }
    FUN_002bf460(2,0x1d,0x596,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x8d);
    temp_v9 = FUN_002bf6d0(0x1d,0x598);
    FUN_002b6ecc(temp_v10 & 0xffff,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v0,
                 (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v1,0x92);
    temp_v9 = FUN_002931cc(temp_v10);
    if (temp_v9 != 0) {
      temp_v11 = 0x72e027ff;
      temp_v9 = FUN_002bf6d0(0x1d,0x59e);
      FUN_002bf558(2,0x1d,8,(int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v0,
                   (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v2 + 10) + temp_v1,0x92);
    }
    else {
      temp_v5 = temp_v10;
      FUN_00282c44();
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 == 2) {
            temp_v11 = 0x787878ff;
            temp_v12 = 0x787878ff;
            FUN_002be7fc(temp_v13,&LAB_00331bb0);
          }
        }
        else {
          temp_v11 = 0x787878ff;
          temp_v12 = 0xdc0f14ff;
          temp_v5 = temp_v10;
          FUN_0024205c(temp_v10);
          FUN_002be7fc(temp_v13,&LAB_00331ba0,temp_v5);
        }
      }
      else {
        temp_v11 = 0xffffffff;
        temp_v12 = 0xffffffff;
        temp_v5 = temp_v10;
        FUN_0024205c(temp_v10);
        FUN_002be7fc(temp_v13,&LAB_00331ba0,temp_v5);
      }
      temp_v9 = FUN_002bf6d0(0x1d,0x59d);
      FUN_002be4dc(temp_v12);
      FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v0,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v1,1,4,0x97,
                   temp_v13);
      FUN_002bef14();
    }
    temp_v9 = FUN_002bf6d0(0x1d,0x599);
    FUN_002420c8(temp_v10);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v9 + 10) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v9 + 8) + temp_v0,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,temp_v11,temp_v10,(int)*(short *)(temp_v9 + 10));
  }
  FUN_00290c38(param_1 + 0x10,temp_v0,temp_v1,0x1d,0x56a,0x56b,0x56c,0x566,0x568,0x567,0x569,
               (int)*(short *)(param_1 + 0x522),(int)*(short *)(param_1 + 0x51e),
               (int)*(short *)(param_1 + 0x520),0x97,0);
  temp_v0 = DAT_0044ea00;
  if (*(int *)(param_1 + 8) == 5) {
    temp_v1 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_0029a504(param_1 + 0x47c);
    temp_v0 = DAT_0044ea00;
    temp_v1 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
  }
  return;
}
