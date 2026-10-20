/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377428` (_code @ 0x377428, 0x200 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, int);
int FUN_00235db4(void);
int FUN_00282390(void);
int FUN_00377650(unsigned int, float *, float [10]);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00235db4. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_00377650. */


void FUN_00377428(unsigned int param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_s2, in_s3, in_s4, in_s5; 6 native warning(s); review required */
  unsigned int in_s2;
  float in_s3;
  float temp_v0;
  unsigned int in_s4;
  float in_s5;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7 [10];
  unsigned long long temp_v8;
  
  temp_v4 = romwright_piece_4_4(in_s2,in_s4);
  FUN_00377650(param_1,&temp_v6,temp_v7);
  temp_v0 = -1.0f;
  temp_v1 = 1.0f;
  temp_v8 = CONCAT44(in_s3,0x3f800000);
  if (-(float)temp_v4 > temp_v6) {
    FUN_00235db4();
    temp_v2 = (float)temp_v8;
  }
  else if ((unsigned int)temp_v6 >= 0xbfc90fdc) {
    FUN_00235db4();
    temp_v2 = temp_v6;
    temp_v6 = temp_v0;
  }
  else if (-in_s3 > temp_v6) {
    FUN_00235db4();
    temp_v2 = temp_v6;
    temp_v6 = temp_v0;
  }
  else if (in_s3 > temp_v6) {
    FUN_00235db4();
    temp_v2 = temp_v0;
  }
  else if ((int)temp_v6 < 0x3fc90fdb) {
    FUN_00235db4();
    temp_v2 = temp_v6;
    temp_v6 = temp_v1;
  }
  else if ((float)temp_v4 > temp_v6) {
    FUN_00235db4();
    temp_v2 = temp_v6;
    temp_v6 = temp_v1;
  }
  else {
    FUN_00235db4();
    temp_v2 = (float)temp_v8;
  }
  temp_v0 = (float)((unsigned long long)temp_v8 >> 0x20);
  FUN_00282390();
  temp_v3 = (float)temp_v8;
  temp_v1 = (float)temp_v4;
  FUN_00282390();
  temp_v1 = (temp_v0 + temp_v1) * 0.5f;
  temp_v0 = (float)temp_v4;
  FUN_00282390();
  temp_v5 = (float)((unsigned long long)temp_v4 >> 0x20);
  *param_2 = temp_v6 * temp_v5 * temp_v7[0];
  *param_3 = temp_v2 * temp_v5 * temp_v7[0] + (temp_v1 / (temp_v1 - temp_v0)) * (temp_v3 - temp_v7[0]) + temp_v3
             + in_s5;
  return;
}

} /* extern "C" */
