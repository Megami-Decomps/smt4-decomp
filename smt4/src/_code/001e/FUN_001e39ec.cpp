/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e39ec` (_code @ 0x1e39ec, 0x858 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025b754(void);
int FUN_0025ba8c(...);
int FUN_0025bab8(...);
int FUN_0025bae4(...);
int FUN_0025bb10(...);
int FUN_00282390(void);
int FUN_0028250c(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_13: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_13_stack;

extern unsigned char LAB_001e4248; /* 0x1e4248 */
extern unsigned char LAB_001e4258; /* 0x1e4258 */
extern unsigned char LAB_001e4268; /* 0x1e4268 */
extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_0049f91c; /* 0x49f91c */
extern unsigned int *DAT_0049f920; /* 0x49f920 */
extern short DAT_0049fb40; /* 0x49fb40 */
extern float DAT_004bdb1c; /* 0x4bdb1c */
extern float DAT_004bdb20; /* 0x4bdb20 */
extern float DAT_004bdb24; /* 0x4bdb24 */
extern float DAT_004bdb28; /* 0x4bdb28 */
extern float DAT_004bdb2c; /* 0x4bdb2c */
extern float DAT_004bdb30; /* 0x4bdb30 */
extern float DAT_004bdb34; /* 0x4bdb34 */
extern float DAT_004bdb38; /* 0x4bdb38 */
extern float DAT_004bdb3c; /* 0x4bdb3c */
extern float DAT_004bdb40; /* 0x4bdb40 */
extern float DAT_004bdb44; /* 0x4bdb44 */
extern float DAT_004bdb48; /* 0x4bdb48 */
extern float DAT_004bdb4c; /* 0x4bdb4c */
extern float DAT_004bdb50; /* 0x4bdb50 */
extern float DAT_004bdb54; /* 0x4bdb54 */
extern float DAT_004bdb58; /* 0x4bdb58 */
extern float DAT_004bdb5c; /* 0x4bdb5c */
extern float DAT_004bdb60; /* 0x4bdb60 */
extern float DAT_004bdb64; /* 0x4bdb64 */
extern float DAT_004bdb68; /* 0x4bdb68 */
extern float DAT_004bdb6c; /* 0x4bdb6c */
extern float DAT_004bdb70; /* 0x4bdb70 */
extern float DAT_004bdb74; /* 0x4bdb74 */
extern float DAT_004bdb78; /* 0x4bdb78 */
extern float DAT_004bdb7c; /* 0x4bdb7c */
extern float DAT_004bdb80; /* 0x4bdb80 */
extern float DAT_004bdb84; /* 0x4bdb84 */
extern float DAT_004bdb88; /* 0x4bdb88 */
extern float DAT_004bdb8c; /* 0x4bdb8c */
extern float DAT_004bdb90; /* 0x4bdb90 */
extern float DAT_004bdb94; /* 0x4bdb94 */
extern float DAT_004bdb98; /* 0x4bdb98 */
extern float DAT_004bdb9c; /* 0x4bdb9c */
extern float DAT_004bdba0; /* 0x4bdba0 */
extern float DAT_004bdba4; /* 0x4bdba4 */
extern float DAT_004bdba8; /* 0x4bdba8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0025b754. */
/* Supplied declaration required: FUN_0025ba8c. */
/* Supplied declaration required: FUN_0025bab8. */
/* Supplied declaration required: FUN_0025bae4. */
/* Supplied declaration required: FUN_0025bb10. */
extern unsigned int FUN_0025bb34(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */


void FUN_001e39ec(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10,unsigned int param_11,unsigned int param_12,
                 unsigned int param_13)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 11 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int *puVar15;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v14;
  float temp_v15;
  unsigned int in_s1;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  int temp_v40;
  int temp_v41;
  int temp_v42;
  float temp_v43;
  float temp_v44;
  unsigned int temp_v45;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v26 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v25 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v27 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v33 = 0.003921569f;
  temp_v37 = 1.0f;
  temp_v26 = temp_v26 * 0.003921569f;
  temp_v25 = temp_v25 * 0.003921569f;
  temp_v27 = temp_v27 * 0.003921569f;
  temp_v23 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = (float)VectorSignedToFloat(param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = (float)VectorSignedToFloat(param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v40 = 0;
  temp_v41 = 0;
  temp_v23 = temp_v23 * 0.003921569f;
  temp_v16 = temp_v16 * 0.003921569f;
  temp_v19 = temp_v19 * 0.003921569f;
  temp_v42 = 0;
  temp_v38 = in_s0 * 0.017453292f;
  temp_v14 = temp_v38;
  temp_v34 = temp_v37;
  temp_v35 = temp_v37;
  temp_v32 = temp_v37;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  temp_v45 = in_s1;
  FUN_0028250c();
  FUN_00282390();
  temp_v24 = (float)VectorSignedToFloat(param_8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v22 = (float)VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = (float)VectorSignedToFloat(param_11,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v36 = 0.8f;
  temp_v21 = (float)VectorSignedToFloat(param_10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorSignedToFloat(param_12,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v29 = 0.6f;
  temp_v39 = 0.3f;
  temp_v24 = temp_v24 * temp_v33;
  temp_v22 = temp_v22 * temp_v33;
  temp_v17 = temp_v17 * temp_v33;
  temp_v21 = temp_v21 * temp_v33;
  temp_v20 = (float)VectorSignedToFloat(param_13,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = temp_v15 * temp_v33;
  puVar15 = (unsigned int *)&DAT_0049f91c;
  if (DAT_0049f91c == 0x13) {
    puVar15 = DAT_0049f920;
  }
  temp_v20 = temp_v20 * temp_v33;
  temp_v30 = 0.4f;
  temp_v33 = 0.5f;
  temp_v18 = temp_v36;
  temp_v28 = temp_v39;
  temp_v31 = temp_v29;
  if ((DAT_0049f91c != 0x13 || puVar15 != (unsigned int *)0x1) || (*(int *)(DAT_00447e58 + 8) < 1)) {
    if (DAT_0049fb40 != -2) {
      if (DAT_0049fb40 != -1) {
        if (DAT_0049fb40 != 1) {
          if (DAT_0049fb40 == 2) {
            temp_v28 = 0.48000002f;
            temp_v27 = temp_v27 + 0.6f;
            temp_v26 = temp_v26 + 0.6f;
            temp_v25 = temp_v25 + 0.6f;
            temp_v23 = temp_v23 + 0.6f;
            temp_v19 = temp_v19 + 0.6f;
            temp_v15 = temp_v15 + 0.8f;
            temp_v16 = temp_v16 + 0.6f;
            temp_v24 = temp_v24 + 0.8f;
            temp_v22 = temp_v22 + 0.8f;
            temp_v21 = temp_v21 + 0.8f;
            temp_v17 = temp_v17 + 0.8f;
            temp_v20 = temp_v20 + 0.8f;
            temp_v31 = 0.96000004f;
            temp_v18 = 1.2800001f;
            temp_v30 = 0.64000005f;
            temp_v33 = temp_v36;
            temp_v36 = temp_v37;
          }
        }
        else {
          temp_v30 = 0.48000002f;
          temp_v24 = temp_v24 + 0.5f;
          temp_v27 = temp_v27 + 0.3f;
          temp_v26 = temp_v26 + 0.3f;
          temp_v25 = temp_v25 + 0.3f;
          temp_v17 = temp_v17 + 0.5f;
          temp_v23 = temp_v23 + 0.3f;
          temp_v19 = temp_v19 + 0.3f;
          temp_v16 = temp_v16 + 0.3f;
          temp_v22 = temp_v22 + 0.5f;
          temp_v21 = temp_v21 + 0.5f;
          temp_v15 = temp_v15 + 0.5f;
          temp_v20 = temp_v20 + 0.5f;
          temp_v31 = 0.72f;
          temp_v28 = 0.36f;
          temp_v18 = 0.96000004f;
          temp_v33 = temp_v29;
          temp_v36 = temp_v37;
        }
      }
      else {
        temp_v23 = temp_v23 * 0.5f;
        temp_v19 = temp_v19 * 0.5f;
        temp_v16 = temp_v16 * 0.5f;
        temp_v32 = temp_v32 * 0.5f;
        temp_v27 = temp_v27 * 0.4f;
        temp_v34 = temp_v34 * 0.5f;
        temp_v26 = temp_v26 * 0.4f;
        temp_v25 = temp_v25 * 0.4f;
        temp_v35 = temp_v35 * 0.5f;
        temp_v24 = temp_v24 * 0.4f;
        temp_v22 = temp_v22 * 0.4f;
        temp_v21 = temp_v21 * 0.4f;
        temp_v17 = temp_v17 * 0.5f;
        temp_v15 = temp_v15 * 0.5f;
        temp_v20 = temp_v20 * 0.5f;
        temp_v31 = 0.36f;
        temp_v28 = 0.18f;
        temp_v18 = 0.48000002f;
        temp_v30 = 0.24000001f;
        temp_v33 = temp_v39;
      }
    }
    else {
      temp_v33 = 0.2f;
      temp_v27 = temp_v27 * 0.2f;
      temp_v26 = temp_v26 * 0.2f;
      temp_v17 = temp_v17 * 0.2f;
      temp_v25 = temp_v25 * 0.2f;
      temp_v23 = temp_v23 * 0.2f;
      temp_v19 = temp_v19 * 0.2f;
      temp_v16 = temp_v16 * 0.2f;
      temp_v32 = temp_v32 * 0.2f;
      temp_v34 = temp_v34 * 0.2f;
      temp_v35 = temp_v35 * 0.2f;
      temp_v24 = temp_v24 * 0.2f;
      temp_v22 = temp_v22 * 0.2f;
      temp_v21 = temp_v21 * 0.2f;
      temp_v15 = temp_v15 * 0.2f;
      temp_v20 = temp_v20 * 0.2f;
      temp_v31 = 0.24000001f;
      temp_v28 = 0.120000005f;
      temp_v18 = 0.32000002f;
      temp_v30 = 0.16000001f;
    }
  }
  temp_v43 = temp_v27;
  if ((int)temp_v27 >= 0x3f800001) {
    temp_v43 = temp_v37;
  }
  if ((int)temp_v26 >= 0x3f800001) {
    temp_v26 = temp_v37;
  }
  if ((int)temp_v25 >= 0x3f800001) {
    temp_v25 = temp_v37;
  }
  temp_v44 = temp_v23;
  if ((int)temp_v23 >= 0x3f800001) {
    temp_v44 = temp_v37;
  }
  if ((int)temp_v19 >= 0x3f800001) {
    temp_v19 = temp_v37;
  }
  if ((int)temp_v16 >= 0x3f800001) {
    temp_v16 = temp_v37;
  }
  if ((int)temp_v32 >= 0x3f800001) {
    temp_v32 = temp_v37;
  }
  if ((int)temp_v34 >= 0x3f800001) {
    temp_v34 = temp_v37;
  }
  if ((int)temp_v35 >= 0x3f800001) {
    temp_v35 = temp_v37;
  }
  if ((int)temp_v24 >= 0x3f800001) {
    temp_v24 = temp_v37;
  }
  if ((int)temp_v22 >= 0x3f800001) {
    temp_v22 = temp_v37;
  }
  if ((int)temp_v21 >= 0x3f800001) {
    temp_v21 = temp_v37;
  }
  if ((int)temp_v17 >= 0x3f800001) {
    temp_v17 = temp_v37;
  }
  if ((int)temp_v15 >= 0x3f800001) {
    temp_v15 = temp_v37;
  }
  if ((int)temp_v20 >= 0x3f800001) {
    temp_v20 = temp_v37;
  }
  if ((unsigned int)temp_v18 >= 0x3f800001) {
    temp_v18 = temp_v37;
  }
  if ((unsigned int)temp_v31 >= 0x3f800001) {
    temp_v31 = temp_v37;
  }
  if ((unsigned int)temp_v30 >= 0x3f800001) {
    temp_v30 = temp_v37;
  }
  if ((unsigned int)temp_v28 >= 0x3f800001) {
    temp_v28 = temp_v37;
  }
  if ((unsigned int)temp_v33 >= 0x3f800001) {
    temp_v33 = temp_v37;
  }
  temp_v23 = temp_v43;
  temp_v27 = temp_v44;
  temp_v29 = temp_v37;
  temp_v39 = temp_v37;
  temp_v0 = temp_v37;
  temp_v1 = temp_v37;
  temp_v2 = temp_v36;
  temp_v3 = temp_v36;
  temp_v4 = temp_v37;
  temp_v5 = temp_v31;
  temp_v6 = temp_v37;
  temp_v7 = temp_v28;
  temp_v8 = temp_v37;
  temp_v9 = temp_v33;
  temp_v10 = temp_v33;
  temp_v11 = temp_v37;
  if (param_1 != 0) {
    temp_v23 = DAT_004bdb1c + (temp_v43 - DAT_004bdb1c) * 0.2f;
    temp_v26 = DAT_004bdb20 + (temp_v26 - DAT_004bdb20) * 0.2f;
    temp_v25 = DAT_004bdb24 + (temp_v25 - DAT_004bdb24) * 0.2f;
    temp_v37 = DAT_004bdb28;
    temp_v27 = DAT_004bdb2c + (temp_v44 - DAT_004bdb2c) * 0.2f;
    temp_v19 = DAT_004bdb30 + (temp_v19 - DAT_004bdb30) * 0.2f;
    temp_v16 = DAT_004bdb34 + (temp_v16 - DAT_004bdb34) * 0.2f;
    temp_v29 = DAT_004bdb38;
    temp_v32 = DAT_004bdb3c + (temp_v32 - DAT_004bdb3c) * 0.2f;
    temp_v34 = DAT_004bdb40 + (temp_v34 - DAT_004bdb40) * 0.2f;
    temp_v35 = DAT_004bdb44 + (temp_v35 - DAT_004bdb44) * 0.2f;
    temp_v39 = DAT_004bdb48;
    temp_v24 = DAT_004bdb4c + (temp_v24 - DAT_004bdb4c) * 0.2f;
    temp_v22 = DAT_004bdb50 + (temp_v22 - DAT_004bdb50) * 0.2f;
    temp_v21 = DAT_004bdb54 + (temp_v21 - DAT_004bdb54) * 0.2f;
    temp_v0 = DAT_004bdb58;
    temp_v17 = DAT_004bdb5c + (temp_v17 - DAT_004bdb5c) * 0.2f;
    temp_v15 = DAT_004bdb60 + (temp_v15 - DAT_004bdb60) * 0.2f;
    temp_v20 = DAT_004bdb64 + (temp_v20 - DAT_004bdb64) * 0.2f;
    temp_v1 = DAT_004bdb68;
    temp_v2 = DAT_004bdb6c + (temp_v36 - DAT_004bdb6c) * 0.2f;
    temp_v3 = DAT_004bdb70 + (temp_v36 - DAT_004bdb70) * 0.2f;
    temp_v36 = DAT_004bdb74 + (temp_v36 - DAT_004bdb74) * 0.2f;
    temp_v4 = DAT_004bdb78;
    temp_v18 = DAT_004bdb7c + (temp_v18 - DAT_004bdb7c) * 0.2f;
    temp_v5 = DAT_004bdb80 + (temp_v31 - DAT_004bdb80) * 0.2f;
    temp_v31 = DAT_004bdb84 + (temp_v31 - DAT_004bdb84) * 0.2f;
    temp_v6 = DAT_004bdb88;
    temp_v30 = DAT_004bdb8c + (temp_v30 - DAT_004bdb8c) * 0.2f;
    temp_v7 = DAT_004bdb90 + (temp_v28 - DAT_004bdb90) * 0.2f;
    temp_v28 = DAT_004bdb94 + (temp_v28 - DAT_004bdb94) * 0.2f;
    temp_v8 = DAT_004bdb98;
    temp_v9 = DAT_004bdb9c + (temp_v33 - DAT_004bdb9c) * 0.2f;
    temp_v10 = DAT_004bdba0 + (temp_v33 - DAT_004bdba0) * 0.2f;
    temp_v33 = DAT_004bdba4 + (temp_v33 - DAT_004bdba4) * 0.2f;
    temp_v11 = DAT_004bdba8;
  }
  DAT_004bdba8 = temp_v11;
  DAT_004bdba4 = temp_v33;
  DAT_004bdba0 = temp_v10;
  DAT_004bdb9c = temp_v9;
  DAT_004bdb98 = temp_v8;
  DAT_004bdb94 = temp_v28;
  DAT_004bdb90 = temp_v7;
  DAT_004bdb8c = temp_v30;
  DAT_004bdb88 = temp_v6;
  DAT_004bdb84 = temp_v31;
  DAT_004bdb80 = temp_v5;
  DAT_004bdb7c = temp_v18;
  DAT_004bdb78 = temp_v4;
  DAT_004bdb74 = temp_v36;
  DAT_004bdb70 = temp_v3;
  DAT_004bdb6c = temp_v2;
  DAT_004bdb68 = temp_v1;
  DAT_004bdb64 = temp_v20;
  DAT_004bdb60 = temp_v15;
  DAT_004bdb5c = temp_v17;
  DAT_004bdb58 = temp_v0;
  DAT_004bdb54 = temp_v21;
  DAT_004bdb50 = temp_v22;
  DAT_004bdb4c = temp_v24;
  DAT_004bdb48 = temp_v39;
  DAT_004bdb44 = temp_v35;
  DAT_004bdb40 = temp_v34;
  DAT_004bdb3c = temp_v32;
  DAT_004bdb38 = temp_v29;
  DAT_004bdb34 = temp_v16;
  DAT_004bdb30 = temp_v19;
  DAT_004bdb2c = temp_v27;
  DAT_004bdb28 = temp_v37;
  DAT_004bdb24 = temp_v25;
  DAT_004bdb20 = temp_v26;
  DAT_004bdb1c = temp_v23;
  temp_v13 = temp_v45;
  temp_v12 = FUN_0025bb34(1,&LAB_001e4248,0);
  temp_v40 = FUN_0025bb10(temp_v12,0);
  FUN_0025bae4(&temp_v40);
  FUN_0025bab8(&temp_v40);
  FUN_0025ba8c(&temp_v40);
  *(float *)(temp_v40 + 0x10c) = temp_v38;
  *(unsigned int *)(temp_v40 + 0x110) = temp_v13;
  *(float *)(temp_v40 + 0x114) = temp_v14;
  temp_v13 = FUN_0025bb34(1,&LAB_001e4258,0);
  temp_v41 = FUN_0025bb10(temp_v13,0);
  FUN_0025bae4(&temp_v41);
  FUN_0025bab8(&temp_v41);
  FUN_0025ba8c(&temp_v41);
  temp_v13 = FUN_0025bb34(1,&LAB_001e4268,0);
  temp_v42 = FUN_0025bb10(temp_v13,0);
  FUN_0025bae4(&temp_v42);
  FUN_0025bab8(&temp_v42);
  FUN_0025ba8c(&temp_v42);
  FUN_0025b754();
  return;
}

} /* extern "C" */
