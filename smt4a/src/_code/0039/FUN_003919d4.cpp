/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003919d4` (_code @ 0x3919d4, 0x3fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern float DAT_005c1100; /* 0x5c1100 */
extern float DAT_005c1104; /* 0x5c1104 */
extern float *DAT_005c1108; /* 0x5c1108 */
extern float DAT_005c110c; /* 0x5c110c */
extern unsigned int DAT_005c1120; /* 0x5c1120 */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */


void FUN_003919d4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
  unsigned int in_fpscr;
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
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  
  temp_v4 = *(int *)(param_1 + 0x34);
  temp_v3 = *(int *)(param_1 + 0x40);
  temp_v2 = **(int **)(param_1 + 0x3c);
  temp_v5 = *(int *)(temp_v3 + 0x34);
  if ((temp_v4 <= temp_v5) || (temp_v5 == 0)) {
    temp_v12 = *(float *)(temp_v3 + 0x60);
    temp_v25 = 0.0f;
    if (*(char *)(temp_v3 + 0x68) != '\0') {
      temp_v4 = temp_v5 - temp_v4;
    }
    temp_v14 = *(float *)(temp_v3 + 100);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
    temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v6 >> 0x16) & 3);
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
      temp_v16 = (romwright_fabs_4(temp_v12) / (temp_v14 * 0.5f)) * -0.5f;
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < temp_v16) << 0x1f) |
              ((unsigned int)(temp_v7 == temp_v16) << 0x1e);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((temp_v7 != temp_v7) || (temp_v16 != temp_v16))) {
        temp_v7 = temp_v16;
      }
    }
    temp_v27 = 1.0f;
    temp_v16 = *(float *)(temp_v3 + 0x40);
    temp_v0 = (int)((int)*(short *)(temp_v2 + 2) + ((unsigned int)((int)*(short *)(temp_v2 + 2) >> 0x1f) >> 0x1e))
            >> 2;
    pfVar7 = *(float **)(*(int *)(temp_v2 + 8) + 0x30);
    *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x54) | 1;
    temp_v20 = (float)VectorUnsignedToFloat(*(unsigned int *)(temp_v3 + 0x38),(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v16 = temp_v16 + (romwright_fabs_4(temp_v12) + temp_v14 * temp_v7 * 0.5f) * temp_v7;
    temp_v20 = 6.2831855f / temp_v20;
    temp_v7 = *(float *)(temp_v3 + 0x50) + temp_v16;
    temp_v17 = DAT_005c1100 * temp_v7;
    DAT_006472e8 = *(float *)(temp_v3 + 0x54) + temp_v7;
    temp_v12 = *(float *)(temp_v3 + 0x58) + DAT_006472e8;
    temp_v18 = DAT_005c1104 * temp_v7;
    temp_v19 = romwright_u2f((unsigned int)(DAT_005c1108)) * temp_v7;
    temp_v7 = DAT_005c110c * temp_v7;
    temp_v14 = DAT_005c1100 * DAT_006472e8;
    temp_v15 = DAT_005c1104 * DAT_006472e8;
    DAT_006472e4 = romwright_u2f((unsigned int)(DAT_005c1108)) * DAT_006472e8;
    DAT_006472e8 = DAT_005c110c * DAT_006472e8;
    pfVar8 = DAT_005c1108;
    if (temp_v0 != 0) {
      pfVar8 = (float *)&DAT_005c1120;
    }
    temp_v6 = 0;
    temp_v13 = DAT_005c1100 * temp_v12;
    DAT_006472f0 = DAT_005c1104 * temp_v12;
    DAT_006472f4 = romwright_u2f((unsigned int)(DAT_005c1108)) * temp_v12;
    temp_v12 = DAT_005c110c * temp_v12;
    temp_v26 = temp_v25;
    DAT_006472dc = temp_v14;
    DAT_006472e0 = temp_v15;
    DAT_006472ec = temp_v13;
    DAT_006472f8 = temp_v12;
    temp_v21 = DAT_006472e4;
    temp_v22 = DAT_006472e8;
    temp_v23 = DAT_006472f0;
    temp_v24 = DAT_006472f4;
    if (temp_v0 != 0) {
      do {
        temp_v8 = temp_v25 * 40.743664f;
        temp_v9 = temp_v8;
        FUN_001b63b0();
        FUN_001a1ee0();
        temp_v25 = temp_v25 + temp_v20;
        DAT_006472ec = temp_v9;
        DAT_006472f0 = temp_v26;
        DAT_006472f4 = temp_v8;
        DAT_006472f8 = temp_v27;
        *pfVar8 = temp_v9 * temp_v16;
        pfVar8[1] = temp_v26 * temp_v16;
        pfVar8[2] = temp_v8 * temp_v16;
        pfVar8[3] = temp_v27 * temp_v16;
        *pfVar7 = temp_v9 * temp_v16;
        pfVar7[1] = pfVar8[1];
        pfVar7[2] = pfVar8[2];
        temp_v9 = temp_v17 * DAT_006472ec;
        temp_v8 = temp_v18 * DAT_006472f0;
        temp_v10 = temp_v19 * DAT_006472f4;
        temp_v11 = temp_v7 * DAT_006472f8;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[3] = temp_v9;
        pfVar7[4] = pfVar8[1];
        pfVar7[5] = pfVar8[2];
        temp_v9 = temp_v14 * DAT_006472ec;
        temp_v8 = temp_v15 * DAT_006472f0;
        temp_v10 = temp_v21 * DAT_006472f4;
        temp_v11 = temp_v22 * DAT_006472f8;
        temp_v6 = temp_v6 + 1;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[6] = temp_v9;
        pfVar7[7] = pfVar8[1];
        pfVar7[8] = pfVar8[2];
        temp_v9 = temp_v13 * DAT_006472ec;
        temp_v8 = temp_v23 * DAT_006472f0;
        temp_v10 = temp_v24 * DAT_006472f4;
        temp_v11 = temp_v12 * DAT_006472f8;
        DAT_006472dc = temp_v9;
        DAT_006472e0 = temp_v8;
        DAT_006472e4 = temp_v10;
        DAT_006472e8 = temp_v11;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[9] = temp_v9;
        pfVar7[10] = pfVar8[1];
        pfVar7[0xb] = pfVar8[2];
        pfVar7 = pfVar7 + 0xc;
      } while (temp_v6 < temp_v0);
    }
  }
  return;
}

} /* extern "C" */
