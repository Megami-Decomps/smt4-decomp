/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ea70` (_code @ 0x22ea70, 0x720 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

extern unsigned char LAB_0022f1a0; /* 0x22f1a0 */
extern unsigned char LAB_0022f1a4; /* 0x22f1a4 */
extern unsigned char LAB_0022f1ac; /* 0x22f1ac */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00230aec. */
extern int FUN_00230c1c(unsigned short, unsigned int);
extern unsigned int FUN_00230c80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00230d2c. */
/* Supplied declaration required: FUN_00230d84. */
extern unsigned int FUN_00230e04(unsigned short *);
/* Supplied declaration required: FUN_00230ecc. */
/* Supplied declaration required: FUN_00231258. */
/* Supplied declaration required: FUN_00231bcc. */
extern unsigned int FUN_0028fb3c(unsigned int);
/* Supplied declaration required: FUN_002b63ac. */
/* Supplied declaration required: FUN_002be56c. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: FUN_002bf538. */


void FUN_0022ea70(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned short *puVar12;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int *piVar16;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned int in_fpscr;
  unsigned long long temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20 [32];
  int temp_v21;
  unsigned int temp_v22;
  
  temp_v22 = (unsigned int)*param_4;
  if (temp_v22 == 0) {
    return;
  }
  temp_v12 = *(int *)(param_1 + 0x37c);
  if (param_3 != 0) {
    temp_v12 = temp_v12 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x27);
  }
  else {
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x4f);
  }
  temp_v13 = (int)*(short *)(temp_v4 + 8);
  temp_v4 = (int)*(short *)(temp_v4 + 10);
  if (param_3 != 0) {
    FUN_002bf538();
    FUN_00230d84(param_1 + 0x380,0x47,temp_v13,temp_v4,temp_v12);
    FUN_00230d84(param_1 + 0x380,0x48,temp_v13,temp_v4,temp_v12);
    FUN_00230d84(param_1 + 0x380,0x49,temp_v13,temp_v4,temp_v12);
    FUN_002bf538();
    FUN_00231bcc(param_1 + 0x380,0x4a,temp_v13,temp_v4,temp_v12,1);
    if (*(char *)(param_1 + 0x839) != '\0') {
      FUN_00231bcc(param_1 + 0x380,0x4c,temp_v13,temp_v4,temp_v12,1);
    }
    else {
      FUN_00231bcc(param_1 + 0x380,0x4b,temp_v13,temp_v4,temp_v12,1);
    }
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x4e);
    FUN_00231258(*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v4,
                 (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x4d);
    temp_v6 = param_1 + 0x56c;
    temp_v7 = FUN_002beda4();
    temp_v5 = (temp_v7 + temp_v13) - (*(unsigned short *)(temp_v5 + 4) & 0xffff7fff);
    temp_v6 = FUN_002bed98(temp_v6);
    FUN_00231bcc(param_1 + 0x380,0x4d,temp_v5,temp_v6 + temp_v4,temp_v12,1);
    temp_v5 = DAT_0044ea00;
    piVar16 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v6 = piVar16[*piVar16 + 2];
    piVar16[*piVar16 + 2] = 0;
    if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
      (**(romwright_code **)(temp_v5 + 0x1328))();
      *(unsigned char *)(temp_v5 + 0x1324) = 0;
    }
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xac);
  }
  else {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x99);
  }
  temp_v0 = *(short *)(temp_v5 + 8);
  temp_v5 = *(short *)(temp_v5 + 10) + temp_v4;
  if (param_3 != 0) {
    FUN_00231bcc(param_1 + 0x380,0xaa,temp_v13,temp_v4,temp_v12,1);
  }
  FUN_00230d2c(param_1 + 0x380,(int)(short)temp_v22,temp_v0 + temp_v13,temp_v5,temp_v12,param_2 != 0);
  if (param_2 != 0) {
    if ((param_4[1] & 1) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xab);
      }
      else {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x98);
      }
      FUN_00230cc0(param_1 + 0x380,5,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v4,
                   temp_v12);
    }
    if ((param_4[1] & 2) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xb2);
      }
      else {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x9f);
      }
      FUN_00230cc0(param_1 + 0x380,6,*(short *)(temp_v5 + 8) + temp_v13,*(short *)(temp_v5 + 10) + temp_v4,
                   temp_v12);
    }
  }
  if (param_3 == 0) {
    temp_v8 = 2;
  }
  else {
    temp_v8 = 3;
  }
  temp_v9 = FUN_00230c80(temp_v22,0);
  if (param_3 != 0) {
    temp_v5 = 0xad;
    temp_v19 = 0xad;
    if (param_2 != 0) {
      temp_v5 = *(int *)(param_1 + 0x860);
    }
    temp_v14 = 0xffffffff;
    if (param_2 != 0 && temp_v5 != 8) {
      temp_v10 = FUN_00230e04(param_4);
      temp_v5 = FUN_00230c1c(*param_4,temp_v10);
      if (temp_v5 == 0) {
        temp_v14 = 0x787878ff;
      }
    }
  }
  else {
    temp_v5 = 0x9a;
    temp_v19 = 0x9a;
    if (param_2 != 0) {
      temp_v5 = *(int *)(param_1 + 0x860);
    }
    temp_v14 = 0xff;
    if (param_2 != 0 && temp_v5 != 8) {
      temp_v10 = FUN_00230e04(param_4);
      temp_v5 = FUN_00230c1c(*param_4,temp_v10);
      if (temp_v5 == 0) {
        temp_v14 = 0x5a5a5aff;
      }
    }
  }
  temp_v5 = FUN_002bf4f0(param_1 + 0x380,temp_v19);
  VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v5 + 8) + temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be56c(param_1 + 0x380,temp_v8,temp_v14,temp_v9);
  temp_v5 = FUN_00230ecc(temp_v22);
  temp_v3 = 0;
  switch(*(unsigned int *)(param_1 + 0x860)) {
  case 0:
    puVar12 = (unsigned short *)FUN_002b63ac(0);
    temp_v3 = *puVar12;
    break;
  case 1:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 2);
    break;
  case 2:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 4);
    break;
  case 3:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 6);
    break;
  case 4:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 8);
    break;
  case 5:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 10);
    break;
  case 6:
    temp_v6 = FUN_002b63ac(0);
    temp_v3 = *(unsigned short *)(temp_v6 + 0xc);
  }
  temp_v6 = FUN_00230ecc(temp_v3);
  if (param_3 != 0) {
    temp_v18 = FUN_002bf4f0(param_1 + 0x380,0xb1);
    temp_v11 = (int)temp_v18;
    temp_v16 = param_2 == 0;
    temp_v7 = 0;
    temp_v2 = (int)((unsigned long long)temp_v18 >> 0x20);
    if (!temp_v16) {
      temp_v7 = temp_v5 - temp_v6;
      temp_v2 = temp_v5;
    }
    temp_v17 = temp_v2 == temp_v6;
    temp_v15 = !temp_v16 && SBORROW4(temp_v2,temp_v6);
    if (temp_v16 || temp_v17) {
      temp_v6 = -1;
    }
    if ((!temp_v16 && !temp_v17) && temp_v7 < 0 == temp_v15) {
      temp_v6 = 0x72e027ff;
    }
    if (temp_v7 < 0 != temp_v15) {
      temp_v6 = -0x23f0eb01;
    }
  }
  else {
    temp_v18 = FUN_002bf4f0(param_1 + 0x380,0x9e);
    temp_v11 = (int)temp_v18;
    temp_v16 = param_2 == 0;
    temp_v7 = 0;
    temp_v2 = (int)((unsigned long long)temp_v18 >> 0x20);
    if (!temp_v16) {
      temp_v7 = temp_v5 - temp_v6;
      temp_v2 = temp_v5;
    }
    temp_v17 = temp_v2 == temp_v6;
    temp_v15 = !temp_v16 && SBORROW4(temp_v2,temp_v6);
    if (temp_v16 || temp_v17) {
      temp_v6 = 0xff;
    }
    if ((!temp_v16 && !temp_v17) && temp_v7 < 0 == temp_v15) {
      temp_v6 = 0x8400ff;
    }
    if (temp_v7 < 0 != temp_v15) {
      temp_v6 = -0x23f0eb01;
    }
  }
  temp_v0 = *(short *)(temp_v11 + 8);
  temp_v21 = *(short *)(temp_v11 + 10) + temp_v4;
  FUN_002be624(temp_v20,&LAB_0022f1a0,temp_v5);
  FUN_00230aec(param_1 + 0x380,0,temp_v0 + temp_v13,temp_v21,0,7,temp_v6,temp_v12,temp_v20);
  if (param_2 != 0) {
    temp_v8 = FUN_00230e04(param_4);
    if (param_3 != 0) {
      temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xba);
      temp_v9 = 0xffffffff;
    }
    else {
      temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xa7);
      temp_v9 = 0x5a5a5aff;
    }
    temp_v0 = *(short *)(temp_v5 + 8);
    temp_v1 = *(short *)(temp_v5 + 10);
    FUN_002be624(temp_v20,&LAB_0022f1a4,temp_v8);
    FUN_00230aec(param_1 + 0x380,0,temp_v0 + temp_v13,temp_v1 + temp_v4,0,7,temp_v9,temp_v12,temp_v20);
  }
  temp_v8 = FUN_0028fb3c(temp_v22);
  if (param_3 != 0) {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xbc);
    temp_v9 = 0xf49800ff;
  }
  else {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xa9);
    temp_v9 = 0x7a4c00ff;
  }
  temp_v0 = *(short *)(temp_v5 + 8);
  temp_v1 = *(short *)(temp_v5 + 10);
  FUN_002be624(temp_v20,&LAB_0022f1ac,temp_v8);
  FUN_00230aec(param_1 + 0x380,0,temp_v0 + temp_v13,temp_v1 + temp_v4,0,7,temp_v9,temp_v12,temp_v20);
  return;
}
