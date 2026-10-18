/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119c38` (_code @ 0x119c38, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00119d18; /* 0x119d18 */

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e791c. */
/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
extern int FUN_002eab1c(int *, unsigned int *);
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_00119c38(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int iStack_30;
  int temp_v6;
  int *temp_v7;
  int temp_v8;
  
  if (*(int *)(param_1[0x76] + 0xa0) == 0) {
    FUN_002ea20c(&temp_v4);
    temp_v0 = FUN_002eab1c(param_1 + 0x74,&temp_v4);
    if (temp_v0 < 0) {
      temp_v2 = 0x8001000b;
      temp_v1 = FUN_002e7908(&iStack_30,&temp_v2);
      (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1);
      return;
    }
    *(int *)(param_1[0x76] + 0xa0) = temp_v0;
  }
  temp_v8 = 0;
  FUN_002f6be2(param_1 + 0x1d,&temp_v8);
  temp_v7 = param_1 + 0x26;
  temp_v0 = param_1[0x76];
  temp_v5 = param_1[0x22];
  iStack_30 = param_1[0x23];
  temp_v6 = param_1[0x24];
  temp_v3 = param_1[0x6e];
  temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x6f);
  temp_v2 = temp_v8;
  FUN_002e791c(temp_v0,temp_v7,0,param_1[0x1c]);
  if (temp_v0 != 0) {
    FUN_002f7cb0(param_1);
    temp_v0 = FUN_002e760a(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,0x119b69,0,&LAB_00119d18);
    }
    FUN_002f7cba(param_1,temp_v7,temp_v1);
  }
  else {
    temp_v5 = -0x7ffefff3;
    temp_v1 = FUN_002e7908(&temp_v2,&temp_v5);
    (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1);
  }
  FUN_002f6bf0(temp_v8);
  return;
}
