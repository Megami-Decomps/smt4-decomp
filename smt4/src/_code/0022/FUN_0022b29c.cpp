/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b29c` (_code @ 0x22b29c, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b6c4(...);
int FUN_0022b778(...);
int FUN_0022b83c(...);
int FUN_0022b8d8(int, int);
int FUN_00296f4c(unsigned int, unsigned int);
int FUN_002be624(unsigned char [36], unsigned char *, int);
int FUN_002c4938(char [256], int);
int FUN_00387f88(int, int);
int FUN_00389444(int, int, int);
int FUN_003bb5e8(int);
int FUN_003bb5f4(int, int);
int FUN_003bb9d4(int);
int FUN_003bbab0(void);
int FUN_003bbac8(unsigned char *, unsigned int);
int VectorSignedToFloat(...);

extern unsigned char DAT_00404e04; /* 0x404e04 */
extern int DAT_00433158; /* 0x433158 */
extern int DAT_0044cfb8; /* 0x44cfb8 */
extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022b6c4. */
/* Supplied declaration required: FUN_0022b778. */
/* Supplied declaration required: FUN_0022b83c. */
extern int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_0022b8d8. */
extern int FUN_002872d4(void);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c09d0(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_00387f88. */
/* Supplied declaration required: FUN_00389444. */
/* Supplied declaration required: FUN_003bb5e8. */
/* Supplied declaration required: FUN_003bb5f4. */
/* Supplied declaration required: FUN_003bb9d4. */
extern int FUN_003bba2c(unsigned char *, unsigned int);
extern int FUN_003bba68(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003bbab0. */
/* Supplied declaration required: FUN_003bbac8. */


void FUN_0022b29c(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  char acStack_150 [256];
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [36];
  
  temp_v0 = FUN_003bba2c(temp_v8,0);
  puVar2 = temp_v8;
  FUN_003bbab0();
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0xd5c) = 0;
  if (0 < (int)puVar2) {
    do {
      if (*(char *)(temp_v0 + temp_v1 * 0x88) == param_2) {
        *(int *)(param_1 + 0xd5c) = temp_v0 + temp_v1 * 0x88;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  FUN_003bb5e8(param_1 + 0x9c);
  if (param_3 != -1) {
    *(int *)(param_1 + 0xd64) = param_3;
  }
  else {
    *(int *)(param_1 + 0xd64) = (int)*(char *)(*(int *)(param_1 + 0xd5c) + 1);
  }
  temp_v0 = FUN_003bba68(temp_v8,*(unsigned int *)(param_1 + 0xd64),0);
  puVar2 = temp_v8;
  FUN_003bbac8(puVar2,*(unsigned int *)(param_1 + 0xd64));
  FUN_002c4938(acStack_150,0x100);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar2) {
    do {
      temp_v3 = temp_v0 + temp_v1 * 0xd0;
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_150[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0xd88);
        temp_v5 = *(unsigned int *)(param_1 + 0xd90);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0044cfb8 = 0;
          FUN_002be624(temp_v9,&DAT_00404e04,temp_v3 + 0x2c);
          temp_v4 = FUN_00290d74(temp_v4,temp_v9);
          FUN_00296f4c(temp_v5,temp_v4);
          do {
            temp_v2 = FUN_0019e0c0(temp_v5);
          } while (temp_v2 != 2);
          if (DAT_0044cfb8 != 0) goto LAB_0022b450;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) {
          acStack_150[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_003bb5f4(param_1 + 0x9c,temp_v3);
        }
      }
LAB_0022b450:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  temp_v0 = DAT_00433158;
  FUN_00387f88(DAT_00433158,*(int *)(param_1 + 0xd64) + 1);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      temp_v3 = DAT_00433158;
      FUN_00389444(DAT_00433158,*(int *)(param_1 + 0xd64) + 1,temp_v1);
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_150[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0xd90);
        temp_v5 = *(unsigned int *)(param_1 + 0xd88);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0044cfb8 = 0;
          FUN_002be624(temp_v9,&DAT_00404e04,temp_v3 + 0x2c);
          temp_v5 = FUN_00290d74(temp_v5,temp_v9);
          FUN_00296f4c(temp_v4,temp_v5);
          do {
            temp_v2 = FUN_0019e0c0(temp_v4);
          } while (temp_v2 != 2);
          if (DAT_0044cfb8 != 0) goto LAB_0022b560;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) {
          acStack_150[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_003bb5f4(param_1 + 0x9c,temp_v3);
        }
      }
LAB_0022b560:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_003bb9d4(param_1 + 0x9c);
  temp_v1 = FUN_002872d4();
  temp_v0 = -1;
  if (temp_v1 != 0) {
    temp_v0 = (*(int *)((unsigned char *)&DAT_0049f91c + 0x300));
  }
  if (*(short *)(param_1 + 0x40) != 0) {
    temp_v0 = (int)*(short *)(param_1 + 0x40);
  }
  if (temp_v0 != -1) {
    FUN_0022b8d8(param_1 + 0x9c,temp_v0);
  }
  temp_v0 = FUN_0022b8c0(param_1 + 0x9c);
  temp_v1 = (int)*(short *)(temp_v0 + 0x24);
  temp_v0 = (int)*(short *)(temp_v0 + 0x22);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
  temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x68) = temp_v6 - 200.0f;
  *(float *)(param_1 + 0x6c) = temp_v7 - 120.0f;
  FUN_0022b83c(param_1,param_1 + 0x60);
  FUN_0022b83c(param_1,param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
  temp_v5 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x80) = temp_v4;
  *(unsigned int *)(param_1 + 0x84) = temp_v5;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 1;
  FUN_0022b778(param_1);
  FUN_0022b6c4(param_1 + 0x9c);
  return;
}

} /* extern "C" */
