/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa864` (_code @ 0x3aa864, 0xa78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int asdGxSetEffectColorFromRGBA8(unsigned int);
int randomAdvanceShiftRegister(void);
int shiftRandomNextFraction(...);
int SUB41(double, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_003aa864_arg0 fn_003aa864_arg0;
typedef struct fn_003aa864_arg0_p40 fn_003aa864_arg0_p40;
struct fn_003aa864_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_003aa864_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_003aa864_arg0_p40 {
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
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
};

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp104; /* 0x104: local_104 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_001a1ee0. */
extern int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
extern unsigned int FUN_00221cb0(void);
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_003aa864(fn_003aa864_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int *puVar19;
  float *pfVar20;
  float *pfVar21;
  unsigned int *puVar22;
  int *piVar23;
  int temp_v19;
  unsigned int temp_v20;
  fn_003aa864_arg0_p40 *pfVar26;
  int temp_v21;
  unsigned int in_fpscr;
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
  long long temp_v37;
  int temp_v38;
  
  pfVar26 = param_1->field_0x40;
  if ((param_1->field_0x34 <= (int)pfVar26->field_0x34) || (pfVar26->field_0x34 == 0)) {
    temp_v18 = pfVar26->field_0x4c;
    temp_v21 = pfVar26->field_0x38;
    piVar23 = *(int **)param_1->field_0x3c;
    temp_v13 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v18 != 0) {
      if ((pfVar26->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v4 = 0;
        temp_v38 = pfVar26->field_0x50;
      }
      else {
        temp_v4 = 1;
        temp_v38 = temp_v21;
      }
      temp_v35 = 0.0f;
      pfVar21 = *(float **)(*(int *)(temp_v13 + 8) + 0x30);
      puVar22 = *(unsigned int **)(*(int *)(temp_v13 + 8) + 0x38);
      *(unsigned int *)(temp_v13 + 0x54) = *(unsigned int *)(temp_v13 + 0x54) | 0x21;
      asdGxSetEffectColorFromRGBA8(pfVar26->field_0x58 & 0xffffff);
      temp_v11 = DAT_006472e8;
      temp_v9 = DAT_006472e4;
      temp_v7 = DAT_006472e0;
      temp_v5 = DAT_006472dc;
      asdGxSetEffectColorFromRGBA8(pfVar26->field_0x5c & 0xffffff);
      temp_v12 = DAT_006472e8;
      temp_v10 = DAT_006472e4;
      temp_v8 = DAT_006472e0;
      temp_v6 = DAT_006472dc;
      temp_v33 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v34 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = 0;
      temp_v33 = (float)(int)(pfVar26->field_0x44 * temp_v33);
      temp_v13 = (int)(pfVar26->field_0x48 * temp_v34);
      temp_v0 = pfVar26->field_0x54;
      temp_v34 = pfVar26->field_0x7c;
      if (0 < temp_v21) {
        temp_v37 = (unsigned long long)(unsigned int)temp_v35 << 0x20;
        temp_v28 = temp_v33;
        do {
          temp_v19 = *piVar23;
          if (temp_v19 != -2) {
            if (temp_v19 != -1) {
              temp_v28 = (float)((unsigned long long)temp_v37 >> 0x20);
              if (temp_v19 >= temp_v18) {
                temp_v19 = 0;
                do {
                  pfVar20 = pfVar21 + temp_v19 * 3;
                  puVar19 = puVar22 + temp_v19;
                  *pfVar20 = temp_v28;
                  pfVar20[1] = temp_v28;
                  pfVar20[2] = temp_v28;
                  *(unsigned char *)puVar19 = 0;
                  *(unsigned char *)((int)puVar19 + 1) = 0;
                  temp_v19 = temp_v19 + 1;
                  *(unsigned char *)((int)puVar19 + 2) = 0;
                  *(unsigned char *)((int)puVar19 + 3) = 0;
                } while (temp_v19 < 5);
                if (temp_v0 == 0) {
                  temp_v19 = -2;
                }
                else {
                  temp_v19 = -1;
                }
                *piVar23 = temp_v19;
              }
              else {
                temp_v24 = (float)piVar23[1];
                temp_v14 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < temp_v28) << 0x1f) |
                         ((unsigned int)(temp_v24 == temp_v28) << 0x1e);
                in_fpscr = temp_v14 | ((unsigned int)((temp_v24 != temp_v24) || (temp_v28 != temp_v28)) << 0x1c);
                temp_v1 = (unsigned char)(temp_v14 >> 0x18);
                temp_v22 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
                  temp_v24 = temp_v24 + temp_v34 * temp_v22 * 0.5f;
                }
                else {
                  temp_v24 = temp_v24 - temp_v34 * temp_v22 * 0.5f;
                }
                temp_v25 = (float)piVar23[3];
                temp_v29 = DAT_005c1104 * temp_v25;
                temp_v30 = DAT_005c1108 * temp_v25;
                temp_v26 = DAT_005c110c * temp_v25;
                temp_v37 = CONCAT44(temp_v28,g_polyDefaultColor * temp_v25);
                DAT_006472e8 = (float)piVar23[4];
                temp_v31 = g_polyDefaultColor * DAT_006472e8;
                DAT_006472e0 = DAT_005c1104 * DAT_006472e8;
                DAT_006472e4 = DAT_005c1108 * DAT_006472e8;
                DAT_006472e8 = DAT_005c110c * DAT_006472e8;
                temp_v27 = (float)piVar23[5];
                DAT_006472ec = g_polyDefaultColor * temp_v27;
                DAT_006472f0 = DAT_005c1104 * temp_v27;
                temp_v32 = DAT_005c1108 * temp_v27;
                temp_v27 = DAT_005c110c * temp_v27;
                temp_v23 = ((float)piVar23[2] + temp_v24 * temp_v22) * 40.743664f;
                temp_v28 = temp_v23;
                DAT_006472dc = temp_v31;
                DAT_006472f4 = temp_v32;
                DAT_006472f8 = temp_v27;
                temp_v22 = DAT_006472e0;
                temp_v24 = DAT_006472e4;
                temp_v25 = DAT_006472ec;
                temp_v36 = DAT_006472f0;
                FUN_001b63b0();
                FUN_001a1ee0();
                DAT_006472ec = temp_v31 * temp_v23;
                DAT_005c1124 = temp_v22 * temp_v35;
                DAT_005c1128 = temp_v24 * -temp_v28;
                temp_v32 = temp_v32 * -temp_v28;
                DAT_006472f8 = temp_v27 * temp_v35;
                DAT_006472fc = temp_v28 * (float)temp_v37;
                DAT_00647300 = temp_v35 * temp_v29;
                DAT_00647304 = temp_v23 * temp_v30;
                DAT_00647308 = temp_v35 * temp_v26;
                DAT_006472f0 = DAT_005c1124;
                DAT_006472f4 = DAT_005c1128;
                pfVar21[6] = DAT_006472ec;
                pfVar21[7] = DAT_005c1124;
                pfVar21[8] = DAT_005c1128;
                DAT_005c1124 = -DAT_006472f0;
                DAT_005c1128 = -DAT_006472f4;
                pfVar21[0xc] = -DAT_006472ec;
                pfVar21[0xd] = DAT_005c1124;
                pfVar21[0xe] = DAT_005c1128;
                DAT_005c1124 = temp_v36 * temp_v35 + DAT_00647300;
                DAT_005c1128 = temp_v32 + DAT_00647304;
                DAT_006472ec = -(temp_v25 * temp_v23);
                DAT_006472f0 = -(temp_v36 * temp_v35);
                DAT_006472f4 = -temp_v32;
                *pfVar21 = temp_v25 * temp_v23 + DAT_006472fc;
                pfVar21[1] = DAT_005c1124;
                pfVar21[2] = DAT_005c1128;
                g_effectRingScratchColor = DAT_006472ec + DAT_006472fc;
                DAT_005c1124 = DAT_006472f0 + DAT_00647300;
                DAT_005c1128 = DAT_006472f4 + DAT_00647304;
                DAT_005c112c = DAT_006472f8 + DAT_00647308;
                pfVar21[3] = g_effectRingScratchColor;
                pfVar21[4] = DAT_005c1124;
                pfVar21[5] = DAT_005c1128;
                if (temp_v19 < (int)temp_v33) {
                  temp_v22 = (float)VectorSignedToFloat(temp_v33,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = temp_v28 / temp_v22;
                }
                else if (temp_v13 >= temp_v19) {
                  temp_v28 = 1.0f;
                }
                else {
                  temp_v22 = (float)VectorSignedToFloat(temp_v18 - temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = (float)VectorSignedToFloat(temp_v18 - temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = temp_v28 / temp_v22;
                }
                DAT_006472ec = g_polyDefaultColor * temp_v28;
                DAT_006472f0 = DAT_005c1104 * temp_v28;
                DAT_006472f4 = DAT_005c1108 * temp_v28;
                DAT_006472f8 = DAT_005c110c * temp_v28;
                DAT_006472dc = temp_v6 * DAT_006472ec;
                DAT_006472e0 = temp_v8 * DAT_006472f0;
                DAT_006472e4 = temp_v10 * DAT_006472f4;
                DAT_006472e8 = temp_v12 * DAT_006472f8;
                temp_v15 = FUN_00221cb0();
                *(char *)puVar22 = (char)temp_v15;
                *(char *)((int)puVar22 + 1) = (char)((unsigned int)temp_v15 >> 8);
                *(char *)((int)puVar22 + 2) = (char)((unsigned int)temp_v15 >> 0x10);
                *(char *)((int)puVar22 + 3) = (char)((unsigned int)temp_v15 >> 0x18);
                puVar22[1] = *puVar22;
                DAT_006472dc = temp_v5 * DAT_006472ec;
                DAT_006472e0 = temp_v7 * DAT_006472f0;
                DAT_006472e4 = temp_v9 * DAT_006472f4;
                DAT_006472e8 = temp_v11 * DAT_006472f8;
                temp_v15 = FUN_00221cb0();
                temp_v2 = (unsigned char)((unsigned int)temp_v15 >> 8);
                temp_v3 = (unsigned char)((unsigned int)temp_v15 >> 0x10);
                if ((temp_v20 & 1) != 0) {
                  *(char *)(puVar22 + 3) = (char)temp_v15;
                  *(unsigned char *)((int)puVar22 + 0xd) = temp_v2;
                  *(unsigned char *)((int)puVar22 + 0xe) = temp_v3;
                  temp_v28 = (float)VectorFloatToUnsigned(temp_v28 * 128.0f,3);
                  *(unsigned char *)((int)puVar22 + 0xf) = 0xff;
                  *(unsigned char *)(puVar22 + 2) = 0;
                  *(unsigned char *)((int)puVar22 + 9) = 0;
                  *(unsigned char *)((int)puVar22 + 10) = 0;
                  *(char *)((int)puVar22 + 0xb) = SUB41(temp_v28,0);
                  *(unsigned char *)(puVar22 + 4) = 0;
                  *(unsigned char *)((int)puVar22 + 0x11) = 0;
                  *(unsigned char *)((int)puVar22 + 0x12) = 0;
                  *(char *)((int)puVar22 + 0x13) = SUB41(temp_v28,0);
                }
                else {
                  *(char *)(puVar22 + 3) = (char)temp_v15;
                  *(unsigned char *)((int)puVar22 + 0xd) = temp_v2;
                  *(unsigned char *)((int)puVar22 + 0xe) = temp_v3;
                  temp_v28 = (float)VectorFloatToUnsigned(temp_v28 * 255.0f,3);
                  *(unsigned char *)((int)puVar22 + 0xf) = (unsigned char)((unsigned int)temp_v15 >> 0x18) | 0x40;
                  *(unsigned char *)(puVar22 + 2) = 0;
                  *(unsigned char *)((int)puVar22 + 9) = 0;
                  *(unsigned char *)((int)puVar22 + 10) = 0;
                  *(char *)((int)puVar22 + 0xb) = SUB41(temp_v28,0);
                  *(unsigned char *)(puVar22 + 4) = 0;
                  *(unsigned char *)((int)puVar22 + 0x11) = 0;
                  *(unsigned char *)((int)puVar22 + 0x12) = 0;
                  *(char *)((int)puVar22 + 0x13) = SUB41(temp_v28,0);
                }
                temp_v16 = effGetFrameStep();
                *piVar23 = temp_v16 + temp_v19;
              }
            }
            else if (temp_v38 != 0) {
              shiftRandomNextFraction(0);
              temp_v28 = temp_v28 * 6.2831855f;
              piVar23[2] = (int)temp_v28;
              shiftRandomNextFraction(0);
              temp_v22 = 1.0f;
              temp_v14 = 0;
              temp_v28 = ((1.0f - pfVar26->field_0x78) + temp_v28 * pfVar26->field_0x78) *
                       pfVar26->field_0x74;
              piVar23[1] = (int)temp_v28;
              randomAdvanceShiftRegister();
              if ((temp_v14 & 1) != 0) {
                temp_v28 = -(float)piVar23[1];
                piVar23[1] = (int)temp_v28;
              }
              shiftRandomNextFraction(0);
              temp_v28 = ((temp_v22 - pfVar26->field_0x70) + temp_v28 * pfVar26->field_0x70) *
                       pfVar26->field_0x6c;
              piVar23[3] = (int)temp_v28;
              shiftRandomNextFraction(0);
              temp_v28 = (temp_v22 - pfVar26->field_0x68) + temp_v28 * pfVar26->field_0x68;
              piVar23[4] = (int)(pfVar26->field_0x60 * temp_v28);
              temp_v28 = pfVar26->field_0x64 * temp_v28;
              piVar23[5] = (int)temp_v28;
              if (!temp_v4) {
                *piVar23 = 0;
              }
              else {
                randomAdvanceShiftRegister();
                __aeabi_uidivmod();
                *piVar23 = temp_v17;
              }
              temp_v38 = temp_v38 - 1;
            }
          }
          temp_v20 = temp_v20 + 1;
          piVar23 = piVar23 + 6;
          pfVar21 = pfVar21 + 0xf;
          puVar22 = puVar22 + 5;
        } while ((int)temp_v20 < temp_v21);
      }
    }
  }
  return;
}

} /* extern "C" */
