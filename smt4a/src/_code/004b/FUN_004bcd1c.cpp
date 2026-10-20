/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bcd1c` (_code @ 0x4bcd1c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034cb50(short *, short *, int);
int FUN_004cc6a4(int, short *, int *);
int FUN_004ccb0c(int *, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018416c(short);
/* Supplied declaration required: FUN_0034cb50. */
extern short FUN_003da998(unsigned int, unsigned int *);
extern short FUN_003daaf4(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_004cc6a4. */
/* Supplied declaration required: FUN_004ccb0c. */


void FUN_004bcd1c(short *param_1,char param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  short temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  temp_v5 = (unsigned short)(param_2 == '\x01');
  *(char *)((int)param_1 + 299) = param_2;
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      temp_v5 = 2;
    }
    else if (param_2 == '\x03') {
      temp_v5 = 3;
    }
  }
  param_1[2] = param_1[2] + temp_v5;
  param_1[3] = param_1[3] + temp_v5;
  param_1[4] = param_1[4] + temp_v5;
  param_1[5] = param_1[5] + temp_v5;
  param_1[6] = temp_v5 + param_1[6];
  if (param_1 == (short *)0x0) {
    return;
  }
  *(unsigned int *)(param_1 + 7) = *(unsigned int *)param_1;
  *(unsigned int *)(param_1 + 9) = *(unsigned int *)(param_1 + 2);
  *(unsigned int *)(param_1 + 0xb) = *(unsigned int *)(param_1 + 4);
  param_1[0xd] = param_1[6];
  temp_v3 = 999;
  temp_v9 = 999;
  temp_v6 = (int)param_1[9] + (unsigned int)(unsigned short)param_1[0x56];
  temp_v7 = temp_v3;
  if ((temp_v6 < 1000) && (temp_v7 = temp_v6, temp_v6 < 1)) {
    temp_v7 = 1;
  }
  param_1[9] = (short)temp_v7;
  temp_v6 = (int)param_1[0xb] + (unsigned int)(unsigned short)param_1[0x58];
  temp_v7 = temp_v3;
  if ((temp_v6 < 1000) && (temp_v7 = temp_v6, temp_v6 < 1)) {
    temp_v7 = 1;
  }
  param_1[0xb] = (short)temp_v7;
  temp_v6 = (unsigned int)(unsigned short)param_1[0x59] + (int)param_1[0xc];
  temp_v7 = temp_v3;
  if ((temp_v6 < 1000) && (temp_v7 = temp_v6, temp_v6 < 1)) {
    temp_v7 = 1;
  }
  param_1[0xc] = (short)temp_v7;
  temp_v7 = (int)param_1[0xd] + (unsigned int)(unsigned short)param_1[0x5a];
  if ((temp_v7 < 1000) && (temp_v3 = temp_v7, temp_v7 < 1)) {
    temp_v3 = 1;
  }
  param_1[0xd] = (short)temp_v3;
  temp_v3 = (int)param_1[10] + (unsigned int)(unsigned short)param_1[0x57];
  if (temp_v3 < 1000) {
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v9 = (short)temp_v3;
  }
  param_1[10] = temp_v9;
  FUN_004ccb0c(&uStack_34,param_1[0x31]);
  uStack_48 = uStack_34;
  uStack_44 = uStack_30;
  uStack_40 = uStack_2c;
  uStack_3c = uStack_28;
  uStack_38 = uStack_24;
  FUN_004cc6a4(param_1[0x32],param_1 + 7,&uStack_48);
  temp_v1 = FUN_003da998(1,(unsigned int *)&uStack_48);
  temp_v9 = *param_1;
  temp_v2 = FUN_003daaf4(1,(unsigned int *)&uStack_48);
  temp_v9 = param_1[7] + param_1[0x54] + (temp_v9 - temp_v1);
  temp_v0 = *(char *)((int)param_1 + 299);
  temp_v1 = (param_1[1] - temp_v2) + param_1[8] + param_1[0x55];
  param_1[7] = temp_v9;
  param_1[8] = temp_v1;
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') goto LAB_004bcfbc;
      temp_v4 = ((uStack_3c & 0xffff) * 10) / 100;
      temp_v8 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_3c + 2)) * 10) / 100;
    }
    else {
      temp_v4 = (unsigned int)(((unsigned long long)(unsigned short)uStack_3c * 8) / 100);
      temp_v8 = (unsigned int)(((unsigned long long)(*(unsigned short *)((unsigned char *)&uStack_3c + 2)) * 8) / 100);
    }
  }
  else {
    temp_v4 = ((uStack_3c & 0xffff) * 5) / 100;
    temp_v8 = ((unsigned int)(*(unsigned short *)((unsigned char *)&uStack_3c + 2)) * 5) / 100;
  }
  if (temp_v4 == 0) {
    temp_v4 = 1;
  }
  if (temp_v8 == 0) {
    temp_v8 = 1;
  }
  if (temp_v4 != 0) {
    param_1[7] = (short)temp_v4 + temp_v9;
  }
  if (temp_v8 != 0) {
    param_1[8] = temp_v1 + (short)temp_v8;
  }
LAB_004bcfbc:
  FUN_0034cb50(param_1 + 7,param_1 + 0x1a,8);
  temp_v7 = (int)param_1[7];
  temp_v3 = FUN_0018416c(param_1[0x31]);
  temp_v11 = 1.25f;
  if (temp_v3 != 0) {
    temp_v10 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (int)(short)(int)(temp_v10 * 1.25f);
  }
  if (temp_v7 < param_1[0x15]) {
    temp_v9 = param_1[7];
    temp_v3 = FUN_0018416c(param_1[0x31]);
    if (temp_v3 != 0) {
      temp_v10 = (float)VectorSignedToFloat((int)temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (short)(int)(temp_v10 * temp_v11);
    }
    param_1[0x15] = temp_v9;
  }
  temp_v9 = param_1[0x16];
  if (param_1[8] < param_1[0x16]) {
    temp_v9 = param_1[8];
  }
  param_1[0x16] = temp_v9;
  return;
}

} /* extern "C" */
