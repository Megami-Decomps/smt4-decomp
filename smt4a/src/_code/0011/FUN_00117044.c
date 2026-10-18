/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117044` (_code @ 0x117044, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

/* Supplied declaration required: FUN_00113612. */
/* Supplied declaration required: FUN_002e7634. */
extern unsigned int FUN_002eb5c0(unsigned int);
/* Supplied declaration required: FUN_002ec9f4. */
/* Supplied declaration required: FUN_002ee54c. */
/* Supplied declaration required: FUN_002fde5c. */
/* Supplied declaration required: FUN_00302fec. */
/* Supplied declaration required: FUN_00303018. */
/* Supplied declaration required: FUN_00303028. */


void FUN_00117044(unsigned int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned char temp_v4 [32];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int iStack_20;
  int iStack_1c;
  unsigned int *puStack_18;
  
  temp_v1 = *(int *)(param_2 + 8);
  temp_v8 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  FUN_00302fec(param_1,param_3 + 0xc);
  temp_v0 = FUN_002eb5c0(0xffffffff);
  *param_4 = temp_v0;
  FUN_002fde5c(temp_v2);
  temp_v6 = *(unsigned int *)(param_2 + 0x1c);
  FUN_00303018(temp_v2,&temp_v6);
  if (temp_v1 != 0) {
    temp_v7 = *(unsigned int *)(temp_v1 + 0x10);
    FUN_00303018(temp_v2,&temp_v7);
  }
  else {
    temp_v5 = 0;
    FUN_00303028(temp_v2,&temp_v5);
  }
  FUN_00303018(temp_v2,param_4);
  FUN_002e7634(temp_v4);
  FUN_00113612(*(unsigned int *)(param_2 + 0x14),temp_v3,temp_v4,param_3 + 0x34);
  FUN_00302fec(temp_v8,temp_v4);
  FUN_002ec9f4(temp_v4);
  FUN_002ee54c(temp_v2);
  return;
}
