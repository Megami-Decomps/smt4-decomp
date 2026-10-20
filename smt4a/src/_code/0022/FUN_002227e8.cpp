/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002227e8` (_code @ 0x2227e8, 0xdfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297f00(...);

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00223fac(void);
int FUN_002240f0(void);
int FUN_002826dc(float *, float *, int, int);
int FUN_002b5cb4(void);
int FUN_002d0394(void);
int FUN_002d8614(...);
int FUN_00317af8(float *, float *, int);
int FUN_00352bc4(void);
int FUN_0036d984(...);
int FUN_003a26fc(void);
int SBORROW4(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
} void_stack;

extern int DAT_00581288; /* 0x581288 */
extern int DAT_005f0c88; /* 0x5f0c88 */
extern float DAT_005f0c94; /* 0x5f0c94 */
extern float DAT_005f0c98; /* 0x5f0c98 */
extern float DAT_005f0c9c; /* 0x5f0c9c */
extern float DAT_005f0ca0; /* 0x5f0ca0 */
extern int DAT_005f0ca4; /* 0x5f0ca4 */
extern int DAT_005f0ca8; /* 0x5f0ca8 */
extern unsigned char DAT_005f0cac; /* 0x5f0cac */
extern unsigned int DAT_005f0cb0; /* 0x5f0cb0 */
extern unsigned int DAT_005f0cb4; /* 0x5f0cb4 */
extern float DAT_005f0cbc; /* 0x5f0cbc */
extern signed char DAT_005f0cc0; /* 0x5f0cc0 */
extern int DAT_005f0ce4; /* 0x5f0ce4 */
extern unsigned int DAT_005f0ce8; /* 0x5f0ce8 */
extern unsigned int DAT_005f0cec; /* 0x5f0cec */
extern unsigned char DAT_005f0cf0; /* 0x5f0cf0 */
extern unsigned char DAT_005f0cf1; /* 0x5f0cf1 */
extern unsigned char DAT_005f0cf2; /* 0x5f0cf2 */
extern unsigned char DAT_005f0cf9; /* 0x5f0cf9 */
extern float DAT_005f0cfc; /* 0x5f0cfc */
extern float DAT_005f0d00; /* 0x5f0d00 */
extern float DAT_005f0d04; /* 0x5f0d04 */
extern float DAT_005f0d08; /* 0x5f0d08 */
extern float DAT_005f0d0c; /* 0x5f0d0c */
extern float DAT_005f0d10; /* 0x5f0d10 */
extern float DAT_005f0d14; /* 0x5f0d14 */
extern float DAT_005f0d18; /* 0x5f0d18 */
extern signed char DAT_005f0d1c; /* 0x5f0d1c */
extern int DAT_005f0d20; /* 0x5f0d20 */
extern signed char DAT_005f0d24; /* 0x5f0d24 */
extern int DAT_005f0d28; /* 0x5f0d28 */
extern int DAT_005f0d38; /* 0x5f0d38 */
extern unsigned int DAT_005f0d3c; /* 0x5f0d3c */
extern signed char DAT_005f161d; /* 0x5f161d */
extern float DAT_005f1a90; /* 0x5f1a90 */
extern float DAT_005f1a94; /* 0x5f1a94 */
extern int DAT_005f1c64; /* 0x5f1c64 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00223fac. */
/* Supplied declaration required: FUN_002240f0. */
/* Supplied declaration required: FUN_002826dc. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_00297f00. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002d0394. */
/* Supplied declaration required: FUN_002d8614. */
extern int FUN_003135a8(void);
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_00352bc4. */
extern int FUN_003646d4(unsigned int);
/* Supplied declaration required: FUN_0036d984. */
extern int FUN_003850b4(void);
/* Supplied declaration required: FUN_003a26fc. */
extern int FUN_003e5414(unsigned int);
extern int FUN_004ff98c(unsigned int);
extern int FUN_004ffa14(unsigned int);


void FUN_002227e8(void)

{
/* irregular: 2 unstructured edge(s); 3 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17 [9];
  float temp_v18;
  float temp_v19;
  float fStack_34;
  
  temp_v1 = DAT_005f0d38;
  temp_v5 = 20.0f;
  temp_v17[0] = 90.0f;
  temp_v17[1] = 270.0f;
  temp_v17[2] = 180.0f;
  temp_v17[3] = 0.0f;
  temp_v17[6] = 225.0f;
  temp_v17[5] = 135.0f;
  temp_v17[7] = 315.0f;
  temp_v17[4] = 45.0f;
  switch(DAT_005f0ca8) {
  case 0:
    temp_v13 = 150.0f;
    temp_v5 = 0.017453292f;
    temp_v9 = 0x40a00000;
    temp_v1 = 0;
    do {
      temp_v14 = *(float *)(DAT_00581288 + 0x1c);
      temp_v15 = *(float *)(DAT_00581288 + 0x20);
      temp_v16 = *(float *)(DAT_00581288 + 0x24);
      temp_v6 = (*(float *)(DAT_00581288 + 0x4c) + temp_v17[temp_v1]) * temp_v5;
      FUN_001bc124();
      temp_v14 = temp_v14 + temp_v6 * temp_v13;
      temp_v6 = (*(float *)(DAT_00581288 + 0x4c) + temp_v17[temp_v1]) * temp_v5;
      FUN_001bbf0c();
      temp_v16 = temp_v16 + temp_v6 * temp_v13;
      temp_v0 = FUN_0036d984(DAT_00581288 + 0x1c,&temp_v14,0);
      if (temp_v0 == -1) {
        temp_v18 = temp_v14;
        fStack_34 = temp_v16;
        pfVar2 = &temp_v14;
        temp_v19 = temp_v15 - (float)temp_v9;
        FUN_002826dc(pfVar2,&temp_v18,1,0);
        if (pfVar2 != (float *)0x0) goto LAB_00222954;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 0;
    temp_v13 = 100.0f;
    do {
      temp_v14 = *(float *)(DAT_00581288 + 0x1c);
      temp_v15 = *(float *)(DAT_00581288 + 0x20);
      temp_v16 = *(float *)(DAT_00581288 + 0x24);
      temp_v6 = (*(float *)(DAT_00581288 + 0x4c) + temp_v17[temp_v1 + 4]) * temp_v5;
      FUN_001bc124();
      temp_v14 = temp_v14 + temp_v6 * temp_v13;
      temp_v6 = (*(float *)(DAT_00581288 + 0x4c) + temp_v17[temp_v1 + 4]) * temp_v5;
      FUN_001bbf0c();
      temp_v16 = temp_v16 + temp_v6 * temp_v13;
      temp_v0 = FUN_0036d984(DAT_00581288 + 0x1c,&temp_v14,0);
      if (temp_v0 == -1) {
        temp_v18 = temp_v14;
        fStack_34 = temp_v16;
        pfVar2 = &temp_v14;
        temp_v19 = temp_v15 - (float)temp_v9;
        FUN_002826dc(pfVar2,&temp_v18,1,0);
        if (pfVar2 != (float *)0x0) {
LAB_00222954:
          DAT_005f0c94 = temp_v14;
          DAT_005f0c98 = temp_v15;
          DAT_005f0c9c = temp_v16;
          DAT_005f0cac = 1;
          FUN_00352bc4();
          DAT_005f0ca0 = temp_v14;
          DAT_005f0ca8 = 2;
          DAT_005f0d28 = 0;
          return;
        }
      }
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 4) {
        DAT_005f0ca8 = 0xc;
        DAT_005f0cac = 1;
        DAT_005f0c98 = 500000.0f;
        DAT_005f0cb4 = 0x1e;
        return;
      }
    } while( 1 );
  case 2:
    temp_v1 = FUN_003135a8();
    if ((temp_v1 != 0x1f) || (DAT_005f0d1c == '\0')) {
      temp_v14 = 0.0f;
      temp_v15 = 0.0f;
      FUN_00317af8(&temp_v14,&temp_v15,0);
      if (((((unsigned int)temp_v14 >= 0xbf000000) || ((int)temp_v14 >= 0x3f000000)) ||
          ((unsigned int)temp_v15 >= 0xbf000000)) || ((int)temp_v15 >= 0x3f000000)) {
        DAT_005f0d20 = 0;
        DAT_005f0d24 = '\0';
        goto LAB_00222b78;
      }
      if ((DAT_005f0d24 == '\0') || (DAT_005f0d20 = DAT_005f0d20 + 1, 0x1517 >= DAT_005f0d20)) {
LAB_00222b78:
        temp_v1 = FUN_003850b4();
        if (temp_v1 != 0) goto LAB_00222b88;
      }
      if (DAT_005f0d28 >= 1) {
        DAT_005f0d28 = DAT_005f0d28 - 1;
      }
      else {
        FUN_002d0394();
      }
      temp_v5 = *(float *)(DAT_00581288 + 0x1c);
      FUN_002b5cb4();
      if (DAT_005f1a94 >= temp_v5) {
        temp_v1 = FUN_003e5414(*(unsigned int *)(DAT_00581288 + 0x1a8));
        if (temp_v1 != 2) {
          return;
        }
        temp_v5 = DAT_005f0c94;
        FUN_00352bc4();
        DAT_005f0ca0 = temp_v5;
        return;
      }
      temp_v1 = FUN_003135a8();
      if (temp_v1 == 0x37) {
        return;
      }
      DAT_005f0cec = 0x40a00000;
      DAT_005f0ce4 = 0;
      DAT_005f0ca8 = 4;
      DAT_005f0ca4 = 1;
      return;
    }
    DAT_005f0ca8 = 0xd;
    DAT_005f0ce4 = 0;
    DAT_005f0cec = 0x40a00000;
    DAT_005f0ca4 = 1;
    FUN_002240f0();
    return;
  case 4:
    temp_v1 = FUN_003135a8();
    if (temp_v1 == 0x37) {
      DAT_005f0d28 = 5;
      DAT_005f0ca8 = 2;
      DAT_005f0cec = 0x40a00000;
      DAT_005f0ca4 = 0;
    }
    temp_v1 = FUN_003135a8();
    if ((temp_v1 != 0x1f) || (DAT_005f0d1c == '\0')) {
      temp_v1 = FUN_003850b4();
      if (temp_v1 != 0) {
        FUN_00223fac();
        DAT_005f0ca4 = 1;
        DAT_005f0ca8 = 8;
        DAT_005f0ce8 = 0x3f000000;
        DAT_005f0cec = 0x40a00000;
        return;
      }
      temp_v17[8] = DAT_005f0c94;
      temp_v18 = DAT_005f0c98;
      temp_v19 = DAT_005f0c9c;
      temp_v7 = 90.0f;
      temp_v6 = 0.017453292f;
      temp_v13 = (DAT_005f0ca0 + 90.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v8 = 200.0f;
      temp_v17[8] = temp_v17[8] + temp_v13 * 200.0f;
      temp_v13 = (DAT_005f0ca0 + temp_v7) * temp_v6;
      FUN_001bbf0c();
      temp_v19 = temp_v19 + temp_v13 * temp_v8;
      temp_v1 = FUN_0036d984(&DAT_005f0c94,temp_v17 + 8,0);
      if ((temp_v1 != -1) && (DAT_005f0d14 = DAT_005f0d14 + 2.0f, (int)DAT_005f0d14 >= 0x43340001)) {
        DAT_005f0d14 = 180.0f;
      }
      temp_v17[8] = DAT_005f0c94;
      temp_v18 = DAT_005f0c98;
      temp_v19 = DAT_005f0c9c;
      temp_v13 = (DAT_005f0ca0 + temp_v7) * temp_v6;
      FUN_001bc124();
      temp_v8 = 300.0f;
      temp_v17[8] = temp_v17[8] + temp_v13 * 300.0f;
      temp_v13 = (DAT_005f0ca0 + temp_v7) * temp_v6;
      FUN_001bbf0c();
      temp_v19 = temp_v19 + temp_v13 * temp_v8;
      temp_v1 = FUN_0036d984(&DAT_005f0c94,temp_v17 + 8,0);
      if ((temp_v1 == -1) && (DAT_005f0d14 = DAT_005f0d14 - 2.0f, (int)DAT_005f0d14 < 0x42f00001)) {
        DAT_005f0d14 = 120.0f;
      }
      temp_v12 = 0;
      temp_v2 = FUN_0029202c();
      temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = temp_v13 * 0.01f;
      temp_v4 = SBORROW4((int)temp_v13,0x40000000);
      temp_v1 = (int)temp_v13 - 0x40000000;
      temp_v3 = temp_v13 == 2.0f;
      if ((int)temp_v13 >= 0x40000001) {
        temp_v13 = 2.0f;
      }
      else {
        temp_v4 = SBORROW4((int)temp_v13,0x3f800000);
        temp_v1 = (int)temp_v13 - 0x3f800000;
        temp_v3 = temp_v13 == 1.0f;
      }
      if ((!temp_v3 && temp_v1 < 0 == temp_v4) && (temp_v5 = temp_v5 * temp_v13, (int)temp_v5 >= 0x420c0001)) {
        temp_v5 = 35.0f;
      }
      if (DAT_005f1c64 != 0) {
        temp_v5 = temp_v5 * 2.5f;
      }
      temp_v8 = *(float *)(DAT_00581288 + 0x1c);
      temp_v13 = (*(float *)(DAT_00581288 + 0x4c) + DAT_005f0d14) * temp_v6;
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v13 * DAT_005f0d18;
      FUN_001bbf0c();
      temp_v13 = DAT_005f0c94;
      FUN_00352bc4();
      temp_v7 = temp_v13 * temp_v6;
      DAT_005f0ca0 = temp_v13;
      FUN_001bc124();
      DAT_005f0c94 = DAT_005f0c94 + temp_v7 * (temp_v5 - DAT_005f0cbc);
      temp_v6 = DAT_005f0ca0 * temp_v6;
      FUN_001bbf0c();
      DAT_005f0c9c = DAT_005f0c9c + temp_v6 * (temp_v5 - DAT_005f0cbc);
      DAT_005f0cbc = (float)temp_v12;
      FUN_002b5cb4();
      if (DAT_005f1a90 <= temp_v8) {
        return;
      }
      temp_v1 = FUN_003e5414(*(unsigned int *)(DAT_00581288 + 0x1a8));
      if (temp_v1 != 2) {
        DAT_005f0ca4 = 0;
        DAT_005f0ca8 = 2;
        DAT_005f0cec = 0x40a00000;
        DAT_005f0d28 = 5;
        return;
      }
      if ((int)temp_v8 >= 0x42480000) {
        DAT_005f0cbc = 5.0f;
        return;
      }
      DAT_005f0ca4 = 0;
      DAT_005f0ca8 = 2;
      DAT_005f0cbc = 5.0f;
      DAT_005f0cec = 0x40a00000;
      DAT_005f0d28 = 5;
      return;
    }
    DAT_005f0ca8 = 0xd;
    DAT_005f0ce4 = 0;
    DAT_005f0cec = 0x40a00000;
    DAT_005f0ca4 = 1;
    FUN_002240f0();
    return;
  case 7:
    temp_v1 = FUN_003850b4();
    if (temp_v1 == 0) {
      FUN_002d0394();
      if (DAT_005f0cc0 != '\0') {
        return;
      }
      DAT_005f0ca4 = 0;
      DAT_005f0ca8 = 2;
      DAT_005f0cec = 0x40a00000;
      DAT_005f0d28 = 10;
      return;
    }
LAB_00222b88:
    DAT_005f0cc0 = 0;
    FUN_002d8614(0);
    FUN_00223fac();
    DAT_005f0ca4 = 1;
    DAT_005f0ca8 = 8;
    DAT_005f0ce4 = 0;
    DAT_005f0ce8 = 0x3f000000;
    DAT_005f0cec = 0x40a00000;
    return;
  case 8:
    temp_v1 = FUN_003646d4(0);
    if (temp_v1 != 0) {
      FUN_003a26fc();
      temp_v5 = DAT_005f0c94;
      FUN_00352bc4();
      temp_v6 = 0.017453292f;
      temp_v13 = temp_v5 * 0.017453292f;
      DAT_005f0ca0 = temp_v5;
      FUN_001bc124();
      temp_v5 = 25.0f;
      DAT_005f0c94 = DAT_005f0c94 + temp_v13 * 25.0f;
      temp_v6 = DAT_005f0ca0 * temp_v6;
      FUN_001bbf0c();
      DAT_005f0c9c = DAT_005f0c9c + temp_v6 * temp_v5;
      return;
    }
    DAT_005f0ce8 = 0;
    DAT_005f0ca8 = 2;
    DAT_005f0cec = 0x40a00000;
    DAT_005f0ca4 = 0;
    DAT_005f0d28 = 5;
    return;
  case 9:
    temp_v1 = FUN_003646d4(1);
    if (temp_v1 == 0) {
      DAT_005f0cf0 = 0;
      DAT_005f0ce8 = 0;
      DAT_005f0ca8 = 2;
      DAT_005f0cec = 0x41700000;
      DAT_005f0ca4 = 0;
      DAT_005f0d28 = 0xf;
      return;
    }
    FUN_003a26fc();
    temp_v5 = DAT_005f0c94;
    FUN_00352bc4();
    DAT_005f0d24 = 1;
    DAT_005f0ca0 = temp_v5;
    temp_v1 = FUN_004ffa14(*(unsigned int *)(DAT_005f0c88 + 4));
    if (temp_v1 != 0) {
      DAT_005f0cf2 = 1;
      DAT_005f0cf0 = 0;
      DAT_005f0ce4 = 0;
    }
    else if (DAT_005f0ce4 != 0) {
      if (DAT_005f0ce4 == 3) {
        DAT_005f0cf0 = 1;
        DAT_005f0cf1 = 1;
      }
      DAT_005f0ce4 = DAT_005f0ce4 + 1;
      return;
    }
    DAT_005f0ca4 = 3;
    DAT_005f0cb0 = 1;
    DAT_005f0ce8 = 0;
    DAT_005f0cec = 0;
    DAT_005f0ce4 = DAT_005f0ce4 + 1;
    return;
  case 0xb:
    DAT_005f0ce4 = DAT_005f0ce4 + 1;
    if (DAT_005f0ce4 == 1) {
      DAT_005f0c94 = DAT_005f0cfc;
      DAT_005f0ca4 = 5;
      DAT_005f0cec = 0;
      DAT_005f0cc0 = '\0';
      DAT_005f0c98 = DAT_005f0d00;
      DAT_005f0c9c = DAT_005f0d04;
      FUN_002d8614(0);
    }
    if (DAT_005f0ce4 >= 6) {
      DAT_005f0c98 = DAT_005f0c98 - 60.0f;
      DAT_005f0ca4 = 6;
      if (DAT_005f0c98 < DAT_005f0d0c) {
        DAT_005f0c94 = DAT_005f0d08;
        DAT_005f0c98 = DAT_005f0d0c;
        DAT_005f0c9c = DAT_005f0d10;
      }
    }
    temp_v2 = *(unsigned int *)(DAT_005f0c88 + 4);
    temp_v1 = FUN_004ff98c(temp_v2);
    if ((temp_v1 == 6) && (temp_v1 = FUN_004ffa14(temp_v2), temp_v1 != 0)) {
      DAT_005f0cf9 = 0;
      DAT_005f0ca8 = 2;
      DAT_005f0cec = 0x40a00000;
      DAT_005f0ca4 = 0;
      DAT_005f0d28 = 5;
      return;
    }
    break;
  case 0xc:
    DAT_005f0cf0 = 0;
    return;
  case 0xd:
    temp_v11 = 180.0f;
    temp_v13 = 0.017453292f;
    temp_v6 = *(float *)(DAT_00581288 + 0x24);
    temp_v7 = *(float *)(DAT_00581288 + 0x1c);
    temp_v8 = *(float *)(DAT_00581288 + 0x20);
    temp_v5 = (DAT_005f0ca0 + 180.0f) * 0.017453292f;
    FUN_001bc124();
    temp_v10 = 200.0f;
    temp_v7 = temp_v7 + temp_v5 * 200.0f;
    temp_v13 = (DAT_005f0ca0 + temp_v11) * temp_v13;
    FUN_001bbf0c();
    DAT_005f0c94 = DAT_005f0c94 + (temp_v7 - DAT_005f0c94) * 0.33333334f;
    DAT_005f0c98 = DAT_005f0c98 + (temp_v8 - DAT_005f0c98) * 0.16666667f;
    DAT_005f0c9c = DAT_005f0c9c + ((temp_v6 + temp_v13 * temp_v10) - DAT_005f0c9c) * 0.33333334f;
    DAT_005f0cbc = 0.0f;
    temp_v1 = *(int *)(DAT_00581288 + 0x1c);
    FUN_002b5cb4();
    if (temp_v1 >= 0x43340000) {
      DAT_005f0ce4 = 0;
      temp_v5 = DAT_005f0c94;
      FUN_00352bc4();
      DAT_005f0ca0 = temp_v5;
      DAT_005f0ca8 = 0xe;
      return;
    }
    break;
  case 0xe:
    temp_v1 = FUN_004ffa14(*(unsigned int *)(DAT_005f0c88 + 4));
    if (temp_v1 != 0) {
      DAT_005f0cf2 = 1;
      DAT_005f0cf0 = 0;
      DAT_005f0ce4 = 0;
      DAT_005f0ca4 = 3;
      DAT_005f0cb0 = 1;
      DAT_005f0ce8 = 0;
      DAT_005f0cec = 0;
    }
    else if (DAT_005f0ce4 != 0) {
      if (DAT_005f0ce4 != 3) {
        if (DAT_005f0ce4 == 8) {
          *(int *)(DAT_00581288 + 0x26c) = *(int *)(DAT_00581288 + 0x26c) + 8;
          FUN_00297f00(8,10);
        }
      }
      else {
        DAT_005f0cf0 = 1;
        DAT_005f0cf1 = 1;
      }
    }
    else {
      DAT_005f0ca4 = 3;
      DAT_005f0cb0 = 1;
      DAT_005f0ce8 = 0;
      DAT_005f0cec = 0;
    }
    DAT_005f0ce4 = DAT_005f0ce4 + 1;
    if (DAT_005f0d1c == '\0') {
      DAT_005f0cf0 = 0;
      DAT_005f0cf9 = 0;
      DAT_005f0ca8 = 2;
      DAT_005f0cec = 0x40a00000;
      DAT_005f0ca4 = 0;
      DAT_005f0d28 = 5;
      return;
    }
    break;
  case 0x10:
    if (DAT_005f0ca4 != 0) {
      DAT_005f0cec = 0x41700000;
      DAT_005f0ca4 = 0;
      DAT_005f0d28 = 0xf;
    }
    if (DAT_005f161d == '\0') {
      DAT_005f0ca8 = DAT_005f0d38;
      DAT_005f0d28 = 0xf;
      DAT_005f0ce8 = 0;
      DAT_005f0cec = 0;
      DAT_005f0cf0 = 0;
      temp_v3 = DAT_005f0d38 == 9;
      DAT_005f0d38 = 0;
      if (!temp_v3) {
        DAT_005f0ca4 = DAT_005f0d3c;
        DAT_005f0ca8 = temp_v1;
        DAT_005f0ce8 = 0;
        DAT_005f0cec = 0;
        DAT_005f0cf0 = 0;
        DAT_005f0d28 = 0xf;
        DAT_005f0d38 = 0;
        return;
      }
      return;
    }
    return;
  }
  return;
}

} /* extern "C" */
