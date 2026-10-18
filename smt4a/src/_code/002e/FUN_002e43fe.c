/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e43fe` (_code @ 0x2e43fe, 0x19a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned long long FUN_001bcd54(unsigned int, int, unsigned int, unsigned int *);
extern unsigned int FUN_002e418c(unsigned int, unsigned int, int *);
/* Supplied declaration required: FUN_002e4194. */
/* Supplied declaration required: FUN_002e4268. */
/* Supplied declaration required: FUN_002e4298. */
extern long long ll_udiv10(void);


void FUN_002e43fe(unsigned int *param_1,char *param_2,int *param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned long long temp_v10;
  long long temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int *temp_v22;
  char *pcStack_20;
  int *piStack_1c;
  unsigned int uStack_18;
  
  temp_v18 = *param_3;
  temp_v19 = param_3[1];
  temp_v9 = temp_v19 & 0x7fffffff;
  temp_v8 = (temp_v19 & 0x7fffffff) >> 0x14;
  if (temp_v8 == 0) {
    temp_v8 = 0xffffffff;
  }
  temp_v22 = param_1;
  pcStack_20 = param_2;
  piStack_1c = param_3;
  uStack_18 = param_4;
  temp_v20 = FUN_002e418c(0,0,param_3 + 2);
  temp_v20 = temp_v20 & 0xc00000;
  if ((int)temp_v19 < 0) {
    temp_v20 = (temp_v20 * 5 >> 1) & 0xc00000;
  }
  temp_v20 = temp_v20 >> 0x16;
  if (temp_v20 >= 2) {
    temp_v20 = 0xffffffff;
  }
  if (temp_v9 == 0 && temp_v18 == 0) {
    if (param_5 != 1) {
      for (temp_v6 = 0; temp_v6 < (int)param_4; temp_v6 = temp_v6 + 1) {
        param_2[temp_v6] = '0';
      }
      temp_v8 = 0;
      temp_v9 = param_4;
    }
    else {
      temp_v9 = 0;
      temp_v8 = ~param_4;
    }
    param_2[temp_v9] = '\0';
    temp_v22[2] = param_5;
    *temp_v22 = temp_v8;
    temp_v22[1] = temp_v9;
    return;
  }
  temp_v9 = (int)((temp_v8 - 0x3ff) * 0x4d10) >> 0x10;
  do {
    if (param_5 != 0) {
      temp_v6 = -param_4;
    }
    else {
      temp_v6 = (temp_v9 - param_4) + 1;
    }
    temp_v8 = temp_v20;
    if (0 < temp_v6) {
      temp_v8 = -temp_v20;
    }
    temp_v2 = temp_v6;
    if (temp_v6 < 0) {
      temp_v2 = -temp_v6;
    }
    FUN_002e4194(&temp_v21,temp_v2,temp_v8);
    temp_v15 = temp_v21;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    temp_v10 = FUN_001bcd54(temp_v19,temp_v18,uStack_2c,&temp_v16);
    temp_v13 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
    temp_v12 = (int)temp_v10 - 0x201f;
    temp_v8 = temp_v20;
    if (temp_v6 >= 1) {
      temp_v15 = temp_v15 + 0x201f;
      puVar3 = &temp_v12;
      FUN_002e4268(&temp_v12,&temp_v15);
      temp_v13 = temp_v3;
    }
    else {
      temp_v15 = temp_v15 - 0x201f;
      puVar3 = &temp_v12;
      FUN_002e4298(&temp_v12,&temp_v15);
      temp_v13 = temp_v4;
    }
    temp_v7 = temp_v8;
    temp_v5 = temp_v13;
    if (((unsigned int)puVar3 & 0xffff) != 0) {
      temp_v7 = 0xffffffff;
      temp_v5 = 0x7fffffff;
    }
    temp_v11 = romwright_piece_4_4(temp_v5,temp_v7);
    temp_v14 = temp_v8;
    if (param_5 != 0) {
      temp_v12 = 0;
      for (temp_v8 = 0;
          (temp_v7 = (unsigned int)temp_v11 | (unsigned int)((unsigned long long)temp_v11 >> 0x20), temp_v7 != 0 &&
          ((int)temp_v8 < 0x11)); temp_v8 = temp_v8 + 1) {
        temp_v11 = ll_udiv10();
        param_2[temp_v8] = (char)temp_v7 + '0';
      }
      if (temp_v11 != 0) {
        if (temp_v12 != 0) goto LAB_002e457a;
        param_4 = 0x11;
        param_5 = 0;
        continue;
      }
      temp_v9 = temp_v8;
      for (temp_v6 = 0; temp_v9 = temp_v9 - 1, temp_v6 < (int)temp_v9; temp_v6 = temp_v6 + 1) {
        temp_v0 = param_2[temp_v6];
        param_2[temp_v6] = param_2[temp_v9];
        param_2[temp_v9] = temp_v0;
      }
      temp_v16 = (temp_v8 - param_4) - 1;
      temp_v17 = temp_v8;
LAB_002e457a:
      param_2[temp_v17] = '\0';
      temp_v22[1] = temp_v17;
      *temp_v22 = temp_v16;
      temp_v22[2] = param_5;
      return;
    }
    temp_v6 = 0;
    temp_v12 = (unsigned int)puVar3;
    temp_v8 = param_4;
    while (temp_v8 = temp_v8 - 1, -1 < (int)temp_v8) {
      temp_v11 = ll_udiv10();
      temp_v6 = temp_v6 + 0x30;
      param_2[temp_v8] = (char)temp_v6;
    }
    temp_v1 = 1;
    if (temp_v11 != 0) {
      temp_v1 = 0;
      temp_v9 = temp_v9 + 1;
    }
    else if (*param_2 == '0') {
      temp_v1 = 0;
      temp_v9 = temp_v9 - 1;
    }
    temp_v16 = temp_v9;
    temp_v17 = param_4;
    if (temp_v1) goto LAB_002e457a;
  } while( 1 );
}
