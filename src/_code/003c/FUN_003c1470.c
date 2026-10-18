/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1470` (_code @ 0x3c1470, 0x1c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp2C8; /* 0x2c8: local_2c8 */
    unsigned int sp2CC; /* 0x2cc: local_2cc */
    unsigned int sp2D0; /* 0x2d0: local_2d0 */
} param_4_stack;

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023ed24. */
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00256078. */
extern int FUN_00256418(int, int, unsigned int);
/* Supplied declaration required: FUN_00263194. */
extern int FUN_00293c98(void);
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_00337104. */
/* Supplied declaration required: FUN_003ae4f0. */


void FUN_003c1470(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [448];
  int iStack_34;
  int iStack_30;
  int temp_v8;
  int temp_v9;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v8 = param_3;
  temp_v9 = param_4;
  temp_v1 = FUN_00293c98();
  if (param_1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + param_2 * 8 + 0x1fd0) & 0xffff;
    FUN_002b087c();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0023ed24(temp_v1,temp_v7);
  }
  else {
    temp_v3 = FUN_002a8a08();
    temp_v4 = temp_v3 + param_2;
    temp_v5 = FUN_002a89e4((int)*(char *)(temp_v4 + 0x90f0));
    temp_v6 = FUN_0029ee4c(temp_v5,1);
    if (temp_v6 != 0) {
      *(unsigned short *)(temp_v5 + 0x2a) = *(unsigned short *)(temp_v5 + 0xe);
      FUN_00263194(temp_v5,2);
    }
    FUN_00337104(temp_v1,temp_v7,temp_v5,(int)(short)param_2);
    if (-1 < *(char *)(temp_v4 + 0x90f0)) {
      temp_v5 = FUN_00256418(temp_v1,temp_v8,0);
      *(unsigned char *)(*(short *)(temp_v5 + 0x6e) + temp_v3 + 0x9107) = *(unsigned char *)(temp_v4 + 0x90f0);
      temp_v0 = temp_v9 < 1;
      if (!temp_v0) {
        FUN_00250800(0,0,0x10001cf,0,0,0,0);
      }
      FUN_003ae4f0(DAT_00439ca8,(int)*(short *)(temp_v5 + 0x6e),(int)*(char *)(temp_v4 + 0x90f0),temp_v0);
    }
  }
  FUN_00256078(temp_v1,temp_v7,param_1,temp_v8,1);
  if (param_1 == 1) {
    temp_v1 = *(int *)(temp_v1 + 0x1e98) + temp_v8 * 0x114;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x50);
    if ((((temp_v2 & 1) != 0) && ((temp_v2 & 0x80) != 0)) && ((temp_v2 & 2) == 0)) {
      *(unsigned int *)(temp_v1 + 0x54) = (*(unsigned int *)(temp_v1 + 0x54) & 0xfffffff9) | 1;
      *(unsigned int *)(temp_v1 + 0x48) = 4;
      *(unsigned int *)(temp_v1 + 0x4c) = 0;
    }
  }
  return;
}
