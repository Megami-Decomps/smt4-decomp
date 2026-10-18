/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002609d8` (_code @ 0x2609d8, 0x7ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002609d8_arg0 fn_002609d8_arg0;
struct fn_002609d8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    unsigned char pad_0x28[0xc];
    float field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x8];
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x8];
    undefined4 field_0x4c; /* +0x4c */
};

typedef int romwright_code();
/* stack frame of param_3: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00162880(void);
extern int FUN_00162ea4(void);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001834e4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_001b4a00. */
/* Supplied declaration required: FUN_001b4a20. */
extern unsigned int FUN_001f3e80(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001f3eec. */
/* Supplied declaration required: FUN_002a1c8c. */
/* Supplied declaration required: FUN_003fabfc. */


void FUN_002609d8(fn_002609d8_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int uStack_64;
  float temp_v31;
  float temp_v32;
  float fStack_58;
  float temp_v33;
  float temp_v34;
  float fStack_4c;
  float temp_v35;
  float temp_v36;
  float fStack_40;
  float temp_v37;
  
  temp_v2 = FUN_00164a9c();
  if (((*(int *)(temp_v2 + 0x40) != 1) ||
      (temp_v3 = FUN_0018206c(1,*(unsigned int *)(temp_v2 + 0x44)), temp_v3 != 0)) &&
     (*(int *)(temp_v2 + 0xc) == 0)) {
    temp_v15 = 0.0f;
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v2 + 0x24) == 0.0f) << 0x1e);
    if ((!romwright_subpiece_4_1_0(temp_v6 >> 0x1e,0)) &&
       ((temp_v3 = FUN_00162ea4(), temp_v3 == 0 || (temp_v3 = FUN_00162880(), temp_v3 == 0)))) {
      temp_v12 = 1.0f;
      temp_v14 = *(float *)(temp_v2 + 0x24);
      temp_v13 = temp_v12;
      if (*(int *)(temp_v2 + 0x40) != 1) {
        temp_v13 = *(float *)(temp_v2 + 0x20);
      }
      temp_v8 = *(float *)(temp_v2 + 0x18);
      FUN_001879d0(DAT_0059dbb4);
      temp_v3 = (int)temp_v8;
      if (*(int *)(temp_v2 + 0x4c) == 0) {
        if (*(char *)(temp_v2 + 0x88) != '\0') {
          temp_v8 = *(float *)(temp_v2 + 0x28);
          temp_v6 = (temp_v6 & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v15) << 0x1f) |
                  ((unsigned int)(temp_v8 == temp_v15) << 0x1e);
          temp_v7 = temp_v6 | ((unsigned int)(NAN(temp_v8) || NAN(temp_v15)) << 0x1c);
          temp_v0 = (unsigned char)(temp_v6 >> 0x18);
          if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
            temp_v36 = *(float *)(temp_v2 + 0xa8);
            fStack_40 = *(float *)(temp_v2 + 0xac);
            temp_v34 = -temp_v36;
            fStack_4c = -fStack_40;
            temp_v16 = *(float *)(temp_v2 + 0x24);
            temp_v17 = 0;
            temp_v18 = 0.0f;
            temp_v19 = 0.0f;
            temp_v20 = 0.0f;
            temp_v22 = 0;
            temp_v23 = 0;
            temp_v24 = 0;
            temp_v25 = 0;
            temp_v30 = 0;
            uStack_64 = 0x3f800000;
            temp_v27 = 0;
            temp_v28 = 0;
            temp_v29 = 0;
            temp_v21 = temp_v16;
            temp_v26 = temp_v12;
            temp_v35 = temp_v15;
            temp_v37 = temp_v15;
            FUN_001b4a20(&temp_v16,&temp_v16,&temp_v34);
            FUN_001b4a00(&temp_v16,&temp_v36);
            FUN_002a1c8c(&temp_v16);
          }
          FUN_001834a4(0x27,0xc);
          if (-1 < *(int *)(temp_v2 + 0x48)) {
            FUN_001677c0();
            temp_v16 = (float)(*(int *)(temp_v2 + 0x14) + param_3);
            temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8);
            FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x40),*(int *)(temp_v2 + 0x48) * 1000,
                         (int)*(float *)(temp_v2 + 0x1c) + temp_v3 + *(int *)(temp_v2 + 0x10) + param_2);
          }
          temp_v31 = temp_v13;
          temp_v32 = temp_v13;
          fStack_58 = temp_v13;
          temp_v33 = temp_v14;
          FUN_001834e4(&temp_v31);
          FUN_001677c0();
          temp_v16 = (float)(*(int *)(temp_v2 + 0x14) + param_3);
          temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8);
          FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x40),*(int *)(temp_v2 + 0x44) * 1000,
                       *(int *)(temp_v2 + 0x10) + param_2 + (int)*(float *)(temp_v2 + 0x1c) + temp_v3);
          FUN_001677c0();
          temp_v9 = DAT_0059dbb4;
          temp_v10 = FUN_00169294(6,1,0);
          piVar7 = (int *)(temp_v9 + 0x12b8);
          temp_v11 = *piVar7;
          temp_v5 = piVar7[temp_v11 + 2];
          *piVar7 = temp_v11 + 1;
          piVar7[temp_v11 + 3] = temp_v10;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v5 != temp_v10) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
          temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8) + 1;
          temp_v13 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x14) + param_3,
                                              (unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v16 = (float)(int)(temp_v13 - *(float *)(temp_v2 + 0x9c));
          temp_v13 = (float)VectorSignedToFloat((int)*(float *)(temp_v2 + 0x1c) + temp_v3 +
                                              *(int *)(temp_v2 + 0x10) + param_2,
                                              (unsigned char)(temp_v7 >> 0x16) & 3);
          FUN_00164b5c(2,0x27,0,(int)(temp_v13 - *(float *)(temp_v2 + 0x98)));
          temp_v9 = DAT_0059dbb4;
          temp_v1 = 0;
          if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
            temp_v11 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
            temp_v10 = *(int *)(temp_v11 + 8);
            *(unsigned int *)(temp_v11 + 8) = 0;
            if (*(char *)(temp_v9 + 0x1330) != '\0' || temp_v10 != 0) {
              (**(romwright_code **)(temp_v9 + 0x1334))();
              *(unsigned char *)(temp_v9 + 0x1330) = 0;
            }
            temp_v1 = 1;
          }
          FUN_00168e00(*(int *)(temp_v2 + 0x10) + param_2 + temp_v3,*(int *)(temp_v2 + 0x14) + param_3,
                       (int)*(float *)(temp_v2 + 0xb0),(int)*(float *)(temp_v2 + 0xb4));
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x90),(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v13 = -10.0f;
          FUN_001f3eec();
          temp_v12 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x14) + param_3,
                                              (unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v13 = (float)VectorSignedToFloat((int)temp_v13,(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8) + 1;
          temp_v16 = (float)(int)((temp_v12 - *(float *)(temp_v2 + 0x9c)) + temp_v13);
          temp_v13 = (float)VectorSignedToFloat((int)*(float *)(temp_v2 + 0x1c) + temp_v3 +
                                              *(int *)(temp_v2 + 0x10) + param_2,
                                              (unsigned char)(temp_v7 >> 0x16) & 3);
          FUN_00164b5c(2,0x27,1,(int)(temp_v13 - *(float *)(temp_v2 + 0x98)));
          FUN_00168770();
          temp_v3 = DAT_0059dbb4;
          if (temp_v1) {
            piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
            temp_v9 = piVar7[*piVar7 + 2];
            piVar7[*piVar7 + 2] = 3;
            if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v9 != 3) {
              (**(romwright_code **)(temp_v3 + 0x1334))();
              *(unsigned char *)(temp_v3 + 0x1330) = 0;
            }
          }
          temp_v16 = 1.4013e-45f;
          temp_v4 = FUN_001f3e80(0x32,100,0x1e,*(unsigned int *)(temp_v2 + 0x8c));
          VectorSignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
          FUN_001677c0();
          temp_v3 = DAT_0059dbb4;
          piVar7 = (int *)(DAT_0059dbb4 + 0x12b8);
          temp_v9 = *piVar7;
          temp_v10 = piVar7[temp_v9 + 2];
          *piVar7 = temp_v9 - 1;
          if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v10 != piVar7[temp_v9 + 1]) {
            (**(romwright_code **)(temp_v3 + 0x12d4))(piVar7[temp_v9 + 1]);
            *(unsigned char *)(temp_v3 + 0x12d0) = 0;
          }
          if (temp_v15 < *(float *)(temp_v2 + 0x28)) {
            FUN_0016c560(DAT_0059dbb4);
          }
        }
        else {
          temp_v18 = temp_v13;
          temp_v19 = temp_v13;
          temp_v20 = temp_v13;
          temp_v21 = temp_v14;
          FUN_001834e4(&temp_v18);
          FUN_001677c0();
          temp_v16 = (float)(*(int *)(temp_v2 + 0x14) + param_3);
          temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8);
          FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x40),*(int *)(temp_v2 + 0x44) * 1000,
                       *(int *)(temp_v2 + 0x10) + temp_v3 + (int)*(float *)(temp_v2 + 0x1c) + param_2);
          if (-1 < *(int *)(temp_v2 + 0x48)) {
            FUN_001677c0();
            temp_v16 = (float)(*(int *)(temp_v2 + 0x14) + param_3);
            temp_v17 = *(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8);
            FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x40),*(int *)(temp_v2 + 0x48) * 1000,
                         *(int *)(temp_v2 + 0x10) + temp_v3 + (int)*(float *)(temp_v2 + 0x1c) + param_2);
          }
        }
        FUN_00183bb0();
        FUN_001677c0();
        return;
      }
      temp_v19 = (float)VectorSignedToFloat(0x100 - (*(int *)(temp_v2 + 4) + *(int *)(temp_v2 + 8)),
                                            (unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v19 = temp_v19 * -0.00390625f;
      temp_v17 = VectorSignedToFloat(*(int *)(temp_v2 + 0x10) + temp_v3 +
                                     (int)*(float *)(temp_v2 + 0x1c) + param_2 +
                                     (int)(*(float *)(temp_v2 + 0x34) * -200.0f + 200.0f),
                                     (unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v18 = (float)VectorSignedToFloat(*(int *)(temp_v2 + 0x14) +
                                            (int)(*(float *)(temp_v2 + 0x34) * -120.0f + 120.0f) +
                                            param_3,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v16 = 0.0f;
      temp_v3 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
      temp_v11 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
      temp_v9 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
      temp_v10 = VectorFloatToUnsigned(temp_v14 * 255.0f,3);
      FUN_003fabfc(*(unsigned int *)(temp_v2 + 0x4c),0,&temp_v17,
                   temp_v10 + (temp_v9 + (temp_v11 + temp_v3 * 0x100) * 0x100) * 0x100);
    }
  }
  return;
}
