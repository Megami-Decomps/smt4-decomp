/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c7c8` (_code @ 0x29c7c8, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_0024be90. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002dad3c. */
/* Supplied declaration required: FUN_003c1cdc. */
/* Supplied declaration required: FUN_003c1f24. */


void FUN_0029c7c8(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int *param_5)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  short temp_v6;
  short temp_v7;
  int temp_v8;
  unsigned int unaff_r7;
  unsigned char temp_v9;
  unsigned char temp_v10 [12];
  unsigned int uStack_24;
  unsigned char temp_v11;
  int temp_v12;
  
  temp_v9 = param_4 == 0;
  temp_v12 = 0;
  if (!temp_v9) {
    do {
      temp_v0 = *(unsigned char *)(param_2 + temp_v12 + 0x4c);
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4c) = temp_v0;
      temp_v3 = temp_v12 + 1;
      temp_v0 = temp_v0 | *(unsigned char *)(param_3 + temp_v12 + 0x4c);
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4c) = temp_v0;
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4c) = temp_v0 | *(unsigned char *)(param_4 + temp_v12 + 0x4c);
      temp_v12 = temp_v3;
    } while (temp_v3 < 0x40);
  }
  else {
    do {
      temp_v0 = *(unsigned char *)(param_2 + temp_v12 + 0x4c);
      temp_v3 = temp_v12 + 2;
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4c) = temp_v0;
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4c) = temp_v0 | *(unsigned char *)(param_3 + temp_v12 + 0x4c);
      temp_v0 = *(unsigned char *)(param_2 + temp_v12 + 0x4d);
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4d) = temp_v0;
      *(unsigned char *)((int)param_5 + temp_v12 + 0x4d) = *(unsigned char *)(param_3 + temp_v12 + 0x4d) | temp_v0;
      temp_v12 = temp_v3;
    } while (temp_v3 < 0x40);
  }
  temp_v4 = (unsigned int)*(unsigned short *)((int)param_5 + 0x46);
  FUN_002b9364();
  FUN_0024be90(param_5,*(unsigned short *)(temp_v4 + 0x38));
  temp_v12 = 0;
  if (!temp_v9) {
    do {
      temp_v4 = (unsigned int)*(unsigned char *)(param_2 + temp_v12 + 0x8c) + (unsigned int)*(unsigned char *)(param_3 + temp_v12 + 0x8c) +
              (unsigned int)*(unsigned char *)(param_4 + temp_v12 + 0x8c);
      if (temp_v4 >= 0x100) {
        temp_v4 = 0xff;
      }
      temp_v3 = temp_v12 + 1;
      *(char *)((int)param_5 + temp_v12 + 0x8c) = (char)temp_v4;
      temp_v12 = temp_v3;
    } while (temp_v3 < 0x500);
  }
  else {
    do {
      temp_v4 = (unsigned int)*(unsigned char *)(param_2 + temp_v12 + 0x8c) + (unsigned int)*(unsigned char *)(param_3 + temp_v12 + 0x8c);
      if (temp_v4 >= 0x100) {
        temp_v4 = 0xff;
      }
      temp_v3 = temp_v12 + 1;
      *(char *)((int)param_5 + temp_v12 + 0x8c) = (char)temp_v4;
      temp_v12 = temp_v3;
    } while (temp_v3 < 0x500);
  }
  temp_v1 = *(char *)((int)param_5 + *(unsigned short *)(param_2 + 0x46) + 0x8c);
  if (temp_v1 != -1) {
    *(char *)((int)param_5 + *(unsigned short *)(param_2 + 0x46) + 0x8c) = temp_v1 + '\x01';
  }
  temp_v1 = *(char *)((int)param_5 + *(unsigned short *)(param_3 + 0x46) + 0x8c);
  if (temp_v1 != -1) {
    *(char *)((int)param_5 + *(unsigned short *)(param_3 + 0x46) + 0x8c) = temp_v1 + '\x01';
  }
  if (!temp_v9) {
    temp_v1 = *(char *)((int)param_5 + *(unsigned short *)(param_4 + 0x46) + 0x8c);
    if (temp_v1 != -1) {
      *(char *)((int)param_5 + *(unsigned short *)(param_4 + 0x46) + 0x8c) = temp_v1 + '\x01';
    }
  }
  if (param_5 == (unsigned int *)0x0) {
    return;
  }
  *(unsigned int *)((int)param_5 + 0xe) = *param_5;
  *(unsigned int *)((int)param_5 + 0x12) = param_5[1];
  *(unsigned int *)((int)param_5 + 0x16) = param_5[2];
  *(unsigned short *)((int)param_5 + 0x1a) = *(unsigned short *)(param_5 + 3);
  temp_v12 = 999;
  temp_v2 = 999;
  temp_v8 = (int)*(short *)((int)param_5 + 0x12) + (unsigned int)*(unsigned short *)(param_5 + 0x164);
  temp_v3 = temp_v12;
  if ((temp_v8 < 1000) && (temp_v3 = temp_v8, temp_v8 < 1)) {
    temp_v3 = 1;
  }
  *(short *)((int)param_5 + 0x12) = (short)temp_v3;
  temp_v8 = (int)*(short *)((int)param_5 + 0x16) + (unsigned int)*(unsigned short *)(param_5 + 0x165);
  temp_v3 = temp_v12;
  if ((temp_v8 < 1000) && (temp_v3 = temp_v8, temp_v8 < 1)) {
    temp_v3 = 1;
  }
  *(short *)((int)param_5 + 0x16) = (short)temp_v3;
  temp_v8 = (unsigned int)*(unsigned short *)((int)param_5 + 0x596) + (int)*(short *)(param_5 + 6);
  temp_v3 = temp_v12;
  if ((temp_v8 < 1000) && (temp_v3 = temp_v8, temp_v8 < 1)) {
    temp_v3 = 1;
  }
  *(short *)(param_5 + 6) = (short)temp_v3;
  temp_v3 = (int)*(short *)((int)param_5 + 0x1a) + (unsigned int)*(unsigned short *)(param_5 + 0x166);
  if ((temp_v3 < 1000) && (temp_v12 = temp_v3, temp_v3 < 1)) {
    temp_v12 = 1;
  }
  *(short *)((int)param_5 + 0x1a) = (short)temp_v12;
  temp_v12 = (int)*(short *)(param_5 + 5) + (unsigned int)*(unsigned short *)((int)param_5 + 0x592);
  if (temp_v12 < 1000) {
    if (temp_v12 < 1) {
      temp_v12 = 1;
    }
    temp_v2 = (unsigned short)temp_v12;
  }
  *(unsigned short *)(param_5 + 5) = temp_v2;
  FUN_003c1f24(&temp_v11,*(unsigned short *)((int)param_5 + 0x46));
  uStack_24 = unaff_r7;
  FUN_003c1cdc(*(unsigned char *)(param_5 + 0x12),(int)param_5 + 0xe,temp_v10);
  temp_v6 = *(short *)((int)param_5 + 0xe) + *(short *)(param_5 + 0x163);
  *(short *)((int)param_5 + 0xe) = temp_v6;
  temp_v7 = *(short *)((int)param_5 + 0x58e) + *(short *)(param_5 + 4);
  *(short *)(param_5 + 4) = temp_v7;
  temp_v1 = *(char *)((int)param_5 + 0x601);
  if (temp_v1 != '\x01') {
    if (temp_v1 != '\x02') {
      if (temp_v1 != '\x03') goto LAB_0029cb4c;
      temp_v4 = ((uStack_24 & 0xffff) * 10) / 100;
      temp_v5 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 10) / 100;
    }
    else {
      temp_v4 = (unsigned int)(((unsigned long long)(unsigned short)uStack_24 * 8) / 100);
      temp_v5 = (unsigned int)(((unsigned long long)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 8) / 100);
    }
  }
  else {
    temp_v4 = ((uStack_24 & 0xffff) * 5) / 100;
    temp_v5 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_24 + 2)) * 5) / 100;
  }
  if (temp_v4 == 0) {
    temp_v4 = 1;
  }
  if (temp_v5 == 0) {
    temp_v5 = 1;
  }
  if (temp_v4 != 0) {
    *(short *)((int)param_5 + 0xe) = (short)temp_v4 + temp_v6;
  }
  if (temp_v5 != 0) {
    *(short *)(param_5 + 4) = (short)temp_v5 + temp_v7;
  }
LAB_0029cb4c:
  FUN_002dad3c((int)param_5 + 0xe,param_5 + 0xd,8);
  temp_v6 = *(short *)((int)param_5 + 0x2a);
  if (*(short *)((int)param_5 + 0xe) < *(short *)((int)param_5 + 0x2a)) {
    temp_v6 = *(short *)((int)param_5 + 0xe);
  }
  *(short *)((int)param_5 + 0x2a) = temp_v6;
  temp_v6 = *(short *)(param_5 + 0xb);
  if (*(short *)(param_5 + 4) < *(short *)(param_5 + 0xb)) {
    temp_v6 = *(short *)(param_5 + 4);
  }
  *(short *)(param_5 + 0xb) = temp_v6;
  return;
}
