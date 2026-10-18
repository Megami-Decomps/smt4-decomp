/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2c70` (_code @ 0x1c2c70, 0x878 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

extern int DAT_00433238; /* 0x433238 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002015e4. */
/* Supplied declaration required: FUN_00212224. */
/* Supplied declaration required: FUN_0026e768. */
/* Supplied declaration required: FUN_00291060. */
/* Supplied declaration required: FUN_0029118c. */
/* Supplied declaration required: FUN_00291234. */
/* Supplied declaration required: FUN_00291310. */
/* Supplied declaration required: FUN_00291340. */
/* Supplied declaration required: FUN_00291414. */
/* Supplied declaration required: FUN_00291620. */
/* Supplied declaration required: FUN_002916ac. */
extern int FUN_00296d6c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a7bc0. */
/* Supplied declaration required: FUN_002b2144. */
/* Supplied declaration required: FUN_002bfe28. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_0032ad34. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


void FUN_001c2c70(float *param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int unaff_r6;
  float temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  float *pfVar17;
  float *temp_v16;
  float *temp_v17;
  float *temp_v18;
  float *temp_v19;
  int uStack_e8;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned char temp_v27 [56];
  unsigned char temp_v28 [8];
  unsigned char temp_v29 [64];
  float temp_v30;
  float temp_v31;
  float temp_v32;
  
  temp_v14 = 0.0f;
  if (param_1[0x6c] == param_1[9]) {
    temp_v1 = *(short *)(param_1 + 0xcb);
    *(short *)(param_1 + 0xcb) = temp_v1 - 1;
    param_1[9] = 0.0f;
    if ((short)(temp_v1 - 1) < 1) {
      temp_v7 = 0;
      if (param_1 != (float *)0x0) {
        do {
          FUN_00291414(param_1[temp_v7 + 0x99]);
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 0x32);
        param_1[9] = 0.0f;
        param_1[10] = 0.0f;
        param_1[0xb] = 0.0f;
        param_1[0xc] = 0.0f;
        param_1[0x12] = temp_v14;
        param_1[0x13] = temp_v14;
        param_1[0x14] = temp_v14;
        if ((unsigned int *)param_1[0x95] != (unsigned int *)0x0) {
          *(unsigned int *)param_1[0x95] = 0;
        }
        FUN_002916ac(param_1);
        return;
      }
    }
    else {
      FUN_002c4938(param_1,100);
      temp_v14 = (float)VectorSignedToFloat(param_1[0x79],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = param_1 + 6;
      param_1[0x15] = param_1[0x61];
      param_1[0x16] = param_1[0x62];
      param_1[0x17] = param_1[99];
      param_1[1] = temp_v14;
      FUN_00291340(param_1 + 0x66,param_1 + 10,param_1 + 0xc,param_1 + 3);
    }
    return;
  }
  if ((-1 < (int)param_1[0x97]) && (param_1[(int)param_1[0x97] + 0x99] == 0.0f)) {
    do {
      if (param_1[0x98] == param_1[0x97]) break;
      temp_v2 = (float)(((int)param_1[0x97] + 1) % 0x32);
      param_1[0x97] = temp_v2;
    } while (param_1[(int)temp_v2 + 0x99] == 0.0f);
  }
  temp_v9 = *param_1;
  temp_v2 = param_1[0x18];
  temp_v12 = 1.0f;
  temp_v13 = 0x3c23d70a;
  temp_v7 = 0;
  if (0 < (int)temp_v9 - (int)temp_v2) {
    temp_v15 = 10.0f;
    do {
      temp_v8 = (float)(((int)param_1[0x98] + 1) % 0x32);
      if ((int)param_1[0x97] < 0) {
        param_1[0x97] = 0.0f;
      }
      else if (param_1[(int)temp_v8 + 0x99] != 0.0f) {
        FUN_002916ac();
      }
      temp_v20 = param_1[0x93];
      temp_v19 = (float *)(unsigned int)*(unsigned char *)(param_1 + 0x96);
      temp_v18 = (float *)((unsigned int)temp_v8 & 0xff);
      uStack_e8 = 1;
      temp_v17 = param_1 + (int)temp_v8 + 0x99;
      temp_v16 = (float *)param_1[0x92];
      temp_v10 = (float)VectorFloatToUnsigned(param_1[0x6a] * temp_v15,3);
      temp_v3 = param_1[0x94];
      temp_v11 = temp_v10;
      FUN_00291310(temp_v3,param_1 + 0x19,param_1 + 0x66,1);
      param_1[(int)temp_v8 + 0x99] = temp_v3;
      FUN_00291234(0,temp_v10,10);
      *(float *)((int)temp_v3 + 500) = temp_v11 * *(float *)((int)temp_v3 + 500);
      temp_v11 = (float)VectorSignedToFloat(param_1[0x6d],(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)((int)temp_v3 + 0x34c) = temp_v11;
      FUN_00291620(0,param_1[0x67],100);
      temp_v10 = (float)VectorSignedToFloat(param_1[0x66],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = temp_v11 + temp_v10 * (float)temp_v13;
      *(float *)((int)temp_v3 + 0x340) = temp_v11;
      *(float *)((int)temp_v3 + 0x33c) = temp_v14;
      FUN_0029118c(2,param_1[0x68],100);
      *(float *)((int)temp_v3 + 0x344) = temp_v11;
      FUN_00291620(0,(int)*(short *)((int)temp_v3 + 0x172),100);
      *(float *)((int)temp_v3 + 0x36c) = temp_v11;
      temp_v0 = *(char *)((int)temp_v3 + 0x174);
      temp_v11 = (float)VectorSignedToFloat(param_1[0x6b],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = temp_v11 * (float)temp_v13;
      if (temp_v0 != '\0') {
        if (temp_v0 != '\x01') {
          if (temp_v0 == '\x02') {
            unaff_r6 = (int)param_1[0x18] * -0x2d;
          }
        }
        else {
          temp_v6 = FUN_00296d6c(0,8);
          unaff_r6 = temp_v6 * -0x2d;
        }
      }
      else {
        temp_v6 = DAT_00433238 + 1;
        unaff_r6 = DAT_00433238 * -0x2d;
        DAT_00433238 = temp_v6;
        if (temp_v6 * -0x2d < -0x167) {
          DAT_00433238 = 0;
        }
      }
      *(short *)((int)temp_v3 + 0x16e) = (short)unaff_r6;
      temp_v4 = unaff_r6 - *(int *)((int)temp_v3 + 0x368);
      if ((int)temp_v4 >= 0x168) {
        temp_v6 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
        temp_v4 = temp_v4 + ((temp_v6 >> 8) - (temp_v6 >> 0x1f)) * -0x168;
      }
      if ((int)temp_v4 < 0) {
        if ((int)temp_v4 < -0x167) {
          temp_v6 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
          temp_v4 = temp_v4 + ((temp_v6 >> 8) - (temp_v6 >> 0x1f)) * -0x168;
        }
        temp_v4 = temp_v4 + 0x168;
      }
      unaff_r6 = 0x168 - temp_v4;
      temp_v5 = FUN_002a7bc0();
      FUN_002bfe28(&uStack_e8,temp_v5);
      temp_v16 = (float *)(*(float *)((int)temp_v3 + 0x36c) + temp_v11);
      VectorSignedToFloat(unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v17 = (float *)temp_v14;
      temp_v18 = (float *)temp_v14;
      temp_v19 = (float *)temp_v12;
      FUN_002b2144(temp_v28);
      nn_math_ARMv6_MTX44MultAsm(&uStack_e8,&uStack_e8,temp_v28);
      FUN_0026e768(&temp_v16,&uStack_e8);
      temp_v7 = temp_v7 + 1;
      *(float **)((int)temp_v3 + 0x120) = temp_v16;
      *(float **)((int)temp_v3 + 0x124) = temp_v17;
      *(float **)((int)temp_v3 + 0x128) = temp_v18;
      param_1[0x18] = (float)((int)param_1[0x18] + 1);
      param_1[0x98] = temp_v8;
    } while (temp_v7 < (int)temp_v9 - (int)temp_v2);
  }
  temp_v9 = (float)VectorSignedToFloat(param_1[0x6c],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x74) - (int)param_1[0x6b],
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[0x12] = param_1[0x12] + (temp_v2 / temp_v9) * (float)temp_v13;
  temp_v16 = (float *)param_1[0x73];
  temp_v20 = temp_v14;
  temp_v21 = temp_v14;
  temp_v22 = temp_v14;
  FUN_0032ad34(&temp_v20,param_1 + 0x12,param_1[0x71],param_1[0x72]);
  temp_v2 = param_1[0x97];
  if (-1 < (int)temp_v2) {
    while( 1 ) {
      temp_v9 = param_1[(int)temp_v2 + 0x99];
      if ((temp_v9 != 0.0f) && (*(float *)((int)temp_v9 + 0x37c) == param_1[0x94])) {
        temp_v4 = (int)*(short *)((int)temp_v9 + 0x16e) - *(int *)((int)temp_v9 + 0x368);
        if ((int)temp_v4 >= 0x168) {
          temp_v7 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
          temp_v4 = temp_v4 + ((temp_v7 >> 8) - (temp_v7 >> 0x1f)) * -0x168;
        }
        if ((int)temp_v4 < 0) {
          if ((int)temp_v4 < -0x167) {
            temp_v7 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20)
            ;
            temp_v4 = temp_v4 + ((temp_v7 >> 8) - (temp_v7 >> 0x1f)) * -0x168;
          }
          temp_v4 = temp_v4 + 0x168;
        }
        temp_v5 = FUN_002a7bc0(temp_v4);
        FUN_002bfe28(temp_v27,temp_v5);
        VectorSignedToFloat(0x168 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = temp_v20;
        temp_v24 = temp_v21;
        temp_v25 = temp_v22;
        temp_v26 = temp_v12;
        FUN_002b2144(temp_v29);
        nn_math_ARMv6_MTX44MultAsm(temp_v27,temp_v27,temp_v29);
        FUN_0026e768(&temp_v23,temp_v27);
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x358) = temp_v23;
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x35c) = temp_v24;
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x360) = temp_v25;
      }
      if (param_1[0x98] == temp_v2) break;
      temp_v2 = (float)(((int)temp_v2 + 1) % 0x32);
    }
  }
  temp_v19 = param_1 + 0x18;
  temp_v18 = param_1 + 6;
  temp_v17 = param_1 + 3;
  temp_v16 = param_1;
  FUN_00291060(param_1 + 0x66,param_1 + 0xb,param_1 + 10,param_1 + 0xc);
  temp_v17 = param_1 + 4;
  temp_v16 = param_1 + 1;
  temp_v18 = param_1 + 7;
  FUN_002015e4(param_1 + 0x66,param_1 + 0xd,param_1 + 0x11,param_1 + 0xf);
  temp_v17 = param_1 + 5;
  temp_v16 = param_1 + 2;
  temp_v18 = param_1 + 8;
  FUN_00212224(param_1 + 0x66,param_1 + 0xe,(int)param_1 + 0x45,param_1 + 0x10);
  temp_v2 = param_1[0x97];
  if (-1 < (int)temp_v2) {
    while( 1 ) {
      temp_v9 = param_1[(int)temp_v2 + 0x99];
      if ((temp_v9 != 0.0f) && (*(float *)((int)temp_v9 + 0x37c) == param_1[0x94])) {
        *(short *)((int)temp_v9 + 0x364) = (short)(int)param_1[1];
        temp_v11 = param_1[2];
        *(int *)((int)param_1[(int)temp_v2 + 0x99] + 0x368) = (int)temp_v11;
        temp_v9 = param_1[(int)temp_v2 + 0x99];
        temp_v3 = (float)VectorSignedToFloat(param_1[0x6b],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = param_1[0x71];
        temp_v8 = param_1[0x72];
        pfVar17 = (float *)param_1[0x73];
        temp_v4 = (int)*(short *)((int)temp_v9 + 0x16e) - (int)temp_v11;
        temp_v3 = temp_v3 * (float)temp_v13;
        if ((int)temp_v4 >= 0x168) {
          temp_v7 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
          temp_v4 = temp_v4 + ((temp_v7 >> 8) - (temp_v7 >> 0x1f)) * -0x168;
        }
        if ((int)temp_v4 < 0) {
          if ((int)temp_v4 < -0x167) {
            temp_v7 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20)
            ;
            temp_v4 = temp_v4 + ((temp_v7 >> 8) - (temp_v7 >> 0x1f)) * -0x168;
          }
          temp_v4 = temp_v4 + 0x168;
        }
        temp_v5 = FUN_002a7bc0(temp_v4);
        FUN_002bfe28(&temp_v25,temp_v5);
        temp_v21 = *(float *)((int)temp_v9 + 0x36c) + temp_v3;
        VectorSignedToFloat(0x168 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = temp_v14;
        temp_v23 = temp_v14;
        temp_v24 = temp_v12;
        FUN_002b2144(temp_v29);
        nn_math_ARMv6_MTX44MultAsm(&temp_v25,&temp_v25,temp_v29);
        FUN_0026e768(&temp_v21,&temp_v25);
        temp_v30 = temp_v21;
        temp_v31 = temp_v22;
        temp_v32 = temp_v23;
        temp_v16 = pfVar17;
        FUN_0032ad34((int)temp_v9 + 0x120,&temp_v30,temp_v15,temp_v8);
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x120) =
             *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x120) + param_1[0x15];
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x124) =
             *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x124) + param_1[0x16];
        *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x128) =
             *(float *)((int)param_1[(int)temp_v2 + 0x99] + 0x128) + param_1[0x17];
      }
      if (param_1[0x98] == temp_v2) break;
      temp_v2 = (float)(((int)temp_v2 + 1) % 0x32);
    }
  }
  param_1[9] = (float)((int)param_1[9] + 1);
  return;
}
