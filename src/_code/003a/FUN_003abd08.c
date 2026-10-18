/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abd08` (_code @ 0x3abd08, 0x274 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

extern unsigned char LAB_003abf9c; /* 0x3abf9c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022d994. */
/* Supplied declaration required: FUN_00230c80. */
/* Supplied declaration required: FUN_00231d4c. */
/* Supplied declaration required: FUN_00231d60. */
extern int FUN_00262edc(unsigned short);
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002be744. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf6c8. */


void FUN_003abd08(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float fStack_54;
  unsigned char temp_v12 [44];
  
  temp_v5 = param_1 + param_3 * 0x20;
  temp_v0 = (unsigned int)*(unsigned short *)(temp_v5 + 0x5ac);
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_4 != 0) {
    temp_v1 = FUN_002bf6c8(param_1 + 200,param_2 + 0x42f);
  }
  else {
    temp_v1 = FUN_002bf6c8(param_1 + 200,param_2 + 0x40e);
  }
  temp_v3 = (int)*(short *)(temp_v1 + 8);
  temp_v1 = (int)*(short *)(temp_v1 + 10);
  if (param_4 != 0) {
    FUN_0022d994(param_1,param_2,param_5,(int)*(char *)(param_1 + 0x56d));
    temp_v9 = 3;
    temp_v4 = 0xffffffff;
    temp_v10 = 0x4e0;
  }
  else {
    temp_v9 = 2;
    temp_v4 = 0xff;
    temp_v10 = 0x4ce;
  }
  temp_v2 = FUN_00262edc(*(unsigned short *)(param_1 + param_3 * 0x20 + 0x5ac));
  if (temp_v2 != 0) {
    temp_v4 = 0x5a5a5aff;
  }
  temp_v6 = *(unsigned int *)(temp_v5 + 0x5c8);
  temp_v2 = FUN_002bf6c8(param_1 + 200,temp_v10);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be744(param_1 + 200,temp_v9,temp_v4,temp_v6);
  if (param_4 == 0) {
    temp_v4 = 0x4cd;
  }
  else {
    temp_v4 = 0x476;
    FUN_00231d60(param_1 + 200,0x4df,temp_v3,temp_v1,param_5,1);
  }
  temp_v2 = FUN_002bf6c8(param_1 + 200,temp_v4);
  FUN_00231d4c(param_1 + 200,&temp_v11);
  temp_v7 = (float)VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (int)(temp_v7 + temp_v11);
  FUN_002890d0(temp_v0);
  FUN_002b6f74((int)(short)temp_v0,temp_v2,(int)(temp_v8 + fStack_54),param_5,0,0);
  FUN_002be7fc(temp_v12,&LAB_003abf9c,*(unsigned int *)(temp_v5 + 0x5b4));
  if (param_4 != 0) {
    temp_v5 = FUN_002bf6c8(param_1 + 200,0x4f0);
  }
  else {
    temp_v5 = FUN_002bf6c8(param_1 + 200,0x4de);
  }
  FUN_00230c80(param_1 + 200,0,*(short *)(temp_v5 + 8) + temp_v3,*(short *)(temp_v5 + 10) + temp_v1,0,7,
               0xffffffff,param_5,temp_v12);
  return;
}
