/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b13d8` (_code @ 0x2b13d8, 0x6f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a9170(...);

/* stack frame of param_4: 16 slot(s), 64 byte(s) */
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
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern int DAT_004e339c; /* 0x4e339c */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002a9170. */


void FUN_002b13d8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float in_s0;
  float in_s1;
  float in_s2;
  float temp_v8;
  float in_s3;
  float temp_v9;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  unsigned int in_s8;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  
  temp_v11 = in_s0 + in_s2;
  temp_v10 = in_s1 + in_s3;
  temp_v8 = in_s4 + in_s6;
  temp_v9 = in_s5 + in_s7;
  if (romwright_fabs_4(in_s0) == 0.0f) {
    temp_v17 = ((unsigned int)in_s0 >> 0x1f) << 0x17;
  }
  else {
    temp_v17 = (((unsigned int)in_s0 & 0x7fffff) >> 7) | (((unsigned int)in_s0 >> 0x1f) << 0x17) |
               *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s0) >> 0x17) * 4 + 0x4e31a0);
  }
  if (romwright_fabs_4(in_s1) == 0.0f) {
    temp_v3 = ((unsigned int)in_s1 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s1) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)in_s1 & 0x7fffff) >> 7) | (((unsigned int)in_s1 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v11) == 0.0f) {
    temp_v21 = ((unsigned int)temp_v11 >> 0x1f) << 0x17;
  }
  else {
    temp_v21 = (((unsigned int)temp_v11 & 0x7fffff) >> 7) | (((unsigned int)temp_v11 >> 0x1f) << 0x17) |
               *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v11) >> 0x17) * 4 + 0x4e31a0);
  }
  if (romwright_fabs_4(temp_v10) == 0.0f) {
    temp_v4 = ((unsigned int)temp_v10 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)temp_v10 & 0x7fffff) >> 7) | (((unsigned int)temp_v10 >> 0x1f) << 0x17);
  }
  if ((in_s8 & 0x7fffffff) == 0) {
    temp_v7 = (in_s8 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = *(unsigned int *)(((in_s8 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((in_s8 & 0x7fffff) >> 7) | ((in_s8 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s4) == 0.0f) {
    temp_v25 = ((unsigned int)in_s4 >> 0x1f) << 0x17;
  }
  else {
    temp_v25 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s4) >> 0x17) * 4 + 0x4e31a0) |
               (((unsigned int)in_s4 & 0x7fffff) >> 7) | (((unsigned int)in_s4 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s5) == 0.0f) {
    temp_v5 = ((unsigned int)in_s5 >> 0x1f) << 0x17;
  }
  else {
    temp_v5 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s5) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)in_s5 & 0x7fffff) >> 7) | (((unsigned int)in_s5 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v8) == 0.0f) {
    temp_v22 = ((unsigned int)temp_v8 >> 0x1f) << 0x17;
  }
  else {
    temp_v22 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v8) >> 0x17) * 4 + 0x4e31a0) |
               (((unsigned int)temp_v8 & 0x7fffff) >> 7) | (((unsigned int)temp_v8 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v9) == 0.0f) {
    temp_v6 = ((unsigned int)temp_v9 >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v9) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)temp_v9 & 0x7fffff) >> 7) | (((unsigned int)temp_v9 >> 0x1f) << 0x17);
  }
  temp_v12 = temp_v17 | (temp_v3 << 0x18);
  temp_v26 = temp_v7 << 0x10;
  temp_v14 = (DAT_004e339c << 8) | (temp_v7 >> 0x10);
  temp_v15 = temp_v25 | (temp_v5 << 0x18);
  temp_v7 = temp_v5 >> 8;
  temp_v13 = temp_v26 | (temp_v3 >> 8);
  temp_v1 = *param_1;
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v18 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v18 = *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17);
  }
  temp_v1 = param_1[1];
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v1 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17);
  }
  temp_v2 = param_1[2];
  if ((temp_v2 & 0x7fffffff) == 0) {
    temp_v2 = (temp_v2 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = ((temp_v2 & 0x7fffff) >> 7) | ((temp_v2 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v2 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v0 = param_1[3];
  if ((temp_v0 & 0x7fffffff) == 0) {
    temp_v0 = (temp_v0 >> 0x1f) << 0x17;
  }
  else {
    temp_v0 = ((temp_v0 & 0x7fffff) >> 7) | ((temp_v0 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v0 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v20 = (temp_v0 << 8) | (temp_v2 >> 0x10);
  temp_v18 = temp_v18 | (temp_v1 << 0x18);
  temp_v19 = (temp_v2 << 0x10) | (temp_v1 >> 8);
  temp_v16 = temp_v7;
  temp_v23 = temp_v14;
  temp_v24 = temp_v13;
  FUN_002a9170(&temp_v12,&temp_v18,&temp_v15,temp_v20,temp_v7);
  temp_v16 = temp_v6 >> 8;
  temp_v12 = temp_v17 | (temp_v4 << 0x18);
  temp_v15 = temp_v25 | (temp_v6 << 0x18);
  temp_v13 = temp_v26 | (temp_v4 >> 8);
  temp_v14 = temp_v23;
  temp_v1 = *param_2;
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v18 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v18 = *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17);
  }
  temp_v1 = param_2[1];
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v1 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v2 = param_2[2];
  if ((temp_v2 & 0x7fffffff) == 0) {
    temp_v2 = (temp_v2 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = ((temp_v2 & 0x7fffff) >> 7) | ((temp_v2 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v2 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v0 = param_2[3];
  if ((temp_v0 & 0x7fffffff) == 0) {
    temp_v0 = (temp_v0 >> 0x1f) << 0x17;
  }
  else {
    temp_v0 = ((temp_v0 & 0x7fffff) >> 7) | ((temp_v0 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v0 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v19 = (temp_v2 << 0x10) | (temp_v1 >> 8);
  temp_v20 = (temp_v0 << 8) | (temp_v2 >> 0x10);
  temp_v18 = temp_v18 | (temp_v1 << 0x18);
  temp_v17 = temp_v16;
  temp_v26 = temp_v13;
  FUN_002a9170(&temp_v12,&temp_v18,&temp_v15);
  temp_v12 = temp_v21 | (temp_v3 << 0x18);
  temp_v15 = temp_v22 | (temp_v5 << 0x18);
  temp_v13 = temp_v24;
  temp_v14 = temp_v23;
  temp_v3 = *param_3;
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v18 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v18 = *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17);
  }
  temp_v3 = param_3[1];
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v3 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17);
  }
  temp_v5 = param_3[2];
  if ((temp_v5 & 0x7fffffff) == 0) {
    temp_v5 = (temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v5 = *(unsigned int *)(((temp_v5 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((temp_v5 & 0x7fffff) >> 7) | ((temp_v5 >> 0x1f) << 0x17);
  }
  temp_v1 = param_3[3];
  if ((temp_v1 & 0x7fffffff) == 0) {
    temp_v1 = (temp_v1 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = ((temp_v1 & 0x7fffff) >> 7) | ((temp_v1 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v1 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v19 = (temp_v5 << 0x10) | (temp_v3 >> 8);
  temp_v20 = (temp_v1 << 8) | (temp_v5 >> 0x10);
  temp_v18 = temp_v18 | (temp_v3 << 0x18);
  temp_v16 = temp_v7;
  FUN_002a9170(&temp_v12,&temp_v18,&temp_v15);
  temp_v12 = temp_v21 | (temp_v4 << 0x18);
  temp_v15 = temp_v22 | (temp_v6 << 0x18);
  temp_v13 = temp_v26;
  temp_v14 = temp_v23;
  temp_v16 = temp_v17;
  temp_v3 = *param_4;
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v18 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v18 = *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17);
  }
  temp_v3 = param_4[1];
  if ((temp_v3 & 0x7fffffff) == 0) {
    temp_v3 = (temp_v3 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = *(unsigned int *)(((temp_v3 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((temp_v3 & 0x7fffff) >> 7) | ((temp_v3 >> 0x1f) << 0x17);
  }
  temp_v4 = param_4[2];
  if ((temp_v4 & 0x7fffffff) == 0) {
    temp_v4 = (temp_v4 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = *(unsigned int *)(((temp_v4 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
            ((temp_v4 & 0x7fffff) >> 7) | ((temp_v4 >> 0x1f) << 0x17);
  }
  temp_v5 = param_4[3];
  if ((temp_v5 & 0x7fffffff) == 0) {
    temp_v5 = (temp_v5 >> 0x1f) << 0x17;
  }
  else {
    temp_v5 = ((temp_v5 & 0x7fffff) >> 7) | ((temp_v5 >> 0x1f) << 0x17) |
            *(unsigned int *)(((temp_v5 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0);
  }
  temp_v18 = temp_v18 | (temp_v3 << 0x18);
  temp_v19 = (temp_v4 << 0x10) | (temp_v3 >> 8);
  temp_v20 = (temp_v5 << 8) | (temp_v4 >> 0x10);
  FUN_002a9170(&temp_v12,&temp_v18,&temp_v15,temp_v18,temp_v7);
  return;
}

} /* extern "C" */
