/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c950` (_code @ 0x29c950, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002dad3c. */
/* Supplied declaration required: FUN_003c1cdc. */
/* Supplied declaration required: FUN_003c1f24. */


void FUN_0029c950(unsigned int *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  int temp_v8;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  *(unsigned int *)((int)param_1 + 0xe) = *param_1;
  *(unsigned int *)((int)param_1 + 0x12) = param_1[1];
  *(unsigned int *)((int)param_1 + 0x16) = param_1[2];
  *(unsigned short *)((int)param_1 + 0x1a) = *(unsigned short *)(param_1 + 3);
  temp_v8 = 999;
  temp_v1 = 999;
  temp_v5 = (int)*(short *)((int)param_1 + 0x12) + (unsigned int)*(unsigned short *)(param_1 + 0x164);
  temp_v6 = temp_v8;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)((int)param_1 + 0x12) = (short)temp_v6;
  temp_v5 = (int)*(short *)((int)param_1 + 0x16) + (unsigned int)*(unsigned short *)(param_1 + 0x165);
  temp_v6 = temp_v8;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)((int)param_1 + 0x16) = (short)temp_v6;
  temp_v5 = (unsigned int)*(unsigned short *)((int)param_1 + 0x596) + (int)*(short *)(param_1 + 6);
  temp_v6 = temp_v8;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)(param_1 + 6) = (short)temp_v6;
  temp_v6 = (int)*(short *)((int)param_1 + 0x1a) + (unsigned int)*(unsigned short *)(param_1 + 0x166);
  if ((temp_v6 < 1000) && (temp_v8 = temp_v6, temp_v6 < 1)) {
    temp_v8 = 1;
  }
  *(short *)((int)param_1 + 0x1a) = (short)temp_v8;
  temp_v8 = (int)*(short *)(param_1 + 5) + (unsigned int)*(unsigned short *)((int)param_1 + 0x592);
  if (temp_v8 < 1000) {
    if (temp_v8 < 1) {
      temp_v8 = 1;
    }
    temp_v1 = (unsigned short)temp_v8;
  }
  *(unsigned short *)(param_1 + 5) = temp_v1;
  FUN_003c1f24(&uStack_20,*(unsigned short *)((int)param_1 + 0x46));
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  uStack_28 = uStack_18;
  uStack_24 = uStack_14;
  FUN_003c1cdc(*(unsigned char *)(param_1 + 0x12),(int)param_1 + 0xe,&uStack_30);
  temp_v3 = *(short *)((int)param_1 + 0xe) + *(short *)(param_1 + 0x163);
  *(short *)((int)param_1 + 0xe) = temp_v3;
  temp_v4 = *(short *)((int)param_1 + 0x58e) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = temp_v4;
  temp_v0 = *(char *)((int)param_1 + 0x601);
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') goto LAB_0029cb4c;
      temp_v7 = ((uStack_24 & 0xffff) * 10) / 100;
      temp_v2 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 10) / 100;
    }
    else {
      temp_v7 = (unsigned int)(((unsigned long long)(unsigned short)uStack_24 * 8) / 100);
      temp_v2 = (unsigned int)(((unsigned long long)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 8) / 100);
    }
  }
  else {
    temp_v7 = ((uStack_24 & 0xffff) * 5) / 100;
    temp_v2 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 5) / 100;
  }
  if (temp_v7 == 0) {
    temp_v7 = 1;
  }
  if (temp_v2 == 0) {
    temp_v2 = 1;
  }
  if (temp_v7 != 0) {
    *(short *)((int)param_1 + 0xe) = (short)temp_v7 + temp_v3;
  }
  if (temp_v2 != 0) {
    *(short *)(param_1 + 4) = (short)temp_v2 + temp_v4;
  }
LAB_0029cb4c:
  FUN_002dad3c((int)param_1 + 0xe,param_1 + 0xd,8);
  temp_v3 = *(short *)((int)param_1 + 0x2a);
  if (*(short *)((int)param_1 + 0xe) < *(short *)((int)param_1 + 0x2a)) {
    temp_v3 = *(short *)((int)param_1 + 0xe);
  }
  *(short *)((int)param_1 + 0x2a) = temp_v3;
  temp_v3 = *(short *)(param_1 + 0xb);
  if (*(short *)(param_1 + 4) < *(short *)(param_1 + 0xb)) {
    temp_v3 = *(short *)(param_1 + 4);
  }
  *(short *)(param_1 + 0xb) = temp_v3;
  return;
}
