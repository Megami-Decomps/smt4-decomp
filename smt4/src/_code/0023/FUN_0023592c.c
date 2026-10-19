/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023592c` (_code @ 0x23592c, 0x2d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0037fb78. */
/* Supplied declaration required: FUN_003e7204. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0023592c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float *pfVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  char temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23 [13];
  
  temp_v10 = *(char *)(param_1 + 5) != '\0';
  temp_v2 = 0;
  if (temp_v10) {
    temp_v2 = *(int *)(param_1 + 0xc4);
  }
  if (temp_v10 && temp_v2 != 0) {
    if ((int)*(short *)(param_1 + 0x70) >= (int)*(short *)(param_1 + 0x6e)) {
      temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x6d);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x6c);
      temp_v2 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_1 + 0x6d) - (unsigned int)temp_v0) *
                            (int)*(short *)(param_1 + 0x70));
      temp_v3 = (temp_v2 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v7 = *(int *)(param_1 + 0xc0);
    temp_v4 = (int)*(short *)(param_1 + 0x82);
    temp_v2 = temp_v4;
    if (*(short *)(param_1 + 0x80) <= temp_v4) {
      temp_v2 = (int)*(char *)(param_1 + 0x7f);
    }
    temp_v13 = (float)VectorUnsignedToFloat
                              (temp_v3 * (int)(short)(unsigned short)*(unsigned char *)(param_1 + 0x84) *
                                       (int)(short)(unsigned short)*(unsigned char *)(temp_v7 + 0x74),
                               (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = *(float *)(param_1 + 8) * *(float *)(temp_v7 + 0x14) *
             temp_v13 * 4.881899e-07f * temp_v13 * 4.881899e-07f;
    if (temp_v4 < *(short *)(param_1 + 0x80)) {
      temp_v8 = *(char *)(param_1 + 0x7e);
      temp_v1 = aeabi_idivmod(((int)*(char *)(param_1 + 0x7f) - (int)temp_v8) * temp_v2);
      temp_v2 = (int)(char)(temp_v1 + temp_v8);
    }
    temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (int)*(short *)(param_1 + 0x76);
    temp_v2 = temp_v4;
    if (*(short *)(param_1 + 0x74) <= temp_v4) {
      temp_v2 = (int)*(char *)(param_1 + 0x73);
    }
    temp_v15 = (float)VectorUnsignedToFloat
                              ((unsigned int)*(unsigned char *)(param_1 + 0x86),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v17 = CONCAT44(*(float *)(temp_v7 + 0x18) * *(float *)(param_1 + 0xc),
                      temp_v14 * 0.0078125f * temp_v15);
    if (temp_v4 < *(short *)(param_1 + 0x74)) {
      temp_v8 = *(char *)(param_1 + 0x72);
      temp_v1 = aeabi_idivmod(((int)*(char *)(param_1 + 0x73) - (int)temp_v8) * temp_v2);
      temp_v2 = (int)(char)(temp_v1 + temp_v8);
    }
    temp_v18 = 0.015873017f;
    temp_v21 = 1.0f;
    temp_v15 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v15 = temp_v15 * 0.015873017f;
    temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < 1.0f) << 0x1f) |
            ((unsigned int)(temp_v15 == 1.0f) << 0x1e);
    temp_v11 = temp_v3 | ((unsigned int)(temp_v15 != temp_v15) << 0x1c);
    temp_v0 = (unsigned char)(temp_v3 >> 0x18);
    temp_v14 = temp_v21;
    if (((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v11 >> 0x1c) & 1)) &&
       (temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(-1.0f <= temp_v15) << 0x1d), temp_v14 = temp_v15,
       !romwright_subpiece_4_1_0(temp_v11 >> 0x1d,0))) {
      temp_v14 = -1.0f;
    }
    temp_v4 = (int)*(short *)(param_1 + 0x7c);
    temp_v2 = temp_v4;
    if (*(short *)(param_1 + 0x7a) <= temp_v4) {
      temp_v2 = (int)*(char *)(param_1 + 0x79);
    }
    temp_v16 = CONCAT44(temp_v13,*(float *)(param_1 + 0x10) + *(float *)(temp_v7 + 0x1c) +
                             temp_v14 * *(float *)(param_1 + 0x18) * *(float *)(temp_v7 + 0x60));
    if (temp_v4 < *(short *)(param_1 + 0x7a)) {
      temp_v8 = *(char *)(param_1 + 0x78);
      temp_v1 = aeabi_idivmod(((int)*(char *)(param_1 + 0x79) - (int)temp_v8) * temp_v2);
      temp_v2 = (int)(char)(temp_v1 + temp_v8);
    }
    temp_v13 = 2.0f;
    temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v14 = temp_v14 * temp_v18;
    temp_v3 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 < 2.0f) << 0x1f) | ((unsigned int)(temp_v14 == 2.0f) << 0x1e);
    temp_v12 = temp_v3 | ((unsigned int)(temp_v14 != temp_v14) << 0x1c);
    temp_v0 = (unsigned char)(temp_v3 >> 0x18);
    if (((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v12 >> 0x1c) & 1)) &&
       (temp_v12 = (temp_v11 & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d), temp_v13 = temp_v14,
       !romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0))) {
      temp_v13 = 0.0f;
    }
    temp_v8 = *(char *)(param_1 + 0x95);
    if (*(char *)(temp_v7 + 0x2c) != '\0') {
      temp_v8 = *(char *)(temp_v7 + 0x2c);
    }
    temp_v19 = CONCAT44(*(float *)(param_1 + 0x98) + *(float *)(temp_v7 + 0x24),
                      temp_v13 + *(float *)(param_1 + 0x14) + *(float *)(temp_v7 + 0x20));
    temp_v3 = 0;
    temp_v13 = (float)VectorUnsignedToFloat
                              ((unsigned int)*(unsigned char *)(param_1 + 0x92),(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v21 = temp_v13 * 0.007874016f - temp_v21;
    temp_v22 = CONCAT44(temp_v21,0x3c010204);
    temp_v20 = (unsigned long long)(unsigned int)(temp_v21 + *(float *)(temp_v7 + 0x30));
    do {
      FUN_003e7204(*(unsigned int *)(param_1 + 0xc0),temp_v3 & 0xff);
      temp_v2 = param_1 + temp_v3;
      pfVar6 = temp_v23 + temp_v3;
      temp_v3 = temp_v3 + 1;
      temp_v14 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned char *)(temp_v2 + 0x93),(unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v13 = temp_v13 + temp_v14 * (float)temp_v22;
      *pfVar6 = temp_v13;
    } while ((int)temp_v3 < 2);
    for (temp_v2 = *(int *)(param_1 + 0xc4); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0x138)) {
      *(int *)(temp_v2 + 0xcc) = (int)((unsigned long long)temp_v16 >> 0x20);
      *(int *)(temp_v2 + 0xf0) = (int)temp_v17;
      *(int *)(temp_v2 + 0xd0) = (int)((unsigned long long)temp_v17 >> 0x20);
      *(int *)(temp_v2 + 0xd4) = (int)temp_v16;
      *(int *)(temp_v2 + 0xd8) = (int)temp_v19;
      *(int *)(temp_v2 + 0xdc) = (int)((unsigned long long)temp_v19 >> 0x20);
      FUN_0037fb78(temp_v2,temp_v8);
      *(int *)(temp_v2 + 0xe4) = (int)temp_v20;
      *(float *)(temp_v2 + 0xe8) = temp_v23[0];
      *(float *)(temp_v2 + 0xec) = temp_v23[1];
      temp_v5 = *(unsigned int *)(param_1 + 0x54);
      temp_v6 = *(unsigned int *)(param_1 + 0x58);
      temp_v9 = *(unsigned int *)(param_1 + 0x5c);
      *(unsigned int *)(temp_v2 + 0xb8) = *(unsigned int *)(param_1 + 0x60);
      *(unsigned int *)(temp_v2 + 0xac) = temp_v5;
      *(unsigned int *)(temp_v2 + 0xb0) = temp_v6;
      *(unsigned int *)(temp_v2 + 0xb4) = temp_v9;
      *(unsigned char *)(temp_v2 + 0xc4) = *(unsigned char *)(param_1 + 100);
    }
  }
  return;
}
