/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bd3d8` (_code @ 0x3bd3d8, 0x910 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int asdGxSetEffectColorFromRGBA8(unsigned int);
int randomAdvanceShiftRegister(void);
int shiftRandomNextFraction(int);
int VectorSignedToFloat(...);
int __aeabi_idivmod(double, int);
int __aeabi_uidivmod(void);

typedef struct fn_003bd3d8_arg0 fn_003bd3d8_arg0;
typedef struct fn_003bd3d8_arg0_p40 fn_003bd3d8_arg0_p40;
struct fn_003bd3d8_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_003bd3d8_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_003bd3d8_arg0_p40 {
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
    undefined4 field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
};

/* stack frame of param_1: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
} param_1_stack;

extern float g_polyDefaultColor; /* 0x5c1100 */
extern float DAT_005c1104; /* 0x5c1104 */
extern float DAT_005c1108; /* 0x5c1108 */
extern float DAT_005c110c; /* 0x5c110c */
extern float g_effectRingScratchColor; /* 0x5c1120 */
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
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
extern unsigned int FUN_00221cb0(void);
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_idivmod. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_003bd3d8(fn_003bd3d8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned char *puVar19;
  float temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  float *pfVar21;
  float *pfVar22;
  unsigned char *puVar23;
  float *pfVar24;
  float temp_v21;
  fn_003bd3d8_arg0_p40 *pfVar26;
  int temp_v22;
  unsigned int in_fpscr;
  float temp_v23;
  float temp_v24;
  int temp_v25;
  float temp_v26;
  float temp_v27;
  int temp_v28;
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
  int temp_v43;
  
  temp_v14 = effGetFrameStep();
  pfVar26 = param_1->field_0x40;
  temp_v23 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1->field_0x34 <= (int)pfVar26->field_0x34) || (pfVar26->field_0x34 == 0)) {
    temp_v20 = pfVar26->field_0x4c;
    temp_v22 = pfVar26->field_0x38;
    pfVar24 = *(float **)param_1->field_0x3c;
    temp_v15 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v20 != 0) {
      if ((pfVar26->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v5 = 0;
        temp_v43 = pfVar26->field_0x50;
      }
      else {
        temp_v5 = 1;
        temp_v43 = temp_v22;
      }
      temp_v37 = 0.0f;
      pfVar22 = *(float **)(*(int *)(temp_v15 + 8) + 0x30);
      puVar23 = *(unsigned char **)(*(int *)(temp_v15 + 8) + 0x38);
      *(unsigned int *)(temp_v15 + 0x54) = *(unsigned int *)(temp_v15 + 0x54) | 0x21;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)&pfVar26->field_0x58);
      temp_v12 = DAT_006472e8;
      temp_v10 = DAT_006472e4;
      temp_v8 = DAT_006472e0;
      temp_v6 = DAT_006472dc;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)&pfVar26->field_0x5c);
      temp_v13 = DAT_006472e8;
      temp_v11 = DAT_006472e4;
      temp_v9 = DAT_006472e0;
      temp_v7 = DAT_006472dc;
      temp_v36 = (float)VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24 = (float)VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = 0;
      temp_v25 = pfVar26->field_0x70;
      temp_v39 = pfVar26->field_0x7c;
      temp_v36 = (float)(int)(pfVar26->field_0x44 * temp_v36);
      temp_v28 = (int)(pfVar26->field_0x48 * temp_v24);
      temp_v0 = pfVar26->field_0x54;
      if (0 < temp_v22) {
        temp_v41 = 0.5f;
        temp_v42 = 40.743664f;
        temp_v40 = 1.0f;
        temp_v24 = temp_v36;
        temp_v38 = temp_v37;
        do {
          temp_v21 = *pfVar24;
          if (temp_v21 != -NAN) {
            if (temp_v21 != -NAN) {
              if ((int)temp_v21 >= temp_v20) {
                temp_v16 = 0;
                do {
                  pfVar21 = pfVar22 + temp_v16 * 3;
                  puVar19 = puVar23 + temp_v16 * 4;
                  *pfVar21 = temp_v37;
                  pfVar21[1] = temp_v37;
                  pfVar21[2] = temp_v37;
                  *puVar19 = 0;
                  puVar19[1] = 0;
                  temp_v16 = temp_v16 + 1;
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                } while (temp_v16 < 4);
                if (temp_v0 == 0) {
                  temp_v24 = -NAN;
                }
                else {
                  temp_v24 = -NAN;
                }
                *pfVar24 = temp_v24;
                temp_v24 = temp_v37;
              }
              else {
                temp_v29 = pfVar24[1];
                temp_v17 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v29 < temp_v37) << 0x1f) |
                         ((unsigned int)(temp_v29 == temp_v37) << 0x1e);
                in_fpscr = temp_v17 | ((unsigned int)((temp_v29 != temp_v29) || (temp_v37 != temp_v37)) << 0x1c);
                temp_v2 = (unsigned char)(temp_v17 >> 0x18);
                temp_v24 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
                  temp_v29 = temp_v29 + temp_v39 * temp_v24 * temp_v41;
                }
                else {
                  temp_v29 = temp_v29 - temp_v39 * temp_v24 * temp_v41;
                }
                if ((int)temp_v21 < temp_v25) {
                  pfVar24[3] = pfVar24[3] + pfVar24[4];
                }
                DAT_006472ec = g_polyDefaultColor;
                DAT_006472f0 = DAT_005c1104;
                DAT_006472f4 = DAT_005c1108;
                DAT_006472f8 = DAT_005c110c;
                temp_v30 = pfVar24[3];
                temp_v32 = g_polyDefaultColor * temp_v30;
                temp_v33 = DAT_005c1104 * temp_v30;
                temp_v34 = DAT_005c1108 * temp_v30;
                temp_v30 = DAT_005c110c * temp_v30;
                temp_v31 = pfVar24[5];
                DAT_006472dc = g_polyDefaultColor * temp_v31;
                DAT_006472e0 = DAT_005c1104 * temp_v31;
                temp_v35 = DAT_005c1108 * temp_v31;
                temp_v31 = DAT_005c110c * temp_v31;
                temp_v26 = (pfVar24[2] + temp_v29 * temp_v24) * temp_v42;
                temp_v24 = temp_v26;
                DAT_006472e4 = temp_v35;
                DAT_006472e8 = temp_v31;
                temp_v29 = DAT_006472dc;
                temp_v27 = DAT_006472e0;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v29 = temp_v29 * temp_v26;
                temp_v27 = temp_v27 * temp_v38;
                temp_v35 = temp_v35 * -temp_v24;
                DAT_006472f8 = temp_v31 * temp_v38;
                DAT_006472fc = temp_v24 * temp_v32;
                DAT_00647300 = temp_v38 * temp_v33;
                DAT_00647304 = temp_v26 * temp_v34;
                DAT_00647308 = temp_v38 * temp_v30;
                DAT_005c1124 = temp_v27;
                DAT_005c1128 = temp_v35;
                DAT_006472ec = temp_v29;
                DAT_006472f0 = temp_v27;
                DAT_006472f4 = temp_v35;
                pfVar22[6] = temp_v29;
                pfVar22[7] = DAT_005c1124;
                pfVar22[8] = DAT_005c1128;
                DAT_005c1124 = -DAT_006472f0;
                DAT_005c1128 = -DAT_006472f4;
                pfVar22[9] = -DAT_006472ec;
                pfVar22[10] = DAT_005c1124;
                pfVar22[0xb] = DAT_005c1128;
                DAT_005c1124 = temp_v27 + DAT_00647300;
                DAT_005c1128 = temp_v35 + DAT_00647304;
                DAT_006472ec = -temp_v29;
                DAT_006472f0 = -temp_v27;
                DAT_006472f4 = -temp_v35;
                *pfVar22 = temp_v29 + DAT_006472fc;
                pfVar22[1] = DAT_005c1124;
                pfVar22[2] = DAT_005c1128;
                g_effectRingScratchColor = DAT_006472ec + DAT_006472fc;
                DAT_005c1124 = DAT_006472f0 + DAT_00647300;
                DAT_005c1128 = DAT_006472f4 + DAT_00647304;
                DAT_005c112c = DAT_006472f8 + DAT_00647308;
                pfVar22[3] = g_effectRingScratchColor;
                pfVar22[4] = DAT_005c1124;
                pfVar22[5] = DAT_005c1128;
                if ((int)temp_v21 < (int)temp_v36) {
                  temp_v24 = (float)VectorSignedToFloat(temp_v36,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v29 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_006472f8 = temp_v29 / temp_v24;
                }
                else {
                  DAT_006472f8 = temp_v40;
                  if (temp_v28 < (int)temp_v21) {
                    temp_v29 = (float)VectorSignedToFloat(temp_v20 - temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v24 = (float)VectorSignedToFloat(temp_v20 - (int)temp_v21,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_006472f8 = temp_v24 / temp_v29;
                  }
                }
                DAT_006472ec = g_polyDefaultColor * DAT_006472f8;
                DAT_006472f0 = DAT_005c1104 * DAT_006472f8;
                DAT_006472f4 = DAT_005c1108 * DAT_006472f8;
                DAT_006472f8 = DAT_005c110c * DAT_006472f8;
                DAT_006472dc = temp_v7 * DAT_006472ec;
                DAT_006472e0 = temp_v9 * DAT_006472f0;
                DAT_006472e4 = temp_v11 * DAT_006472f4;
                DAT_006472e8 = temp_v13 * DAT_006472f8;
                temp_v14 = FUN_00221cb0();
                temp_v3 = (unsigned char)((unsigned int)temp_v14 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v14 >> 0x10);
                *puVar23 = (char)temp_v14;
                puVar23[1] = temp_v3;
                puVar23[2] = temp_v4;
                temp_v1 = (unsigned char)((unsigned int)temp_v14 >> 0x18);
                puVar23[3] = temp_v1;
                puVar23[4] = (char)temp_v14;
                puVar23[5] = temp_v3;
                puVar23[6] = temp_v4;
                puVar23[7] = temp_v1;
                DAT_006472dc = temp_v6 * DAT_006472ec;
                DAT_006472e0 = temp_v8 * DAT_006472f0;
                DAT_006472e4 = temp_v10 * DAT_006472f4;
                DAT_006472e8 = temp_v12 * DAT_006472f8;
                temp_v14 = FUN_00221cb0();
                temp_v3 = (unsigned char)((unsigned int)temp_v14 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v14 >> 0x10);
                temp_v24 = (float)VectorSignedToFloat(temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
                puVar23[8] = (char)temp_v14;
                puVar23[9] = temp_v3;
                puVar23[10] = temp_v4;
                temp_v1 = (unsigned char)((unsigned int)temp_v14 >> 0x18);
                puVar23[0xb] = temp_v1;
                puVar23[0xc] = (char)temp_v14;
                puVar23[0xd] = temp_v3;
                puVar23[0xe] = temp_v4;
                puVar23[0xf] = temp_v1;
                temp_v24 = (float)(int)(temp_v24 + temp_v23);
                *pfVar24 = temp_v24;
              }
            }
            else if (temp_v43 != 0) {
              temp_v21 = temp_v37;
              shiftRandomNextFraction(0);
              temp_v24 = temp_v24 * 6.2831855f;
              pfVar24[2] = temp_v24;
              shiftRandomNextFraction(0);
              temp_v17 = 0;
              pfVar24[1] = ((temp_v40 - pfVar26->field_0x78) + temp_v24 * pfVar26->field_0x78) *
                           pfVar26->field_0x74;
              temp_v24 = temp_v40;
              randomAdvanceShiftRegister();
              if ((temp_v17 & 1) != 0) {
                pfVar24[1] = -pfVar24[1];
              }
              pfVar24[3] = temp_v21;
              temp_v37 = temp_v21;
              shiftRandomNextFraction(0);
              temp_v29 = (float)VectorSignedToFloat(temp_v25,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = ((temp_v24 - pfVar26->field_0x6c) + temp_v21 * pfVar26->field_0x6c) *
                       pfVar26->field_0x68;
              pfVar24[4] = temp_v21 / temp_v29;
              shiftRandomNextFraction(0);
              temp_v24 = pfVar26->field_0x60 *
                       ((temp_v24 - pfVar26->field_0x64) + temp_v21 * pfVar26->field_0x64);
              pfVar24[5] = temp_v24;
              if (!temp_v5) {
                *pfVar24 = 0.0f;
              }
              else {
                randomAdvanceShiftRegister();
                __aeabi_uidivmod();
                *pfVar24 = temp_v18;
                __aeabi_idivmod(temp_v18,temp_v25);
                temp_v24 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar24[3] = pfVar24[3] + pfVar24[4] * temp_v24;
              }
              temp_v43 = temp_v43 - 1;
            }
          }
          temp_v15 = temp_v15 + 1;
          pfVar24 = pfVar24 + 6;
          pfVar22 = pfVar22 + 0xc;
          puVar23 = puVar23 + 0x10;
        } while (temp_v15 < temp_v22);
      }
    }
  }
  return;
}

} /* extern "C" */
