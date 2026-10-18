/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aec14` (_code @ 0x1aec14, 0x8fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_3_stack;

extern unsigned char LAB_001af000; /* 0x1af000 */
extern unsigned char LAB_001af534; /* 0x1af534 */
extern int DAT_0043da90; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028f938. */
/* Supplied declaration required: FUN_0028fb14. */
extern int FUN_00298a74(unsigned int, int);
extern int FUN_00298ae4(int, int);
extern unsigned int FUN_0029abc0(int);
extern unsigned int FUN_0029ac70(int, unsigned int);
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */


void FUN_001aec14(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [140];
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int iStack_30;
  int iStack_2c;
  int temp_v14;
  
  temp_v5 = DAT_0043da90;
  temp_v10 = DAT_0043da90 + 0x1dc;
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v14 = param_3;
  FUN_002bf558(2,0x1d,0,param_1,param_2,0x65);
  FUN_002bf460(2,0x1d,0x439,param_1,param_2,0x6a);
  temp_v6 = 0;
  do {
    temp_v1 = FUN_0029f260(temp_v10);
    temp_v2 = FUN_0029f0f4(temp_v10);
    if (temp_v2 <= temp_v1 + temp_v6) break;
    temp_v1 = FUN_0029f260(temp_v10);
    temp_v8 = *(int *)(temp_v5 + (temp_v1 + temp_v6) * 8 + 0xe3c);
    temp_v1 = FUN_0029f260(temp_v10);
    temp_v7 = *(unsigned int *)(temp_v5 + (temp_v1 + temp_v6) * 8 + 0xe40);
    temp_v12 = temp_v7 >> 0x1f;
    temp_v2 = FUN_002bf6d0(0x1d,temp_v6 + 0x40d);
    FUN_002bf460(2,0x1d,0x43a,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x6a)
    ;
    FUN_002bf460(2,0x1d,0x43b,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x6a)
    ;
    FUN_002bf460(2,0x1d,0x43c,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x6a)
    ;
    FUN_002bf460(2,0x1d,0x43d,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x6f)
    ;
    temp_v3 = FUN_002bf6d0(0x1d,0x440);
    temp_v1 = temp_v8;
    FUN_002bcff0();
    temp_v11 = temp_v1;
    if (temp_v1 != 0) {
      temp_v13 = 0xff;
      temp_v1 = FUN_0029f260(temp_v10);
      temp_v1 = FUN_00298ae4(temp_v8,(int)(short)*(unsigned int *)(temp_v5 + (temp_v1 + temp_v6) * 8 + 0xe40));
      if ((temp_v1 != 0) && (temp_v1 = FUN_00298a74(temp_v7,temp_v8), temp_v1 != 0)) {
        temp_v1 = FUN_0029f260(temp_v10);
        if (*(int *)(temp_v5 + (temp_v1 + temp_v6) * 8 + 0xe40) < 0) {
          temp_v1 = FUN_002b66ec();
          if ((*(unsigned short *)(temp_v1 + 0x72) & 2) != 0) {
            temp_v13 = 0x5a5a5aff;
          }
        }
        else {
          temp_v1 = FUN_002a89e4();
          if (((temp_v1 == 0) || (temp_v0 = *(unsigned short *)(temp_v1 + 0x44), (temp_v0 & 2) != 0)) ||
             ((temp_v0 & 0x400) != 0 || (temp_v0 & 4) != 0)) {
            temp_v13 = 0x5a5a5aff;
          }
        }
      }
      else {
        temp_v13 = 0x5a5a5aff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,temp_v13,temp_v11,(int)*(short *)(temp_v3 + 8));
    }
    temp_v1 = FUN_002bf6d0(0x1d,0x444);
    if ((int)temp_v7 < 0) {
      temp_v4 = FUN_0029ac70(temp_v8,1);
      FUN_002be7fc(temp_v9,&LAB_001af000,temp_v4);
    }
    else {
      temp_v4 = FUN_0029abc0(temp_v8);
      FUN_002be7fc(temp_v9,&LAB_001af000,temp_v4);
    }
    FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,4,0x6f,
                 temp_v9);
    temp_v1 = FUN_002bf6d0(0x1d,0x43f);
    FUN_002b6f74((int)(short)temp_v8,
                 (int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,0x6f,temp_v12,0
                );
    temp_v1 = FUN_002bf6d0(0x1d,0x43e);
    if ((int)temp_v7 < 0) {
      FUN_002be4dc(*(unsigned int *)(temp_v5 + temp_v7 * 4 + 0x255c));
      temp_v8 = (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10);
      temp_v1 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8);
      temp_v2 = -1;
      FUN_002b6a98(temp_v2,temp_v1 + param_1,temp_v8 + param_2,0x6f,0);
    }
    else {
      temp_v3 = FUN_002a89e4(temp_v7);
      if (temp_v3 != 0) {
        FUN_002be4dc(*(unsigned int *)(temp_v5 + temp_v7 * 4 + 0x255c));
        temp_v8 = (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10);
        temp_v1 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8);
        temp_v2 = (int)*(short *)(temp_v3 + 0x46);
        FUN_002b6a98(temp_v2,temp_v1 + param_1,temp_v8 + param_2,0x6f,0);
      }
    }
    FUN_002bef14();
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xb);
  FUN_0028fb14(temp_v10,param_1,param_2,1);
  if ((temp_v14 != 0) && (temp_v6 = FUN_0029f0f4(temp_v5 + 0x1dc), temp_v6 >= 1)) {
    temp_v6 = FUN_0029f260(temp_v10);
    temp_v1 = FUN_0029f248(temp_v10);
    temp_v1 = *(int *)(temp_v5 + (temp_v1 + temp_v6) * 8 + 0xe3c);
    temp_v6 = FUN_0029f260(temp_v10);
    temp_v2 = FUN_0029f248(temp_v10);
    temp_v7 = *(unsigned int *)(temp_v5 + (temp_v2 + temp_v6) * 8 + 0xe40);
    temp_v12 = temp_v7 >> 0x1f;
    temp_v6 = FUN_0029f248(temp_v10);
    temp_v2 = FUN_002bf6d0(0x1d,temp_v6 + 0x42e);
    temp_v6 = FUN_0029f248(temp_v10);
    FUN_0028f938(*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,
                 (int)*(short *)(temp_v5 + temp_v6 * 2 + 0xe0c));
    temp_v3 = FUN_002bf6d0(0x1d,0x449);
    temp_v6 = temp_v1;
    FUN_002bcff0();
    temp_v11 = temp_v6;
    if (temp_v6 != 0) {
      temp_v4 = 0xffffffff;
      temp_v6 = FUN_0029f260(temp_v10);
      temp_v8 = FUN_0029f248(temp_v10);
      temp_v6 = FUN_00298ae4(temp_v1,(int)(short)*(unsigned int *)(temp_v5 + (temp_v8 + temp_v6) * 8 + 0xe40));
      if ((temp_v6 != 0) && (temp_v6 = FUN_00298a74(temp_v7,temp_v1), temp_v6 != 0)) {
        temp_v6 = FUN_0029f260(temp_v10);
        temp_v8 = FUN_0029f248(temp_v10);
        if (*(int *)(temp_v5 + (temp_v8 + temp_v6) * 8 + 0xe40) < 0) {
          temp_v6 = FUN_002b66ec();
          if ((*(unsigned short *)(temp_v6 + 0x72) & 2) != 0) {
            temp_v4 = 0x5a5a5aff;
          }
        }
        else {
          temp_v6 = FUN_002a89e4();
          if (((temp_v6 == 0) || (temp_v0 = *(unsigned short *)(temp_v6 + 0x44), (temp_v0 & 2) != 0)) ||
             ((temp_v0 & 0x400) != 0 || (temp_v0 & 4) != 0)) {
            temp_v4 = 0x5a5a5aff;
          }
        }
      }
      else {
        temp_v4 = 0x5a5a5aff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(3,temp_v4,temp_v11,(int)*(short *)(temp_v3 + 8));
    }
    FUN_002bf460(2,0x1d,0x446,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x83)
    ;
    temp_v6 = FUN_002bf6d0(0x1d,0x44d);
    if ((int)temp_v7 < 0) {
      temp_v4 = FUN_0029ac70(temp_v1,1);
      FUN_002be7fc(temp_v9,&LAB_001af000,temp_v4);
    }
    else {
      temp_v4 = FUN_0029abc0(temp_v1);
      FUN_002be7fc(temp_v9,&LAB_001af000,temp_v4);
    }
    FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,4,0x83,
                 temp_v9);
    FUN_002bf460(2,0x1d,0x445,*(short *)(temp_v2 + 8) + param_1,*(short *)(temp_v2 + 10) + param_2,0x83)
    ;
    temp_v6 = FUN_002bf6d0(0x1d,0x448);
    FUN_002b6f74((int)(short)temp_v1,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_1
                 ,(int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0x88,temp_v12,
                 0);
    temp_v6 = FUN_002bf6d0(0x1d,0x447);
    if ((int)temp_v7 < 0) {
      FUN_002be4dc(*(unsigned int *)(temp_v5 + temp_v7 * 4 + 0x255c));
      temp_v3 = (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10);
      temp_v6 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8);
      temp_v1 = -1;
      FUN_002b6a98(temp_v1,temp_v6 + param_1,temp_v3 + param_2,0x88,0);
    }
    else {
      temp_v1 = FUN_002a89e4(temp_v7);
      if (temp_v1 != 0) {
        FUN_002be4dc(*(unsigned int *)(temp_v5 + temp_v7 * 4 + 0x255c));
        temp_v3 = (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10);
        temp_v1 = (int)*(short *)(temp_v1 + 0x46);
        temp_v6 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8);
        FUN_002b6a98(temp_v1,temp_v6 + param_1,temp_v3 + param_2,0x88,0);
      }
    }
    FUN_002bef14();
  }
  temp_v5 = FUN_0029f0f4(temp_v5 + 0x1dc);
  if (temp_v5 < 1) {
    FUN_002bf558(2,0x1a,0x1b,param_1,param_2,0xdd);
    temp_v5 = FUN_002bf6d0(0x1a,0x544);
    FUN_002be7fc(temp_v9,&LAB_001af534);
    puVar7 = temp_v9;
    FUN_002b7118(puVar7,2);
    VectorSignedToFloat(param_1 + (int)*(short *)(temp_v5 + 8) +
                                  ((int)**(short **)(temp_v5 + 0xc) - (int)puVar7) / 2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v5 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xffffffff,temp_v9);
  }
  return;
}
