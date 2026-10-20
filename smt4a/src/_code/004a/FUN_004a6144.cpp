/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a6144` (_code @ 0x4a6144, 0x4bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162758(...);
int FUN_001677c0(void);
int FUN_00180118(void);
int FUN_0018349c(...);
int FUN_0019cac4(void);
int FUN_004932ec(...);
int FUN_00493408(...);
int FUN_004934ac(int, int, int, int, int);
int FUN_0049368c(...);
int FUN_004cfb64(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

extern unsigned char LAB_004a657c; /* 0x4a657c */
extern unsigned char LAB_004a6584; /* 0x4a6584 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bf3c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00162758. */
extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_004932ec. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004934ac. */
/* Supplied declaration required: FUN_0049368c. */
extern int FUN_004cfb24(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004cfb64. */


void FUN_004a6144(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  unsigned short temp_v12;
  unsigned int temp_v13;
  unsigned int in_fpscr;
  unsigned char temp_v14 [32];
  int temp_v15;
  
  temp_v9 = *(int *)(param_1 + 0x850);
  if (param_3 != 0) {
    temp_v9 = temp_v9 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v2 = FUN_0018349c(param_1 + 200,param_2 + 0x102f);
  }
  else {
    temp_v2 = FUN_0018349c(param_1 + 200,param_2 + 0x1042);
  }
  temp_v10 = (int)*(short *)(temp_v2 + 8);
  temp_v2 = (int)*(short *)(temp_v2 + 10);
  if (param_3 != 0) {
    FUN_001677c0();
    FUN_004934ac(param_1 + 200,0x103a,temp_v10,temp_v2,temp_v9);
    FUN_004934ac(param_1 + 200,0x103b,temp_v10,temp_v2,temp_v9);
    FUN_004934ac(param_1 + 200,0x103c,temp_v10,temp_v2,temp_v9);
    FUN_001677c0();
    FUN_0049368c(param_1 + 200,0x103d,temp_v10,temp_v2,temp_v9,1);
    FUN_0049368c(param_1 + 200,0x103e,temp_v10,temp_v2,temp_v9,1);
    temp_v3 = FUN_0018349c(param_1 + 200,0x1041);
    FUN_004cfb64(*(short *)(temp_v3 + 8) + temp_v10,*(short *)(temp_v3 + 10) + temp_v2,
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    temp_v3 = FUN_0018349c(param_1 + 200,0x1040);
    temp_v4 = param_1 + 0x2a0;
    temp_v5 = FUN_001654d8();
    temp_v12 = *(unsigned short *)(temp_v3 + 4);
    temp_v3 = FUN_001654e4(temp_v4);
    FUN_0049368c(param_1 + 200,0x1040,(temp_v5 + temp_v10) - (temp_v12 & 0xffff7fff),temp_v3 + temp_v2,temp_v9,
                 1);
    temp_v3 = DAT_0059dbb4;
    piVar12 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v4 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 0;
    if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v4 != 0) {
      (**(romwright_code **)(temp_v3 + 0x1334))();
      *(unsigned char *)(temp_v3 + 0x1330) = 0;
    }
  }
  if (param_4 != 0) {
    if (param_3 != 0) {
      temp_v3 = FUN_0018349c(param_1 + 200,0x1068);
    }
    else {
      temp_v3 = FUN_0018349c(param_1 + 200,0x1058);
    }
    FUN_004932ec(param_1 + 200,(int)(short)param_4,*(short *)(temp_v3 + 8) + temp_v10,
                 *(short *)(temp_v3 + 10) + temp_v2,temp_v9);
    if (param_3 == 0) {
      temp_v13 = 2;
    }
    else {
      temp_v13 = 3;
    }
    temp_v6 = FUN_0014bf3c(param_4 & 0xffff,0);
    temp_v3 = FUN_004cfb24(temp_v6,2);
    if (param_3 == 0) {
      temp_v8 = 0x105b;
      temp_v11 = 0xff;
    }
    else {
      temp_v8 = 0x106b;
      temp_v11 = 0xffffffff;
    }
    temp_v4 = FUN_0018349c(param_1 + 200,temp_v8);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((temp_v10 + (int)**(short **)(temp_v4 + 0xc) / 2 + (int)*(short *)(temp_v4 + 8)) -
                        temp_v3 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162758(param_1 + 200,temp_v13,temp_v11,temp_v6,temp_v6,temp_v3);
    temp_v7 = param_4;
    FUN_00180118();
    if (param_3 == 0) {
      temp_v6 = 0x105c;
      temp_v8 = 0xff;
    }
    else {
      temp_v6 = 0x106c;
      temp_v8 = 0xffffffff;
    }
    temp_v4 = FUN_0018349c(param_1 + 200,temp_v6);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162758(param_1 + 200,temp_v13,temp_v8,temp_v7,temp_v7,temp_v3);
    temp_v7 = param_4;
    temp_v12 = 0;
    FUN_0019cac4();
    if (temp_v7 != 0) {
      temp_v12 = *(unsigned short *)(temp_v7 + 2) & 0x7fff;
    }
    if (param_3 != 0) {
      temp_v3 = FUN_0018349c(param_1 + 200,0x106a);
    }
    else {
      temp_v3 = FUN_0018349c(param_1 + 200,0x105a);
    }
    temp_v0 = *(short *)(temp_v3 + 8);
    temp_v13 = 0xffffffff;
    temp_v15 = *(short *)(temp_v3 + 10) + temp_v2;
    FUN_00100388(temp_v14,&LAB_004a657c,temp_v12);
    FUN_00493408(param_1 + 200,0,temp_v0 + temp_v10,temp_v15,0,7,0xffffffff,temp_v9,temp_v14);
    param_4 = param_4 & 0xffff;
    temp_v6 = 0;
    FUN_0019cac4();
    if (param_4 != 0) {
      temp_v6 = *(unsigned int *)(param_4 + 0x7c);
    }
    if (param_3 != 0) {
      temp_v3 = FUN_0018349c(param_1 + 200,0x1074);
    }
    else {
      temp_v3 = FUN_0018349c(param_1 + 200,0x1064);
      temp_v13 = 0x323232ff;
    }
    temp_v0 = *(short *)(temp_v3 + 8);
    temp_v1 = *(short *)(temp_v3 + 10);
    FUN_00100388(temp_v14,&LAB_004a6584,temp_v6);
    FUN_00493408(param_1 + 200,0,temp_v10 + temp_v0,temp_v1 + temp_v2,0,7,temp_v13,temp_v9,temp_v14);
  }
  return;
}

} /* extern "C" */
