/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab438` (_code @ 0x3ab438, 0xb5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int asdGxSetEffectColorFromRGBA8(unsigned int);
int randomAdvanceShiftRegister(void);
int FUN_00514540(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_003ab438_arg0 fn_003ab438_arg0;
typedef struct fn_003ab438_arg0_p40 fn_003ab438_arg0_p40;
struct fn_003ab438_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_003ab438_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_003ab438_arg0_p40 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    float field_0x44; /* +0x44 */
    float field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    byte field_0x54; /* +0x54 */
    byte field_0x55; /* +0x55 */
    unsigned char pad_0x56[0x2];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    float field_0x80; /* +0x80 */
    float field_0x84; /* +0x84 */
    float field_0x88; /* +0x88 */
    float field_0x8c; /* +0x8c */
    float field_0x90; /* +0x90 */
    float field_0x94; /* +0x94 */
    float field_0x98; /* +0x98 */
    float field_0x9c; /* +0x9c */
    float field_0xa0; /* +0xa0 */
};

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_1_stack;

extern float g_polyDefaultColor; /* 0x5c1100 */
extern float DAT_005c1104; /* 0x5c1104 */
extern float DAT_005c1108; /* 0x5c1108 */
extern float DAT_005c110c; /* 0x5c110c */
extern float DAT_005c1120; /* 0x5c1120 */
extern float DAT_005c1124; /* 0x5c1124 */
extern float DAT_005c1128; /* 0x5c1128 */
extern float DAT_005c112c; /* 0x5c112c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_003ab438(fn_003ab438_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char *puVar12;
  unsigned int temp_v11;
  int temp_v12;
  float *pfVar14;
  float *pfVar15;
  unsigned char *puVar16;
  float *pfVar17;
  fn_003ab438_arg0_p40 *pfVar18;
  float temp_v13;
  int temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  int temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
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
  int temp_v39;
  
  temp_v8 = effGetFrameStep();
  pfVar18 = param_1->field_0x40;
  temp_v15 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1->field_0x34 <= (int)pfVar18->field_0x34) || (pfVar18->field_0x34 == 0)) {
    temp_v12 = pfVar18->field_0x4c;
    temp_v14 = pfVar18->field_0x38;
    pfVar17 = *(float **)param_1->field_0x3c;
    temp_v9 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v12 != 0) {
      if ((pfVar18->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v3 = 0;
        temp_v39 = pfVar18->field_0x50;
      }
      else {
        temp_v3 = 1;
        temp_v39 = temp_v14;
      }
      temp_v26 = 0.0f;
      pfVar15 = *(float **)(*(int *)(temp_v9 + 8) + 0x30);
      puVar16 = *(unsigned char **)(*(int *)(temp_v9 + 8) + 0x38);
      *(unsigned int *)(temp_v9 + 0x54) = *(unsigned int *)(temp_v9 + 0x54) | 0x21;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)&pfVar18->field_0x58);
      temp_v7 = DAT_006472e4;
      temp_v6 = DAT_006472e0;
      temp_v4 = DAT_006472dc;
      temp_v34 = DAT_006472e8;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)&pfVar18->field_0x5c);
      temp_v5 = DAT_006472dc;
      temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v32 = pfVar18->field_0xa0;
      temp_v9 = 0;
      temp_v1 = pfVar18->field_0x54;
      temp_v17 = (float)(int)(pfVar18->field_0x44 * temp_v17);
      temp_v16 = (int)(pfVar18->field_0x48 * temp_v18);
      if (0 < temp_v14) {
        temp_v38 = 6.2831855f;
        temp_v37 = 40.743664f;
        temp_v36 = 1.0f;
        temp_v29 = 255.0f;
        temp_v18 = temp_v17;
        temp_v31 = DAT_006472e8;
        temp_v27 = temp_v26;
        temp_v30 = DAT_006472e4;
        temp_v33 = DAT_006472e0;
        do {
          temp_v13 = *pfVar17;
          if (temp_v13 != -NAN) {
            if (temp_v13 != -NAN) {
              if ((int)temp_v13 >= temp_v12) {
                temp_v10 = 0;
                do {
                  pfVar14 = pfVar15 + temp_v10 * 3;
                  puVar12 = puVar16 + temp_v10 * 4;
                  *pfVar14 = temp_v26;
                  pfVar14[1] = temp_v26;
                  pfVar14[2] = temp_v26;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  temp_v10 = temp_v10 + 1;
                  puVar12[2] = 0;
                  puVar12[3] = 0;
                } while (temp_v10 < 4);
                if (temp_v1 == 0) {
                  temp_v18 = -NAN;
                }
                else {
                  temp_v18 = -NAN;
                }
                *pfVar17 = temp_v18;
                temp_v18 = temp_v26;
              }
              else {
                temp_v25 = pfVar17[7];
                temp_v28 = pfVar17[5];
                temp_v18 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v35 = (pfVar17[1] + (pfVar17[2] + temp_v32 * temp_v18 * 0.5f) * temp_v18) * temp_v37;
                temp_v18 = temp_v35;
                FUN_001b63b0();
                FUN_001a1ee0();
                DAT_006472dc = temp_v35 * temp_v25;
                DAT_006472e4 = temp_v18 * temp_v25;
                DAT_006472e0 = temp_v36 - temp_v25;
                temp_v25 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v25 < temp_v26) << 0x1f) |
                        ((unsigned int)(temp_v25 == temp_v26) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v25 != temp_v25) || (temp_v26 != temp_v26)) << 0x1c);
                temp_v2 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_006472dc = DAT_006472dc / temp_v25;
                  DAT_006472e0 = DAT_006472e0 / temp_v25;
                  DAT_006472e4 = DAT_006472e4 / temp_v25;
                }
                DAT_006472fc = DAT_006472dc;
                DAT_00647300 = DAT_006472e0;
                DAT_00647304 = DAT_006472e4;
                DAT_006472f8 = pfVar17[9];
                temp_v25 = temp_v18 * DAT_006472f8;
                temp_v19 = temp_v26 * DAT_006472f8;
                temp_v20 = -temp_v35 * DAT_006472f8;
                DAT_006472f8 = temp_v36 * DAT_006472f8;
                DAT_006472dc = temp_v35 * temp_v28 + temp_v25;
                DAT_005c1124 = temp_v27 + temp_v19;
                DAT_005c1128 = temp_v18 * temp_v28 + temp_v20;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v25;
                DAT_006472f0 = temp_v19;
                DAT_006472f4 = temp_v20;
                DAT_00647308 = temp_v36;
                pfVar15[6] = DAT_006472dc;
                pfVar15[7] = DAT_005c1124;
                pfVar15[8] = DAT_005c1128;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                pfVar15[9] = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                pfVar15[10] = DAT_005c1124;
                pfVar15[0xb] = DAT_005c1128;
                temp_v24 = pfVar17[3];
                DAT_006472dc = temp_v35 * temp_v28 + DAT_006472fc * temp_v24 + temp_v25;
                DAT_005c1124 = temp_v27 + DAT_00647300 * temp_v24 + temp_v19;
                DAT_005c1128 = temp_v18 * temp_v28 + DAT_00647304 * temp_v24 + temp_v20;
                DAT_006472e8 = temp_v27 + DAT_00647308 * temp_v24 + DAT_006472f8;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v25;
                DAT_006472f0 = temp_v19;
                DAT_006472f4 = temp_v20;
                *pfVar15 = DAT_006472dc;
                pfVar15[1] = DAT_005c1124;
                pfVar15[2] = DAT_005c1128;
                DAT_005c1120 = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                DAT_005c112c = (DAT_006472e8 - DAT_006472f8) - DAT_006472f8;
                pfVar15[3] = DAT_005c1120;
                pfVar15[4] = DAT_005c1124;
                pfVar15[5] = DAT_005c1128;
                pfVar17[3] = pfVar17[3] + pfVar17[4];
                pfVar17[7] = pfVar17[7] + pfVar17[8];
                pfVar17[5] = pfVar17[5] + pfVar17[6];
                if ((int)temp_v13 < (int)temp_v17) {
                  temp_v35 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v18 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_006472f8 = temp_v18 / temp_v35;
                }
                else {
                  DAT_006472f8 = temp_v36;
                  if (temp_v16 < (int)temp_v13) {
                    temp_v18 = (float)VectorSignedToFloat(temp_v12 - temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    DAT_006472f8 = (float)VectorSignedToFloat(temp_v12 - (int)temp_v13,
                                                              (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_006472f8 = DAT_006472f8 / temp_v18;
                  }
                }
                temp_v18 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                DAT_006472ec = g_polyDefaultColor * DAT_006472f8;
                temp_v18 = (float)(int)(temp_v18 + temp_v15);
                DAT_006472f0 = DAT_005c1104 * DAT_006472f8;
                DAT_006472f4 = DAT_005c1108 * DAT_006472f8;
                DAT_006472f8 = DAT_005c110c * DAT_006472f8;
                temp_v8 = VectorFloatToUnsigned(temp_v5 * DAT_006472ec * temp_v29,3);
                temp_v21 = VectorFloatToUnsigned(temp_v33 * DAT_006472f0 * temp_v29,3);
                temp_v22 = VectorFloatToUnsigned(temp_v30 * DAT_006472f4 * temp_v29,3);
                temp_v23 = VectorFloatToUnsigned(temp_v31 * DAT_006472f8 * temp_v29,3);
                *puVar16 = (char)temp_v23;
                puVar16[1] = (char)temp_v22;
                puVar16[2] = (char)temp_v21;
                puVar16[3] = (char)temp_v8;
                puVar16[4] = (char)temp_v23;
                puVar16[5] = (char)temp_v22;
                puVar16[6] = (char)temp_v21;
                puVar16[7] = (char)temp_v8;
                DAT_006472dc = temp_v4 * DAT_006472ec;
                DAT_006472e0 = temp_v6 * DAT_006472f0;
                DAT_006472e4 = temp_v7 * DAT_006472f4;
                DAT_006472e8 = temp_v34 * DAT_006472f8;
                temp_v8 = VectorFloatToUnsigned(DAT_006472e0 * temp_v29,3);
                temp_v23 = VectorFloatToUnsigned(DAT_006472dc * temp_v29,3);
                temp_v21 = VectorFloatToUnsigned(DAT_006472e4 * temp_v29,3);
                temp_v22 = VectorFloatToUnsigned(DAT_006472e8 * temp_v29,3);
                puVar16[8] = (char)temp_v22;
                puVar16[9] = (char)temp_v21;
                puVar16[10] = (char)temp_v8;
                puVar16[0xb] = (char)temp_v23;
                puVar16[0xc] = (char)temp_v22;
                puVar16[0xd] = (char)temp_v21;
                puVar16[0xe] = (char)temp_v8;
                puVar16[0xf] = (char)temp_v23;
                *pfVar17 = temp_v18;
              }
            }
            else if (temp_v39 != 0) {
              FUN_00514540(0);
              temp_v18 = temp_v18 * temp_v38;
              pfVar17[1] = temp_v18;
              FUN_00514540(0);
              temp_v35 = ((temp_v36 - pfVar18->field_0x6c) + temp_v18 * pfVar18->field_0x6c) *
                       pfVar18->field_0x68;
              temp_v13 = temp_v36;
              FUN_00514540(0);
              temp_v25 = pfVar18->field_0x74;
              temp_v19 = pfVar18->field_0x70;
              pfVar17[3] = temp_v35;
              temp_v28 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v35 = ((temp_v13 - temp_v25) + temp_v18 * temp_v25) * temp_v19 - temp_v35;
              pfVar17[4] = temp_v35 / temp_v28;
              FUN_00514540(0);
              temp_v18 = ((temp_v13 - pfVar18->field_0x7c) + temp_v35 * pfVar18->field_0x7c) *
                       pfVar18->field_0x78;
              FUN_00514540(0);
              temp_v25 = pfVar18->field_0x84;
              temp_v19 = pfVar18->field_0x80;
              pfVar17[5] = temp_v18;
              temp_v28 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = ((temp_v13 - temp_v25) + temp_v35 * temp_v25) * temp_v19 - temp_v18;
              pfVar17[6] = temp_v18 / temp_v28;
              FUN_00514540(0);
              temp_v35 = ((temp_v13 - pfVar18->field_0x8c) + temp_v18 * pfVar18->field_0x8c) *
                       pfVar18->field_0x88;
              FUN_00514540(0);
              temp_v25 = pfVar18->field_0x94;
              temp_v19 = pfVar18->field_0x90;
              pfVar17[7] = temp_v35;
              temp_v28 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v35 = ((temp_v13 - temp_v25) + temp_v18 * temp_v25) * temp_v19 - temp_v35;
              pfVar17[8] = temp_v35 / temp_v28;
              FUN_00514540(0);
              temp_v18 = ((temp_v13 - pfVar18->field_0x64) + temp_v35 * pfVar18->field_0x64) *
                       pfVar18->field_0x60;
              pfVar17[9] = temp_v18;
              FUN_00514540(0);
              temp_v18 = ((temp_v13 - pfVar18->field_0x9c) + temp_v18 * pfVar18->field_0x9c) *
                       pfVar18->field_0x98;
              pfVar17[2] = temp_v18;
              if (!temp_v3) {
                *pfVar17 = 0.0f;
              }
              else {
                randomAdvanceShiftRegister();
                __aeabi_uidivmod();
                temp_v13 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = (float)(int)temp_v13;
                pfVar17[3] = pfVar17[3] + pfVar17[4] * temp_v13;
                pfVar17[5] = pfVar17[5] + pfVar17[6] * temp_v13;
                pfVar17[7] = pfVar17[7] + pfVar17[8] * temp_v13;
                *pfVar17 = temp_v18;
              }
              temp_v39 = temp_v39 - 1;
            }
          }
          temp_v9 = temp_v9 + 1;
          pfVar17 = pfVar17 + 10;
          pfVar15 = pfVar15 + 0xc;
          puVar16 = puVar16 + 0x10;
        } while (temp_v9 < temp_v14);
      }
    }
  }
  return;
}

} /* extern "C" */
