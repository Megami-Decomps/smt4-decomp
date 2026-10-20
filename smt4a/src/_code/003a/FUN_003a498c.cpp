/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a498c` (_code @ 0x3a498c, 0x700 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0015f858(int, int);
int FUN_001654f8(...);
int FUN_00168594(...);
int FUN_00180118(...);
int FUN_0019a7f4(...);
int FUN_0019e52c(...);
int FUN_001a90f0(unsigned short *, unsigned char *);
int FUN_0023723c(...);
int FUN_002adba8(...);
int FUN_002e6dd0(...);
int FUN_00371c3c(...);
int FUN_0038b3f8(...);
int FUN_003a7a88(...);
int FUN_0050d740(unsigned short *, unsigned char *);
int rt_memcpy_w(unsigned short *, unsigned char *, int);

/* stack frame of param_3: 5 slot(s), 15 byte(s) */
typedef struct {
    unsigned char spA6; /* 0xa6: local_a6 */
    unsigned short spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_3_stack;

extern unsigned char LAB_003a4d30; /* 0x3a4d30 */
extern unsigned char LAB_003a4d44; /* 0x3a4d44 */
extern unsigned char LAB_003a4d4c; /* 0x3a4d4c */
extern unsigned char LAB_003a508c; /* 0x3a508c */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(void);
extern unsigned int FUN_0014bf3c(short, unsigned int);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001654f8. */
extern unsigned int FUN_0016780c(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00168594. */
/* Supplied declaration required: FUN_00180118. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a7f4. */
extern unsigned int FUN_0019acdc(short, unsigned int);
/* Supplied declaration required: FUN_0019e52c. */
/* Supplied declaration required: FUN_001a90f0. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002e6dd0. */
extern int FUN_0032ece8(unsigned char);
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_003a7a88. */
/* Supplied declaration required: FUN_0050d740. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003a498c(unsigned int *param_1,short *param_2,int param_3)

{
/* irregular: 19 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  float temp_v11;
  unsigned short temp_v12;
  unsigned char temp_v13;
  unsigned long long temp_v14;
  
  FUN_001654f8(param_2 + 7,&temp_v12,0);
  FUN_0023723c(param_1[1],3,0xffffffff,0,0,&temp_v12);
  temp_v2 = FUN_0032ece8(*(unsigned char *)((int)param_2 + 0x23));
  if ((*(unsigned char *)(param_2 + 0x10) & 2) != 0) {
    rt_memcpy_w(&temp_v12,&LAB_003a4d30,0x13);
  }
  else if (temp_v2 != 0) {
    FUN_001654f8(temp_v2,&temp_v12,0);
  }
  else {
    FUN_002e6dd0(&temp_v12,0x80);
  }
  FUN_0023723c(*param_1,2,0xffffffff,0,0,&temp_v12);
  if (param_3 != 0) {
    temp_v3 = FUN_0016780c(param_3,*(unsigned int *)(param_2 + 0x12),0);
    FUN_0023723c(param_1[0xd],2,0xffffffff,0,0,&LAB_003a4d44,temp_v3);
  }
  else {
    temp_v12 = 0x4081;
    temp_v13 = 0;
    FUN_0023723c(param_1[0xd],2,0xffffffff,0,0,&temp_v12);
  }
  if (*param_2 == 0) {
    *(unsigned short *)(param_1 + 9) = 0;
  }
  else {
    FUN_0015f858(*param_2,0);
    FUN_001654f8();
    FUN_0023723c(param_1[2],2,0xffffffff,0,0,&temp_v12);
    *(short *)(param_1 + 9) = *param_2;
  }
  if (param_2[1] == 0) {
    *(unsigned short *)((int)param_1 + 0x26) = 0;
  }
  else {
    FUN_0015f858(param_2[1],0);
    FUN_001654f8();
    FUN_0023723c(param_1[3],2,0xffffffff,0,0,&temp_v12);
    *(short *)((int)param_1 + 0x26) = param_2[1];
  }
  if (param_2[2] == 0) {
    *(unsigned short *)(param_1 + 10) = 0;
  }
  else {
    FUN_0015f858(param_2[2],0);
    FUN_001654f8();
    FUN_0023723c(param_1[4],2,0xffffffff,0,0,&temp_v12);
    *(short *)(param_1 + 10) = param_2[2];
  }
  if (param_2[3] == 0) {
    *(unsigned short *)((int)param_1 + 0x2a) = 0;
  }
  else {
    FUN_0015f858(param_2[3],0);
    FUN_001654f8();
    FUN_0023723c(param_1[5],2,0xffffffff,0,0,&temp_v12);
    *(short *)((int)param_1 + 0x2a) = param_2[3];
  }
  if (param_2[4] == 0) {
    *(unsigned short *)(param_1 + 0xb) = 0;
  }
  else {
    FUN_0015f858(param_2[4],0);
    FUN_001654f8();
    FUN_0023723c(param_1[6],2,0xffffffff,0,0,&temp_v12);
    *(short *)(param_1 + 0xb) = param_2[4];
  }
  if (param_2[5] == 0) {
    *(unsigned short *)((int)param_1 + 0x2e) = 0;
  }
  else {
    FUN_0015f858(param_2[5],0);
    FUN_001654f8();
    FUN_0023723c(param_1[7],2,0xffffffff,0,0,&temp_v12);
    *(short *)((int)param_1 + 0x2e) = param_2[5];
  }
  if (param_2[6] == 0) {
    *(unsigned short *)(param_1 + 0xc) = 0;
  }
  else {
    FUN_0015f858(param_2[6],0);
    FUN_001654f8();
    FUN_0023723c(param_1[8],2,0xffffffff,0,0,&temp_v12);
    *(short *)(param_1 + 0xc) = param_2[6];
  }
  if (param_2[0x1a] != 0) {
    FUN_00180118(param_2[0x30]);
    FUN_001654f8();
  }
  else {
    FUN_0050d740(&temp_v12,&LAB_003a4d4c);
  }
  FUN_0023723c(param_1[0xe],1,0xffffffff,0,0,&temp_v12);
  temp_v11 = 0.0f;
  temp_v14 = 0;
  FUN_00168594(&temp_v12,1);
  param_1[0xf] = (int)temp_v11;
  if (param_2[0x1a] != 0) {
    temp_v3 = FUN_0014bf3c(param_2[0x30],0);
    FUN_001654f8(temp_v3,&temp_v12,0);
  }
  else {
    FUN_001a90f0(&temp_v12,&LAB_003a508c);
  }
  FUN_0023723c(param_1[0x10],2,0xffffffff,0,0,&temp_v12);
  temp_v11 = (float)temp_v14;
  FUN_00168594(&temp_v12,2);
  temp_v2 = 0;
  param_1[0x11] = (int)temp_v11;
  temp_v6 = temp_v5;
  do {
    if (param_2[temp_v2 + 0x28] != 0) {
      temp_v6 = (unsigned int)(unsigned short)param_2[0x1a];
    }
    if (!(param_2[temp_v2 + 0x28] == 0 || temp_v6 == 0)) {
      temp_v3 = FUN_0014bd84();
      FUN_001654f8(temp_v3,&temp_v12,0);
      FUN_0023723c(param_1[temp_v2 + 0x14],1,0xffffffff,0,0,&temp_v12);
      temp_v11 = (float)temp_v14;
      FUN_00168594(&temp_v12,1);
      param_1[temp_v2 + 0x1c] = (int)temp_v11;
      temp_v6 = temp_v7;
    }
    else {
      FUN_00100388(&temp_v12,&LAB_003a4d4c);
      FUN_0023723c(param_1[temp_v2 + 0x14],2,0xffffffff,0,0,&temp_v12);
      temp_v11 = (float)temp_v14;
      FUN_00168594(&temp_v12,2);
      param_1[temp_v2 + 0x1c] = (int)temp_v11;
      temp_v6 = temp_v8;
    }
    temp_v11 = (float)temp_v14;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  temp_v9 = (unsigned int)*(short *)(param_1 + 0x24);
  temp_v6 = (unsigned int)(unsigned short)param_2[0x30];
  if (temp_v9 != temp_v6) {
    if (temp_v6 != 0) {
      if (param_2[0x1a] != 0) {
        if ((temp_v9 != 0) && (FUN_003a7a88(temp_v9,1), temp_v9 != 0)) {
          FUN_0038b3f8((int)*(short *)(param_1 + 0x24),1);
        }
        temp_v0 = param_2[0x30];
        *(short *)(param_1 + 0x24) = temp_v0;
        FUN_00371c3c((int)temp_v0,1);
      }
    }
    else {
      if ((temp_v9 != 0) && (FUN_003a7a88(temp_v9,1), temp_v9 != 0)) {
        FUN_0038b3f8((int)*(short *)(param_1 + 0x24),1);
      }
      *(unsigned short *)(param_1 + 0x24) = 0;
    }
  }
  else if (temp_v6 == 0) {
    if ((temp_v9 != 0) && (FUN_003a7a88(temp_v9,1), temp_v9 != 0)) {
      FUN_0038b3f8((int)*(short *)(param_1 + 0x24),1);
    }
    *(unsigned short *)(param_1 + 0x24) = 0;
  }
  if (param_2[0x1c] != 0) {
    temp_v3 = FUN_0019acdc(param_2[0x1c],0);
    temp_v1 = FUN_0036fcd0(temp_v3,0);
    FUN_0019e52c(temp_v1);
    FUN_00180118();
    FUN_001654f8();
    FUN_0023723c(param_1[0x12],2,0xffffffff,0,0,&temp_v12);
    FUN_00168594(&temp_v12,2);
    param_1[0x13] = (int)temp_v11;
  }
  else {
    FUN_002e6dd0(&temp_v12,0x80);
    FUN_0023723c(param_1[0x12],2,0xffffffff,0,0,&temp_v12);
    param_1[0x13] = 0;
  }
  temp_v2 = 0;
  do {
    temp_v3 = FUN_002adba8(temp_v2);
    temp_v4 = FUN_0018206c(0x2e,temp_v3);
    temp_v10 = temp_v2;
    if (temp_v4 != 0) break;
    temp_v2 = temp_v2 + 1;
    temp_v10 = 0;
  } while (temp_v2 < 9);
  temp_v3 = FUN_002adba8((char)param_2[0x11]);
  temp_v2 = FUN_0018206c(0x2e,temp_v3);
  if (temp_v2 == 0) {
    if (param_1 != (unsigned int *)0x0) {
      temp_v3 = FUN_002adba8(temp_v10);
      temp_v2 = FUN_0018206c(0x2e,temp_v3);
      if ((temp_v2 != 0) && (param_1[temp_v10 + 0x25] != 2)) {
        temp_v3 = FUN_002adba8(temp_v10);
        FUN_0019a7f4(0x2e,temp_v3);
        param_1[temp_v10 + 0x25] = 0;
      }
    }
    temp_v6 = (unsigned int)*(unsigned char *)(param_2 + 0x11);
    if (param_1 != (unsigned int *)0x0) {
      temp_v3 = FUN_002adba8(temp_v6);
      temp_v2 = FUN_0018206c(0x2e,temp_v3);
      if ((temp_v2 == 0) && (param_1[temp_v6 + 0x25] != 3 && param_1[temp_v6 + 0x25] != 2)) {
        param_1[temp_v6 + 0x25] = 1;
      }
    }
  }
  return;
}

} /* extern "C" */
