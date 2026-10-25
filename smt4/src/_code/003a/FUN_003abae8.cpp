/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abae8` (_code @ 0x3abae8, 0x274 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiDrawScrollingSelectionEntry(int, int, int, int);
int drawTextAtRelativePosition(...);
int pairCopy(int, float *);
int FUN_00231bcc(int, int, int, int, int, int);
int FUN_00288e68(...);
int FUN_002b6c34(...);
int FUN_002be56c(int, unsigned int, unsigned int, unsigned int);
int textFormatBuffer(...);
int FUN_002bf4f0(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

extern unsigned char LAB_003abd7c; /* 0x3abd7c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: uiDrawScrollingSelectionEntry. */
/* Supplied declaration required: drawTextAtRelativePosition. */
/* Supplied declaration required: pairCopy. */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_00262cb0(unsigned short);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002be56c. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bf4f0. */


void FUN_003abae8(int param_1,int param_2,int param_3,int param_4,int param_5)

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
    temp_v1 = FUN_002bf4f0(param_1 + 200,param_2 + 0x42f);
  }
  else {
    temp_v1 = FUN_002bf4f0(param_1 + 200,param_2 + 0x40e);
  }
  temp_v3 = (int)*(short *)(temp_v1 + 8);
  temp_v1 = (int)*(short *)(temp_v1 + 10);
  if (param_4 != 0) {
    uiDrawScrollingSelectionEntry(param_1,param_2,param_5,(int)*(char *)(param_1 + 0x56d));
    temp_v9 = 3;
    temp_v4 = 0xffffffff;
    temp_v10 = 0x4e0;
  }
  else {
    temp_v9 = 2;
    temp_v4 = 0xff;
    temp_v10 = 0x4ce;
  }
  temp_v2 = FUN_00262cb0(*(unsigned short *)(param_1 + param_3 * 0x20 + 0x5ac));
  if (temp_v2 != 0) {
    temp_v4 = 0x5a5a5aff;
  }
  temp_v6 = *(unsigned int *)(temp_v5 + 0x5c8);
  temp_v2 = FUN_002bf4f0(param_1 + 200,temp_v10);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be56c(param_1 + 200,temp_v9,temp_v4,temp_v6);
  if (param_4 == 0) {
    temp_v4 = 0x4cd;
  }
  else {
    temp_v4 = 0x476;
    FUN_00231bcc(param_1 + 200,0x4df,temp_v3,temp_v1,param_5,1);
  }
  temp_v2 = FUN_002bf4f0(param_1 + 200,temp_v4);
  pairCopy(param_1 + 200,&temp_v11);
  temp_v7 = (float)VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (int)(temp_v7 + temp_v11);
  FUN_00288e68(temp_v0);
  FUN_002b6c34((int)(short)temp_v0,temp_v2,(int)(temp_v8 + fStack_54),param_5,0,0);
  textFormatBuffer(temp_v12,&LAB_003abd7c,*(unsigned int *)(temp_v5 + 0x5b4));
  if (param_4 != 0) {
    temp_v5 = FUN_002bf4f0(param_1 + 200,0x4f0);
  }
  else {
    temp_v5 = FUN_002bf4f0(param_1 + 200,0x4de);
  }
  drawTextAtRelativePosition(param_1 + 200,0,*(short *)(temp_v5 + 8) + temp_v3,*(short *)(temp_v5 + 10) + temp_v1,0,7,
               0xffffffff,param_5,temp_v12);
  return;
}

} /* extern "C" */
