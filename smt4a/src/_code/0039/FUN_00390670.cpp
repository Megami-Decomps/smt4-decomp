/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390670` (_code @ 0x390670, 0xc10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int asdGxSetEffectColorFromRGBA8(unsigned int);
int randomAdvanceShiftRegister(...);
int shiftRandomNextFraction(...);
int SUB41(double, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_00390670_arg0 fn_00390670_arg0;
struct fn_00390670_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
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
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
extern unsigned int FUN_00221cb0(void);
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00390670(fn_00390670_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  float temp_v12;
  float *pfVar14;
  float *pfVar15;
  unsigned char *puVar16;
  float temp_v13;
  void *pvVar17;
  float temp_v14;
  int temp_v15;
  float *pfVar20;
  unsigned char *puVar21;
  int temp_v16;
  unsigned int in_fpscr;
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
  float *temp_v39;
  float temp_v40;
  int temp_v41;
  int temp_v42;
  int temp_v43;
  int temp_v44;
  int temp_v45;
  float temp_v46;
  
  temp_v10 = effGetFrameStep();
  pvVar17 = param_1->field_0x40;
  temp_v21 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1->field_0x34 <= *(int *)((int)pvVar17 + 0x34)) || (*(int *)((int)pvVar17 + 0x34) == 0)
     ) {
    temp_v14 = *(float *)((int)pvVar17 + 0x4c);
    temp_v15 = *(int *)((int)pvVar17 + 0x38);
    temp_v39 = *(float **)param_1->field_0x3c;
    temp_v11 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v14 != 0.0f) {
      temp_v25 = 1.0f;
      if (*(char *)((int)pvVar17 + 0x88) != '\0') {
        temp_v21 = -temp_v21;
        temp_v24 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v46 = 0.0f;
        temp_v24 = (1.0f - *(float *)((int)pvVar17 + 0x48)) * temp_v24;
        temp_v22 = (1.0f - *(float *)((int)pvVar17 + 0x44)) * temp_v22;
        temp_v40 = temp_v14;
      }
      else {
        temp_v24 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v40 = 0.0f;
        temp_v24 = *(float *)((int)pvVar17 + 0x44) * temp_v24;
        temp_v22 = *(float *)((int)pvVar17 + 0x48) * temp_v22;
        temp_v46 = temp_v14;
      }
      temp_v44 = (int)temp_v21;
      temp_v43 = (int)temp_v24;
      temp_v42 = (int)temp_v22;
      if ((*(char *)((int)pvVar17 + 0x55) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v4 = 0;
        temp_v41 = *(int *)((int)pvVar17 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v41 = temp_v15;
      }
      temp_v28 = 0.0f;
      pfVar20 = *(float **)(*(int *)(temp_v11 + 8) + 0x30);
      puVar21 = *(unsigned char **)(*(int *)(temp_v11 + 8) + 0x38);
      *(unsigned int *)(temp_v11 + 0x54) = *(unsigned int *)(temp_v11 + 0x54) | 0x21;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)((int)pvVar17 + 0x58) & 0xffffff);
      temp_v8 = DAT_006472e8;
      temp_v6 = DAT_006472e4;
      temp_v24 = DAT_006472e0;
      temp_v21 = DAT_006472dc;
      asdGxSetEffectColorFromRGBA8(*(unsigned int *)((int)pvVar17 + 0x5c) & 0xffffff);
      temp_v9 = DAT_006472e8;
      temp_v7 = DAT_006472e4;
      temp_v5 = DAT_006472e0;
      temp_v22 = DAT_006472dc;
      temp_v45 = 0;
      temp_v27 = *(float *)((int)pvVar17 + 0x84);
      temp_v2 = *(char *)((int)pvVar17 + 0x54);
      if (0 < temp_v15) {
        temp_v33 = 0.5f;
        temp_v37 = 6.2831855f;
        temp_v38 = -0.5f;
        temp_v17 = temp_v27 * 0.5f;
        temp_v35 = 40.743664f;
        temp_v36 = 255.0f;
        temp_v34 = temp_v17;
        temp_v29 = temp_v28;
        do {
          temp_v12 = *temp_v39;
          if (temp_v12 != -NAN) {
            if (temp_v12 != -NAN) {
              if (temp_v12 == temp_v46) {
                temp_v11 = 0;
                do {
                  pfVar14 = pfVar20 + temp_v11 * 3;
                  puVar16 = puVar21 + temp_v11 * 4;
                  *pfVar14 = temp_v28;
                  pfVar14[1] = temp_v28;
                  pfVar14[2] = temp_v28;
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  temp_v11 = temp_v11 + 1;
                  puVar16[2] = 0;
                  puVar16[3] = 0;
                } while (temp_v11 < 0xd);
                if (temp_v2 == '\0') {
                  temp_v17 = -NAN;
                }
                else {
                  temp_v17 = -NAN;
                }
                *temp_v39 = temp_v17;
                temp_v17 = temp_v28;
              }
              else {
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v28 < temp_v27) << 0x1f) |
                        ((unsigned int)(temp_v28 == temp_v27) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v28 != temp_v28) || (temp_v27 != temp_v27)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v23 = (temp_v39[1] / temp_v34) * temp_v38;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v17 < temp_v23) << 0x1f) |
                          ((unsigned int)(temp_v17 == temp_v23) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v23 != temp_v23)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v17 = temp_v23;
                  }
                }
                temp_v26 = temp_v39[5] + (temp_v39[1] + temp_v27 * temp_v17 * temp_v33) * temp_v17;
                DAT_006472e8 = temp_v39[6];
                DAT_006472dc = g_polyDefaultColor * DAT_006472e8;
                DAT_006472e0 = DAT_005c1104 * DAT_006472e8;
                DAT_006472e4 = DAT_005c1108 * DAT_006472e8;
                DAT_006472e8 = DAT_005c110c * DAT_006472e8;
                temp_v18 = temp_v39[2] * temp_v35;
                temp_v17 = temp_v18;
                temp_v23 = DAT_006472dc;
                temp_v30 = DAT_006472e0;
                temp_v31 = DAT_006472e4;
                temp_v32 = DAT_006472e8;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v19 = temp_v39[3];
                temp_v20 = temp_v39[4];
                DAT_006472fc = temp_v17 * temp_v26;
                DAT_005c1124 = temp_v29 * temp_v26;
                DAT_005c1128 = temp_v18 * temp_v26;
                DAT_00647308 = temp_v29 * temp_v26;
                DAT_00647300 = DAT_005c1124;
                DAT_00647304 = DAT_005c1128;
                *pfVar20 = DAT_006472fc;
                pfVar20[1] = DAT_005c1124;
                pfVar20[2] = DAT_005c1128;
                temp_v11 = 0;
                do {
                  pfVar14 = (float *)(temp_v11 * 4 + 0x5c1174);
                  pfVar15 = (float *)(temp_v11 * 4 + 0x5c1140);
                  temp_v16 = temp_v11 + 1;
                  DAT_005c1124 = temp_v29 * temp_v19 * *pfVar14 + DAT_00647300 +
                                 temp_v29 * temp_v30 * *pfVar15;
                  DAT_005c1128 = temp_v18 * temp_v19 * *pfVar14 + DAT_00647304 +
                                 -temp_v17 * temp_v31 * *pfVar15;
                  pfVar20[temp_v11 * 3 + 3] =
                       temp_v17 * temp_v19 * *pfVar14 + DAT_006472fc + temp_v18 * temp_v23 * *pfVar15;
                  pfVar20[temp_v11 * 3 + 4] = DAT_005c1124;
                  pfVar20[temp_v11 * 3 + 5] = DAT_005c1128;
                  temp_v11 = temp_v16;
                } while (temp_v16 < 6);
                temp_v11 = 6;
                do {
                  pfVar14 = (float *)(temp_v11 * 4 + 0x5c1174);
                  pfVar15 = (float *)(temp_v11 * 4 + 0x5c1140);
                  temp_v16 = temp_v11 + 1;
                  g_effectRingScratchColor = temp_v17 * temp_v20 * *pfVar14 + DAT_006472fc +
                                 temp_v18 * temp_v23 * *pfVar15;
                  DAT_005c1124 = temp_v29 * temp_v20 * *pfVar14 + DAT_00647300 +
                                 temp_v29 * temp_v30 * *pfVar15;
                  DAT_005c1128 = temp_v18 * temp_v20 * *pfVar14 + DAT_00647304 +
                                 -temp_v17 * temp_v31 * *pfVar15;
                  DAT_005c112c = temp_v29 * temp_v20 * *pfVar14 + DAT_00647308 +
                                 temp_v29 * temp_v32 * *pfVar15;
                  pfVar20[temp_v11 * 3 + 3] = g_effectRingScratchColor;
                  pfVar20[temp_v11 * 3 + 4] = DAT_005c1124;
                  pfVar20[temp_v11 * 3 + 5] = DAT_005c1128;
                  temp_v11 = temp_v16;
                } while (temp_v16 < 0xc);
                if ((int)temp_v12 < temp_v43) {
                  temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v23 = (float)VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = temp_v17 / temp_v23;
                }
                else {
                  temp_v17 = temp_v25;
                  if (temp_v42 < (int)temp_v12) {
                    temp_v23 = (float)VectorSignedToFloat((int)temp_v14 - (int)temp_v12,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v17 = (float)VectorSignedToFloat((int)temp_v14 - temp_v42,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v17 = temp_v23 / temp_v17;
                  }
                }
                DAT_006472ec = g_polyDefaultColor * temp_v17;
                DAT_006472f0 = DAT_005c1104 * temp_v17;
                DAT_006472f4 = DAT_005c1108 * temp_v17;
                DAT_006472f8 = DAT_005c110c * temp_v17;
                DAT_006472dc = temp_v22 * DAT_006472ec;
                DAT_006472e0 = temp_v5 * DAT_006472f0;
                DAT_006472e4 = temp_v7 * DAT_006472f4;
                DAT_006472e8 = temp_v9 * DAT_006472f8;
                temp_v10 = FUN_00221cb0();
                temp_v11 = 1;
                do {
                  puVar16 = puVar21 + temp_v11 * 4;
                  *puVar16 = (char)temp_v10;
                  puVar16[1] = (char)((unsigned int)temp_v10 >> 8);
                  temp_v11 = temp_v11 + 1;
                  puVar16[2] = (char)((unsigned int)temp_v10 >> 0x10);
                  puVar16[3] = (char)((unsigned int)temp_v10 >> 0x18);
                } while (temp_v11 < 0xd);
                DAT_006472dc = temp_v21 * DAT_006472ec;
                DAT_006472e0 = temp_v24 * DAT_006472f0;
                DAT_006472e4 = temp_v6 * DAT_006472f4;
                DAT_006472e8 = temp_v8 * DAT_006472f8;
                temp_v10 = FUN_00221cb0();
                temp_v17 = (float)VectorFloatToUnsigned(temp_v17 * temp_v36,3);
                *puVar21 = (char)temp_v10;
                puVar21[1] = (char)((unsigned int)temp_v10 >> 8);
                puVar21[2] = (char)((unsigned int)temp_v10 >> 0x10);
                puVar21[3] = (unsigned char)((unsigned int)temp_v10 >> 0x18) | SUB41(temp_v17,0);
                *temp_v39 = (float)((int)temp_v12 + temp_v44);
              }
            }
            else if (temp_v41 != 0) {
              shiftRandomNextFraction(0);
              temp_v17 = temp_v17 * temp_v37;
              temp_v39[2] = temp_v17;
              temp_v23 = *(float *)((int)pvVar17 + 0x70);
              shiftRandomNextFraction(0);
              temp_v30 = temp_v25 - temp_v23;
              temp_v12 = (temp_v30 + temp_v17 * temp_v23) * *(float *)((int)pvVar17 + 0x6c);
              temp_v39[3] = temp_v12;
              temp_v17 = temp_v25;
              shiftRandomNextFraction(0);
              temp_v12 = (temp_v30 + temp_v12 * temp_v23) * *(float *)((int)pvVar17 + 0x6c);
              temp_v39[4] = temp_v12;
              temp_v23 = *(float *)((int)pvVar17 + 0x78);
              shiftRandomNextFraction(0);
              temp_v12 = ((temp_v17 - temp_v23) + temp_v12 * temp_v23) * *(float *)((int)pvVar17 + 0x74);
              temp_v39[5] = temp_v12;
              shiftRandomNextFraction(0);
              temp_v12 = ((temp_v17 - *(float *)((int)pvVar17 + 0x80)) +
                       temp_v12 * *(float *)((int)pvVar17 + 0x80)) * *(float *)((int)pvVar17 + 0x7c);
              temp_v39[1] = temp_v12;
              shiftRandomNextFraction(0);
              temp_v17 = *(float *)((int)pvVar17 + 0x60) *
                       ((temp_v17 - *(float *)((int)pvVar17 + 0x68)) +
                       temp_v12 * *(float *)((int)pvVar17 + 0x68));
              temp_v39[6] = temp_v17;
              if (temp_v4) {
                randomAdvanceShiftRegister(0);
                __aeabi_uidivmod();
                *temp_v39 = temp_v13;
              }
              else {
                *temp_v39 = temp_v40;
                temp_v17 = temp_v40;
              }
              temp_v41 = temp_v41 - 1;
            }
          }
          pfVar20 = pfVar20 + 0x27;
          puVar21 = puVar21 + 0x34;
          temp_v45 = temp_v45 + 1;
          temp_v39 = temp_v39 + 7;
        } while (temp_v45 < temp_v15);
      }
    }
  }
  return;
}

} /* extern "C" */
