/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8a24` (_code @ 0x3f8a24, 0x8d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int effectDispatchSelector(...);
int efctSetSpeed(void);
int FUN_0018152c(...);
int FUN_001834a4(...);
int FUN_00183bb0(void);
int fontMeasureLineAdvance(...);
int drawSetColorFromRGBA8(void);
int renderCtxCalculateStereoParallax(unsigned int);
int markerKindGetColor(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int __aeabi_idivmod(...);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern unsigned char LAB_003f9308; /* 0x3f9308 */
extern unsigned char LAB_003f9310; /* 0x3f9310 */
extern unsigned char DAT_00528004; /* 0x528004 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: effectDispatchSelector. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: markerKindGetColor. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_003f8a24(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 18 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int unaff_r7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v8;
  float temp_v9;
  int temp_v10;
  float in_s1;
  int temp_v11;
  unsigned int in_s2;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned int temp_v14;
  long long temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned long long temp_v18;
  unsigned char temp_v19 [12];
  int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned long long temp_v24;
  
  temp_v21 = 2;
  efctSetSpeed();
  temp_v12 = 0.29f;
  temp_v9 = temp_v12;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v8 = (int)temp_v12;
  temp_v12 = temp_v9;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v17 = (int)temp_v9;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v13 = romwright_piece_4_4(in_s2,(int)temp_v12);
  temp_v16 = (int)in_s1;
  temp_v24 = romwright_piece_4_4(temp_v17,temp_v16);
  temp_v12 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    FUN_001835b4(2,0xc,0x9f,(int)(in_s0 + temp_v12),temp_v16,param_2);
  }
  else {
    FUN_001835b4(2,0xc,0x56,(int)(in_s0 + temp_v12),temp_v16,param_2);
  }
  temp_v12 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(2,0xc,0x57,(int)(in_s0 + temp_v12),(int)temp_v24,param_2);
  temp_v12 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(2,0xc,0x58,(int)(in_s0 + temp_v12),(int)temp_v24,param_2);
  temp_v5 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
  if (*(int *)(param_3 + 0x38) != 0) {
    markerKindGetColor((int)(short)*(unsigned int *)(param_3 + *(int *)(param_3 + 0x3c) * 4));
    drawSetColorFromRGBA8();
  }
  temp_v12 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0018152c((int)(short)*(unsigned int *)(param_3 + 0x48),
               (int)(*(float *)(param_1 + 0x36c) + in_s0 + temp_v12),
               (int)(*(float *)(param_1 + 0x370) + in_s1),param_2 + 5,0);
  FUN_00183bb0();
  if (*(char *)(param_3 + 0x44) != '\0') {
    temp_v16 = 0;
    do {
      if (*(int *)(param_3 + 0x38) <= temp_v16) break;
      __aeabi_idivmod(*(int *)(param_3 + 0x3c) + temp_v16);
      temp_v12 = (float)VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = param_1 + temp_v16 * 8;
      effectDispatchSelector((int)(short)*(unsigned int *)(param_3 + temp_v3 * 4),
                   (int)(*(float *)(temp_v17 + 0x374) + in_s0 + temp_v12),
                   (int)(*(float *)(temp_v17 + 0x378) + in_s1),param_2 + 5);
      temp_v16 = temp_v16 + 1;
    } while (temp_v16 < 3);
  }
  else {
    temp_v16 = 0;
    temp_v18 = (unsigned long long)(unsigned int)(*(float *)(param_3 + 0x40) * 3.0f);
    do {
      if (*(int *)(param_3 + 0x38) + 1 <= temp_v16) break;
      __aeabi_idivmod(*(int *)(param_3 + 0x3c) + temp_v16,*(int *)(param_3 + 0x38));
      efctSetSpeed();
      temp_v17 = param_1 + temp_v16 * 8;
      temp_v12 = (float)VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      effectDispatchSelector((int)(short)*(unsigned int *)(param_3 + temp_v2 * 4),
                   (int)(((*(float *)(temp_v17 + 0x374) + in_s0) - (float)temp_v18) + temp_v12),
                   (int)(*(float *)(temp_v17 + 0x378) + in_s1),param_2 + 5);
      temp_v16 = temp_v16 + 1;
    } while (temp_v16 < 4);
  }
  temp_v12 = (float)((unsigned long long)temp_v13 >> 0x20);
  efctSetSpeed();
  temp_v13 = 0x437f0000;
  temp_v14 = VectorFloatToUnsigned(temp_v12 * 255.0f,3);
  temp_v0 = (temp_v14 & 0xff) | 0xffffff00;
  FUN_001834a4(0xc,0x9b);
  temp_v15 = (unsigned long long)temp_v14 << 0x20;
  temp_v20 = param_2 + 5;
  temp_v16 = 0;
  do {
    temp_v17 = param_1 + temp_v16 * 0x10;
    VectorSignedToFloat(0xfb - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v17 + 0x398) + in_s1),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v17 + 0x394) + in_s0) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v0,*(unsigned int *)(temp_v16 * 4 + 0x5715b8));
    switch(temp_v16) {
    case 0:
      temp_v1 = (int)*(char *)(param_3 + 0x5a);
      temp_v7 = temp_v1 == 0;
      temp_v5 = temp_v4;
      if (0 < temp_v1) {
        temp_v5 = 0x528014;
      }
      if (temp_v1 < 0) {
        temp_v5 = 0x52800c;
        temp_v1 = -temp_v1;
      }
      if (!temp_v7) {
        textFormatBuffer(temp_v19,temp_v5,temp_v1);
      }
      else {
        textFormatBuffer(temp_v19,&DAT_00528004,temp_v1);
      }
      unaff_r7 = (int)*(char *)(param_3 + 0x5a);
      break;
    case 1:
      temp_v1 = (int)*(char *)(param_3 + 0x5d);
      temp_v7 = temp_v1 == 0;
      temp_v5 = temp_v4;
      if (0 < temp_v1) {
        temp_v5 = 0x528014;
      }
      if (temp_v1 < 0) {
        temp_v5 = 0x52800c;
        temp_v1 = -temp_v1;
      }
      if (!temp_v7) {
        textFormatBuffer(temp_v19,temp_v5,temp_v1);
      }
      else {
        textFormatBuffer(temp_v19,&DAT_00528004,temp_v1);
      }
      unaff_r7 = (int)*(char *)(param_3 + 0x5d);
      break;
    case 2:
      temp_v1 = (int)*(char *)(param_3 + 0x5b);
      temp_v7 = temp_v1 == 0;
      temp_v5 = temp_v4;
      if (0 < temp_v1) {
        temp_v5 = 0x528014;
      }
      if (temp_v1 < 0) {
        temp_v5 = 0x52800c;
        temp_v1 = -temp_v1;
      }
      if (!temp_v7) {
        textFormatBuffer(temp_v19,temp_v5,temp_v1);
      }
      else {
        textFormatBuffer(temp_v19,&DAT_00528004,temp_v1);
      }
      unaff_r7 = (int)*(char *)(param_3 + 0x5b);
      break;
    case 3:
      temp_v1 = (int)*(char *)(param_3 + 0x5c);
      temp_v7 = temp_v1 == 0;
      temp_v5 = temp_v4;
      if (0 < temp_v1) {
        temp_v5 = 0x528014;
      }
      if (temp_v1 < 0) {
        temp_v5 = 0x52800c;
        temp_v1 = -temp_v1;
      }
      if (!temp_v7) {
        textFormatBuffer(temp_v19,temp_v5,temp_v1);
      }
      else {
        textFormatBuffer(temp_v19,&DAT_00528004,temp_v1);
      }
      unaff_r7 = (int)*(char *)(param_3 + 0x5c);
      break;
    case 4:
      if (*(char *)(param_3 + 0x5e) != '\0') {
        textFormatBuffer(temp_v19,&LAB_003f9308);
      }
      else {
        textFormatBuffer(temp_v19,&LAB_003f9310);
      }
      unaff_r7 = 0;
    }
    if (unaff_r7 == 0) {
      temp_v22 = 0;
    }
    else {
      temp_v22 = 1;
    }
    temp_v1 = FUN_001834a4(0xc,temp_v16 + 0x94);
    temp_v23 = (int)**(short **)(temp_v1 + 0xc);
    puVar3 = temp_v19;
    fontMeasureLineAdvance(puVar3,2);
    temp_v6 = 0;
    temp_v1 = FUN_001834a4(0xc,0x9b);
    if (temp_v22 != 0) {
      temp_v6 = (int)**(short **)(temp_v1 + 0xc);
    }
    temp_v22 = (temp_v23 - (int)(puVar3 + temp_v6)) / 2;
    temp_v14 = temp_v0;
    if (*(char *)(param_3 + 0x4c) != '\0') {
      if (unaff_r7 < 0) {
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v9 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(temp_v21,0xc,0x9e,(int)(*(float *)(temp_v17 + 0x39c) + in_s0 + temp_v9) + temp_v8,
                     (int)(*(float *)(temp_v17 + 0x3a0) + temp_v12 + in_s1),temp_v20);
        temp_v1 = FUN_001834a4(0xc,0x9e);
        temp_v1 = *(int *)(temp_v1 + 0xc);
        temp_v12 = (float)temp_v13;
        temp_v10 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * temp_v12,3);
        temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * temp_v12,3);
        temp_v1 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * temp_v12,3);
        temp_v14 = (temp_v10 << 0x18) | (temp_v11 << 0x10) | (temp_v1 << 8) |
                 (unsigned int)((unsigned long long)temp_v15 >> 0x20);
      }
      else if (0 < unaff_r7) {
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v9 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(temp_v21,0xc,0x9d,(int)(*(float *)(temp_v17 + 0x39c) + in_s0 + temp_v9) + temp_v8,
                     (int)(*(float *)(temp_v17 + 0x3a0) + temp_v12 + in_s1),temp_v20);
        temp_v1 = FUN_001834a4(0xc,0x9d);
        temp_v1 = *(int *)(temp_v1 + 0xc);
        temp_v12 = (float)temp_v13;
        temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * temp_v12,3);
        temp_v10 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * temp_v12,3);
        temp_v1 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * temp_v12,3);
        temp_v14 = (temp_v11 << 0x18) | (temp_v10 << 0x10) | (temp_v1 << 8) |
                 (unsigned int)((unsigned long long)temp_v15 >> 0x20);
      }
    }
    else if (unaff_r7 < 0) {
      temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001835b4(temp_v21,0xc,0x9a,(int)(*(float *)(temp_v17 + 0x39c) + in_s0 + temp_v9) + temp_v8,
                   (int)(*(float *)(temp_v17 + 0x3a0) + temp_v12 + in_s1),temp_v20);
      temp_v1 = FUN_001834a4(0xc,0x9a);
      temp_v1 = *(int *)(temp_v1 + 0xc);
      temp_v12 = (float)temp_v13;
      temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * temp_v12,3);
      temp_v10 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * temp_v12,3);
      temp_v1 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * temp_v12,3);
      temp_v14 = (temp_v11 << 0x18) | (temp_v10 << 0x10) | (temp_v1 << 8) | (unsigned int)((unsigned long long)temp_v15 >> 0x20)
      ;
    }
    else if (0 < unaff_r7) {
      temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001835b4(temp_v21,0xc,0x99,(int)(*(float *)(temp_v17 + 0x39c) + in_s0 + temp_v9) + temp_v8,
                   (int)(*(float *)(temp_v17 + 0x3a0) + temp_v12 + in_s1),temp_v20);
      temp_v1 = FUN_001834a4(0xc,0x99);
      temp_v1 = *(int *)(temp_v1 + 0xc);
      temp_v12 = (float)temp_v13;
      temp_v10 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x10) * temp_v12,3);
      temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x14) * temp_v12,3);
      temp_v1 = VectorFloatToUnsigned(*(float *)(temp_v1 + 0x18) * temp_v12,3);
      temp_v14 = (temp_v10 << 0x18) | (temp_v11 << 0x10) | (temp_v1 << 8) | (unsigned int)((unsigned long long)temp_v15 >> 0x20)
      ;
    }
    temp_v12 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(0xfb - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v17 + 0x3a0) + in_s1),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(*(float *)(temp_v17 + 0x39c) + in_s0 + temp_v12 + temp_v9) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v14,temp_v19);
    temp_v16 = temp_v16 + 1;
    if (temp_v16 >= 5) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
