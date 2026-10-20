/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db658` (_code @ 0x1db658, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00263028(unsigned int, unsigned int);
int FUN_002630e0(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00263028. */
/* Supplied declaration required: FUN_002630e0. */
extern unsigned int FUN_002c501c(void);


void FUN_001db658(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_d11, in_fpscr, in_s0, in_s1, in_s2, in_s3; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v2;
  unsigned int in_s1;
  float temp_v3;
  float temp_v4;
  float in_s2;
  float in_s3;
  unsigned long long temp_v5;
  unsigned long long in_d11;
  float temp_v6;
  unsigned char temp_v7 [12];
  unsigned char temp_v8 [28];
  unsigned char temp_v9 [4];
  int temp_v10;
  unsigned char temp_v11 [48];
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  
  temp_v10 = -(param_1 >> 1);
  temp_v5 = (unsigned long long)in_s1;
  temp_v3 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)((unsigned long long)in_d11 >> 0x20);
  temp_v3 = temp_v3 * in_s3;
  temp_v2 = temp_v2 * in_s3;
  temp_v0 = FUN_002c501c();
  if (0 < param_1) {
    temp_v6 = temp_v2 + in_s2;
  }
  temp_v1 = 0;
  if (temp_v1 < param_1) {
    do {
      temp_v12 = temp_v3 + in_s0;
      temp_v4 = (float)VectorSignedToFloat(param_1 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = (unsigned int)temp_v5;
      temp_v17 = temp_v2 + temp_v4 * in_s3 + in_s2;
      temp_v14 = temp_v6;
      temp_v15 = temp_v12;
      temp_v16 = temp_v13;
      FUN_002630e0(temp_v7,0,temp_v0,&temp_v12);
      FUN_002630e0(temp_v8,0,temp_v0,&temp_v15);
      FUN_00263028(param_2,param_3);
      temp_v3 = temp_v3 + in_s3;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  temp_v1 = 0;
  temp_v3 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = temp_v3 * in_s3;
  if (0 < param_1) {
    temp_v6 = temp_v3 + in_s0;
    do {
      temp_v14 = temp_v2 + in_s2;
      temp_v4 = (float)VectorSignedToFloat(param_1 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = (unsigned int)temp_v5;
      temp_v15 = temp_v3 + temp_v4 * in_s3 + in_s0;
      temp_v12 = temp_v6;
      temp_v16 = temp_v13;
      temp_v17 = temp_v14;
      FUN_002630e0(temp_v9,0,temp_v0,&temp_v12);
      FUN_002630e0(temp_v11,0,temp_v0,&temp_v15);
      FUN_00263028(param_2,param_3);
      temp_v2 = temp_v2 + in_s3;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  return;
}

} /* extern "C" */
