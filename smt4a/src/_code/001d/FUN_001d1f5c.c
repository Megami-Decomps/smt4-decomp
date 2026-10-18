/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1f5c` (_code @ 0x1d1f5c, 0x378 bytes) from smt4a.cxi.
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
/* Supplied declaration required: FUN_001d326c. */
/* Supplied declaration required: FUN_001d3278. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_001d1f5c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  float *pfVar9;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23 [13];
  
  temp_v9 = *(char *)(param_1 + 5) != '\0';
  temp_v3 = 0;
  if (temp_v9) {
    temp_v3 = *(int *)(param_1 + 0x130);
  }
  if (temp_v9 && temp_v3 != 0) {
    if ((int)*(short *)(param_1 + 0x90) >= (int)*(short *)(param_1 + 0x8e)) {
      temp_v8 = (unsigned int)*(unsigned char *)(param_1 + 0x8d);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x8c);
      temp_v3 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_1 + 0x8d) - (unsigned int)temp_v0) *
                            (int)*(short *)(param_1 + 0x90));
      temp_v8 = (temp_v3 + (unsigned int)temp_v0) & 0xff;
    }
    if ((int)*(short *)(param_1 + 0x96) >= (int)*(short *)(param_1 + 0x94)) {
      temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x93);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x92);
      temp_v3 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_1 + 0x93) - (unsigned int)temp_v0) *
                            (int)*(short *)(param_1 + 0x96));
      temp_v4 = (temp_v3 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v3 = *(int *)(param_1 + 300);
    if ((int)*(short *)(temp_v3 + 0x7c) >= (int)*(short *)(temp_v3 + 0x7a)) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 0x79);
    }
    else {
      temp_v0 = *(unsigned char *)(temp_v3 + 0x78);
      temp_v6 = aeabi_idivmod(((unsigned int)*(unsigned char *)(temp_v3 + 0x79) - (unsigned int)temp_v0) *
                            (int)*(short *)(temp_v3 + 0x7c));
      temp_v5 = (temp_v6 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v7 = (int)*(short *)(param_1 + 0xa8);
    temp_v10 = (float)VectorUnsignedToFloat(temp_v8 * temp_v4 * temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v7;
    if (*(short *)(param_1 + 0xa6) <= temp_v7) {
      temp_v6 = (int)*(char *)(param_1 + 0xa5);
    }
    temp_v10 = *(float *)(param_1 + 8) * *(float *)(temp_v3 + 0x14) *
             temp_v10 * 4.881899e-07f * temp_v10 * 4.881899e-07f;
    if (temp_v7 < *(short *)(param_1 + 0xa6)) {
      temp_v1 = *(char *)(param_1 + 0xa4);
      temp_v2 = aeabi_idivmod(((int)*(char *)(param_1 + 0xa5) - (int)temp_v1) * temp_v6);
      temp_v6 = (int)(char)(temp_v2 + temp_v1);
    }
    temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (int)*(short *)(param_1 + 0x9c);
    temp_v6 = temp_v7;
    if (*(short *)(param_1 + 0x9a) <= temp_v7) {
      temp_v6 = (int)*(char *)(param_1 + 0x99);
    }
    temp_v12 = (float)VectorUnsignedToFloat
                              ((unsigned int)*(unsigned char *)(param_1 + 0xf1),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v17 = CONCAT44(*(float *)(temp_v3 + 0x18) * *(float *)(param_1 + 0xc),
                      temp_v11 * 0.0078125f * temp_v12);
    if (temp_v7 < *(short *)(param_1 + 0x9a)) {
      temp_v1 = *(char *)(param_1 + 0x98);
      temp_v2 = aeabi_idivmod(((int)*(char *)(param_1 + 0x99) - (int)temp_v1) * temp_v6);
      temp_v6 = (int)(char)(temp_v2 + temp_v1);
    }
    temp_v18 = 0.015873017f;
    temp_v21 = 1.0f;
    temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = temp_v12 * 0.015873017f;
    temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < 1.0f) << 0x1f) |
             ((unsigned int)(temp_v12 == 1.0f) << 0x1e);
    temp_v4 = temp_v8 | ((unsigned int)NAN(temp_v12) << 0x1c);
    temp_v0 = (unsigned char)(temp_v8 >> 0x18);
    temp_v11 = temp_v21;
    if (((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v4 >> 0x1c) & 1)) &&
       (temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(-1.0f <= temp_v12) << 0x1d), temp_v11 = temp_v12,
       !romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0))) {
      temp_v11 = -1.0f;
    }
    temp_v7 = (int)*(short *)(param_1 + 0xa2);
    temp_v6 = temp_v7;
    if (*(short *)(param_1 + 0xa0) <= temp_v7) {
      temp_v6 = (int)*(char *)(param_1 + 0x9f);
    }
    temp_v16 = CONCAT44(temp_v10,*(float *)(param_1 + 0x10) + *(float *)(temp_v3 + 0x1c) +
                             temp_v11 * *(float *)(param_1 + 0x18) * *(float *)(temp_v3 + 0x60));
    if (temp_v7 < *(short *)(param_1 + 0xa0)) {
      temp_v1 = *(char *)(param_1 + 0x9e);
      temp_v2 = aeabi_idivmod(((int)*(char *)(param_1 + 0x9f) - (int)temp_v1) * temp_v6);
      temp_v6 = (int)(char)(temp_v2 + temp_v1);
    }
    temp_v10 = 2.0f;
    temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v4 >> 0x16) & 3);
    temp_v11 = temp_v11 * temp_v18;
    temp_v8 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v11 < 2.0f) << 0x1f) | ((unsigned int)(temp_v11 == 2.0f) << 0x1e);
    temp_v5 = temp_v8 | ((unsigned int)NAN(temp_v11) << 0x1c);
    temp_v0 = (unsigned char)(temp_v8 >> 0x18);
    if (((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(temp_v5 >> 0x1c) & 1)) &&
       (temp_v5 = (temp_v4 & 0xfffffff) | ((unsigned int)(0.0f <= temp_v11) << 0x1d), temp_v10 = temp_v11,
       !romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0))) {
      temp_v10 = 0.0f;
    }
    temp_v6 = (int)*(char *)(param_1 + 0xfe);
    if (*(unsigned char *)(temp_v3 + 0x2c) != 0xff) {
      temp_v6 = (int)*(char *)(temp_v3 + 0x2c);
    }
    temp_v19 = CONCAT44(*(float *)(param_1 + 0x104) + *(float *)(temp_v3 + 0x24),
                      temp_v10 + *(float *)(param_1 + 0x14) + *(float *)(temp_v3 + 0x20));
    temp_v8 = 0;
    temp_v10 = (float)VectorUnsignedToFloat((unsigned int)*(unsigned char *)(param_1 + 0xff),(unsigned char)(temp_v5 >> 0x16) & 3)
    ;
    temp_v21 = temp_v10 * 0.007874016f - temp_v21;
    temp_v22 = CONCAT44(temp_v21,0x3c010204);
    temp_v20 = (unsigned long long)(unsigned int)(temp_v21 + *(float *)(temp_v3 + 0x30));
    do {
      FUN_001d3278(*(unsigned int *)(param_1 + 300),temp_v8 & 0xff);
      temp_v3 = param_1 + temp_v8;
      pfVar9 = temp_v23 + temp_v8;
      temp_v8 = temp_v8 + 1;
      temp_v11 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned char *)(temp_v3 + 0x100),(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v10 = temp_v10 + temp_v11 * (float)temp_v22;
      *pfVar9 = temp_v10;
    } while ((int)temp_v8 < 2);
    for (temp_v3 = *(int *)(param_1 + 0x130); temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0x1ac)) {
      *(int *)(temp_v3 + 0x140) = (int)((unsigned long long)temp_v16 >> 0x20);
      *(int *)(temp_v3 + 0x164) = (int)temp_v17;
      *(int *)(temp_v3 + 0x144) = (int)((unsigned long long)temp_v17 >> 0x20);
      *(int *)(temp_v3 + 0x148) = (int)temp_v16;
      *(int *)(temp_v3 + 0x14c) = (int)temp_v19;
      *(int *)(temp_v3 + 0x150) = (int)((unsigned long long)temp_v19 >> 0x20);
      FUN_001d326c(temp_v3,temp_v6);
      *(int *)(temp_v3 + 0x158) = (int)temp_v20;
      *(float *)(temp_v3 + 0x15c) = temp_v23[0];
      *(float *)(temp_v3 + 0x160) = temp_v23[1];
      temp_v13 = *(unsigned int *)(param_1 + 0xb0);
      temp_v14 = *(unsigned int *)(param_1 + 0xb4);
      temp_v15 = *(unsigned int *)(param_1 + 0xb8);
      *(unsigned int *)(temp_v3 + 0xb4) = *(unsigned int *)(param_1 + 0xac);
      *(unsigned int *)(temp_v3 + 0xb8) = temp_v13;
      *(unsigned int *)(temp_v3 + 0xbc) = temp_v14;
      *(unsigned int *)(temp_v3 + 0xc0) = temp_v15;
      *(unsigned char *)(temp_v3 + 0x134) = *(unsigned char *)(param_1 + 0xec);
      temp_v13 = *(unsigned int *)(param_1 + 0xc0);
      temp_v14 = *(unsigned int *)(param_1 + 0xc4);
      temp_v15 = *(unsigned int *)(param_1 + 200);
      *(unsigned int *)(temp_v3 + 0xd4) = *(unsigned int *)(param_1 + 0xbc);
      *(unsigned int *)(temp_v3 + 0xd8) = temp_v13;
      *(unsigned int *)(temp_v3 + 0xdc) = temp_v14;
      *(unsigned int *)(temp_v3 + 0xe0) = temp_v15;
      *(unsigned char *)(temp_v3 + 0x135) = *(unsigned char *)(param_1 + 0xed);
      temp_v13 = *(unsigned int *)(param_1 + 0xd0);
      temp_v14 = *(unsigned int *)(param_1 + 0xd4);
      temp_v15 = *(unsigned int *)(param_1 + 0xd8);
      *(unsigned int *)(temp_v3 + 0xf4) = *(unsigned int *)(param_1 + 0xcc);
      *(unsigned int *)(temp_v3 + 0xf8) = temp_v13;
      *(unsigned int *)(temp_v3 + 0xfc) = temp_v14;
      *(unsigned int *)(temp_v3 + 0x100) = temp_v15;
      *(unsigned char *)(temp_v3 + 0x136) = *(unsigned char *)(param_1 + 0xee);
      temp_v13 = *(unsigned int *)(param_1 + 0xdc);
      temp_v14 = *(unsigned int *)(param_1 + 0xe0);
      temp_v15 = *(unsigned int *)(param_1 + 0xe4);
      *(unsigned int *)(temp_v3 + 0x120) = *(unsigned int *)(param_1 + 0xe8);
      *(unsigned int *)(temp_v3 + 0x114) = temp_v13;
      *(unsigned int *)(temp_v3 + 0x118) = temp_v14;
      *(unsigned int *)(temp_v3 + 0x11c) = temp_v15;
      *(unsigned char *)(temp_v3 + 0x137) = *(unsigned char *)(param_1 + 0xef);
    }
  }
  return;
}
