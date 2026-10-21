/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9df4` (_code @ 0x3a9df4, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d800(int, int, int, int);
int FUN_0022d9c8(int, int, int, int, int, unsigned int);
int FUN_0022daac(int, unsigned int, int, int, int);
int FUN_0022db94(int, unsigned int, int, int, int);
int FUN_0022dcac(int, int, unsigned int, int, int, int);
int FUN_00230aec(...);
int dataTable00FindById(void);
int textFormatBuffer(...);
int FUN_002bf4f0(...);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

extern unsigned char LAB_003aa030; /* 0x3aa030 */

/* Supplied declaration required: FUN_0022d800. */
/* Supplied declaration required: FUN_0022d9c8. */
/* Supplied declaration required: FUN_0022daac. */
/* Supplied declaration required: FUN_0022db94. */
/* Supplied declaration required: FUN_0022dcac. */
/* Supplied declaration required: FUN_00230aec. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002bf4f0. */


void FUN_003a9df4(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [44];
  
  temp_v6 = *(int *)(param_1 + 0x594);
  if (param_3 != 0) {
    temp_v6 = temp_v6 + 1;
    temp_v4 = FUN_002bf4f0(param_1 + 200,param_2 + 0x42f);
  }
  else {
    temp_v4 = FUN_002bf4f0(param_1 + 200,param_2 + 0x40e);
  }
  temp_v0 = *(short *)(temp_v4 + 8);
  temp_v1 = *(short *)(temp_v4 + 10);
  if (param_3 != 0) {
    FUN_0022d800(param_1,param_2,temp_v6,(int)*(char *)(param_1 + 0x56d));
  }
  FUN_0022dcac(param_1,1,param_4,param_2,param_3,temp_v6);
  FUN_0022db94(param_1,param_4,param_2,param_3,temp_v6);
  FUN_0022daac(param_1,param_4,param_2,param_3,temp_v6);
  temp_v5 = param_4;
  temp_v7 = 0;
  dataTable00FindById();
  if (temp_v5 != 0) {
    temp_v7 = *(unsigned char *)(temp_v5 + 2);
  }
  FUN_0022d9c8(param_1,temp_v7,param_2,param_3,temp_v6,0xffffffff);
  temp_v5 = param_4;
  temp_v8 = 0;
  dataTable00FindById();
  if (temp_v5 != 0) {
    temp_v8 = *(unsigned int *)(temp_v5 + 4);
  }
  if (param_3 != 0) {
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x49d);
    temp_v9 = 0xfbeb39ff;
  }
  else {
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x48f);
    temp_v9 = 0xffffffff;
  }
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v3 = *(short *)(temp_v4 + 10);
  textFormatBuffer(temp_v10,&LAB_003aa030,temp_v8);
  FUN_00230aec(param_1 + 200,0,(int)temp_v2 + (int)temp_v0,(int)temp_v3 + (int)temp_v1,0,7,temp_v9,temp_v6,
               temp_v10);
  param_4 = param_4 & 0xffff;
  temp_v8 = 0;
  dataTable00FindById();
  if (param_4 != 0) {
    temp_v8 = *(unsigned int *)(param_4 + 8);
  }
  if (param_3 != 0) {
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x4a1);
    temp_v9 = 0x6bbb2cff;
  }
  else {
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x493);
    temp_v9 = 0xffffffff;
  }
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v3 = *(short *)(temp_v4 + 10);
  textFormatBuffer(temp_v10,&LAB_003aa030,temp_v8);
  FUN_00230aec(param_1 + 200,0,(int)temp_v0 + (int)temp_v2,(int)temp_v3 + (int)temp_v1,0,7,temp_v9,temp_v6,
               temp_v10);
  return;
}

} /* extern "C" */
