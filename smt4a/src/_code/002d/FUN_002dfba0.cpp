/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfba0` (_code @ 0x2dfba0, 0x7dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(...);
int FUN_0019e3d0(...);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0050d8e4(void);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of void: 29 slot(s), 116 byte(s) */
typedef struct {
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
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
} void_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_005806a4; /* 0x5806a4 */
extern int g_mapIf; /* 0x58103c */
extern int DAT_00581040; /* 0x581040 */
extern int DAT_00581044; /* 0x581044 */
extern float DAT_00581048; /* 0x581048 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f1a4e; /* 0x5f1a4e */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
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
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern int lmapMainIsAtLeastHalf(void);
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x002e0104) */
/* WARNING: Removing unreachable block (ram,0x002dfed0) */
/* WARNING: Removing unreachable block (ram,0x002e0124) */
/* WARNING: Removing unreachable block (ram,0x002dfdfc) */
/* WARNING: Removing unreachable block (ram,0x002e0054) */

void FUN_002dfba0(void)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
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
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
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
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  float temp_v43;
  float temp_v44;
  float fStack_48;
  unsigned int temp_v45;
  
  temp_v1 = g_mapIf;
  temp_v2 = gameFlagsGetBlock();
  DAT_00581044 = DAT_00581044 + 1;
  temp_v5 = 0xffffffff;
  DAT_00581048 = DAT_00581048 + 0.2f;
  if (DAT_005f1a4e == '\0') {
    if (*(char *)(temp_v1 + 0xccf0) != '\0') {
      switch(*(unsigned short *)(temp_v1 + 0xccf2)) {
      case 1:
        temp_v5 = 0xffc0c0ff;
        break;
      case 2:
        temp_v5 = 0xffa0a0ff;
        break;
      case 3:
        temp_v5 = 0xff7070ff;
        break;
      case 0xffff:
      case 0:
        temp_v5 = 0xfff0f0ff;
        break;
      default:
        temp_v5 = 0xff4040ff;
      }
    }
    temp_v18 = 0.017453292f;
    temp_v16 = 100.0f;
    temp_v17 = 0.5f;
    if (g_gameState >= 100) {
      temp_v2 = lmapMainIsAtLeastHalf();
      if (temp_v2 == 0) {
        return;
      }
      temp_v13 = *(float *)(g_lmapScene + 0x1c);
      temp_v15 = *(float *)(g_lmapScene + 0x20);
      temp_v14 = *(float *)(g_lmapScene + 0x24);
      temp_v17 = *(float *)(DAT_005806a4 + 0x18) * temp_v18;
      FUN_001bc124();
      temp_v13 = temp_v13 + temp_v17 * temp_v16;
      temp_v18 = *(float *)(DAT_005806a4 + 0x18) * temp_v18;
      FUN_001bbf0c();
      temp_v14 = temp_v14 + temp_v18 * temp_v16;
      temp_v15 = temp_v15 + 400.0f;
      temp_v18 = DAT_00581048;
      FUN_001bc124();
      temp_v13 = temp_v13 + *(float *)(temp_v1 + 0xccfc);
      temp_v14 = temp_v14 + *(float *)(temp_v1 + 0xcd04);
      temp_v18 = temp_v15 + temp_v18 * 25.0f + *(float *)(temp_v1 + 0xcd00);
    }
    else {
      temp_v13 = *(float *)(g_lmapScene + 0x1c);
      temp_v15 = *(float *)(g_lmapScene + 0x20);
      temp_v14 = *(float *)(g_lmapScene + 0x24);
      if (*(char *)(temp_v2 + 0x1d) != '\x02') {
        temp_v10 = 90.0f;
        temp_v17 = (*(float *)(DAT_005806a4 + 0x18) + 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v9 = 50.0f;
        temp_v13 = temp_v13 + temp_v17 * 50.0f;
        temp_v18 = (*(float *)(DAT_005806a4 + 0x18) + temp_v10) * temp_v18;
        FUN_001bbf0c();
        temp_v14 = temp_v14 + temp_v18 * temp_v9;
        temp_v15 = temp_v15 + temp_v16;
        temp_v18 = DAT_00581048;
        FUN_001bc124();
        temp_v13 = temp_v13 + *(float *)(temp_v1 + 0xccfc);
        temp_v16 = 13.0f;
        temp_v14 = temp_v14 + *(float *)(temp_v1 + 0xcd04);
        temp_v18 = temp_v15 + temp_v18 * 5.0f + *(float *)(temp_v1 + 0xcd00);
      }
      else {
        temp_v10 = 130.0f;
        temp_v16 = (*(float *)(DAT_005806a4 + 0x18) + 130.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v9 = 30.0f;
        temp_v13 = temp_v13 + temp_v16 * 30.0f;
        temp_v18 = (*(float *)(DAT_005806a4 + 0x18) + temp_v10) * temp_v18;
        FUN_001bbf0c();
        temp_v14 = temp_v14 + temp_v18 * temp_v9;
        temp_v15 = temp_v15 + 150.0f;
        temp_v18 = DAT_00581048;
        FUN_001bc124();
        temp_v16 = 8.0f;
        temp_v13 = temp_v13 + *(float *)(temp_v1 + 0xccfc) * temp_v17;
        temp_v14 = temp_v14 + *(float *)(temp_v1 + 0xcd04) * temp_v17;
        temp_v18 = temp_v15 + temp_v18 * 2.0f + *(float *)(temp_v1 + 0xcd00) * temp_v17;
      }
    }
    temp_v17 = *(float *)(DAT_005806a4 + 0x50) - temp_v13;
    FUN_0050d8e4();
    temp_v19 = 0;
    if (g_gameState >= 100) {
      temp_v17 = temp_v17 * 57.32484f * 0.7111111f;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
      for (temp_v17 = romwright_fabs_4(temp_v17); (int)temp_v17 >= 0x47800000; temp_v17 = temp_v17 - 65536.0f) {
      }
      temp_v6 = VectorFloatToUnsigned(0x42000000,3);
      temp_v7 = VectorFloatToUnsigned(temp_v17,3);
      temp_v8 = VectorFloatToUnsigned(0,3);
      temp_v3 = temp_v6 & 0xff;
      temp_v11 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v6 = temp_v7 & 0xff;
      temp_v4 = temp_v8;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v15 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v10 = (float)(&DAT_00536d14)[temp_v4 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v4 * 4];
      temp_v12 = (float)(&DAT_00536d18)[temp_v3 * 4] +
               (32.0f - temp_v11) * (float)(&DAT_00536d20)[temp_v3 * 4];
      temp_v9 = (float)(&DAT_00536d18)[temp_v4 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v4 * 4];
      temp_v43 = (float)(&DAT_00536d14)[temp_v6 * 4] +
                 (temp_v17 - temp_v15) * (float)(&DAT_00536d1c)[temp_v6 * 4];
      temp_v44 = (float)(&DAT_00536d18)[temp_v6 * 4] +
                 (temp_v17 - temp_v15) * (float)(&DAT_00536d20)[temp_v6 * 4];
      temp_v17 = -((float)(&DAT_00536d14)[temp_v3 * 4] +
                (32.0f - temp_v11) * (float)(&DAT_00536d1c)[temp_v3 * 4]);
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v43 = -temp_v43;
      }
      temp_v35 = temp_v9 * temp_v44;
      temp_v39 = temp_v10 * temp_v44;
      fStack_48 = temp_v12 * temp_v44;
      temp_v44 = temp_v17 * temp_v44;
      temp_v36 = temp_v17 * temp_v9 * temp_v43 - temp_v12 * temp_v10;
      temp_v41 = temp_v12 * temp_v10 * temp_v43 - temp_v17 * temp_v9;
      temp_v37 = temp_v17 * temp_v10 + temp_v12 * temp_v9 * temp_v43;
      temp_v40 = temp_v12 * temp_v9 + temp_v17 * temp_v10 * temp_v43;
    }
    else {
      temp_v17 = temp_v17 * 57.32484f * 0.7111111f;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
      for (temp_v17 = romwright_fabs_4(temp_v17); (int)temp_v17 >= 0x47800000; temp_v17 = temp_v17 - 65536.0f) {
      }
      temp_v3 = VectorFloatToUnsigned(0,3);
      temp_v7 = VectorFloatToUnsigned(temp_v17,3);
      temp_v8 = VectorFloatToUnsigned(0,3);
      temp_v6 = temp_v3 & 0xff;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v3 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v4 = temp_v7;
      temp_v10 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = temp_v8 & 0xff;
      temp_v15 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v11 = (float)(&DAT_00536d14)[temp_v6 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v6 * 4];
      temp_v12 = (float)(&DAT_00536d18)[temp_v6 * 4] +
               (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v6 * 4];
      temp_v43 = (float)(&DAT_00536d14)[temp_v4 * 4] +
                 (temp_v17 - temp_v10) * (float)(&DAT_00536d1c)[temp_v4 * 4];
      temp_v9 = (float)(&DAT_00536d14)[temp_v3 * 4] +
               (0.0f - temp_v15) * (float)(&DAT_00536d1c)[temp_v3 * 4];
      temp_v15 = (float)(&DAT_00536d18)[temp_v3 * 4] +
               (0.0f - temp_v15) * (float)(&DAT_00536d20)[temp_v3 * 4];
      fStack_48 = (float)(&DAT_00536d18)[temp_v4 * 4] +
                  (temp_v17 - temp_v10) * (float)(&DAT_00536d20)[temp_v4 * 4];
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v43 = -temp_v43;
      }
      temp_v35 = temp_v15 * fStack_48;
      temp_v44 = temp_v11 * fStack_48;
      temp_v39 = temp_v9 * fStack_48;
      fStack_48 = temp_v12 * fStack_48;
      temp_v37 = temp_v11 * temp_v9 + temp_v12 * temp_v15 * temp_v43;
      temp_v40 = temp_v12 * temp_v15 + temp_v11 * temp_v9 * temp_v43;
      temp_v36 = temp_v11 * temp_v15 * temp_v43 - temp_v12 * temp_v9;
      temp_v41 = temp_v12 * temp_v9 * temp_v43 - temp_v11 * temp_v15;
    }
    temp_v43 = -temp_v43;
    temp_v17 = -temp_v16;
    temp_v38 = 0;
    temp_v42 = 0;
    temp_v45 = 0;
    temp_v22 = 0;
    temp_v20 = temp_v17;
    temp_v21 = temp_v16;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v23,&temp_v35,&temp_v20);
    temp_v20 = temp_v17;
    temp_v21 = temp_v17;
    temp_v22 = temp_v19;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v26,&temp_v35,&temp_v20);
    temp_v20 = temp_v16;
    temp_v21 = temp_v16;
    temp_v22 = temp_v19;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v29,&temp_v35,&temp_v20);
    temp_v20 = temp_v16;
    temp_v21 = temp_v17;
    temp_v22 = temp_v19;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v32,&temp_v35,&temp_v20);
    temp_v23 = temp_v23 + temp_v13;
    temp_v24 = temp_v24 + temp_v18;
    temp_v25 = temp_v25 + temp_v14;
    temp_v26 = temp_v26 + temp_v13;
    temp_v27 = temp_v27 + temp_v18;
    temp_v28 = temp_v28 + temp_v14;
    temp_v29 = temp_v29 + temp_v13;
    temp_v30 = temp_v30 + temp_v18;
    temp_v31 = temp_v31 + temp_v14;
    temp_v32 = temp_v32 + temp_v13;
    temp_v33 = temp_v33 + temp_v18;
    temp_v34 = temp_v34 + temp_v14;
    FUN_0016c4b8(g_renderCtx,*(unsigned int *)(DAT_00581040 + 0x5c));
    FUN_0019e3d0(temp_v5);
  }
  return;
}

} /* extern "C" */
