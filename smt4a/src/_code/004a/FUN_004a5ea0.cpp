/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a5ea0` (_code @ 0x4a5ea0, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0018349c(...);
int dataTable00FindById(void);
int FUN_00493408(...);
int FUN_004a7814(...);
int FUN_004a7a50(int, int, unsigned int, int, int, int);
int FUN_004a7cb0(int, unsigned int, int, int, int);
int FUN_004a7dc8(int, int, int, int);
int FUN_004a7fb8(int, unsigned int, int, int, int, int);
int VectorFloatToUnsigned(double, int);

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

extern unsigned char LAB_004a612c; /* 0x4a612c */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004a7814. */
/* Supplied declaration required: FUN_004a7a50. */
/* Supplied declaration required: FUN_004a7cb0. */
/* Supplied declaration required: FUN_004a7dc8. */
/* Supplied declaration required: FUN_004a7fb8. */


void FUN_004a5ea0(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 11 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short temp_v7;
  unsigned int temp_v8;
  float in_s0;
  unsigned int temp_v9;
  unsigned char temp_v10 [60];
  int iStack_34;
  int temp_v11;
  int iStack_2c;
  unsigned int uStack_28;
  
  temp_v6 = *(int *)(param_1 + 0x850);
  if (param_3 != 0) {
    temp_v6 = temp_v6 + 1;
  }
  temp_v9 = VectorFloatToUnsigned(in_s0 * 255.0f,3);
  iStack_34 = param_1;
  temp_v11 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (param_3 == 0) {
    temp_v4 = FUN_0018349c(param_1 + 200,param_2 + 0x40e);
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 200,param_2 + 0x42f);
  }
  temp_v0 = *(short *)(temp_v4 + 8);
  temp_v1 = *(short *)(temp_v4 + 10);
  if (param_3 != 0) {
    FUN_004a7dc8(param_1,temp_v11,temp_v6,(int)*(char *)(param_1 + 0x829));
  }
  FUN_004a7a50(param_1,1,param_4,temp_v11,param_3,temp_v6);
  FUN_004a7cb0(param_1,param_4,temp_v11,param_3,temp_v6);
  FUN_004a7fb8(param_1,param_4,temp_v11,param_3,(int)*(char *)(param_1 + 0x829),temp_v6);
  temp_v5 = param_4 & 0xffff;
  temp_v7 = 0;
  dataTable00FindById();
  if (temp_v5 != 0) {
    temp_v7 = *(unsigned short *)(temp_v5 + 2) & 0x7fff;
  }
  FUN_004a7814(param_1,temp_v7,temp_v11,param_3,temp_v6,0xffffffff);
  temp_v5 = param_4 & 0xffff;
  temp_v8 = 0;
  dataTable00FindById();
  if (temp_v5 != 0) {
    temp_v8 = *(unsigned int *)(temp_v5 + 4);
  }
  if (param_3 != 0) {
    temp_v4 = FUN_0018349c(param_1 + 200,0x49d);
    temp_v5 = 0xfbeb39ff;
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 200,0x48f);
    temp_v5 = 0xffc90fff;
  }
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v3 = *(short *)(temp_v4 + 10);
  textFormatBuffer(temp_v10,&LAB_004a612c,temp_v8);
  FUN_00493408(param_1 + 200,0,(int)temp_v2 + (int)temp_v0,(int)temp_v3 + (int)temp_v1,0,7,
               temp_v5 | (temp_v9 & 0xff),temp_v6,temp_v10);
  param_4 = param_4 & 0xffff;
  temp_v8 = 0;
  dataTable00FindById();
  if (param_4 != 0) {
    temp_v8 = *(unsigned int *)(param_4 + 8);
  }
  if (param_3 != 0) {
    temp_v4 = FUN_0018349c(param_1 + 200,0x4a1);
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 200,0x493);
  }
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v3 = *(short *)(temp_v4 + 10);
  textFormatBuffer(temp_v10,&LAB_004a612c,temp_v8);
  FUN_00493408(param_1 + 200,0,(int)temp_v2 + (int)temp_v0,(int)temp_v3 + (int)temp_v1,0,7,0x4abae1ff,temp_v6,
               temp_v10);
  return;
}

} /* extern "C" */
