/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010acde` (_code @ 0x10acde, 0x126 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002eb310. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f1324. */
/* Supplied declaration required: FUN_002f3df8. */
extern int FUN_002f3e5a(int *, unsigned int *);
/* Supplied declaration required: FUN_002f3e6a. */
/* Supplied declaration required: FUN_002f3ecc. */
/* Supplied declaration required: FUN_002f3edc. */
/* Supplied declaration required: FUN_002f3f42. */
/* Supplied declaration required: FUN_002f3f72. */
/* Supplied declaration required: FUN_002f3ff0. */
extern int FUN_002f4002(int *, unsigned int *);


void FUN_0010acde(int param_1,int param_2,int param_3)

{
/* irregular: 12 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10 [3];
  unsigned char temp_v11 [12];
  int temp_v12;
  unsigned char temp_v13 [12];
  int temp_v14;
  unsigned char temp_v15 [4];
  int temp_v16;
  int temp_v17;
  unsigned char temp_v18 [8];
  int iStack_20;
  int temp_v19;
  int iStack_18;
  
  iStack_20 = param_1;
  temp_v19 = param_2;
  iStack_18 = param_3;
  temp_v1 = FUN_002ea714();
  FUN_002e6e34(temp_v11,temp_v1);
  FUN_002f3df8(temp_v10,param_1 + 4,temp_v19);
  temp_v12 = *(unsigned int *)(param_1 + 0x14);
  temp_v2 = FUN_002f3e5a(temp_v10,(unsigned int *)&temp_v12);
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(temp_v10[0] + 0x18);
    temp_v5 = *(int *)(temp_v2 + 0x148);
    if (temp_v5 != 0) {
      FUN_002f3e6a(&temp_v14,param_3,&temp_v5);
      temp_v16 = *(unsigned int *)(param_3 + 0x10);
      temp_v3 = FUN_002f3ecc(&temp_v14,&temp_v16);
      if (temp_v3 != 0) {
        temp_v3 = *(int *)(temp_v14 + 0x14) - 1;
        *(int *)(temp_v14 + 0x14) = temp_v3;
        if (temp_v3 == 0) {
          temp_v3 = FUN_002eb5f4();
          FUN_002e6e34(temp_v13,temp_v3 + 0x358);
          temp_v3 = FUN_002eb5f4();
          FUN_002eb310(temp_v3 + 0x34c,&temp_v5);
          FUN_002f3edc(&temp_v8,param_3,&temp_v5);
          temp_v7 = temp_v8;
          while (temp_v3 = FUN_002f3ecc(&temp_v7,&temp_v9), temp_v3 != 0) {
            FUN_002f3f42(&temp_v7);
          }
          temp_v6 = temp_v9;
          temp_v17 = temp_v8;
          FUN_002f3f72(temp_v18,param_3,&temp_v17,&temp_v6);
          FUN_002e6e5c(temp_v13);
        }
      }
    }
    *(unsigned char *)(temp_v2 + 0x131) = 1;
    FUN_002f1324(temp_v15,temp_v10,0);
    FUN_002f3ff0(param_1 + 4,temp_v15);
    if (*(short *)(temp_v19 + 4) == *(short *)(param_1 + 0x38)) {
      temp_v4 = *(unsigned int *)(param_1 + 0x14);
      temp_v3 = FUN_002f4002(temp_v10,(unsigned int *)&temp_v4);
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned short *)(param_1 + 0x28);
      }
      else {
        temp_v0 = *(unsigned short *)(temp_v10[0] + 0x14);
      }
      *(unsigned short *)(param_1 + 0x38) = temp_v0;
    }
    if ((*(unsigned short *)(temp_v2 + 0x3c) & 0xf) == 2) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - 1;
    }
    FUN_002e7232(temp_v2);
  }
  FUN_002e6e5c(temp_v11);
  return;
}
