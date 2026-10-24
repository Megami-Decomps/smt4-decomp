/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7dc4` (_code @ 0x2b7dc4, 0x418 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gpuSubmitVectorCommand(unsigned int *, unsigned int *, unsigned int *);

/* stack frame of param_4: 29 slot(s), 68 byte(s) */
typedef struct {
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned char sp29; /* 0x29: local_29 */
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned char sp2B; /* 0x2b: local_2b */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned char sp31; /* 0x31: local_31 */
    unsigned char sp32; /* 0x32: local_32 */
    unsigned char sp33; /* 0x33: local_33 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_4_stack;

extern int DAT_004e339c; /* 0x4e339c */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: gpuSubmitVectorCommand. */


void FUN_002b7dc4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float in_s0;
  float temp_v8;
  float in_s1;
  float in_s2;
  float temp_v9;
  float in_s3;
  float temp_v10;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  unsigned int in_s8;
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
  unsigned int temp_v27;
  unsigned int temp_v28;
  
  if (romwright_fabs_4(in_s0) == 0.0f) {
    unaff_r8 = ((unsigned int)in_s0 >> 0x1f) << 0x17;
  }
  temp_v11 = in_s0 + in_s2;
  temp_v10 = in_s1 + in_s3;
  temp_v9 = in_s4 + in_s6;
  temp_v8 = in_s5 + in_s7;
  if (romwright_fabs_4(in_s0) != 0.0f) {
    unaff_r8 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s0) >> 0x17) * 4 + 0x4e31a0) |
               (((unsigned int)in_s0 & 0x7fffff) >> 7) | (((unsigned int)in_s0 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s1) == 0.0f) {
    temp_v2 = ((unsigned int)in_s1 >> 0x1f) << 0x17;
  }
  else {
    temp_v2 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s1) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)in_s1 & 0x7fffff) >> 7) | (((unsigned int)in_s1 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v11) == 0.0f) {
    temp_v6 = ((unsigned int)temp_v11 >> 0x1f) << 0x17;
  }
  else {
    temp_v6 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v11) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)temp_v11 & 0x7fffff) >> 7) | (((unsigned int)temp_v11 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v10) == 0.0f) {
    temp_v3 = ((unsigned int)temp_v10 >> 0x1f) << 0x17;
  }
  else {
    temp_v3 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)temp_v10 & 0x7fffff) >> 7) | (((unsigned int)temp_v10 >> 0x1f) << 0x17);
  }
  if ((in_s8 & 0x7fffffff) == 0) {
    temp_v15 = (in_s8 >> 0x1f) << 0x17;
  }
  else {
    temp_v15 = *(unsigned int *)(((in_s8 & 0x7fffffff) >> 0x17) * 4 + 0x4e31a0) |
               ((in_s8 & 0x7fffff) >> 7) | ((in_s8 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s4) == 0.0f) {
    temp_v7 = ((unsigned int)in_s4 >> 0x1f) << 0x17;
  }
  else {
    temp_v7 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s4) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)in_s4 & 0x7fffff) >> 7) | (((unsigned int)in_s4 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(in_s5) == 0.0f) {
    temp_v4 = ((unsigned int)in_s5 >> 0x1f) << 0x17;
  }
  else {
    temp_v4 = *(unsigned int *)(((unsigned int)romwright_fabs_4(in_s5) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)in_s5 & 0x7fffff) >> 7) | (((unsigned int)in_s5 >> 0x1f) << 0x17);
  }
  if (romwright_fabs_4(temp_v9) == 0.0f) {
    temp_v19 = ((unsigned int)temp_v9 >> 0x1f) << 0x17;
  }
  else {
    temp_v19 = (((unsigned int)temp_v9 & 0x7fffff) >> 7) | (((unsigned int)temp_v9 >> 0x1f) << 0x17) |
               *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v9) >> 0x17) * 4 + 0x4e31a0);
  }
  if (romwright_fabs_4(temp_v8) == 0.0f) {
    temp_v5 = ((unsigned int)temp_v8 >> 0x1f) << 0x17;
  }
  else {
    temp_v5 = *(unsigned int *)(((unsigned int)romwright_fabs_4(temp_v8) >> 0x17) * 4 + 0x4e31a0) |
            (((unsigned int)temp_v8 & 0x7fffff) >> 7) | (((unsigned int)temp_v8 >> 0x1f) << 0x17);
  }
  temp_v14 = (DAT_004e339c << 8) | (temp_v15 >> 0x10);
  temp_v17 = temp_v7 | (temp_v4 << 0x18);
  temp_v15 = temp_v15 << 0x10;
  temp_v12 = unaff_r8 | (temp_v2 << 0x18);
  temp_v18 = temp_v4 >> 8;
  temp_v13 = temp_v15 | (temp_v2 >> 8);
  temp_v0 = *(unsigned int *)(((param_1 >> 0x10) & 0xff) * 4 + 0x4e35a0);
  temp_v21 = *(unsigned int *)((param_1 >> 0x18) * 4 + 0x4e35a0) | (temp_v0 << 0x18);
  temp_v1 = *(unsigned int *)(((param_1 >> 8) & 0xff) * 4 + 0x4e35a0);
  temp_v22 = (temp_v1 << 0x10) | (temp_v0 >> 8);
  temp_v23 = (*(int *)((param_1 & 0xff) * 4 + 0x4e35a0) << 8) | (temp_v1 >> 0x10);
  temp_v16 = temp_v13;
  temp_v20 = temp_v18;
  temp_v24 = temp_v14;
  temp_v25 = param_1;
  temp_v26 = param_2;
  temp_v27 = param_3;
  temp_v28 = param_4;
  gpuSubmitVectorCommand(&temp_v12,&temp_v21,&temp_v17);
  temp_v12 = unaff_r8 | (temp_v3 << 0x18);
  temp_v17 = temp_v7 | (temp_v5 << 0x18);
  temp_v1 = temp_v15 | (temp_v3 >> 8);
  temp_v14 = temp_v24;
  temp_v7 = *(unsigned int *)(((temp_v26 >> 0x10) & 0xff) * 4 + 0x4e35a0);
  temp_v21 = *(unsigned int *)((temp_v26 >> 0x18) * 4 + 0x4e35a0) | (temp_v7 << 0x18);
  temp_v0 = *(unsigned int *)(((temp_v26 >> 8) & 0xff) * 4 + 0x4e35a0);
  temp_v22 = (temp_v0 << 0x10) | (temp_v7 >> 8);
  temp_v23 = (*(int *)((temp_v26 & 0xff) * 4 + 0x4e35a0) << 8) | (temp_v0 >> 0x10);
  temp_v13 = temp_v1;
  temp_v18 = temp_v5 >> 8;
  gpuSubmitVectorCommand(&temp_v12,&temp_v21,&temp_v17);
  temp_v12 = temp_v6 | (temp_v2 << 0x18);
  temp_v17 = temp_v19 | (temp_v4 << 0x18);
  temp_v13 = temp_v16;
  temp_v14 = temp_v24;
  temp_v18 = temp_v20;
  temp_v2 = *(unsigned int *)(((temp_v27 >> 0x10) & 0xff) * 4 + 0x4e35a0);
  temp_v21 = *(unsigned int *)((temp_v27 >> 0x18) * 4 + 0x4e35a0) | (temp_v2 << 0x18);
  temp_v7 = *(unsigned int *)(((temp_v27 >> 8) & 0xff) * 4 + 0x4e35a0);
  temp_v22 = (temp_v7 << 0x10) | (temp_v2 >> 8);
  temp_v23 = (*(int *)((temp_v27 & 0xff) * 4 + 0x4e35a0) << 8) | (temp_v7 >> 0x10);
  gpuSubmitVectorCommand(&temp_v12,&temp_v21,&temp_v17);
  temp_v12 = temp_v6 | (temp_v3 << 0x18);
  temp_v17 = temp_v19 | (temp_v5 << 0x18);
  temp_v14 = temp_v24;
  temp_v2 = *(unsigned int *)(((temp_v28 >> 0x10) & 0xff) * 4 + 0x4e35a0);
  temp_v21 = *(unsigned int *)((temp_v28 >> 0x18) * 4 + 0x4e35a0) | (temp_v2 << 0x18);
  temp_v6 = *(unsigned int *)(((temp_v28 >> 8) & 0xff) * 4 + 0x4e35a0);
  temp_v22 = (temp_v6 << 0x10) | (temp_v2 >> 8);
  temp_v23 = (*(int *)((temp_v28 & 0xff) * 4 + 0x4e35a0) << 8) | (temp_v6 >> 0x10);
  temp_v13 = temp_v1;
  temp_v18 = temp_v5 >> 8;
  gpuSubmitVectorCommand(&temp_v12,&temp_v21,&temp_v17);
  return;
}

} /* extern "C" */
