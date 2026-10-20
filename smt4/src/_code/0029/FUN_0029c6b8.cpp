/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c6b8` (_code @ 0x29c6b8, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002dada4(int, unsigned int *, int);
int FUN_003c1ab4(int, int, int *);
int FUN_003c1cfc(int *, int);

/* stack frame of param_1: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_002dada4. */
/* Supplied declaration required: FUN_003c1ab4. */
/* Supplied declaration required: FUN_003c1cfc. */


void FUN_0029c6b8(unsigned int *param_1)

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
  int temp_v8;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  int temp_v11;
  
  *(unsigned int *)((int)param_1 + 0xe) = *param_1;
  *(unsigned int *)((int)param_1 + 0x12) = param_1[1];
  *(unsigned int *)((int)param_1 + 0x16) = param_1[2];
  *(unsigned short *)((int)param_1 + 0x1a) = *(unsigned short *)(param_1 + 3);
  temp_v11 = 999;
  temp_v1 = 999;
  temp_v5 = (int)*(short *)((int)param_1 + 0x12) + (unsigned int)*(unsigned short *)(param_1 + 0x164);
  temp_v6 = temp_v11;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)((int)param_1 + 0x12) = (short)temp_v6;
  temp_v5 = (int)*(short *)((int)param_1 + 0x16) + (unsigned int)*(unsigned short *)(param_1 + 0x165);
  temp_v6 = temp_v11;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)((int)param_1 + 0x16) = (short)temp_v6;
  temp_v5 = (unsigned int)*(unsigned short *)((int)param_1 + 0x596) + (int)*(short *)(param_1 + 6);
  temp_v6 = temp_v11;
  if ((temp_v5 < 1000) && (temp_v6 = temp_v5, temp_v5 < 1)) {
    temp_v6 = 1;
  }
  *(short *)(param_1 + 6) = (short)temp_v6;
  temp_v6 = (int)*(short *)((int)param_1 + 0x1a) + (unsigned int)*(unsigned short *)(param_1 + 0x166);
  if ((temp_v6 < 1000) && (temp_v11 = temp_v6, temp_v6 < 1)) {
    temp_v11 = 1;
  }
  *(short *)((int)param_1 + 0x1a) = (short)temp_v11;
  temp_v11 = (int)*(short *)(param_1 + 5) + (unsigned int)*(unsigned short *)((int)param_1 + 0x592);
  if (temp_v11 < 1000) {
    if (temp_v11 < 1) {
      temp_v11 = 1;
    }
    temp_v1 = (unsigned short)temp_v11;
  }
  *(unsigned short *)(param_1 + 5) = temp_v1;
  FUN_003c1cfc(&temp_v10,*(unsigned short *)((int)param_1 + 0x46));
  temp_v8 = temp_v10;
  uStack_2c = uStack_1c;
  uStack_28 = uStack_18;
  temp_v9 = uStack_14;
  FUN_003c1ab4(*(unsigned char *)(param_1 + 0x12),(int)param_1 + 0xe,&temp_v8);
  temp_v3 = *(short *)((int)param_1 + 0xe) + *(short *)(param_1 + 0x163);
  *(short *)((int)param_1 + 0xe) = temp_v3;
  temp_v4 = *(short *)((int)param_1 + 0x58e) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 4) = temp_v4;
  temp_v0 = *(char *)((int)param_1 + 0x601);
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') goto LAB_0029c8ac;
      temp_v7 = ((temp_v9 & 0xffff) * 10) / 100;
      temp_v2 = ((unsigned int)(*(unsigned short *)((unsigned char *)&temp_v9 + 2)) * 10) / 100;
    }
    else {
      temp_v7 = (unsigned int)(((unsigned long long)(unsigned short)temp_v9 * 8) / 100);
      temp_v2 = (unsigned int)(((unsigned long long)(*(unsigned short *)((unsigned char *)&temp_v9 + 2)) * 8) / 100);
    }
  }
  else {
    temp_v7 = ((temp_v9 & 0xffff) * 5) / 100;
    temp_v2 = ((unsigned int)(*(unsigned short *)((unsigned char *)&temp_v9 + 2)) * 5) / 100;
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
LAB_0029c8ac:
  FUN_002dada4((int)param_1 + 0xe,param_1 + 0xd,8);
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

} /* extern "C" */
