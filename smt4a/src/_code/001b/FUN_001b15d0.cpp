/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b15d0` (_code @ 0x1b15d0, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b8798(unsigned int *, int *, int *, unsigned int, unsigned int);
int FUN_001b8bb4(int *, unsigned int *, unsigned int, unsigned int, unsigned int *, int *, int *);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_001b8798. */
/* Supplied declaration required: FUN_001b8bb4. */


unsigned int FUN_001b15d0(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  
  temp_v3 = 0;
  if (((((param_3[2] & 0xf) != 0) || ((param_3[3] & 0x7f) != 0)) || ((param_3[4] & 0x7f) != 0)) ||
     (((param_3[6] & 3) != 0 || ((param_3[7] & 0xf) != 0)))) {
    temp_v3 = 0x80000020;
  }
  if (*param_2 != 0x484342) {
    temp_v3 = temp_v3 | 0x80000040;
  }
  if (*(unsigned char *)(param_2 + 1) >= 0x23) {
    temp_v3 = temp_v3 | 0x80000002;
  }
  if (*(unsigned char *)((int)param_2 + 5) < 0x23) {
    temp_v3 = temp_v3 | 0x80000004;
  }
  if ((*(unsigned char *)(param_2 + 0x10) & 2) != 0) {
    temp_v3 = temp_v3 | 0x80000008;
  }
  if ((temp_v3 & 0x80000000) == 0) {
    temp_v12 = param_3[6];
    temp_v13 = temp_v12 + param_2[0xe];
    temp_v14 = param_3[9];
    if (temp_v14 == 0) {
      temp_v14 = param_3[7];
    }
    temp_v15 = temp_v14 + param_2[0xf];
    FUN_001b8bb4(&temp_v16,param_1,param_3[5],(unsigned int)param_2[0xd] >> 2,param_3,param_2,&temp_v12);
    if ((int)temp_v17 < 0) {
      temp_v3 = temp_v17 | temp_v3;
    }
    else {
      temp_v4 = *param_3;
      temp_v5 = param_3[1];
      temp_v6 = param_3[2];
      temp_v7 = param_3[3];
      temp_v8 = param_3[4];
      temp_v9 = param_3[5];
      temp_v10 = param_3[6];
      temp_v11 = param_3[7];
      *param_1 = temp_v4;
      param_1[1] = temp_v5;
      param_1[2] = temp_v6;
      param_1[3] = temp_v7;
      param_1[4] = temp_v8;
      param_1[5] = temp_v9;
      param_1[6] = temp_v10;
      param_1[7] = temp_v11;
      temp_v5 = param_3[9];
      param_1[8] = param_3[8];
      param_1[9] = temp_v5;
      param_1[10] = temp_v16;
      param_1[0xb] = (unsigned int)param_2;
      param_1[0xc] = temp_v4;
      FUN_001b8798(param_1,&temp_v12,&temp_v14,temp_v5,temp_v11);
      if ((param_3[8] == 0) && (temp_v0 = 0, *(short *)(param_1[0xc] + 0x10) != 0)) {
        do {
          temp_v1 = temp_v0 + 1;
          temp_v2 = *(int *)(*(int *)(param_1[0xc] + 0xc) + temp_v0 * 4);
          *(unsigned short *)(temp_v2 + 4) = *(unsigned short *)(temp_v2 + 4) | 0x40;
          temp_v0 = temp_v1;
        } while (temp_v1 < *(unsigned short *)(param_1[0xc] + 0x10));
      }
      *(unsigned char *)(param_2 + 0x10) = *(unsigned char *)(param_2 + 0x10) | 2;
    }
  }
  return temp_v3;
}

} /* extern "C" */
