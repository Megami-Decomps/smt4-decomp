/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6202` (_code @ 0x2c6202, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100a70. */
extern long long FUN_001527b4(void);
extern unsigned int FUN_00155a8c(unsigned int, unsigned int, int *);
/* Supplied declaration required: FUN_00155afc. */
/* Supplied declaration required: FUN_002c6614. */
extern unsigned long long func_0x0015284c(unsigned int, int, unsigned int, unsigned int *);


void FUN_002c6202(unsigned int *param_1,char *param_2,int *param_3,unsigned int param_4,unsigned int param_5)

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
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int *temp_v15;
  char *pcStack_20;
  int *piStack_1c;
  unsigned int uStack_18;
  
  temp_v12 = *param_3;
  temp_v13 = param_3[1];
  temp_v9 = temp_v13 & 0x7fffffff;
  temp_v8 = (temp_v13 & 0x7fffffff) >> 0x14;
  if (temp_v8 == 0) {
    temp_v8 = 0xffffffff;
  }
  temp_v15 = param_1;
  pcStack_20 = param_2;
  piStack_1c = param_3;
  uStack_18 = param_4;
  temp_v14 = FUN_00155a8c(0,0,param_3 + 2);
  temp_v14 = temp_v14 & 0xc00000;
  if ((int)temp_v13 < 0) {
    temp_v14 = (temp_v14 * 5 >> 1) & 0xc00000;
  }
  temp_v14 = temp_v14 >> 0x16;
  if (temp_v14 >= 2) {
    temp_v14 = 0xffffffff;
  }
  if (temp_v9 == 0 && temp_v12 == 0) {
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
    temp_v15[2] = param_5;
    *temp_v15 = temp_v8;
    temp_v15[1] = temp_v9;
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
    temp_v8 = temp_v14;
    if (0 < temp_v6) {
      temp_v8 = -temp_v14;
    }
    temp_v2 = temp_v6;
    if (temp_v6 < 0) {
      temp_v2 = -temp_v6;
    }
    FUN_00100a70(&iStack_34,temp_v2,temp_v8);
    iStack_54 = iStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    temp_v10 = func_0x0015284c(temp_v13,temp_v12,uStack_2c,&uStack_48);
    uStack_5c = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
    uStack_60 = (int)temp_v10 - 0x201f;
    temp_v8 = temp_v14;
    if (temp_v6 >= 1) {
      iStack_54 = iStack_54 + 0x201f;
      puVar3 = &uStack_60;
      FUN_00155afc(&uStack_60,&iStack_54);
      uStack_5c = temp_v3;
    }
    else {
      iStack_54 = iStack_54 - 0x201f;
      puVar3 = &uStack_60;
      FUN_002c6614(&uStack_60,&iStack_54);
      uStack_5c = temp_v4;
    }
    temp_v7 = temp_v8;
    temp_v5 = uStack_5c;
    if (((unsigned int)puVar3 & 0xffff) != 0) {
      temp_v7 = 0xffffffff;
      temp_v5 = 0x7fffffff;
    }
    temp_v11 = romwright_piece_4_4(temp_v5,temp_v7);
    uStack_58 = temp_v8;
    if (param_5 != 0) {
      uStack_60 = 0;
      for (temp_v8 = 0;
          (temp_v7 = (unsigned int)temp_v11 | (unsigned int)((unsigned long long)temp_v11 >> 0x20), temp_v7 != 0 &&
          ((int)temp_v8 < 0x11)); temp_v8 = temp_v8 + 1) {
        temp_v11 = FUN_001527b4();
        param_2[temp_v8] = (char)temp_v7 + '0';
      }
      if (temp_v11 != 0) {
        if (uStack_60 != 0) goto code_r0x002c637e;
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
      uStack_48 = (temp_v8 - param_4) - 1;
      uStack_44 = temp_v8;
code_r0x002c637e:
      param_2[uStack_44] = '\0';
      temp_v15[1] = uStack_44;
      *temp_v15 = uStack_48;
      temp_v15[2] = param_5;
      return;
    }
    temp_v6 = 0;
    uStack_60 = (unsigned int)puVar3;
    temp_v8 = param_4;
    while (temp_v8 = temp_v8 - 1, -1 < (int)temp_v8) {
      temp_v11 = FUN_001527b4();
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
    uStack_48 = temp_v9;
    uStack_44 = param_4;
    if (temp_v1) goto code_r0x002c637e;
  } while( 1 );
}
