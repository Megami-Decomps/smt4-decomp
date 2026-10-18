/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022f364` (_code @ 0x22f364, 0x648 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

extern unsigned char LAB_0022f9b8; /* 0x22f9b8 */
extern unsigned char LAB_0022f9c0; /* 0x22f9c0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00230c80. */
extern int FUN_00230d24(int);
extern int FUN_00230db0(unsigned short, unsigned int);
extern unsigned int FUN_00230e14(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00230e54. */
/* Supplied declaration required: FUN_00230ec0. */
/* Supplied declaration required: FUN_00230f18. */
/* Supplied declaration required: FUN_00230f98. */
/* Supplied declaration required: FUN_002313ec. */
/* Supplied declaration required: FUN_00231d60. */
extern unsigned int FUN_002466dc(unsigned short *);
/* Supplied declaration required: FUN_0028fde0. */
/* Supplied declaration required: FUN_002be744. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(void);
/* Supplied declaration required: FUN_002bf6c8. */
/* Supplied declaration required: FUN_002bf710. */


void FUN_0022f364(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar13;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  unsigned char temp_v14 [32];
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v0 = *param_4;
  temp_v3 = (unsigned int)temp_v0;
  if (temp_v3 == 0) {
    return;
  }
  temp_v10 = *(int *)(param_1 + 0x37c);
  if (param_3 != 0) {
    temp_v10 = temp_v10 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v4 = FUN_002bf6c8(param_1 + 0x380,param_2 + 0x27);
  }
  else {
    temp_v4 = FUN_002bf6c8(param_1 + 0x380,param_2 + 0x4f);
  }
  temp_v11 = (int)*(short *)(temp_v4 + 8);
  temp_v4 = (int)*(short *)(temp_v4 + 10);
  if (param_3 != 0) {
    FUN_002bf710();
    FUN_00230f18(param_1 + 0x380,0x47,temp_v11,temp_v4,temp_v10);
    FUN_00230f18(param_1 + 0x380,0x48,temp_v11,temp_v4,temp_v10);
    FUN_00230f18(param_1 + 0x380,0x49,temp_v11,temp_v4,temp_v10);
    FUN_002bf710();
    FUN_00231d60(param_1 + 0x380,0x4a,temp_v11,temp_v4,temp_v10,1);
    if (*(char *)(param_1 + 0x839) != '\0') {
      FUN_00231d60(param_1 + 0x380,0x4c,temp_v11,temp_v4,temp_v10,1);
    }
    else {
      FUN_00231d60(param_1 + 0x380,0x4b,temp_v11,temp_v4,temp_v10,1);
    }
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0x4e);
    FUN_002313ec(*(short *)(temp_v5 + 8) + temp_v11,*(short *)(temp_v5 + 10) + temp_v4,
                 (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0x4d);
    temp_v6 = param_1 + 0x56c;
    temp_v7 = FUN_002bef7c();
    temp_v5 = (temp_v7 + temp_v11) - (*(unsigned short *)(temp_v5 + 4) & 0xffff7fff);
    temp_v6 = FUN_002bef70(temp_v6);
    FUN_00231d60(param_1 + 0x380,0x4d,temp_v5,temp_v6 + temp_v4,temp_v10,1);
    temp_v5 = DAT_0044ea00;
    piVar13 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v6 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 0;
    if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
      (**(romwright_code **)(temp_v5 + 0x1328))();
      *(unsigned char *)(temp_v5 + 0x1324) = 0;
    }
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xac);
  }
  else {
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0x99);
  }
  temp_v1 = *(short *)(temp_v5 + 8);
  temp_v5 = *(short *)(temp_v5 + 10) + temp_v4;
  if (param_3 != 0) {
    FUN_00231d60(param_1 + 0x380,0xaa,temp_v11,temp_v4,temp_v10,1);
  }
  FUN_00230ec0(param_1 + 0x380,(int)(short)temp_v0,temp_v1 + temp_v11,temp_v5,temp_v10,param_2 != 0);
  if (param_2 != 0) {
    if ((param_4[1] & 1) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xab);
      }
      else {
        temp_v5 = FUN_002bf6c8(param_1 + 0x380,0x98);
      }
      FUN_00230e54(param_1 + 0x380,5,*(short *)(temp_v5 + 8) + temp_v11,*(short *)(temp_v5 + 10) + temp_v4,
                   temp_v10);
    }
    if ((param_4[1] & 2) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xb2);
      }
      else {
        temp_v5 = FUN_002bf6c8(param_1 + 0x380,0x9f);
      }
      temp_v6 = *(short *)(temp_v5 + 8) + temp_v11;
      temp_v5 = *(short *)(temp_v5 + 10) + temp_v4;
      if (*(int *)(param_1 + 0x860) != 8) {
        FUN_00230e54(param_1 + 0x380,6,temp_v6,temp_v5,temp_v10);
      }
      else {
        FUN_00230e54(param_1 + 0x380,7,temp_v6,temp_v5,temp_v10);
      }
    }
  }
  if (param_3 == 0) {
    temp_v8 = 2;
  }
  else {
    temp_v8 = 3;
  }
  temp_v15 = FUN_00230e14(temp_v3,0);
  if (param_3 != 0) {
    temp_v12 = 0xffffffff;
    temp_v16 = 0xad;
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v9 = FUN_00230f98(param_4);
      temp_v5 = FUN_00230db0(*param_4,temp_v9);
      if (temp_v5 == 0) {
        temp_v12 = 0x787878ff;
      }
    }
    else {
      temp_v13 = temp_v3;
      temp_v5 = FUN_00230d24(param_1);
      if ((temp_v5 != 0) && (temp_v5 = FUN_0028fde0(temp_v13), 1 >= temp_v5)) {
        temp_v12 = 0x787878ff;
      }
    }
  }
  else {
    temp_v12 = 0xff;
    temp_v16 = 0x9a;
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v9 = FUN_00230f98(param_4);
      temp_v5 = FUN_00230db0(*param_4,temp_v9);
      if (temp_v5 == 0) {
        temp_v12 = 0x5a5a5aff;
      }
    }
    else {
      temp_v13 = temp_v3;
      temp_v5 = FUN_00230d24(param_1);
      if ((temp_v5 != 0) && (temp_v5 = FUN_0028fde0(temp_v13), 1 >= temp_v5)) {
        temp_v12 = 0x5a5a5aff;
      }
    }
  }
  temp_v5 = FUN_002bf6c8(param_1 + 0x380,temp_v16);
  VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v5 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be744(param_1 + 0x380,temp_v8,temp_v12,temp_v15);
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v8 = FUN_00230f98();
    }
    else {
      temp_v8 = FUN_002466dc(param_4);
    }
    if (param_3 != 0) {
      temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xba);
      temp_v12 = 0xffffffff;
    }
    else {
      temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xa7);
      temp_v12 = 0x5a5a5aff;
    }
    temp_v1 = *(short *)(temp_v5 + 8);
    temp_v2 = *(short *)(temp_v5 + 10);
    FUN_002be7fc(temp_v14,&LAB_0022f9b8,temp_v8);
    FUN_00230c80(param_1 + 0x380,0,temp_v1 + temp_v11,temp_v2 + temp_v4,0,7,temp_v12,temp_v10,temp_v14);
  }
  temp_v8 = FUN_0028fde0(temp_v3);
  if (param_3 != 0) {
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xbc);
    temp_v12 = 0xf49800ff;
  }
  else {
    temp_v5 = FUN_002bf6c8(param_1 + 0x380,0xa9);
    temp_v12 = 0x7a4c00ff;
  }
  temp_v1 = *(short *)(temp_v5 + 8);
  temp_v2 = *(short *)(temp_v5 + 10);
  FUN_002be7fc(temp_v14,&LAB_0022f9c0,temp_v8);
  FUN_00230c80(param_1 + 0x380,0,temp_v1 + temp_v11,temp_v2 + temp_v4,0,7,temp_v12,temp_v10,temp_v14);
  return;
}
