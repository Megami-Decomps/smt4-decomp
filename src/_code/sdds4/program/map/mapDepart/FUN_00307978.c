/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307978` (_code @ 0x307978, 0x12dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern int *DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_00447e88; /* 0x447e88 */
extern float DAT_0049f8f8; /* 0x49f8f8 */
extern float DAT_0049f8fc; /* 0x49f8fc */
extern float DAT_0049f900; /* 0x49f900 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f9e0; /* 0x49f9e0 */
extern int DAT_0049f9e4; /* 0x49f9e4 */
extern int DAT_0049f9e8; /* 0x49f9e8 */
extern int DAT_0049f9ec; /* 0x49f9ec */
extern int DAT_0049f9f0; /* 0x49f9f0 */
extern int DAT_0049f9f4; /* 0x49f9f4 */
extern int DAT_0049f9f8; /* 0x49f9f8 */
extern int DAT_0049f9fc; /* 0x49f9fc */
extern int DAT_0049fa00; /* 0x49fa00 */
extern int DAT_0049fa04; /* 0x49fa04 */
extern int DAT_0049fa08; /* 0x49fa08 */
extern int DAT_0049fa0c; /* 0x49fa0c */
extern int DAT_0049fa10; /* 0x49fa10 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f8730. */
/* Supplied declaration required: FUN_002083a0. */
/* Supplied declaration required: FUN_0021aff4. */
/* Supplied declaration required: FUN_0021b1f0. */
extern int FUN_00282314(void);
/* Supplied declaration required: FUN_00282498. */
/* Supplied declaration required: FUN_00282588. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287d74. */
/* Supplied declaration required: FUN_002ad6d8. */
/* Supplied declaration required: FUN_002c5e10. */
extern unsigned int FUN_002c5e20(void);
/* Supplied declaration required: FUN_002d1da0. */
/* Supplied declaration required: FUN_003729e8. */


/* WARNING: Removing unreachable block (ram,0x00308908) */
/* WARNING: Removing unreachable block (ram,0x00308928) */

void FUN_00307978(void)

{
/* irregular: irregular input(s): in_d10, in_d8, in_d9, in_fpscr; 24 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  float *pfVar9;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  int *piVar13;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long in_d8;
  float temp_v25;
  float temp_v26;
  unsigned long long in_d9;
  unsigned long long temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long in_d10;
  float temp_v30;
  int temp_v31;
  int iStack_94;
  int iStack_90;
  int temp_v32;
  int iStack_88;
  int temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  unsigned int temp_v45;
  float temp_v46;
  float temp_v47;
  float fStack_48;
  unsigned int temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  unsigned int temp_v52;
  unsigned long long uStack_30;
  unsigned long long uStack_28;
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  
  temp_v5 = DAT_0049fa04;
  temp_v4 = DAT_0049fa00;
  temp_v3 = DAT_0049f9e8;
  temp_v11 = DAT_0049f9e4;
  temp_v6 = DAT_00447e88;
  piVar7 = DAT_004474f4;
  uStack_28 = in_d8;
  uStack_20 = in_d9;
  uStack_18 = in_d10;
  switch(*DAT_004474f4) {
  case 0:
    FUN_002d1da0();
    break;
  case 1:
    temp_v25 = (float)DAT_004474f4[6];
    FUN_00287d74();
    temp_v0 = in_fpscr & 0xfffffff;
    temp_v24 = temp_v25;
    if (temp_v25 < 0.0f) {
      temp_v24 = -temp_v25;
    }
    temp_v26 = temp_v24 * 0.2f;
    in_fpscr = temp_v0 | ((unsigned int)(temp_v26 <= temp_v24) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      DAT_004474f4[6] = *(int *)(DAT_00447e88 + 0x50);
    }
    else {
      in_fpscr = temp_v0 | ((unsigned int)(0.0f <= temp_v25) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v26 = (float)DAT_004474f4[6] - temp_v26;
      }
      else {
        temp_v26 = (float)DAT_004474f4[6] + temp_v26;
      }
      DAT_004474f4[6] = (int)temp_v26;
    }
    break;
  case 2:
    DAT_004474f4[6] = *(int *)(DAT_00447e88 + 0x50);
    break;
  case 3:
    DAT_004474f4[0x1c] = DAT_0049f9e0;
    piVar7[0x1d] = temp_v11;
    piVar7[0x1e] = temp_v3;
    temp_v11 = DAT_0049f9f4;
    temp_v6 = DAT_0049f9f0;
    piVar7[0x19] = DAT_0049f9ec;
    piVar7[0x1a] = temp_v6;
    piVar7[0x1b] = temp_v11;
    piVar7[0x1f] = DAT_0049f9f8;
    break;
  case 4:
    DAT_004474f4[0x23] = DAT_0049f9fc;
    piVar7[0x24] = temp_v4;
    piVar7[0x25] = temp_v5;
    temp_v11 = DAT_0049fa10;
    temp_v6 = DAT_0049fa0c;
    piVar7[0x20] = DAT_0049fa08;
    piVar7[0x21] = temp_v6;
    piVar7[0x22] = temp_v11;
    break;
  case 5:
    FUN_002083a0();
    break;
  case 6:
    temp_v25 = 0.017453292f;
    temp_v24 = *(float *)(DAT_00447e88 + 0x20);
    temp_v11 = *(int *)(DAT_00447e88 + 0x24);
    DAT_004474f4[0x16] = *(int *)(DAT_00447e88 + 0x1c);
    piVar7[0x17] = (int)temp_v24;
    piVar7[0x18] = temp_v11;
    piVar7[0x17] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v6 + 0x2c);
    temp_v11 = *(int *)(temp_v6 + 0x30);
    piVar7[0x13] = *(int *)(temp_v6 + 0x28);
    piVar7[0x14] = (int)temp_v24;
    piVar7[0x15] = temp_v11;
    piVar7[0x14] = (int)(temp_v24 + 150.0f);
    temp_v24 = *(float *)(temp_v6 + 0x50) * 0.017453292f;
    FUN_0028277c();
    temp_v26 = 600.0f;
    DAT_004474f4[0x13] = (int)((float)DAT_004474f4[0x13] + temp_v24 * 600.0f);
    temp_v25 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
    FUN_00282600();
    DAT_004474f4[0x15] = (int)((float)DAT_004474f4[0x15] + temp_v25 * temp_v26);
    break;
  case 7:
    temp_v24 = *(float *)(DAT_00447e88 + 0x4c);
    FUN_00282588();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v8;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    piVar7 = DAT_004474f4;
    temp_v24 = (float)DAT_004474f4[0xa4] + 10.0f;
    DAT_004474f4[0xa4] = (int)temp_v24;
    if ((int)temp_v24 >= 0x43340001) {
      temp_v24 = 180.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 8:
    temp_v24 = *(float *)(DAT_00447e88 + 0x4c);
    FUN_00282588();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v9;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    temp_v24 = (float)DAT_004474f4[0xa4];
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)NAN(temp_v24) << 0x1c);
    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
    piVar7 = DAT_004474f4;
    if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 9:
    temp_v24 = *(float *)(DAT_00447e88 + 0x4c);
    FUN_00282588();
    temp_v11 = (int)temp_v24;
    temp_v24 = 0.017453292f;
    temp_v6 = temp_v10;
    if (temp_v11 != 0x5a) {
      temp_v6 = temp_v11 - 0x100;
    }
    temp_v25 = (float)DAT_004474f4[0xa4] * 0.017453292f;
    if (!(temp_v11 != 0x5a && temp_v6 != 0xe)) {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xc] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[10] = 0;
    }
    else {
      FUN_0028277c();
      piVar7 = DAT_004474f4;
      DAT_004474f4[10] = (int)temp_v25;
      temp_v24 = (float)piVar7[0xa4] * temp_v24;
      FUN_00282600();
      piVar7 = DAT_004474f4;
      DAT_004474f4[0xb] = (int)temp_v24;
      piVar7[0xc] = 0;
    }
    piVar7 = DAT_004474f4;
    temp_v24 = (float)DAT_004474f4[0xa4] - 10.0f;
    DAT_004474f4[0xa4] = (int)temp_v24;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
            ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)NAN(temp_v24) << 0x1c);
    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v24 = 0.0f;
    }
    piVar7[0xa4] = (int)temp_v24;
    break;
  case 10:
    temp_v6 = DAT_004474f4[1];
    piVar7 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      temp_v31 = DAT_004474f4[0x16];
      iStack_94 = DAT_004474f4[0x17];
      iStack_90 = DAT_004474f4[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = DAT_004474f4[0x15];
      temp_v32 = DAT_004474f4[0x13];
      iStack_88 = DAT_004474f4[0x14];
      temp_v26 = *(float *)(DAT_00447e88 + 0x28);
      temp_v30 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
      temp_v28 = *(float *)(DAT_00447e88 + 0x30);
      FUN_0028277c();
      temp_v29 = 90.0f;
      temp_v26 = temp_v26 + temp_v24 * 90.0f;
      temp_v30 = temp_v30 + 75.0f;
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
      FUN_00282600();
      temp_v36 = temp_v28 + temp_v24 * temp_v29;
      temp_v15 = 110.0f;
      temp_v28 = *(float *)(DAT_00447e88 + 0x28);
      temp_v14 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v29 = *(float *)(DAT_00447e88 + 0x30);
      temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - 110.0f) * temp_v25;
      temp_v34 = temp_v26;
      temp_v35 = temp_v30;
      FUN_0028277c();
      temp_v26 = 120.0f;
      temp_v28 = temp_v28 + temp_v24 * 120.0f;
      temp_v14 = temp_v14 + 210.0f;
      temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v15) * temp_v25;
      FUN_00282600();
      temp_v39 = temp_v29 + temp_v25 * temp_v26;
      temp_v47 = 1.12104e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v37 = temp_v28;
      temp_v38 = temp_v14;
      FUN_00282498(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = FUN_00282314();
      if (temp_v6 != 0) {
        temp_v31 = piVar7[0xc];
        iStack_94 = piVar7[0xd];
        iStack_90 = piVar7[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar7[0xf];
        iStack_88 = piVar7[0x10];
        temp_v33 = piVar7[0x11];
        temp_v26 = *(float *)(DAT_00447e88 + 0x30);
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
        temp_v27 = *(unsigned long long *)(DAT_00447e88 + 0x28);
        FUN_0028277c();
        temp_v30 = 90.0f;
        temp_v28 = (float)temp_v27 + temp_v24 * 90.0f;
        temp_v29 = (float)((unsigned long long)temp_v27 >> 0x20) + 65.0f;
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
        FUN_00282600();
        temp_v36 = temp_v26 + temp_v24 * temp_v30;
        temp_v30 = 110.0f;
        temp_v26 = *(float *)(DAT_00447e88 + 0x30);
        temp_v27 = *(unsigned long long *)(DAT_00447e88 + 0x28);
        temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - 110.0f) * temp_v25;
        temp_v34 = temp_v28;
        temp_v35 = temp_v29;
        FUN_0028277c();
        temp_v29 = 120.0f;
        temp_v24 = (float)temp_v27 + temp_v24 * 120.0f;
        temp_v28 = (float)((unsigned long long)temp_v27 >> 0x20) + 250.0f;
        temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v30) * temp_v25;
        FUN_00282600();
        temp_v39 = temp_v26 + temp_v25 * temp_v29;
        temp_v47 = 4.2039e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v37 = temp_v24;
        temp_v38 = temp_v28;
        FUN_00282498(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if ((temp_v6 != 2) || (temp_v6 = FUN_00282314(), temp_v6 == 0)) break;
    piVar7 = DAT_004474f4;
    DAT_004474f4[1] = DAT_004474f4[1] + 1;
    piVar7[2] = 0;
    break;
  case 0xb:
    temp_v6 = DAT_004474f4[1];
    piVar13 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      piVar13 = DAT_004474f4 + 0x16;
      DAT_004474f4[3] = 0;
      temp_v31 = *piVar13;
      iStack_94 = piVar7[0x17];
      iStack_90 = piVar7[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = piVar7[0x15];
      temp_v32 = piVar7[0x13];
      iStack_88 = piVar7[0x14];
      temp_v26 = *(float *)(DAT_00447e88 + 0x30);
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
      temp_v29 = *(float *)(DAT_00447e88 + 0x28);
      temp_v14 = *(float *)(DAT_00447e88 + 0x2c);
      FUN_0028277c();
      temp_v28 = 120.0f;
      temp_v29 = temp_v29 + temp_v24 * 120.0f;
      temp_v14 = temp_v14 + 70.0f;
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
      FUN_00282600();
      temp_v36 = temp_v26 + temp_v24 * temp_v28;
      temp_v26 = *(float *)(DAT_00447e88 + 0x30);
      temp_v30 = *(float *)(DAT_00447e88 + 0x28);
      temp_v15 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - temp_v28) * temp_v25;
      temp_v34 = temp_v29;
      temp_v35 = temp_v14;
      FUN_0028277c();
      temp_v29 = 140.0f;
      temp_v30 = temp_v30 + temp_v24 * 140.0f;
      temp_v15 = temp_v15 + 200.0f;
      temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v28) * temp_v25;
      FUN_00282600();
      temp_v39 = temp_v26 + temp_v25 * temp_v29;
      temp_v47 = 1.12104e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v37 = temp_v30;
      temp_v38 = temp_v15;
      FUN_00282498(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = FUN_00282314();
      if (temp_v6 != 0) {
        temp_v31 = piVar13[0xc];
        iStack_94 = piVar13[0xd];
        iStack_90 = piVar13[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar13[0xf];
        iStack_88 = piVar13[0x10];
        temp_v33 = piVar13[0x11];
        temp_v26 = *(float *)(DAT_00447e88 + 0x28);
        temp_v14 = *(float *)(DAT_00447e88 + 0x2c);
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
        temp_v28 = *(float *)(DAT_00447e88 + 0x30);
        FUN_0028277c();
        temp_v29 = 120.0f;
        temp_v26 = temp_v26 + temp_v24 * 120.0f;
        temp_v14 = temp_v14 + 70.0f;
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
        FUN_00282600();
        temp_v36 = temp_v28 + temp_v24 * temp_v29;
        temp_v28 = *(float *)(DAT_00447e88 + 0x28);
        temp_v15 = *(float *)(DAT_00447e88 + 0x2c);
        temp_v30 = *(float *)(DAT_00447e88 + 0x30);
        temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - temp_v29) * temp_v25;
        temp_v34 = temp_v26;
        temp_v35 = temp_v14;
        FUN_0028277c();
        temp_v26 = 140.0f;
        temp_v37 = temp_v28 + temp_v24 * 140.0f;
        temp_v15 = temp_v15 + 200.0f;
        temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v29) * temp_v25;
        FUN_00282600();
        temp_v39 = temp_v30 + temp_v25 * temp_v26;
        temp_v47 = 4.2039e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v38 = temp_v15;
        FUN_00282498(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if (temp_v6 != 2) break;
    temp_v6 = FUN_00282314();
    if (temp_v6 != 0) {
      piVar7 = DAT_004474f4;
      DAT_004474f4[1] = DAT_004474f4[1] + 1;
      piVar7[2] = 0;
    }
    break;
  case 0xc:
    FUN_0021b1f0();
    break;
  case 0xd:
    FUN_001f8730();
    break;
  case 0xe:
    temp_v6 = DAT_004474f4[1];
    piVar7 = DAT_004474f4 + 0x88;
    if (temp_v6 == 0) {
      temp_v31 = DAT_004474f4[0x16];
      iStack_94 = DAT_004474f4[0x17];
      iStack_90 = DAT_004474f4[0x18];
      temp_v25 = 0.017453292f;
      temp_v33 = DAT_004474f4[0x15];
      temp_v32 = DAT_004474f4[0x13];
      iStack_88 = DAT_004474f4[0x14];
      temp_v29 = *(float *)(DAT_00447e88 + 0x28);
      temp_v28 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
      temp_v26 = *(float *)(DAT_00447e88 + 0x30);
      FUN_0028277c();
      temp_v30 = 40.0f;
      temp_v35 = temp_v28 + 20.0f;
      temp_v34 = temp_v29 + temp_v24 * 40.0f;
      if (DAT_0049f91c == 0x16) {
        temp_v35 = temp_v35 + 20.0f;
      }
      temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
      FUN_00282600();
      temp_v36 = temp_v26 + temp_v24 * temp_v30;
      temp_v29 = 160.0f;
      temp_v26 = *(float *)(DAT_00447e88 + 0x28);
      temp_v27 = *(unsigned long long *)(DAT_00447e88 + 0x2c);
      temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - 160.0f) * temp_v25;
      FUN_0028277c();
      temp_v28 = 180.0f;
      temp_v37 = temp_v26 + temp_v24 * 180.0f;
      temp_v26 = (float)((unsigned long long)temp_v27 >> 0x20);
      temp_v24 = (float)temp_v27 + 220.0f;
      temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v29) * temp_v25;
      FUN_00282600();
      temp_v39 = temp_v26 + temp_v25 * temp_v28;
      if (DAT_0049f91c == 0x16) {
        temp_v24 = temp_v24 + 80.0f;
      }
      temp_v47 = 8.40779e-44f;
      temp_v46 = 0.0f;
      uStack_30 = (unsigned long long)(unsigned int)uStack_30;
      temp_v38 = temp_v24;
      FUN_00282498(&temp_v31);
      piVar7 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x87) = 1;
      piVar13 = piVar7 + 1;
      *piVar13 = *piVar13 + 1;
      piVar7[2] = 0;
      break;
    }
    if (temp_v6 == 1) {
      temp_v6 = FUN_00282314();
      if (temp_v6 != 0) {
        temp_v31 = piVar7[0xc];
        iStack_94 = piVar7[0xd];
        iStack_90 = piVar7[0xe];
        temp_v25 = 0.017453292f;
        temp_v32 = piVar7[0xf];
        iStack_88 = piVar7[0x10];
        temp_v33 = piVar7[0x11];
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
        temp_v26 = *(float *)(DAT_00447e88 + 0x28);
        temp_v27 = *(unsigned long long *)(DAT_00447e88 + 0x2c);
        FUN_0028277c();
        temp_v28 = 40.0f;
        temp_v36 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v35 = (float)temp_v27 + 20.0f;
        temp_v34 = temp_v26 + temp_v24 * 40.0f;
        if (DAT_0049f91c == 0x16) {
          temp_v35 = temp_v35 + 20.0f;
        }
        temp_v24 = *(float *)(DAT_00447e88 + 0x50) * temp_v25;
        FUN_00282600();
        temp_v36 = temp_v36 + temp_v24 * temp_v28;
        temp_v30 = 170.0f;
        temp_v26 = *(float *)(DAT_00447e88 + 0x28);
        temp_v27 = *(unsigned long long *)(DAT_00447e88 + 0x2c);
        temp_v24 = (*(float *)(DAT_00447e88 + 0x50) - 170.0f) * temp_v25;
        FUN_0028277c();
        temp_v29 = 180.0f;
        temp_v26 = temp_v26 + temp_v24 * 180.0f;
        temp_v28 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v24 = (float)temp_v27 + 221.0f;
        temp_v25 = (*(float *)(DAT_00447e88 + 0x50) - temp_v30) * temp_v25;
        FUN_00282600();
        temp_v39 = temp_v28 + temp_v25 * temp_v29;
        if (DAT_0049f91c == 0x16) {
          temp_v24 = temp_v24 + 80.0f;
        }
        temp_v47 = 6.30584e-43f;
        temp_v46 = 0.0f;
        uStack_30 = (unsigned long long)(unsigned int)uStack_30;
        temp_v37 = temp_v26;
        temp_v38 = temp_v24;
        FUN_00282498(&temp_v31);
        piVar7 = DAT_004474f4;
        DAT_004474f4[1] = DAT_004474f4[1] + 1;
        piVar7[2] = 0;
      }
      break;
    }
    if (temp_v6 != 2) break;
    temp_v6 = FUN_00282314();
    if (temp_v6 != 0) {
      piVar7 = DAT_004474f4;
      DAT_004474f4[1] = DAT_004474f4[1] + 1;
      piVar7[2] = 0;
    }
    break;
  case 0xf:
    FUN_0021aff4();
  }
  uStack_30 = uStack_28;
  uStack_28 = uStack_20;
  uStack_20 = uStack_18;
  temp_v25 = 1.0f;
  temp_v29 = *(float *)(DAT_00447e88 + 0x20) - 20.0f;
  temp_v24 = 0.0f;
  temp_v26 = *(float *)(DAT_00447e88 + 0x1c);
  temp_v28 = *(float *)(DAT_00447e88 + 0x24);
  if ((int)romwright_sqrt_4(((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) *
                ((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) +
                ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) *
                ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) +
                ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15]) *
                ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15])) < 0x43480000) {
    temp_v30 = 200.0f;
  }
  else {
    temp_v6 = 0;
    temp_v30 = temp_v25;
    do {
      temp_v11 = DAT_00447e58 + temp_v6 * 0x38;
      temp_v13 = *(char *)(temp_v11 + 0xc) != '\0';
      temp_v1 = '\0';
      if (temp_v13) {
        temp_v1 = *(char *)(temp_v11 + 0xd);
      }
      if (temp_v13 && temp_v1 != '\0') {
        temp_v14 = *(float *)(DAT_00447e88 + 0x20) - *(float *)(temp_v11 + 0x20);
        if ((((unsigned int)temp_v14 < 0xc2c80001) && ((int)temp_v14 < 0x42c80001)) &&
           (temp_v16 = *(float *)(temp_v11 + 0x1c) - *(float *)(DAT_00447e88 + 0x1c),
           temp_v15 = *(float *)(temp_v11 + 0x20) - *(float *)(DAT_00447e88 + 0x20),
           temp_v14 = *(float *)(temp_v11 + 0x24) - *(float *)(DAT_00447e88 + 0x24),
           (int)romwright_sqrt_4(temp_v16 * temp_v16 + temp_v15 * temp_v15 + temp_v14 * temp_v14) < 0x44898001)) {
          temp_v30 = temp_v30 + 1.0f;
          temp_v26 = temp_v26 + *(float *)(temp_v11 + 0x1c);
          temp_v29 = temp_v29 + *(float *)(temp_v11 + 0x20);
          temp_v28 = temp_v28 + *(float *)(temp_v11 + 0x24);
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x40);
    if ((int)temp_v30 < 0x40000000) {
      temp_v30 = 300.0f;
    }
    else {
      temp_v30 = 1.0f / temp_v30;
      temp_v26 = temp_v26 * temp_v30;
      temp_v28 = temp_v28 * temp_v30;
      temp_v29 = temp_v29 * temp_v30;
      temp_v20 = temp_v26 - *(float *)(DAT_00447e88 + 0x1c);
      temp_v16 = temp_v28 - *(float *)(DAT_00447e88 + 0x24);
      temp_v15 = temp_v29 - *(float *)(DAT_00447e88 + 0x20);
      temp_v14 = romwright_sqrt_4(temp_v20 * temp_v20 + temp_v15 * temp_v15 + temp_v16 * temp_v16);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
      temp_v30 = temp_v14;
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v30 = -temp_v14;
      }
      if ((int)temp_v30 >= 0x43c80001) {
        temp_v14 = 1.0f / temp_v14;
        temp_v30 = 400.0f;
        temp_v26 = *(float *)(DAT_00447e88 + 0x1c) + temp_v20 * temp_v14 * 400.0f;
        temp_v29 = *(float *)(DAT_00447e88 + 0x20) + temp_v15 * temp_v14 * 400.0f;
        temp_v28 = *(float *)(DAT_00447e88 + 0x24) + temp_v16 * temp_v14 * 400.0f;
      }
      temp_v30 = temp_v30 + 450.0f;
    }
  }
  pfVar9 = (float *)FUN_002c5e20();
  *pfVar9 = temp_v30;
  if ((*DAT_004474f4 == 0xc) && (DAT_004474f4[1] >= 100)) {
    temp_v14 = (*(float *)(DAT_00447e88 + 0x4c) + 180.0f) * 0.7111111f;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 <= temp_v14) << 0x1d);
    for (temp_v14 = romwright_fabs_4(temp_v14); temp_v15 = temp_v24, (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f)
    {
    }
    for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - 65536.0f) {
    }
    temp_v17 = VectorFloatToUnsigned(0x4338e38f,3);
    temp_v18 = VectorFloatToUnsigned(temp_v14,3);
    temp_v19 = VectorFloatToUnsigned(temp_v15,3);
    temp_v12 = temp_v17;
    temp_v20 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v17 = temp_v18 & 0xff;
    temp_v21 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = temp_v19 & 0xff;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v23 = (float)(&DAT_00407fc0)[temp_v12 * 4] +
             (184.8889f - temp_v20) * (float)(&DAT_00407fc8)[temp_v12 * 4];
    temp_v20 = (float)(&DAT_00407fc4)[temp_v12 * 4] +
             (184.8889f - temp_v20) * (float)(&DAT_00407fcc)[temp_v12 * 4];
    temp_v49 = (float)(&DAT_00407fc0)[temp_v17 * 4] +
               (temp_v14 - temp_v21) * (float)(&DAT_00407fc8)[temp_v17 * 4];
    temp_v51 = (float)(&DAT_00407fc4)[temp_v17 * 4] +
               (temp_v14 - temp_v21) * (float)(&DAT_00407fcc)[temp_v17 * 4];
    temp_v14 = (float)(&DAT_00407fc0)[temp_v18 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00407fc8)[temp_v18 * 4];
    temp_v15 = (float)(&DAT_00407fc4)[temp_v18 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00407fcc)[temp_v18 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v49 = -temp_v49;
    }
    temp_v42 = temp_v15 * temp_v51;
    temp_v46 = temp_v14 * temp_v51;
    temp_v50 = temp_v23 * temp_v51;
    temp_v51 = temp_v20 * temp_v51;
    temp_v43 = temp_v23 * temp_v15 * temp_v49 - temp_v20 * temp_v14;
    temp_v44 = temp_v23 * temp_v14 + temp_v20 * temp_v15 * temp_v49;
    fStack_48 = temp_v20 * temp_v14 * temp_v49 - temp_v23 * temp_v15;
    temp_v47 = temp_v20 * temp_v15 + temp_v23 * temp_v14 * temp_v49;
  }
  else {
    temp_v15 = romwright_fabs_4(DAT_0049f8fc * 0.7111111f);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 <= DAT_0049f900 * 0.7111111f) << 0x1d);
    temp_v16 = romwright_fabs_4(DAT_0049f900 * 0.7111111f);
    for (temp_v14 = romwright_fabs_4(DAT_0049f8f8 * 0.7111111f); (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f
        ) {
    }
    for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - 65536.0f) {
    }
    for (; (int)temp_v16 >= 0x47800000; temp_v16 = temp_v16 - 65536.0f) {
    }
    temp_v17 = VectorFloatToUnsigned(temp_v14,3);
    temp_v18 = VectorFloatToUnsigned(temp_v15,3);
    temp_v19 = VectorFloatToUnsigned(temp_v16,3);
    temp_v12 = temp_v17;
    temp_v22 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v17 = temp_v18 & 0xff;
    temp_v21 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = temp_v19 & 0xff;
    temp_v20 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v23 = (float)(&DAT_00407fc0)[temp_v12 * 4] +
             (temp_v14 - temp_v22) * (float)(&DAT_00407fc8)[temp_v12 * 4];
    temp_v22 = (float)(&DAT_00407fc4)[temp_v12 * 4] +
             (temp_v14 - temp_v22) * (float)(&DAT_00407fcc)[temp_v12 * 4];
    temp_v49 = (float)(&DAT_00407fc0)[temp_v17 * 4] +
               (temp_v15 - temp_v21) * (float)(&DAT_00407fc8)[temp_v17 * 4];
    temp_v51 = (float)(&DAT_00407fc4)[temp_v17 * 4] +
               (temp_v15 - temp_v21) * (float)(&DAT_00407fcc)[temp_v17 * 4];
    temp_v14 = (float)(&DAT_00407fc0)[temp_v18 * 4] +
             (temp_v16 - temp_v20) * (float)(&DAT_00407fc8)[temp_v18 * 4];
    temp_v15 = (float)(&DAT_00407fc4)[temp_v18 * 4] +
             (temp_v16 - temp_v20) * (float)(&DAT_00407fcc)[temp_v18 * 4];
    if (DAT_0049f8f8 * 0.7111111f < temp_v24) {
      temp_v23 = -temp_v23;
    }
    if (DAT_0049f8fc * 0.7111111f < temp_v24) {
      temp_v49 = -temp_v49;
    }
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v14 = -temp_v14;
    }
    temp_v50 = temp_v23 * temp_v51;
    temp_v42 = temp_v15 * temp_v51;
    temp_v46 = temp_v14 * temp_v51;
    temp_v51 = temp_v22 * temp_v51;
    temp_v44 = temp_v23 * temp_v14 + temp_v22 * temp_v15 * temp_v49;
    temp_v47 = temp_v22 * temp_v15 + temp_v23 * temp_v14 * temp_v49;
    temp_v43 = temp_v23 * temp_v15 * temp_v49 - temp_v22 * temp_v14;
    fStack_48 = temp_v22 * temp_v14 * temp_v49 - temp_v23 * temp_v15;
  }
  temp_v49 = -temp_v49;
  temp_v45 = 0;
  temp_v48 = 0;
  temp_v52 = 0;
  temp_v39 = temp_v24;
  temp_v40 = temp_v24;
  temp_v41 = temp_v25;
  FUN_002ad6d8(&temp_v39,&temp_v42);
  temp_v39 = temp_v39 * temp_v30;
  temp_v40 = temp_v40 * temp_v30;
  temp_v41 = temp_v41 * temp_v30;
  temp_v34 = temp_v26;
  temp_v35 = temp_v29;
  temp_v36 = temp_v28;
  temp_v7 = FUN_002c5e10();
  FUN_003729e8(temp_v7,&temp_v34);
  temp_v25 = temp_v34 + temp_v39;
  temp_v24 = temp_v35 + temp_v40;
  temp_v26 = temp_v36 + temp_v41;
  temp_v6 = FUN_002c5e10();
  *(float *)(temp_v6 + 0x58) = temp_v25;
  *(float *)(temp_v6 + 0x68) = temp_v24;
  *(float *)(temp_v6 + 0x78) = temp_v26;
  *(unsigned int *)(temp_v6 + 0x88) = *(unsigned int *)(temp_v6 + 0x88) | 0x800;
  return;
}
