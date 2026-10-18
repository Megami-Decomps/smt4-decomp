/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029960c` (_code @ 0x29960c, 0x264 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_002b47cc. */
extern unsigned short *FUN_002b66ec(void);
/* Supplied declaration required: FUN_002dad3c. */
/* Supplied declaration required: FUN_003c1cdc. */
/* Supplied declaration required: FUN_003c2078. */


void FUN_0029960c(unsigned short *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int temp_v9;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v10;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned short temp_v11;
  
  if (param_1 == (unsigned short *)0x0) {
    param_1 = (unsigned short *)FUN_002b66ec();
  }
  temp_v4 = 0;
  temp_v7 = 0;
  temp_v6 = 0;
  *(unsigned int *)(param_1 + 0xe) = *(unsigned int *)(param_1 + 7);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 9);
  *(unsigned int *)(param_1 + 0x12) = *(unsigned int *)(param_1 + 0xb);
  temp_v2 = (unsigned int)param_1[0xd];
  param_1[0x14] = param_1[0xd];
  do {
    switch(temp_v6) {
    case 0:
      temp_v2 = (unsigned int)*param_1;
      break;
    case 1:
      temp_v2 = (unsigned int)param_1[1];
      break;
    case 2:
      temp_v2 = (unsigned int)param_1[2];
      break;
    case 3:
      temp_v2 = (unsigned int)param_1[3];
      break;
    case 4:
      temp_v2 = (unsigned int)param_1[4];
      break;
    case 5:
      temp_v2 = (unsigned int)param_1[5];
      break;
    case 6:
      temp_v2 = (unsigned int)param_1[6];
    }
    if (temp_v2 != 0) {
      temp_v3 = FUN_002b47cc();
      temp_v2 = 0;
      if (temp_v3 != 0) {
        param_1[0x10] = param_1[0x10] + (short)*(char *)(temp_v3 + 0x61);
        param_1[0x11] = param_1[0x11] + (short)*(char *)(temp_v3 + 0x62);
        param_1[0x12] = param_1[0x12] + (short)*(char *)(temp_v3 + 99);
        param_1[0x13] = param_1[0x13] + (short)*(char *)(temp_v3 + 100);
        param_1[0x14] = param_1[0x14] + (short)*(char *)(temp_v3 + 0x65);
        temp_v4 = *(short *)(temp_v3 + 0x66) + temp_v4;
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + 0x68) + temp_v7;
        temp_v7 = (int)(short)temp_v2;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 7);
  temp_v0 = 999;
  temp_v1 = param_1[0x10];
  temp_v5 = temp_v0;
  if (((short)temp_v1 < 1000) && (temp_v5 = temp_v1, (short)temp_v1 < 1)) {
    temp_v5 = 1;
  }
  param_1[0x10] = temp_v5;
  temp_v1 = param_1[0x12];
  temp_v5 = temp_v0;
  if (((short)temp_v1 < 1000) && (temp_v5 = temp_v1, (short)temp_v1 < 1)) {
    temp_v5 = 1;
  }
  param_1[0x12] = temp_v5;
  temp_v1 = param_1[0x13];
  temp_v5 = temp_v0;
  if (((short)temp_v1 < 1000) && (temp_v5 = temp_v1, (short)temp_v1 < 1)) {
    temp_v5 = 1;
  }
  param_1[0x13] = temp_v5;
  temp_v1 = param_1[0x14];
  temp_v5 = temp_v0;
  if (((short)temp_v1 < 1000) && (temp_v5 = temp_v1, (short)temp_v1 < 1)) {
    temp_v5 = 1;
  }
  param_1[0x14] = temp_v5;
  temp_v1 = param_1[0x11];
  if (((short)temp_v1 < 1000) && (temp_v0 = temp_v1, (short)temp_v1 < 1)) {
    temp_v0 = 1;
  }
  param_1[0x11] = temp_v0;
  FUN_003c2078(&temp_v9,0);
  temp_v8 = temp_v9;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_003c1cdc((char)param_1[0x3b],param_1 + 0xe,&temp_v8);
  temp_v10 = *(unsigned int *)(param_1 + 0x1a);
  uStack_24 = *(unsigned int *)(param_1 + 0x1c);
  uStack_20 = *(unsigned int *)(param_1 + 0x1e);
  uStack_1c = *(unsigned int *)(param_1 + 0x20);
  param_1[0xe] = param_1[0xe] + temp_v4;
  param_1[0xf] = param_1[0xf] + (short)temp_v7;
  temp_v6 = FUN_002b47cc(param_1[6]);
  temp_v11 = 0;
  if (temp_v6 != 0) {
    temp_v11 = *(unsigned short *)(temp_v6 + 0x6a);
  }
  FUN_002dad3c(param_1 + 0xe,&temp_v10,9);
  temp_v1 = param_1[0xe];
  if ((short)param_1[0x15] <= (short)param_1[0xe]) {
    temp_v1 = param_1[0x15];
  }
  param_1[0x15] = temp_v1;
  temp_v1 = param_1[0x16];
  if ((short)param_1[0xf] < (short)param_1[0x16]) {
    temp_v1 = param_1[0xf];
  }
  param_1[0x16] = temp_v1;
  return;
}
