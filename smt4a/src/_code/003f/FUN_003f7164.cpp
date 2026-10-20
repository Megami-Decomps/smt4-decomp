/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7164` (_code @ 0x3f7164, 0x334 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_001677c0(void);
int FUN_00169a1c(int, int, int, int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00184310(void);
int FUN_003f533c(...);
int FUN_003f74a8(...);
int VectorSignedToFloat(...);

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_7_stack;

extern unsigned char LAB_003f749c; /* 0x3f749c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019e52c(void);
/* Supplied declaration required: FUN_003f533c. */
/* Supplied declaration required: FUN_003f74a8. */


void FUN_003f7164(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 int param_6,int param_7)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned char temp_v11 [92];
  unsigned int temp_v12;
  int iStack_30;
  int iStack_2c;
  unsigned int temp_v13;
  
  temp_v12 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v13 = param_4;
  temp_v5 = FUN_001834a4(0x31,param_3 + 0x88);
  temp_v9 = *(short *)(temp_v5 + 8) + param_5;
  temp_v8 = *(short *)(temp_v5 + 10) + param_6;
  FUN_001677c0();
  FUN_001835b4(2,0x31,0x7b,temp_v9,temp_v8,param_7);
  FUN_001835b4(2,0x31,0x7c,temp_v9,temp_v8,param_7);
  temp_v8 = FUN_001834a4(0x31,param_3 + 0x91);
  FUN_001835b4(2,0x31,0x90,*(short *)(temp_v8 + 8) + param_5,*(short *)(temp_v8 + 10) + param_6,param_7)
  ;
  temp_v8 = FUN_001834a4(0x31,0x7d);
  temp_v9 = (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v5 + 10) + param_6;
  temp_v8 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v5 + 8) + param_5;
  if (*(unsigned short *)(param_2 + 2) >> 8 != 10) {
    temp_v4 = *(unsigned short *)(param_2 + 2) >> 8;
    switch(temp_v4) {
    case 0:
      temp_v7 = 0xae;
      break;
    case 1:
      temp_v7 = 0xb2;
      break;
    case 2:
      temp_v7 = 0xb0;
      break;
    case 3:
      temp_v7 = 0xb1;
      break;
    case 4:
      temp_v7 = 0xb3;
      break;
    case 5:
      temp_v7 = 5;
      break;
    case 6:
      temp_v7 = 0xba;
      break;
    case 7:
      temp_v7 = 0xb9;
      break;
    case 8:
      temp_v7 = 0xaf;
      break;
    case 9:
      temp_v7 = 0xbb;
      break;
    default:
      temp_v7 = -1;
    }
    if (temp_v7 < 0) {
      temp_v7 = 0;
    }
    else if (temp_v4 == 9) {
      temp_v7 = 0x29d;
    }
    else {
      temp_v7 = FUN_0019e52c();
    }
    FUN_00184310();
    temp_v0 = 0;
    if (temp_v7 != 0) {
      temp_v0 = *(short *)(temp_v7 + 0x9c);
    }
    if (temp_v7 != 0 && temp_v0 != 0) {
      FUN_00169a1c(temp_v0,temp_v8,temp_v9,param_7 + 5);
    }
    else {
      FUN_001835b4(2,0x31,4,temp_v8,temp_v9,param_7 + 5);
    }
  }
  else {
    FUN_001835b4(2,0x31,4,temp_v8,temp_v9,param_7 + 5);
  }
  temp_v8 = FUN_001834a4(0x31,0x7e);
  temp_v0 = *(short *)(temp_v8 + 8);
  temp_v1 = *(short *)(temp_v5 + 8);
  temp_v2 = *(short *)(temp_v8 + 10);
  temp_v3 = *(short *)(temp_v5 + 10);
  temp_v10 = 0xffffffff;
  temp_v6 = temp_v12;
  FUN_003f74a8(temp_v12,param_2,(int)temp_v1,(int)temp_v2);
  FUN_00100388(temp_v11,&LAB_003f749c,temp_v6);
  VectorSignedToFloat(0xfb - param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)temp_v2 + (int)temp_v3 + param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)temp_v0 + (int)temp_v1 + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v10,temp_v11);
  temp_v8 = FUN_001834a4(0x31,0x83);
  VectorSignedToFloat(0xfb - param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v5 + 8) + param_5;
  VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v5 + 10) + param_6,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xff,param_2 + 4,temp_v9);
  FUN_003f533c(temp_v12,*(short *)(temp_v5 + 8) + param_5,*(short *)(temp_v5 + 10) + param_6,param_7 + 5
               ,temp_v13,0x84,0x85,0x86,0xff,0);
  return;
}

} /* extern "C" */
