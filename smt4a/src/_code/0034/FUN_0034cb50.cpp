/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cb50` (_code @ 0x34cb50, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_0034a290. */


void FUN_0034cb50(short *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  
  temp_v6 = 0;
  temp_v5 = 100;
  temp_v7 = 0;
  temp_v3 = 0;
  temp_v8 = 100;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  if (temp_v3 < param_3) {
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_2 + temp_v3 * 2);
      if (((temp_v0 != 0) && (FUN_0034a290(), temp_v0 != 0)) &&
         ((*(unsigned int *)(temp_v0 + 0x44) & 0x7ff) >> 6 == 10)) {
        temp_v8 = temp_v8 + (unsigned int)*(unsigned char *)(temp_v0 + 0x24) * 10;
        temp_v6 = (int)(short)((unsigned short)*(unsigned char *)(temp_v0 + 0x28) + (short)temp_v6);
        temp_v7 = (int)(short)((unsigned short)*(unsigned char *)(temp_v0 + 0x29) + (short)temp_v7);
        temp_v11 = (int)(short)((unsigned short)*(unsigned char *)(temp_v0 + 0x2c) + (short)temp_v11);
        temp_v5 = temp_v5 + (unsigned int)*(unsigned char *)(temp_v0 + 0x25) * 10;
        temp_v9 = (int)(short)((unsigned short)*(unsigned char *)(temp_v0 + 0x2a) + (short)temp_v9);
        temp_v10 = (int)(short)((unsigned short)*(unsigned char *)(temp_v0 + 0x2b) + (short)temp_v10);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_3);
  }
  temp_v0 = (unsigned int)*param_1;
  if (temp_v0 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (temp_v0 * temp_v8) / 100;
    if ((temp_v1 == temp_v0) && (temp_v8 >= 101)) {
      temp_v1 = temp_v1 + 1;
    }
    temp_v0 = 9999;
    if ((temp_v1 < 10000) && (temp_v0 = temp_v1, temp_v1 == 0)) {
      temp_v0 = 1;
    }
  }
  *param_1 = (short)temp_v0;
  temp_v1 = (unsigned int)param_1[1];
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v4 = (temp_v1 * temp_v5) / 100;
    if ((temp_v4 == temp_v1) && (temp_v5 >= 101)) {
      temp_v4 = temp_v4 + 1;
    }
    temp_v0 = 9999;
    if ((temp_v4 < 10000) && (temp_v0 = temp_v4, temp_v4 == 0)) {
      temp_v0 = 1;
    }
  }
  param_1[1] = (short)temp_v0;
  temp_v12 = 999;
  temp_v2 = 999;
  temp_v6 = param_1[2] + temp_v6;
  temp_v3 = temp_v12;
  if ((temp_v6 < 1000) && (temp_v3 = temp_v6, temp_v6 < 1)) {
    temp_v3 = 1;
  }
  param_1[2] = (short)temp_v3;
  temp_v7 = param_1[3] + temp_v7;
  temp_v6 = temp_v12;
  if ((temp_v7 < 1000) && (temp_v6 = temp_v7, temp_v7 < 1)) {
    temp_v6 = 1;
  }
  param_1[3] = (short)temp_v6;
  temp_v9 = param_1[4] + temp_v9;
  temp_v6 = temp_v12;
  if ((temp_v9 < 1000) && (temp_v6 = temp_v9, temp_v9 < 1)) {
    temp_v6 = 1;
  }
  param_1[4] = (short)temp_v6;
  temp_v10 = temp_v10 + param_1[5];
  if ((temp_v10 < 1000) && (temp_v12 = temp_v10, temp_v10 < 1)) {
    temp_v12 = 1;
  }
  param_1[5] = (short)temp_v12;
  temp_v11 = param_1[6] + temp_v11;
  if (temp_v11 < 1000) {
    if (temp_v11 < 1) {
      temp_v11 = 1;
    }
    temp_v2 = (short)temp_v11;
  }
  param_1[6] = temp_v2;
  return;
}

} /* extern "C" */
