/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b430` (_code @ 0x22b430, 0x3d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00404eb0; /* 0x404eb0 */
extern int DAT_00433158; /* 0x433158 */
extern int DAT_0044cfb8; /* 0x44cfb8 */
extern int DAT_0049fc1c; /* 0x49fc1c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022b858. */
/* Supplied declaration required: FUN_0022b90c. */
/* Supplied declaration required: FUN_0022b9d0. */
extern int FUN_0022ba54(int);
/* Supplied declaration required: FUN_0022ba6c. */
extern int FUN_0028753c(void);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_00388198. */
/* Supplied declaration required: FUN_00389654. */
/* Supplied declaration required: FUN_003bb808. */
/* Supplied declaration required: FUN_003bb814. */
/* Supplied declaration required: FUN_003bbbf4. */
extern int FUN_003bbc4c(unsigned char *, unsigned int);
extern int FUN_003bbc88(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003bbcd0. */
/* Supplied declaration required: FUN_003bbce8. */


void FUN_0022b430(int param_1,int param_2,int param_3)

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
  
  temp_v0 = FUN_003bbc4c(temp_v8,0);
  puVar2 = temp_v8;
  FUN_003bbcd0();
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
  FUN_003bb808(param_1 + 0x9c);
  if (param_3 != -1) {
    *(int *)(param_1 + 0xd64) = param_3;
  }
  else {
    *(int *)(param_1 + 0xd64) = (int)*(char *)(*(int *)(param_1 + 0xd5c) + 1);
  }
  temp_v0 = FUN_003bbc88(temp_v8,*(unsigned int *)(param_1 + 0xd64),0);
  puVar2 = temp_v8;
  FUN_003bbce8(puVar2,*(unsigned int *)(param_1 + 0xd64));
  FUN_002c4b30(acStack_150,0x100);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar2) {
    do {
      temp_v3 = temp_v0 + temp_v1 * 0xd0;
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_150[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0xd88);
        temp_v5 = *(unsigned int *)(param_1 + 0xd90);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0044cfb8 = 0;
          FUN_002be7fc(temp_v9,&DAT_00404eb0,temp_v3 + 0x2c);
          temp_v4 = FUN_00291018(temp_v4,temp_v9);
          FUN_002971e4(temp_v5,temp_v4);
          do {
            temp_v2 = FUN_0019dfbc(temp_v5);
          } while (temp_v2 != 2);
          if (DAT_0044cfb8 != 0) goto LAB_0022b5e4;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
          acStack_150[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_003bb814(param_1 + 0x9c,temp_v3);
        }
      }
LAB_0022b5e4:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  temp_v0 = DAT_00433158;
  FUN_00388198(DAT_00433158,*(int *)(param_1 + 0xd64) + 1);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      temp_v3 = DAT_00433158;
      FUN_00389654(DAT_00433158,*(int *)(param_1 + 0xd64) + 1,temp_v1);
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_150[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0xd90);
        temp_v5 = *(unsigned int *)(param_1 + 0xd88);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0044cfb8 = 0;
          FUN_002be7fc(temp_v9,&DAT_00404eb0,temp_v3 + 0x2c);
          temp_v5 = FUN_00291018(temp_v5,temp_v9);
          FUN_002971e4(temp_v4,temp_v5);
          do {
            temp_v2 = FUN_0019dfbc(temp_v4);
          } while (temp_v2 != 2);
          if (DAT_0044cfb8 != 0) goto LAB_0022b6f4;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
          acStack_150[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_003bb814(param_1 + 0x9c,temp_v3);
        }
      }
LAB_0022b6f4:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_003bbbf4(param_1 + 0x9c);
  temp_v1 = FUN_0028753c();
  temp_v0 = -1;
  if (temp_v1 != 0) {
    temp_v0 = DAT_0049fc1c;
  }
  if (*(short *)(param_1 + 0x40) != 0) {
    temp_v0 = (int)*(short *)(param_1 + 0x40);
  }
  if (temp_v0 != -1) {
    FUN_0022ba6c(param_1 + 0x9c,temp_v0);
  }
  temp_v0 = FUN_0022ba54(param_1 + 0x9c);
  temp_v1 = (int)*(short *)(temp_v0 + 0x24);
  temp_v0 = (int)*(short *)(temp_v0 + 0x22);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
  temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x68) = temp_v6 - 200.0f;
  *(float *)(param_1 + 0x6c) = temp_v7 - 120.0f;
  FUN_0022b9d0(param_1,param_1 + 0x60);
  FUN_0022b9d0(param_1,param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
  temp_v5 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x80) = temp_v4;
  *(unsigned int *)(param_1 + 0x84) = temp_v5;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 1;
  FUN_0022b90c(param_1);
  FUN_0022b858(param_1 + 0x9c);
  return;
}
