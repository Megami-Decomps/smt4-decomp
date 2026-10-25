/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a9f4` (_code @ 0x31a9f4, 0xa38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
extern "C" {

int CONCAT44(double, double);
int matrixGetTranslation(float *);
int FUN_00245ed0(void);
int FUN_00245f48(void);
int matrixCopySelectedToGlobal(float *);
int randomAdvanceShiftRegister(...);
int shiftRandomNextFraction(int);
int gfxQuaternionWorkspaceBuildMatrix(void);
int phaseCosInterpolate(void);
int FUN_002b70cc(void);
int VectorUnsignedToFloat(unsigned int, int);
int __aeabi_uidivmod(void);

typedef struct fn_0031a9f4_arg0 fn_0031a9f4_arg0;
struct fn_0031a9f4_arg0 {
    unsigned char pad_0x0[0x10];
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x8];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    void *field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
};

/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp148; /* 0x148: local_148 */
} param_1_stack;

extern float DAT_00472530; /* 0x472530 */
extern float DAT_00472534; /* 0x472534 */
extern float DAT_00472538; /* 0x472538 */
extern float DAT_0047253c; /* 0x47253c */
extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
extern unsigned char DAT_004ea81c; /* 0x4ea81c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: matrixGetTranslation. */
/* Supplied declaration required: FUN_00245ed0. */
/* Supplied declaration required: FUN_00245f48. */
/* Supplied declaration required: matrixCopySelectedToGlobal. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
extern int effGetFrameCounter(void);
/* Supplied declaration required: gfxQuaternionWorkspaceBuildMatrix. */
/* Supplied declaration required: phaseCosInterpolate. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0031a9f4(fn_0031a9f4_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  void *pvVar4;
  float *pfVar5;
  int temp_v3;
  int temp_v4;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  unsigned int *puVar10;
  float *pfVar11;
  unsigned int in_fpscr;
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
  long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float fStack_11c;
  float fStack_118;
  int *temp_v28;
  int temp_v29;
  int temp_v30;
  float temp_v31;
  float temp_v32 [5];
  float temp_v33;
  float temp_v34;
  float temp_v35;
  int temp_v36;
  float temp_v37;
  int temp_v38;
  int temp_v39;
  float temp_v40;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_94 [28];
  float temp_v41;
  
  pvVar4 = param_1->field_0x34;
  temp_v28 = *(int **)param_1->field_0x30;
  if ((param_1->field_0x28 <= *(int *)((int)pvVar4 + 0x34)) || (*(int *)((int)pvVar4 + 0x34) == 0))
  {
    temp_v24 = 0.0f;
    temp_v36 = *(int *)((int)pvVar4 + 0x38);
    temp_v5 = (float)VectorUnsignedToFloat
                              (*(unsigned int *)((int)pvVar4 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v39 = *(int *)((int)pvVar4 + 0x40);
    temp_v17 = *(float *)((int)pvVar4 + 0x84) / temp_v5;
    temp_v31 = *(float *)((int)pvVar4 + 0x54);
    temp_v33 = *(float *)((int)pvVar4 + 0x58);
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 == 0.0f) << 0x1e) |
            ((unsigned int)(0.0f <= temp_v17) << 0x1d);
    temp_v10 = *(float *)((int)pvVar4 + 0x50);
    temp_v6 = (float)VectorUnsignedToFloat
                              (*(unsigned int *)((int)pvVar4 + 0x4c),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v0 = (unsigned char)(temp_v2 >> 0x18);
    temp_v37 = (temp_v6 * 3.1415927f) / temp_v5;
    if ((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6)) {
      matrixGetTranslation(&temp_v27);
      DAT_004ea91c = param_1->field_0x10;
      DAT_004ea920 = param_1->field_0x14;
      DAT_004ea924 = param_1->field_0x18;
      DAT_004ea928 = param_1->field_0x1c;
      gfxQuaternionWorkspaceBuildMatrix();
      DAT_004ea91c = DAT_00472530;
      DAT_004ea920 = DAT_00472534;
      DAT_004ea924 = DAT_00472538;
      DAT_004ea928 = DAT_0047253c;
      FUN_00245ed0();
      temp_v1 = DAT_004ea928;
      temp_v6 = DAT_004ea920;
      temp_v20 = 0.2617994f;
      temp_v38 = 0;
      temp_v35 = DAT_004ea91c;
      temp_v34 = DAT_004ea924;
      temp_v32[1] = *(float *)((int)pvVar4 + 0x80);
      temp_v32[2] = temp_v32[1] + *(float *)((int)pvVar4 + 0x7c);
      temp_v32[3] = temp_v32[2] + *(float *)((int)pvVar4 + 0x7c);
      temp_v32[4] = temp_v32[3] + temp_v32[1];
      if (0 < temp_v36) {
        temp_v21 = 40.743664f;
        temp_v7 = 1.0f - temp_v33;
        temp_v23 = 0.5f;
        temp_v8 = temp_v7;
        temp_v32[0] = temp_v24;
        do {
          if (temp_v28[1] != -1) {
            shiftRandomNextFraction(0);
            temp_v26 = (float)temp_v28[3];
            temp_v2 = 0;
            temp_v8 = (temp_v7 + temp_v8 * temp_v33) * temp_v31;
            temp_v24 = temp_v8 / temp_v5;
            randomAdvanceShiftRegister();
            if ((temp_v2 & 1) != 0) {
              temp_v24 = -temp_v24;
            }
            if ((temp_v28[2] & 0xff000000U) >= 0x40000001) {
              temp_v28[2] = temp_v28[2] + 0xc0000000;
              pfVar7 = *(float **)(*(int *)(*temp_v28 + 8) + 0x30);
              temp_v29 = (int)*(short *)(*temp_v28 + 2) / 5;
              temp_v2 = 0;
              temp_v25 = temp_v24;
              randomAdvanceShiftRegister();
              if ((temp_v2 & 1) != 0) {
                temp_v8 = -temp_v10;
                temp_v10 = temp_v8;
              }
              shiftRandomNextFraction(0);
              temp_v14 = temp_v8 * 3.1415927f;
              shiftRandomNextFraction(0);
              temp_v22 = (temp_v8 * 0.9f + 0.100000024f) * temp_v10;
              temp_v8 = temp_v14 * temp_v21;
              FUN_002b70cc();
              temp_v16 = CONCAT44(temp_v14 + temp_v37,temp_v8 * temp_v22);
              temp_v8 = (temp_v14 + temp_v37) * temp_v21;
              FUN_002b70cc();
              temp_v18 = (unsigned long long)(unsigned int)(temp_v8 * temp_v22);
              temp_v14 = temp_v8 * temp_v22 - (float)temp_v16;
              temp_v14 = temp_v14 / romwright_sqrt_4(temp_v14 * temp_v14 + temp_v17 * temp_v17);
              FUN_00245f48();
              temp_v14 = temp_v14 + temp_v26;
              temp_v8 = *(float *)((int)pvVar4 + 0x7c);
              DAT_00472558 = *(float *)((int)pvVar4 + 0x80) + temp_v8;
              DAT_004ea91c = temp_v6 * fStack_118 - temp_v34 * fStack_11c;
              DAT_004ea924 = temp_v35 * fStack_11c - temp_v6 * temp_v27;
              DAT_004ea920 = temp_v34 * temp_v27 - temp_v35 * fStack_118;
              temp_v12 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                            DAT_004ea924 * DAT_004ea924);
              if (0.0f < temp_v12) {
                DAT_004ea91c = DAT_004ea91c / temp_v12;
                DAT_004ea920 = DAT_004ea920 / temp_v12;
                DAT_004ea924 = DAT_004ea924 / temp_v12;
              }
              DAT_004ea93c = DAT_004ea91c;
              DAT_004ea940 = DAT_004ea920;
              DAT_004ea944 = DAT_004ea924;
              DAT_004ea948 = temp_v1;
              DAT_004ea938 = temp_v1;
              fStack_ac = DAT_004ea924 * temp_v35 - DAT_004ea91c * temp_v34;
              temp_v40 = DAT_004ea920 * temp_v34 - DAT_004ea924 * temp_v6;
              fStack_a8 = DAT_004ea91c * temp_v6 - DAT_004ea920 * temp_v35;
              fStack_a4 = temp_v1;
              DAT_004ea92c = DAT_004ea91c;
              DAT_004ea930 = DAT_004ea920;
              DAT_004ea934 = DAT_004ea924;
              DAT_004ea91c = DAT_004ea91c * DAT_00472558;
              DAT_00472554 = DAT_004ea920 * DAT_00472558;
              DAT_00472558 = DAT_004ea924 * DAT_00472558;
              DAT_004ea920 = DAT_00472554;
              DAT_004ea924 = DAT_00472558;
              *pfVar7 = DAT_004ea91c;
              pfVar7[1] = DAT_00472554;
              pfVar7[2] = DAT_00472558;
              DAT_00472554 = -DAT_004ea920;
              DAT_00472558 = -DAT_004ea924;
              pfVar7[0xc] = -DAT_004ea91c;
              pfVar7[0xd] = DAT_00472554;
              pfVar7[0xe] = DAT_00472558;
              DAT_004ea92c = DAT_004ea92c * temp_v8;
              DAT_00472554 = DAT_004ea930 * temp_v8;
              DAT_00472558 = DAT_004ea934 * temp_v8;
              DAT_004ea938 = DAT_004ea938 * temp_v8;
              DAT_004ea930 = DAT_00472554;
              DAT_004ea934 = DAT_00472558;
              pfVar7[3] = DAT_004ea92c;
              pfVar7[4] = DAT_00472554;
              pfVar7[5] = DAT_00472558;
              DAT_00472554 = -DAT_004ea930;
              DAT_00472558 = -DAT_004ea934;
              temp_v8 = (float)temp_v18;
              DAT_0047255c = DAT_004ea938;
              pfVar7[9] = -DAT_004ea92c;
              pfVar7[10] = DAT_00472554;
              pfVar7[0xb] = DAT_00472558;
              pfVar7[6] = 0.0f;
              pfVar7[7] = 0.0f;
              pfVar7[8] = 0.0f;
              DAT_004ea92c = DAT_004ea93c * temp_v8;
              DAT_004ea930 = DAT_004ea940 * temp_v8;
              DAT_004ea934 = DAT_004ea944 * temp_v8;
              DAT_004ea938 = DAT_004ea948 * temp_v8;
              temp_v4 = 0;
              do {
                pfVar5 = pfVar7 + temp_v4 * 3;
                pfVar11 = afStack_94 + temp_v4;
                temp_v4 = temp_v4 + 1;
                DAT_00472550 = *pfVar5 + DAT_004ea92c;
                DAT_00472554 = pfVar5[1] + DAT_004ea930;
                DAT_00472558 = pfVar5[2] + DAT_004ea934;
                DAT_0047255c = DAT_0047255c + DAT_004ea938;
                DAT_004ea91c = DAT_00472550;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea928 = DAT_0047255c;
                *pfVar5 = DAT_00472550;
                pfVar5[1] = DAT_00472554;
                temp_v8 = DAT_00472558;
                pfVar5[2] = DAT_00472558;
                *pfVar11 = 0.0f;
              } while (temp_v4 < 5);
              puVar10 = (unsigned int *)&DAT_004ea91c;
              if (temp_v29 >= 2) {
                puVar10 = (unsigned int *)&DAT_004ea81c;
              }
              temp_v30 = 1;
              if (temp_v30 < temp_v29) {
                do {
                  temp_v12 = (float)temp_v18;
                  temp_v41 = (float)((unsigned long long)temp_v16 >> 0x20);
                  pfVar7 = pfVar7 + 0xf;
                  shiftRandomNextFraction(0);
                  temp_v2 = 0;
                  temp_v19 = CONCAT44(temp_v14,(temp_v8 * 0.75f + 0.25f) * temp_v20);
                  randomAdvanceShiftRegister();
                  if ((temp_v2 & 1) != 0) {
                    temp_v20 = -temp_v20;
                  }
                  temp_v41 = temp_v41 + temp_v37;
                  temp_v15 = (unsigned long long)(unsigned int)temp_v41 << 0x20;
                  if ((int)temp_v41 >= 0x40490fdb) {
                    temp_v8 = 3.1415927f;
                    temp_v15 = CONCAT44(temp_v41 - 3.1415927f,temp_v10);
                    temp_v10 = -temp_v10;
                    shiftRandomNextFraction(0);
                    temp_v22 = -((float)temp_v15 * (temp_v8 * 0.9f + 0.100000024f));
                  }
                  temp_v41 = (float)((unsigned long long)temp_v15 >> 0x20);
                  temp_v8 = temp_v41 * temp_v21;
                  FUN_002b70cc();
                  temp_v8 = temp_v8 * temp_v22;
                  temp_v12 = temp_v8 - temp_v12;
                  temp_v14 = romwright_sqrt_4(temp_v12 * temp_v12 + temp_v17 * temp_v17);
                  temp_v16 = CONCAT44(temp_v41,temp_v14);
                  temp_v12 = temp_v12 / temp_v14;
                  FUN_00245f48();
                  temp_v41 = (float)((unsigned long long)temp_v19 >> 0x20);
                  temp_v14 = (float)temp_v19 + temp_v24 + temp_v12 + temp_v26;
                  matrixCopySelectedToGlobal(&temp_v40);
                  *(float *)&puVar10[0x40] = temp_v35;
                  *(float *)&puVar10[0x41] = temp_v6;
                  *(float *)&puVar10[0x42] = temp_v34;
                  *(float *)&puVar10[0x43] = temp_v1;
                  temp_v12 = (float)puVar10[0x40];
                  temp_v9 = (float)puVar10[0x41];
                  temp_v11 = (float)puVar10[0x42];
                  temp_v41 = (temp_v14 - temp_v41) * temp_v23 * temp_v21;
                  puVar10[0x40] =
                       temp_v12 * (float)puVar10[0x50] + temp_v9 * (float)puVar10[0x54] +
                       temp_v11 * (float)puVar10[0x58];
                  puVar10[0x41] =
                       temp_v12 * (float)puVar10[0x51] + temp_v9 * (float)puVar10[0x55] +
                       temp_v11 * (float)puVar10[0x59];
                  puVar10[0x42] =
                       temp_v12 * (float)puVar10[0x52] + temp_v9 * (float)puVar10[0x56] +
                       temp_v11 * (float)puVar10[0x5a];
                  puVar10[0x43] =
                       temp_v12 * (float)puVar10[0x53] + temp_v9 * (float)puVar10[0x57] +
                       temp_v11 * (float)puVar10[0x5b];
                  temp_v12 = temp_v41;
                  FUN_002b70cc();
                  phaseCosInterpolate();
                  temp_v24 = temp_v24 + temp_v25;
                  temp_v18 = (unsigned long long)(unsigned int)temp_v8;
                  temp_v4 = 0;
                  puVar10[0x48] = puVar10[0x40];
                  puVar10[0x49] = puVar10[0x41];
                  puVar10[0x4a] = puVar10[0x42];
                  puVar10[0x4b] = puVar10[0x43];
                  do {
                    pfVar11 = afStack_94 + temp_v4;
                    temp_v9 = *pfVar11;
                    temp_v8 = temp_v32[temp_v4] * (temp_v41 / temp_v12);
                    pfVar8 = (float *)(puVar10 + 0x44);
                    pfVar9 = (float *)(puVar10 + 0x40);
                    pfVar5 = pfVar7 + temp_v4 * 3;
                    temp_v4 = temp_v4 + 1;
                    *pfVar11 = temp_v9 + temp_v8;
                    temp_v9 = temp_v9 + temp_v8 + (float)temp_v16;
                    *pfVar8 = (float)puVar10[0x48];
                    puVar10[0x45] = puVar10[0x49];
                    puVar10[0x46] = puVar10[0x4a];
                    puVar10[0x47] = puVar10[0x4b];
                    temp_v11 = pfVar5[-0xe];
                    temp_v13 = pfVar5[-0xd];
                    *pfVar9 = pfVar5[-0xf];
                    *(float *)&puVar10[0x41] = temp_v11;
                    *(float *)&puVar10[0x42] = temp_v13;
                    *(float *)&puVar10[0x43] = DAT_0047255c;
                    *pfVar8 = *pfVar8 * temp_v9;
                    *(float *)&puVar10[0x45] = (float)puVar10[0x45] * temp_v9;
                    *(float *)&puVar10[0x46] = (float)puVar10[0x46] * temp_v9;
                    *(float *)&puVar10[0x47] = (float)puVar10[0x47] * temp_v9;
                    *pfVar9 = *pfVar9 + *pfVar8;
                    puVar10[0x41] = (float)puVar10[0x41] + (float)puVar10[0x45];
                    puVar10[0x42] = (float)puVar10[0x42] + (float)puVar10[0x46];
                    puVar10[0x43] = (float)puVar10[0x43] + (float)puVar10[0x47];
                    DAT_0047255c = (float)puVar10[0x43];
                    DAT_00472550 = *pfVar9;
                    DAT_00472554 = (float)puVar10[0x41];
                    DAT_00472558 = (float)puVar10[0x42];
                    *pfVar5 = DAT_00472550;
                    pfVar5[1] = DAT_00472554;
                    pfVar5[2] = DAT_00472558;
                    *pfVar11 = temp_v8;
                  } while (temp_v4 < 5);
                  temp_v30 = temp_v30 + 1;
                } while (temp_v30 < temp_v29);
              }
              temp_v4 = effGetFrameCounter();
              temp_v28[1] = temp_v28[1] + temp_v4;
            }
            else {
              temp_v28[1] = -1;
              if (0 < temp_v39) {
                randomAdvanceShiftRegister(0);
                __aeabi_uidivmod();
                temp_v28[1] = temp_v28[1] - temp_v3;
              }
            }
          }
          else {
            temp_v28[2] = -1;
            temp_v4 = effGetFrameCounter();
            temp_v28[1] = temp_v28[1] + temp_v4;
          }
          temp_v38 = temp_v38 + 1;
          temp_v28 = temp_v28 + 4;
        } while (temp_v38 < temp_v36);
      }
    }
  }
  return;
}

} /* extern "C" */
