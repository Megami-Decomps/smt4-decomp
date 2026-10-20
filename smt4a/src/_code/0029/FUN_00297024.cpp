/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297024` (_code @ 0x297024, 0x924 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016b034(unsigned int, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0033f42c(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
} param_7_stack;

extern unsigned char LAB_00297948; /* 0x297948 */
extern unsigned char LAB_00297958; /* 0x297958 */
extern unsigned char LAB_00297968; /* 0x297968 */
extern int DAT_0056fcc0; /* 0x56fcc0 */
extern short DAT_005f1854; /* 0x5f1854 */
extern float DAT_00610a74; /* 0x610a74 */
extern float DAT_00610a78; /* 0x610a78 */
extern float DAT_00610a7c; /* 0x610a7c */
extern float DAT_00610a80; /* 0x610a80 */
extern float DAT_00610a84; /* 0x610a84 */
extern float DAT_00610a88; /* 0x610a88 */
extern float DAT_00610a8c; /* 0x610a8c */
extern float DAT_00610a90; /* 0x610a90 */
extern float DAT_00610a94; /* 0x610a94 */
extern float DAT_00610a98; /* 0x610a98 */
extern float DAT_00610a9c; /* 0x610a9c */
extern float DAT_00610aa0; /* 0x610aa0 */
extern float DAT_00610aa4; /* 0x610aa4 */
extern float DAT_00610aa8; /* 0x610aa8 */
extern float DAT_00610aac; /* 0x610aac */
extern float DAT_00610ab0; /* 0x610ab0 */
extern float DAT_00610ab4; /* 0x610ab4 */
extern float DAT_00610ab8; /* 0x610ab8 */
extern float DAT_00610abc; /* 0x610abc */
extern float DAT_00610ac0; /* 0x610ac0 */
extern float DAT_00610ac4; /* 0x610ac4 */
extern float DAT_00610ac8; /* 0x610ac8 */
extern float DAT_00610acc; /* 0x610acc */
extern float DAT_00610ad0; /* 0x610ad0 */
extern float DAT_00610ad4; /* 0x610ad4 */
extern float DAT_00610ad8; /* 0x610ad8 */
extern float DAT_00610adc; /* 0x610adc */
extern float DAT_00610ae0; /* 0x610ae0 */
extern float DAT_00610ae4; /* 0x610ae4 */
extern float DAT_00610ae8; /* 0x610ae8 */
extern float DAT_00610aec; /* 0x610aec */
extern float DAT_00610af0; /* 0x610af0 */
extern float DAT_00610af4; /* 0x610af4 */
extern float DAT_00610af8; /* 0x610af8 */
extern float DAT_00610afc; /* 0x610afc */
extern float DAT_00610b00; /* 0x610b00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0016b034. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0033f42c. */
extern int FUN_00406708(unsigned int, int, unsigned char *);
extern short FUN_00406798(unsigned int, unsigned char *);


void FUN_00297024(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_stack_00000018, in_stack_0000001c, in_stack_00000020; 7 native warning(s); review required */
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
  float temp_v12;
  float temp_v13;
  float temp_v14;
  short temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v18;
  float temp_v19;
  int temp_v20;
  unsigned int in_s1;
  float temp_v21;
  int temp_v22;
  int temp_v23;
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
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  unsigned int in_stack_00000018;
  unsigned int in_stack_0000001c;
  unsigned int in_stack_00000020;
  
  temp_v37 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v38 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v36 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v34 = in_s0 * 0.017453292f;
  temp_v42 = 255.0f;
  temp_v39 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v40 = (float)VectorSignedToFloat(param_6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v41 = (float)VectorSignedToFloat(param_7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = *(unsigned int *)(DAT_0056fcc0 + 4);
  temp_v18 = temp_v34;
  temp_v32 = temp_v42;
  temp_v33 = temp_v42;
  temp_v43 = temp_v42;
  FUN_001bc124();
  FUN_001bbf0c();
  temp_v25 = (float)VectorSignedToFloat(in_stack_00000018,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v26 = (float)VectorSignedToFloat(in_stack_0000001c,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v27 = (float)VectorSignedToFloat(in_stack_00000020,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v30 = 204.0f;
  if (DAT_005f1854 != -2) {
    temp_v31 = 122.4f;
    if (DAT_005f1854 != -1) {
      if (DAT_005f1854 != 1) {
        temp_v19 = 127.5f;
        temp_v21 = 153.0f;
        temp_v24 = 76.5f;
        temp_v28 = temp_v30;
        temp_v29 = 102.0f;
        temp_v35 = temp_v43;
        if (DAT_005f1854 == 2) {
          temp_v36 = temp_v36 + 153.0f;
          temp_v37 = temp_v37 + 153.0f;
          temp_v38 = temp_v38 + 153.0f;
          temp_v39 = temp_v39 + 153.0f;
          temp_v40 = temp_v40 + 153.0f;
          temp_v41 = temp_v41 + 153.0f;
          temp_v25 = temp_v25 + 204.0f;
          temp_v26 = temp_v26 + 204.0f;
          temp_v27 = temp_v27 + 204.0f;
          temp_v19 = temp_v30;
          temp_v21 = 244.8f;
          temp_v24 = temp_v31;
          temp_v28 = 326.4f;
          temp_v29 = 163.2f;
          temp_v30 = 255.0f;
          temp_v35 = 459.0f;
        }
      }
      else {
        temp_v36 = temp_v36 + 76.5f;
        temp_v37 = temp_v37 + 76.5f;
        temp_v38 = temp_v38 + 76.5f;
        temp_v39 = temp_v39 + 76.5f;
        temp_v40 = temp_v40 + 76.5f;
        temp_v41 = temp_v41 + 76.5f;
        temp_v25 = temp_v25 + 127.5f;
        temp_v26 = temp_v26 + 127.5f;
        temp_v27 = temp_v27 + 127.5f;
        temp_v30 = 255.0f;
        temp_v19 = 153.0f;
        temp_v21 = 183.6f;
        temp_v24 = 91.8f;
        temp_v28 = 244.8f;
        temp_v29 = temp_v31;
        temp_v35 = 382.5f;
      }
    }
    else {
      temp_v39 = temp_v39 * 0.5f;
      temp_v40 = temp_v40 * 0.5f;
      temp_v41 = temp_v41 * 0.5f;
      temp_v32 = temp_v32 * 0.5f;
      temp_v33 = temp_v33 * 0.5f;
      temp_v36 = temp_v36 * 0.4f;
      temp_v37 = temp_v37 * 0.4f;
      temp_v38 = temp_v38 * 0.4f;
      temp_v42 = temp_v42 * 0.5f;
      temp_v25 = temp_v25 * 0.5f;
      temp_v26 = temp_v26 * 0.5f;
      temp_v27 = temp_v27 * 0.5f;
      temp_v24 = 45.9f;
      temp_v19 = 76.5f;
      temp_v21 = 91.8f;
      temp_v28 = temp_v31;
      temp_v29 = 61.2f;
      temp_v35 = 102.0f;
    }
  }
  else {
    temp_v19 = 51.0f;
    temp_v24 = 30.6f;
    temp_v36 = temp_v36 * 0.2f;
    temp_v37 = temp_v37 * 0.2f;
    temp_v38 = temp_v38 * 0.2f;
    temp_v39 = temp_v39 * 0.2f;
    temp_v40 = temp_v40 * 0.2f;
    temp_v41 = temp_v41 * 0.2f;
    temp_v32 = temp_v32 * 0.2f;
    temp_v33 = temp_v33 * 0.2f;
    temp_v42 = temp_v42 * 0.2f;
    temp_v25 = temp_v25 * 0.2f;
    temp_v26 = temp_v26 * 0.2f;
    temp_v27 = temp_v27 * 0.2f;
    temp_v28 = 81.6f;
    temp_v29 = 40.8f;
    temp_v21 = 61.2f;
    temp_v35 = temp_v19;
  }
  if ((int)temp_v36 >= 0x437f0001) {
    temp_v36 = 255.0f;
  }
  if ((int)temp_v37 >= 0x437f0001) {
    temp_v37 = 255.0f;
  }
  if ((int)temp_v38 >= 0x437f0001) {
    temp_v38 = 255.0f;
  }
  if ((int)temp_v39 >= 0x437f0001) {
    temp_v39 = 255.0f;
  }
  if ((int)temp_v40 >= 0x437f0001) {
    temp_v40 = 255.0f;
  }
  if ((int)temp_v41 >= 0x437f0001) {
    temp_v41 = 255.0f;
  }
  if ((int)temp_v32 >= 0x437f0001) {
    temp_v32 = 255.0f;
  }
  if ((int)temp_v33 >= 0x437f0001) {
    temp_v33 = 255.0f;
  }
  if ((int)temp_v42 >= 0x437f0001) {
    temp_v42 = 255.0f;
  }
  if ((int)temp_v35 >= 0x437f0001) {
    temp_v35 = 255.0f;
  }
  if ((int)temp_v25 >= 0x437f0001) {
    temp_v25 = 255.0f;
  }
  if ((int)temp_v26 >= 0x437f0001) {
    temp_v26 = 255.0f;
  }
  if ((int)temp_v27 >= 0x437f0001) {
    temp_v27 = 255.0f;
  }
  if ((unsigned int)temp_v28 >= 0x437f0001) {
    temp_v28 = 255.0f;
  }
  if ((unsigned int)temp_v21 >= 0x437f0001) {
    temp_v21 = 255.0f;
  }
  if ((unsigned int)temp_v29 >= 0x437f0001) {
    temp_v29 = 255.0f;
  }
  if ((unsigned int)temp_v24 >= 0x437f0001) {
    temp_v24 = 255.0f;
  }
  if ((unsigned int)temp_v19 >= 0x437f0001) {
    temp_v19 = 255.0f;
  }
  temp_v31 = temp_v43;
  temp_v0 = temp_v43;
  temp_v1 = temp_v35;
  temp_v2 = temp_v35;
  temp_v3 = temp_v43;
  temp_v4 = temp_v43;
  temp_v5 = temp_v30;
  temp_v6 = temp_v30;
  temp_v7 = temp_v43;
  temp_v8 = temp_v21;
  temp_v9 = temp_v43;
  temp_v10 = temp_v24;
  temp_v11 = temp_v43;
  temp_v12 = temp_v19;
  temp_v13 = temp_v19;
  temp_v14 = temp_v43;
  if (param_1 != 0) {
    temp_v36 = DAT_00610a74 + (temp_v36 - DAT_00610a74) * 0.2f;
    temp_v37 = DAT_00610a78 + (temp_v37 - DAT_00610a78) * 0.2f;
    temp_v38 = DAT_00610a7c + (temp_v38 - DAT_00610a7c) * 0.2f;
    temp_v43 = DAT_00610a80;
    temp_v39 = DAT_00610a84 + (temp_v39 - DAT_00610a84) * 0.2f;
    temp_v40 = DAT_00610a88 + (temp_v40 - DAT_00610a88) * 0.2f;
    temp_v41 = DAT_00610a8c + (temp_v41 - DAT_00610a8c) * 0.2f;
    temp_v31 = DAT_00610a90;
    temp_v32 = DAT_00610a94 + (temp_v32 - DAT_00610a94) * 0.2f;
    temp_v33 = DAT_00610a98 + (temp_v33 - DAT_00610a98) * 0.2f;
    temp_v42 = DAT_00610a9c + (temp_v42 - DAT_00610a9c) * 0.2f;
    temp_v0 = DAT_00610aa0;
    temp_v1 = DAT_00610aa4 + (temp_v35 - DAT_00610aa4) * 0.2f;
    temp_v2 = DAT_00610aa8 + (temp_v35 - DAT_00610aa8) * 0.2f;
    temp_v35 = DAT_00610aac + (temp_v35 - DAT_00610aac) * 0.2f;
    temp_v3 = DAT_00610ab0;
    temp_v25 = DAT_00610ab4 + (temp_v25 - DAT_00610ab4) * 0.2f;
    temp_v26 = DAT_00610ab8 + (temp_v26 - DAT_00610ab8) * 0.2f;
    temp_v27 = DAT_00610abc + (temp_v27 - DAT_00610abc) * 0.2f;
    temp_v4 = DAT_00610ac0;
    temp_v5 = DAT_00610ac4 + (temp_v30 - DAT_00610ac4) * 0.2f;
    temp_v6 = DAT_00610ac8 + (temp_v30 - DAT_00610ac8) * 0.2f;
    temp_v30 = DAT_00610acc + (temp_v30 - DAT_00610acc) * 0.2f;
    temp_v7 = DAT_00610ad0;
    temp_v28 = DAT_00610ad4 + (temp_v28 - DAT_00610ad4) * 0.2f;
    temp_v8 = DAT_00610ad8 + (temp_v21 - DAT_00610ad8) * 0.2f;
    temp_v21 = DAT_00610adc + (temp_v21 - DAT_00610adc) * 0.2f;
    temp_v9 = DAT_00610ae0;
    temp_v29 = DAT_00610ae4 + (temp_v29 - DAT_00610ae4) * 0.2f;
    temp_v24 = DAT_00610ae8 + (temp_v24 - DAT_00610ae8) * 0.2f;
    temp_v10 = DAT_00610aec + (temp_v24 - DAT_00610aec) * 0.2f;
    temp_v11 = DAT_00610af0;
    temp_v19 = DAT_00610af4 + (temp_v19 - DAT_00610af4) * 0.2f;
    temp_v12 = DAT_00610af8 + (temp_v19 - DAT_00610af8) * 0.2f;
    temp_v13 = DAT_00610afc + (temp_v19 - DAT_00610afc) * 0.2f;
    temp_v14 = DAT_00610b00;
  }
  DAT_00610b00 = temp_v14;
  DAT_00610afc = temp_v13;
  DAT_00610af8 = temp_v12;
  DAT_00610af4 = temp_v19;
  DAT_00610af0 = temp_v11;
  DAT_00610aec = temp_v10;
  DAT_00610ae8 = temp_v24;
  DAT_00610ae4 = temp_v29;
  DAT_00610ae0 = temp_v9;
  DAT_00610adc = temp_v21;
  DAT_00610ad8 = temp_v8;
  DAT_00610ad4 = temp_v28;
  DAT_00610ad0 = temp_v7;
  DAT_00610acc = temp_v30;
  DAT_00610ac8 = temp_v6;
  DAT_00610ac4 = temp_v5;
  DAT_00610ac0 = temp_v4;
  DAT_00610abc = temp_v27;
  DAT_00610ab8 = temp_v26;
  DAT_00610ab4 = temp_v25;
  DAT_00610ab0 = temp_v3;
  DAT_00610aac = temp_v35;
  DAT_00610aa8 = temp_v2;
  DAT_00610aa4 = temp_v1;
  DAT_00610aa0 = temp_v0;
  DAT_00610a9c = temp_v42;
  DAT_00610a98 = temp_v33;
  DAT_00610a94 = temp_v32;
  DAT_00610a90 = temp_v31;
  DAT_00610a8c = temp_v41;
  DAT_00610a88 = temp_v40;
  DAT_00610a84 = temp_v39;
  DAT_00610a80 = temp_v43;
  DAT_00610a7c = temp_v38;
  DAT_00610a78 = temp_v37;
  DAT_00610a74 = temp_v36;
  temp_v15 = FUN_00406798(temp_v16,&LAB_00297948);
  temp_v17 = FUN_00406708(temp_v16,(int)temp_v15,&LAB_00297948);
  temp_v22 = (int)DAT_00610a78;
  temp_v20 = (int)DAT_00610a7c;
  *(char *)(temp_v17 + 0x3c) = (char)(int)DAT_00610a74;
  *(char *)(temp_v17 + 0x3d) = (char)temp_v22;
  *(char *)(temp_v17 + 0x3e) = (char)temp_v20;
  *(unsigned char *)(temp_v17 + 0x3f) = 0xff;
  temp_v20 = (int)DAT_00610a88;
  temp_v22 = (int)DAT_00610a8c;
  *(char *)(temp_v17 + 0x40) = (char)(int)DAT_00610a84;
  *(char *)(temp_v17 + 0x41) = (char)temp_v20;
  *(char *)(temp_v17 + 0x42) = (char)temp_v22;
  *(unsigned char *)(temp_v17 + 0x43) = 0xff;
  temp_v22 = (int)DAT_00610a98;
  temp_v20 = (int)DAT_00610a9c;
  *(char *)(temp_v17 + 0x44) = (char)(int)DAT_00610a94;
  *(char *)(temp_v17 + 0x45) = (char)temp_v22;
  *(char *)(temp_v17 + 0x46) = (char)temp_v20;
  *(unsigned char *)(temp_v17 + 0x47) = 0xff;
  *(float *)(temp_v17 + 0x48) = temp_v34;
  *(unsigned int *)(temp_v17 + 0x4c) = in_s1;
  *(float *)(temp_v17 + 0x50) = temp_v18;
  FUN_0016b034(temp_v16,(int)temp_v15);
  temp_v15 = FUN_00406798(temp_v16,&LAB_00297958);
  temp_v17 = FUN_00406708(temp_v16,(int)temp_v15,&LAB_00297958);
  temp_v22 = (int)DAT_00610aa8;
  temp_v20 = (int)DAT_00610aac;
  *(char *)(temp_v17 + 0x3c) = (char)(int)DAT_00610aa4;
  *(char *)(temp_v17 + 0x3d) = (char)temp_v22;
  *(char *)(temp_v17 + 0x3e) = (char)temp_v20;
  *(unsigned char *)(temp_v17 + 0x3f) = 0xff;
  temp_v22 = (int)DAT_00610ab8;
  temp_v20 = (int)DAT_00610abc;
  *(char *)(temp_v17 + 0x40) = (char)(int)DAT_00610ab4;
  *(char *)(temp_v17 + 0x41) = (char)temp_v22;
  *(char *)(temp_v17 + 0x42) = (char)temp_v20;
  *(unsigned char *)(temp_v17 + 0x43) = 0xff;
  temp_v22 = (int)DAT_00610ac8;
  temp_v20 = (int)DAT_00610acc;
  *(char *)(temp_v17 + 0x44) = (char)(int)DAT_00610ac4;
  *(char *)(temp_v17 + 0x45) = (char)temp_v22;
  *(char *)(temp_v17 + 0x46) = (char)temp_v20;
  *(unsigned char *)(temp_v17 + 0x47) = 0xff;
  FUN_0016b034(temp_v16,(int)temp_v15);
  temp_v15 = FUN_00406798(temp_v16,&LAB_00297968);
  temp_v17 = (int)temp_v15;
  if (-1 < temp_v17) {
    temp_v20 = FUN_00406708(temp_v16,temp_v17,&LAB_00297968);
    temp_v23 = (int)DAT_00610ad8;
    temp_v22 = (int)DAT_00610adc;
    *(char *)(temp_v20 + 0x3c) = (char)(int)DAT_00610ad4;
    *(char *)(temp_v20 + 0x3d) = (char)temp_v23;
    *(char *)(temp_v20 + 0x3e) = (char)temp_v22;
    *(unsigned char *)(temp_v20 + 0x3f) = 0xff;
    temp_v23 = (int)DAT_00610ae8;
    temp_v22 = (int)DAT_00610aec;
    *(char *)(temp_v20 + 0x40) = (char)(int)DAT_00610ae4;
    *(char *)(temp_v20 + 0x41) = (char)temp_v23;
    *(char *)(temp_v20 + 0x42) = (char)temp_v22;
    *(unsigned char *)(temp_v20 + 0x43) = 0xff;
    temp_v23 = (int)DAT_00610af8;
    temp_v22 = (int)DAT_00610afc;
    *(char *)(temp_v20 + 0x44) = (char)(int)DAT_00610af4;
    *(char *)(temp_v20 + 0x45) = (char)temp_v23;
    *(char *)(temp_v20 + 0x46) = (char)temp_v22;
    *(unsigned char *)(temp_v20 + 0x47) = 0xff;
    FUN_0016b034(temp_v16,temp_v17);
  }
  FUN_0033f42c();
  return;
}

} /* extern "C" */
