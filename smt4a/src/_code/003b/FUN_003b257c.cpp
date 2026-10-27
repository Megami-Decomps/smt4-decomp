/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b257c` (_code @ 0x3b257c, 0xc2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int asdGxSetEffectColorFromRGBA8(unsigned int);
int randomAdvanceShiftRegister(void);
int shiftRandomNextFraction(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_003b257c_arg0 fn_003b257c_arg0;
struct fn_003b257c_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
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
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_003b257c(fn_003b257c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float temp_v10;
  float *pfVar12;
  float *pfVar13;
  unsigned char *puVar14;
  float temp_v11;
  void *pvVar15;
  int temp_v12;
  int temp_v13;
  float *pfVar18;
  unsigned char *puVar19;
  int temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  float temp_v18;
  float temp_v19;
  int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
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
  float *temp_v40;
  int temp_v41;
  
  temp_v8 = effGetFrameStep();
  pvVar15 = param_1->field_0x40;
  temp_v15 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1->field_0x34 <= *(int *)((int)pvVar15 + 0x34)) || (*(int *)((int)pvVar15 + 0x34) == 0)
     ) {
    temp_v12 = *(int *)((int)pvVar15 + 0x4c);
    temp_v13 = *(int *)((int)pvVar15 + 0x38);
    temp_v40 = *(float **)param_1->field_0x3c;
    temp_v9 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v12 != 0) {
      temp_v27 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v16 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = (int)(*(float *)((int)pvVar15 + 0x44) * temp_v27);
      temp_v17 = (int)(*(float *)((int)pvVar15 + 0x48) * temp_v16);
      if ((*(char *)((int)pvVar15 + 0x55) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v1 = 0;
        temp_v41 = *(int *)((int)pvVar15 + 0x50);
      }
      else {
        temp_v1 = 1;
        temp_v41 = temp_v13;
      }
      temp_v31 = 0.0f;
      pfVar18 = *(float **)(*(int *)(temp_v9 + 8) + 0x30);
      puVar19 = *(unsigned char **)(*(int *)(temp_v9 + 8) + 0x38);
      *(unsigned int *)(temp_v9 + 0x54) = *(unsigned int *)(temp_v9 + 0x54) | 0x21;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)((int)pvVar15 + 0x58) & 0xffffff);
      temp_v6 = DAT_006472e8;
      temp_v4 = DAT_006472e4;
      temp_v2 = DAT_006472e0;
      temp_v16 = DAT_006472dc;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)((int)pvVar15 + 0x5c) & 0xffffff);
      temp_v7 = DAT_006472e8;
      temp_v5 = DAT_006472e4;
      temp_v3 = DAT_006472e0;
      temp_v27 = DAT_006472dc;
      temp_v29 = 1.0f;
      temp_v18 = *(float *)((int)pvVar15 + 0x8c);
      temp_v19 = *(float *)((int)pvVar15 + 0x98);
      temp_v0 = *(char *)((int)pvVar15 + 0x54);
      temp_v39 = 0;
      if (0 < temp_v13) {
        temp_v30 = temp_v29;
        temp_v38 = temp_v19;
        do {
          temp_v10 = *temp_v40;
          if (temp_v10 != -NAN) {
            if (temp_v10 != -NAN) {
              if ((int)temp_v10 >= temp_v12) {
                temp_v19 = 0.0f;
                temp_v9 = 0;
                do {
                  pfVar12 = pfVar18 + temp_v9 * 3;
                  puVar14 = puVar19 + temp_v9 * 4;
                  *pfVar12 = 0.0f;
                  pfVar12[1] = 0.0f;
                  pfVar12[2] = 0.0f;
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  temp_v9 = temp_v9 + 1;
                  puVar14[2] = 0;
                  puVar14[3] = 0;
                } while (temp_v9 < 0xd);
                if (temp_v0 == '\0') {
                  temp_v10 = -NAN;
                }
                else {
                  temp_v10 = -NAN;
                }
                *temp_v40 = temp_v10;
              }
              else {
                temp_v32 = temp_v40[4];
                temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v34 = temp_v40[5];
                temp_v35 = temp_v40[6] + temp_v40[7] * temp_v19;
                temp_v21 = temp_v40[8];
                temp_v28 = g_polyDefaultColor * temp_v21;
                DAT_006472e0 = DAT_005c1104 * temp_v21;
                DAT_006472e4 = DAT_005c1108 * temp_v21;
                temp_v36 = (temp_v40[1] + temp_v18 * temp_v19 * 0.5f) * temp_v19 -
                         temp_v38 * temp_v19 * temp_v19 * 0.5f;
                temp_v21 = DAT_005c110c * temp_v21;
                temp_v37 = (temp_v40[3] + (temp_v40[2] + temp_v18 * temp_v19 * 0.5f) * temp_v19) * 40.743664f;
                temp_v19 = temp_v37;
                DAT_006472dc = temp_v28;
                DAT_006472e8 = temp_v21;
                temp_v23 = DAT_006472e0;
                temp_v33 = DAT_006472e4;
                FUN_001b63b0();
                FUN_001a1ee0();
                DAT_006472fc = temp_v37 * temp_v35;
                DAT_005c1128 = temp_v19 * temp_v35;
                DAT_00647308 = temp_v31 * temp_v35;
                DAT_005c1124 = temp_v36;
                DAT_00647300 = temp_v36;
                DAT_00647304 = DAT_005c1128;
                *pfVar18 = DAT_006472fc;
                pfVar18[1] = DAT_005c1124;
                pfVar18[2] = DAT_005c1128;
                temp_v9 = 0;
                do {
                  pfVar12 = (float *)(temp_v9 * 4 + 0x5c1174);
                  pfVar13 = (float *)(temp_v9 * 4 + 0x5c1140);
                  temp_v14 = temp_v9 + 1;
                  DAT_005c1124 = temp_v32 * *pfVar12 + DAT_00647300 + temp_v31 * temp_v23 * *pfVar13;
                  DAT_005c1128 = *pfVar12 * 0.0f + DAT_00647304 + -temp_v37 * temp_v33 * *pfVar13;
                  pfVar18[temp_v9 * 3 + 3] =
                       *pfVar12 * 0.0f + DAT_006472fc + temp_v19 * temp_v28 * *pfVar13;
                  pfVar18[temp_v9 * 3 + 4] = DAT_005c1124;
                  pfVar18[temp_v9 * 3 + 5] = DAT_005c1128;
                  temp_v9 = temp_v14;
                } while (temp_v14 < 6);
                temp_v9 = 6;
                do {
                  pfVar12 = (float *)(temp_v9 * 4 + 0x5c1174);
                  pfVar13 = (float *)(temp_v9 * 4 + 0x5c1140);
                  temp_v14 = temp_v9 + 1;
                  g_effectRingScratchColor = *pfVar12 * 0.0f + DAT_006472fc + temp_v19 * temp_v28 * *pfVar13;
                  DAT_005c1124 = temp_v34 * *pfVar12 + DAT_00647300 + temp_v31 * temp_v23 * *pfVar13;
                  DAT_005c1128 = *pfVar12 * 0.0f + DAT_00647304 + -temp_v37 * temp_v33 * *pfVar13;
                  DAT_005c112c = temp_v30 * *pfVar12 + DAT_00647308 + temp_v31 * temp_v21 * *pfVar13;
                  pfVar18[temp_v9 * 3 + 3] = g_effectRingScratchColor;
                  pfVar18[temp_v9 * 3 + 4] = DAT_005c1124;
                  pfVar18[temp_v9 * 3 + 5] = DAT_005c1128;
                  temp_v9 = temp_v14;
                } while (temp_v14 < 0xc);
                if ((int)temp_v10 < temp_v20) {
                  temp_v23 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v19 = (float)VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v19 = temp_v23 / temp_v19;
                }
                else {
                  temp_v19 = temp_v29;
                  if (temp_v17 < (int)temp_v10) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v12 - (int)temp_v10,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v23 = (float)VectorSignedToFloat(temp_v12 - temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v19 = temp_v19 / temp_v23;
                  }
                }
                temp_v9 = 1;
                DAT_006472ec = g_polyDefaultColor * temp_v19;
                DAT_006472f0 = DAT_005c1104 * temp_v19;
                DAT_006472f4 = DAT_005c1108 * temp_v19;
                DAT_006472f8 = DAT_005c110c * temp_v19;
                temp_v8 = VectorFloatToUnsigned(temp_v27 * DAT_006472ec * 255.0f,3);
                temp_v24 = VectorFloatToUnsigned(temp_v3 * DAT_006472f0 * 255.0f,3);
                temp_v25 = VectorFloatToUnsigned(temp_v5 * DAT_006472f4 * 255.0f,3);
                temp_v22 = VectorFloatToUnsigned(temp_v7 * DAT_006472f8 * 255.0f,3);
                do {
                  puVar14 = puVar19 + temp_v9 * 4;
                  *puVar14 = (char)temp_v22;
                  puVar14[1] = (char)temp_v25;
                  temp_v9 = temp_v9 + 1;
                  puVar14[2] = (char)temp_v24;
                  puVar14[3] = (char)temp_v8;
                } while (temp_v9 < 0xd);
                temp_v10 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                DAT_006472dc = temp_v16 * DAT_006472ec;
                temp_v8 = VectorFloatToUnsigned(temp_v19 * 255.0f,3);
                temp_v19 = (float)(int)(temp_v10 + temp_v15);
                DAT_006472e0 = temp_v2 * DAT_006472f0;
                DAT_006472e4 = temp_v4 * DAT_006472f4;
                DAT_006472e8 = temp_v6 * DAT_006472f8;
                temp_v25 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
                temp_v22 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
                temp_v26 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
                temp_v24 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
                *puVar19 = (char)temp_v24;
                puVar19[1] = (char)temp_v26;
                puVar19[2] = (char)temp_v22;
                puVar19[3] = (unsigned char)temp_v25 | (unsigned char)temp_v8;
                *temp_v40 = temp_v19;
              }
            }
            else if (temp_v41 != 0) {
              shiftRandomNextFraction(0);
              temp_v19 = temp_v19 * 6.2831855f;
              temp_v40[3] = temp_v19;
              temp_v23 = *(float *)((int)pvVar15 + 0x70);
              shiftRandomNextFraction(0);
              temp_v33 = temp_v29 - temp_v23;
              temp_v10 = (temp_v33 + temp_v19 * temp_v23) * *(float *)((int)pvVar15 + 0x6c);
              temp_v40[4] = temp_v10;
              temp_v19 = temp_v29;
              shiftRandomNextFraction(0);
              temp_v10 = (temp_v33 + temp_v10 * temp_v23) * *(float *)((int)pvVar15 + 0x6c);
              temp_v40[5] = temp_v10;
              shiftRandomNextFraction(0);
              temp_v23 = ((temp_v19 - *(float *)((int)pvVar15 + 0x78)) +
                       temp_v10 * *(float *)((int)pvVar15 + 0x78)) * *(float *)((int)pvVar15 + 0x74);
              shiftRandomNextFraction(0);
              temp_v33 = *(float *)((int)pvVar15 + 0x80);
              temp_v21 = *(float *)((int)pvVar15 + 0x7c);
              temp_v37 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v40[6] = temp_v23;
              temp_v23 = ((temp_v19 - temp_v33) + temp_v10 * temp_v33) * temp_v21 - temp_v23;
              temp_v40[7] = temp_v23 / temp_v37;
              shiftRandomNextFraction(0);
              temp_v10 = ((temp_v19 - *(float *)((int)pvVar15 + 0x94)) +
                       temp_v23 * *(float *)((int)pvVar15 + 0x94)) * *(float *)((int)pvVar15 + 0x90);
              temp_v40[1] = temp_v10;
              shiftRandomNextFraction(0);
              temp_v10 = ((temp_v19 - *(float *)((int)pvVar15 + 0x88)) +
                       temp_v10 * *(float *)((int)pvVar15 + 0x88)) * *(float *)((int)pvVar15 + 0x84);
              temp_v40[2] = temp_v10;
              shiftRandomNextFraction(0);
              temp_v19 = *(float *)((int)pvVar15 + 0x60) *
                       ((temp_v19 - *(float *)((int)pvVar15 + 0x68)) +
                       temp_v10 * *(float *)((int)pvVar15 + 0x68));
              temp_v40[8] = temp_v19;
              if (!temp_v1) {
                *temp_v40 = 0.0f;
              }
              else {
                randomAdvanceShiftRegister();
                __aeabi_uidivmod();
                *temp_v40 = temp_v11;
              }
              temp_v41 = temp_v41 - 1;
            }
          }
          pfVar18 = pfVar18 + 0x27;
          puVar19 = puVar19 + 0x34;
          temp_v39 = temp_v39 + 1;
          temp_v40 = temp_v40 + 0xb;
        } while (temp_v39 < temp_v13);
      }
    }
  }
  return;
}

} /* extern "C" */
