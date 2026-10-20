/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de4d4` (_code @ 0x2de4d4, 0x3a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);
int FUN_002c0dbc(int, int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *, float *);

/* stack frame of param_1: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_1_stack;

extern int DAT_005f180c; /* 0x5f180c */

/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_002c0dbc. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_002de4d4(short param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  float in_s0;
  float in_s1;
  float in_s2;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float temp_v4;
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
  float temp_v15;
  float temp_v16;
  float fStack_98;
  float fStack_94;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  
  FUN_00162e8c();
  temp_v13 = 0.0f;
  temp_v14 = 5.0f;
  temp_v15 = 0.0f;
  temp_v7 = 500.0f;
  temp_v8 = 5.0f;
  temp_v9 = 0.0f;
  temp_v10 = 500.0f;
  temp_v11 = 5.0f;
  temp_v12 = 500.0f;
  temp_v4 = 0.0f;
  temp_v5 = 5.0f;
  temp_v6 = 500.0f;
  temp_v1 = 0.0f;
  temp_v0 = 1.0f;
  temp_v2 = 0.0f;
  temp_v17 = 1.0f;
  temp_v21 = 0.0f;
  temp_v27 = 1.0f;
  temp_v3 = 0x80000000;
  temp_v19 = 0.0f;
  temp_v22 = 1.0f;
  temp_v18 = 0.0f;
  temp_v23 = 0.0f;
  temp_v20 = 0;
  temp_v24 = 0;
  temp_v28 = 0;
  temp_v16 = 0.0f;
  fStack_98 = 5.0f;
  fStack_94 = 0.0f;
  temp_v25 = temp_v3;
  temp_v26 = temp_v21;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v13,&temp_v17,&temp_v16);
  temp_v16 = temp_v7;
  fStack_98 = temp_v8;
  fStack_94 = temp_v9;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v7,&temp_v17,&temp_v16);
  temp_v16 = temp_v10;
  fStack_98 = temp_v11;
  fStack_94 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v10,&temp_v17,&temp_v16);
  temp_v16 = temp_v4;
  fStack_98 = temp_v5;
  fStack_94 = temp_v6;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v4,&temp_v17,&temp_v16);
  temp_v17 = temp_v0 * temp_v0;
  temp_v21 = temp_v1 * temp_v0;
  temp_v27 = temp_v0 * temp_v0;
  temp_v18 = temp_v1 * temp_v0 * temp_v1 - temp_v0 * temp_v1;
  temp_v23 = temp_v0 * temp_v1 * temp_v1 - temp_v1 * temp_v0;
  temp_v19 = temp_v2 + temp_v0 * temp_v0 * temp_v1;
  temp_v22 = temp_v0 * temp_v0 + temp_v2 * temp_v1;
  temp_v20 = 0;
  temp_v24 = 0;
  temp_v28 = 0;
  temp_v16 = temp_v13;
  fStack_98 = temp_v14;
  fStack_94 = temp_v15;
  temp_v25 = temp_v3;
  temp_v26 = temp_v21;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v13,&temp_v17,&temp_v16);
  temp_v16 = temp_v7;
  fStack_98 = temp_v8;
  fStack_94 = temp_v9;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v7,&temp_v17,&temp_v16);
  temp_v16 = temp_v10;
  fStack_98 = temp_v11;
  fStack_94 = temp_v12;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v10,&temp_v17,&temp_v16);
  temp_v16 = temp_v4;
  fStack_98 = temp_v5;
  fStack_94 = temp_v6;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v4,&temp_v17,&temp_v16);
  temp_v13 = temp_v13 + in_s0;
  temp_v14 = temp_v14 + in_s1;
  temp_v15 = temp_v15 + in_s2;
  temp_v7 = temp_v7 + in_s0;
  temp_v8 = temp_v8 + in_s1;
  temp_v9 = temp_v9 + in_s2;
  temp_v10 = temp_v10 + in_s0;
  temp_v11 = temp_v11 + in_s1;
  temp_v12 = temp_v12 + in_s2;
  temp_v4 = temp_v4 + in_s0;
  temp_v5 = temp_v5 + in_s1;
  temp_v6 = temp_v6 + in_s2;
  FUN_002c0dbc(2,0,(int)param_1);
  DAT_005f180c = DAT_005f180c + 1;
  return;
}

} /* extern "C" */
