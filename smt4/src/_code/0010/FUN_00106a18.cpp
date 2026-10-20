/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106a18` (_code @ 0x106a18, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d084(int, float *);
int FUN_0011d0dc(int);
int FUN_002c1568(int);
int FUN_002c159c(int);
int FUN_002c2044(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0011d084. */
/* Supplied declaration required: FUN_0011d0dc. */
/* Supplied declaration required: FUN_002c1568. */
/* Supplied declaration required: FUN_002c159c. */
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c2044. */


void FUN_00106a18(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int in_s1;
  float temp_v1;
  unsigned int in_s2;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float fStack_54;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  temp_v3 = 1.0f;
  FUN_002c2044(param_1,1);
  temp_v0 = FUN_002c15d4(0);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_002c15ac(0);
  temp_v2 = 0.0f;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0011d0dc(param_1);
  temp_v13 = in_s0 - temp_v2;
  *(float *)(param_1 + 0x508) = in_s0;
  *(float *)(param_1 + 0x518) = temp_v3;
  *(float *)(param_1 + 0x514) = in_s0;
  *(unsigned int *)(param_1 + 0x50c) = in_s1;
  *(unsigned int *)(param_1 + 0x510) = in_s2;
  temp_v11 = temp_v3 / romwright_sqrt_4(temp_v2 + temp_v13 * temp_v13);
  temp_v13 = temp_v13 * temp_v11;
  temp_v11 = temp_v2 * temp_v11;
  temp_v1 = temp_v2 * temp_v11;
  temp_v4 = temp_v3 * temp_v13 - temp_v2 * temp_v11;
  fStack_54 = temp_v1 - temp_v2 * temp_v13;
  temp_v5 = temp_v1 - temp_v3 * temp_v11;
  temp_v3 = temp_v3 / romwright_sqrt_4(temp_v4 * temp_v4 + fStack_54 * fStack_54 + temp_v5 * temp_v5);
  temp_v5 = temp_v5 * temp_v3;
  fStack_54 = fStack_54 * temp_v3;
  temp_v4 = temp_v4 * temp_v3;
  temp_v14 = -(temp_v1 + temp_v2 * temp_v11) + -(in_s0 * temp_v13);
  temp_v7 = temp_v11 * temp_v5 - temp_v13 * fStack_54;
  temp_v9 = temp_v11 * fStack_54 - temp_v11 * temp_v4;
  temp_v8 = temp_v13 * temp_v4 - temp_v11 * temp_v5;
  temp_v6 = -(temp_v2 * temp_v4 + temp_v2 * fStack_54 + in_s0 * temp_v5);
  temp_v10 = -(temp_v2 * temp_v7 + temp_v2 * temp_v8 + in_s0 * temp_v9);
  temp_v12 = temp_v11;
  FUN_0011d084(param_1,&temp_v4);
  FUN_002c159c(param_1);
  FUN_002c1568(param_1);
  return;
}

} /* extern "C" */
