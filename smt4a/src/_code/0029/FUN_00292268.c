/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292268` (_code @ 0x292268, 0x8f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int *DAT_00581288; /* 0x581288 */
extern int DAT_005f0c88; /* 0x5f0c88 */
extern int DAT_005f0c8c; /* 0x5f0c8c */
extern int DAT_005f0c90; /* 0x5f0c90 */
extern float DAT_005f0c94; /* 0x5f0c94 */
extern float DAT_005f0c98; /* 0x5f0c98 */
extern float DAT_005f0c9c; /* 0x5f0c9c */
extern float DAT_005f0ca0; /* 0x5f0ca0 */
extern int DAT_005f0ca4; /* 0x5f0ca4 */
extern int DAT_005f0ca8; /* 0x5f0ca8 */
extern signed char DAT_005f0cac; /* 0x5f0cac */
extern int DAT_005f0cb0; /* 0x5f0cb0 */
extern int DAT_005f0cb4; /* 0x5f0cb4 */
extern signed char DAT_005f0cb8; /* 0x5f0cb8 */
extern float DAT_005f0ce8; /* 0x5f0ce8 */
extern signed char DAT_005f0cf0; /* 0x5f0cf0 */
extern signed char DAT_005f0cf1; /* 0x5f0cf1 */
extern unsigned char DAT_005f0cf8; /* 0x5f0cf8 */
extern signed char DAT_005f0cf9; /* 0x5f0cf9 */
extern unsigned int DAT_005f0d28; /* 0x5f0d28 */
extern float DAT_005f0d30; /* 0x5f0d30 */
extern unsigned char DAT_005f0d34; /* 0x5f0d34 */
extern int DAT_005f0d38; /* 0x5f0d38 */
extern int DAT_005f0d3c; /* 0x5f0d3c */
extern float DAT_005f0d40; /* 0x5f0d40 */
extern int DAT_005f0d44; /* 0x5f0d44 */
extern int DAT_005f0d48; /* 0x5f0d48 */
extern int DAT_005f0d4c; /* 0x5f0d4c */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161f; /* 0x5f161f */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002227e8. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_002826dc. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
extern int FUN_003303fc(void);
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_0036d984. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_004ffb58(int);


void FUN_00292268(void)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float *pfVar3;
  float *pfVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
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
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float fStack_64;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float fStack_54;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  
  pfVar4 = &temp_v19;
  temp_v21 = DAT_005f0c94;
  temp_v22 = DAT_005f0c98;
  fStack_54 = DAT_005f0c9c;
  temp_v16 = 40.0f;
  if ((DAT_005f161f != '\0') || (*DAT_00581288 == 0x1d)) {
    temp_v1 = *(int *)(DAT_005f0c8c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0c90 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d44 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d48 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d4c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    return;
  }
  if (DAT_005f0cf0 != '\0') {
    temp_v1 = *(int *)(DAT_005f0c8c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
    }
    temp_v1 = *(int *)(DAT_005f0c90 + 4);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
      *(unsigned int *)(temp_v1 + 4) = temp_v3;
    }
  }
  else {
    DAT_005f0cf1 = '\0';
    temp_v1 = *(int *)(DAT_005f0c8c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0c90 + 4);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(temp_v1 + 4) | 1;
      *(unsigned int *)(temp_v1 + 4) = temp_v3;
    }
  }
  temp_v1 = *(int *)(DAT_005f0d44 + 4);
  if (DAT_005f0cac != '\0') {
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
    }
    temp_v1 = *(int *)(DAT_005f0d48 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
    }
    temp_v1 = *(int *)(DAT_005f0d4c + 4);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
      *(unsigned int *)(temp_v1 + 4) = temp_v3;
    }
  }
  else {
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d48 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d4c + 4);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(temp_v1 + 4) | 1;
      *(unsigned int *)(temp_v1 + 4) = temp_v3;
    }
  }
  if (DAT_005f0ca8 == 0xc) {
    temp_v1 = *(int *)(DAT_005f0c8c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0c90 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d44 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d48 + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
    temp_v1 = *(int *)(DAT_005f0d4c + 4);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    }
  }
  FUN_002227e8();
  temp_v23 = DAT_005f0c94;
  temp_v24 = DAT_005f0c98;
  temp_v25 = DAT_005f0c9c;
  pfVar3 = &temp_v23;
  FUN_0025ef68(pfVar3,&temp_v21,0);
  temp_v17 = 0.0f;
  temp_v14 = 10.0f;
  temp_v15 = 2.0f;
  if (pfVar3 != (float *)0x0) {
    DAT_005f0d40 = 0.0f;
  }
  else {
    DAT_005f0d40 = DAT_005f0d40 + 2.0f;
    temp_v24 = (temp_v24 - 10.0f) - DAT_005f0d40;
    if ((int)DAT_005f0d40 >= 0x41a00001) {
      DAT_005f0d40 = 20.0f;
    }
  }
  temp_v1 = FUN_003303fc();
  if ((temp_v1 != 0) && (DAT_005f0c98 + temp_v15 < temp_v24)) {
    temp_v24 = temp_v24 + temp_v14;
  }
  temp_v1 = 0;
  if (DAT_005f161d != '\0') {
    temp_v1 = DAT_005f0ca8;
  }
  if (DAT_005f161d != '\0' && temp_v1 != 0x10) {
    DAT_005f0cf0 = '\0';
    DAT_005f0ca8 = 0x10;
    DAT_005f0d3c = DAT_005f0ca4;
    DAT_005f0ce8 = temp_v17;
    DAT_005f0d38 = temp_v1;
  }
  DAT_005f0c94 = temp_v23;
  DAT_005f0c98 = DAT_005f0c98 + (temp_v24 - DAT_005f0c98) * 0.33333334f;
  DAT_005f0c9c = temp_v25;
  temp_v1 = DAT_00581288[7];
  FUN_002b5cb4();
  DAT_005f0cf8 = temp_v1 >= 0x43fa0001;
  temp_v18 = -40.0f;
  temp_v14 = 0.017453292f;
  temp_v15 = 1.0f;
  if (DAT_005f0cf9 == '\0') {
    if (DAT_005f0ca8 != 0xc) {
      temp_v1 = FUN_0036d984(&DAT_005f0c94,DAT_00581288 + 7,0);
      if (temp_v1 == -1) {
        DAT_005f0cb4 = 0;
        goto LAB_002928a4;
      }
      DAT_005f0cb4 = DAT_005f0cb4 + 1;
    }
    if (DAT_005f0cb4 >= 0x1e) {
      temp_v9 = *(float *)(DAT_005806a4 + 0x5c) - *(float *)(DAT_005806a4 + 0x50);
      temp_v8 = *(float *)(DAT_005806a4 + 0x60) - *(float *)(DAT_005806a4 + 0x54);
      temp_v6 = *(float *)(DAT_005806a4 + 100) - *(float *)(DAT_005806a4 + 0x58);
      temp_v11 = temp_v15 / romwright_sqrt_4(temp_v9 * temp_v9 + temp_v8 * temp_v8 + temp_v6 * temp_v6);
      temp_v9 = temp_v9 * temp_v11;
      temp_v8 = temp_v8 * temp_v11;
      temp_v6 = temp_v6 * temp_v11;
      temp_v7 = *(float *)(DAT_005806a4 + 0x50);
      FUN_00352bc4();
      FUN_00352bc4();
      temp_v12 = DAT_005f0c94 - *(float *)(DAT_005806a4 + 0x50);
      temp_v10 = DAT_005f0c98 - *(float *)(DAT_005806a4 + 0x54);
      temp_v11 = DAT_005f0c9c - *(float *)(DAT_005806a4 + 0x58);
      temp_v13 = temp_v15 / romwright_sqrt_4(temp_v12 * temp_v12 + temp_v10 * temp_v10 + temp_v11 * temp_v11);
      temp_v11 = temp_v9 * temp_v12 * temp_v13 + temp_v8 * temp_v10 * temp_v13 + temp_v6 * temp_v11 * temp_v13;
      temp_v6 = temp_v7;
      FUN_002b5cd4();
      if ((temp_v7 <= temp_v18) || (temp_v16 <= temp_v7)) {
        DAT_005f0cb8 = '\0';
      }
      else {
        DAT_005f0cb8 = '\x01';
      }
      if (temp_v11 < temp_v17) {
        DAT_005f0cb8 = '\0';
      }
      temp_v1 = 0;
      if (DAT_005f0cb8 != '\0') {
        temp_v1 = DAT_005f0ca8;
      }
      DAT_005f0d30 = temp_v7;
      if (DAT_005f0cb8 == '\0' || temp_v1 == 0xc) {
        DAT_005f0ca8 = 0xc;
        temp_v19 = (float)DAT_00581288[7];
        fStack_64 = (float)DAT_00581288[8];
        temp_v20 = (float)DAT_00581288[9];
        temp_v11 = (temp_v6 + 180.0f) * temp_v14;
        temp_v6 = temp_v11;
        FUN_001bc124();
        temp_v7 = 400.0f;
        temp_v19 = temp_v19 + temp_v11 * 400.0f;
        FUN_001bbf0c();
        temp_v20 = temp_v20 + temp_v6 * temp_v7;
        temp_v1 = FUN_0036d984(DAT_00581288 + 7,&temp_v19,0);
        if (temp_v1 == -1) {
          temp_v21 = temp_v19;
          fStack_54 = temp_v20;
          temp_v22 = fStack_64 - 5.0f;
          FUN_002826dc(&temp_v19,&temp_v21,1,0);
          if (pfVar4 != (float *)0x0) {
            DAT_005f0ca8 = 2;
            DAT_005f0cb4 = 0;
            DAT_005f0d28 = 0;
            DAT_005f0c94 = temp_v19;
            DAT_005f0c98 = fStack_64;
            DAT_005f0c9c = temp_v20;
            goto LAB_002929b0;
          }
        }
      }
    }
  }
LAB_002928a4:
  if (DAT_005f0ca8 == 8 || DAT_005f0ca8 == 9) {
    temp_v9 = *(float *)(DAT_005806a4 + 0x5c) - *(float *)(DAT_005806a4 + 0x50);
    temp_v8 = *(float *)(DAT_005806a4 + 0x60) - *(float *)(DAT_005806a4 + 0x54);
    temp_v6 = *(float *)(DAT_005806a4 + 100) - *(float *)(DAT_005806a4 + 0x58);
    temp_v11 = temp_v15 / romwright_sqrt_4(temp_v9 * temp_v9 + temp_v8 * temp_v8 + temp_v6 * temp_v6);
    temp_v9 = temp_v9 * temp_v11;
    temp_v8 = temp_v8 * temp_v11;
    temp_v6 = temp_v6 * temp_v11;
    temp_v7 = *(float *)(DAT_005806a4 + 0x50);
    FUN_00352bc4();
    FUN_00352bc4();
    temp_v12 = DAT_005f0c94 - *(float *)(DAT_005806a4 + 0x50);
    temp_v10 = DAT_005f0c98 - *(float *)(DAT_005806a4 + 0x54);
    temp_v11 = DAT_005f0c9c - *(float *)(DAT_005806a4 + 0x58);
    temp_v13 = temp_v15 / romwright_sqrt_4(temp_v12 * temp_v12 + temp_v10 * temp_v10 + temp_v11 * temp_v11);
    temp_v6 = temp_v9 * temp_v12 * temp_v13 + temp_v8 * temp_v10 * temp_v13 + temp_v6 * temp_v11 * temp_v13;
    FUN_002b5cd4();
    if ((temp_v7 <= temp_v18) || (temp_v16 <= temp_v7)) {
      DAT_005f0d34 = 0;
    }
    else {
      DAT_005f0d34 = 1;
    }
    DAT_005f0d30 = temp_v7;
    if (temp_v6 < temp_v17) {
      DAT_005f0d34 = 0;
    }
  }
LAB_002929b0:
  temp_v4 = *(int *)(DAT_005f0c88 + 4);
  FUN_003fd76c(temp_v4,&DAT_005f0c94);
  FUN_003fdb18(temp_v4);
  temp_v2 = FUN_004ffb58(temp_v4);
  temp_v1 = temp_v2;
  if (temp_v2 == DAT_005f0ca4) {
    temp_v1 = DAT_005f0cb0;
  }
  if (temp_v2 != DAT_005f0ca4 || temp_v1 != 0) {
    FUN_003fe86c(temp_v4,DAT_005f0ca4,2);
    *(float *)(temp_v4 + 0x1fc) = DAT_005f0ce8 + temp_v15;
    DAT_005f0cb0 = 0;
  }
  temp_v0 = '\0';
  if (DAT_005f0cf0 != '\0') {
    temp_v0 = DAT_005f0cf1;
  }
  if (DAT_005f0cf0 != '\0' && temp_v0 != '\0') {
    temp_v5 = *(unsigned int *)(DAT_005f0c8c + 4);
    FUN_003fd76c(temp_v5,&DAT_005f0c94);
    FUN_003fdb18(temp_v5);
    FUN_003fe86c(temp_v5,0,2);
    DAT_005f0cf1 = 0;
    temp_v19 = DAT_005f0c94;
    fStack_64 = DAT_005f0c98;
    temp_v20 = DAT_005f0c9c;
    temp_v5 = *(unsigned int *)(DAT_005f0c90 + 4);
    temp_v16 = DAT_005f0ca0 * temp_v14;
    FUN_001bc124();
    temp_v15 = 200.0f;
    temp_v19 = temp_v19 + temp_v16 * 200.0f;
    temp_v14 = DAT_005f0ca0 * temp_v14;
    FUN_001bbf0c();
    temp_v20 = temp_v20 + temp_v14 * temp_v15;
    FUN_003fd76c(temp_v5,&temp_v19);
    FUN_003fdb18(temp_v5);
    FUN_003fe86c(temp_v5,0,2);
    DAT_005f0cf1 = '\0';
  }
  temp_v1 = 0;
  do {
    temp_v5 = *(unsigned int *)((&DAT_005f0d44)[temp_v1] + 4);
    FUN_003fd76c(temp_v5,&DAT_005f0c94);
    FUN_003fdb18(temp_v5);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
