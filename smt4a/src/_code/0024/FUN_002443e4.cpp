/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002443e4` (_code @ 0x2443e4, 0x3e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_0016c4b8(unsigned int, unsigned int);
int FUN_0019e3d0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0050d8e4(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *, float *);

/* stack frame of void: 30 slot(s), 120 byte(s) */
typedef struct {
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
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} void_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_005806a4; /* 0x5806a4 */
extern unsigned int *DAT_005806cc; /* 0x5806cc */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0024457c) */
/* WARNING: Removing unreachable block (ram,0x0024458c) */

void FUN_002443e4(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  float temp_v7;
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
  unsigned long long temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float fStack_a0;
  unsigned int temp_v32;
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
  float temp_v43;
  float temp_v44;
  
  FUN_0016c4b8(DAT_0059dbb4,*DAT_005806cc);
  temp_v1 = 0;
  temp_v17 = 57.32484f;
  temp_v18 = 0x3f360b61;
  temp_v15 = 65536.0f;
  temp_v16 = 0.0f;
  do {
    temp_v5 = (float)temp_v18;
    if (0 < (int)DAT_005806cc[temp_v1 + 1]) {
      temp_v13 = (float)DAT_005806cc[temp_v1 + 0x101];
      temp_v3 = *(float *)(DAT_005806a4 + 0x50) - (float)DAT_005806cc[temp_v1 * 3 + 0x41];
      FUN_0050d8e4();
      temp_v3 = temp_v3 * temp_v17 * temp_v5;
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 <= temp_v3) << 0x1d);
      for (temp_v3 = romwright_fabs_4(temp_v3); temp_v12 = temp_v16, (int)temp_v3 >= 0x47800000; temp_v3 = temp_v3 - temp_v15) {
      }
      for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - temp_v15) {
      }
      temp_v4 = VectorFloatToUnsigned(temp_v16,3);
      temp_v6 = VectorFloatToUnsigned(temp_v3,3);
      temp_v8 = VectorFloatToUnsigned(temp_v12,3);
      temp_v2 = temp_v6;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = temp_v4 & 0xff;
      temp_v10 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = temp_v8 & 0xff;
      temp_v18 = CONCAT44((&DAT_00536d20)[temp_v8 * 4],temp_v5);
      temp_v14 = -temp_v13;
      temp_v7 = (float)(&DAT_00536d14)[temp_v4 * 4] +
              (temp_v16 - temp_v9) * (float)(&DAT_00536d1c)[temp_v4 * 4];
      temp_v5 = (float)(&DAT_00536d14)[temp_v2 * 4] +
              (temp_v3 - temp_v10) * (float)(&DAT_00536d1c)[temp_v2 * 4];
      temp_v9 = (float)(&DAT_00536d18)[temp_v4 * 4] +
               (temp_v16 - temp_v9) * (float)(&DAT_00536d20)[temp_v4 * 4];
      fStack_a0 = (float)(&DAT_00536d18)[temp_v2 * 4] +
                  (temp_v3 - temp_v10) * (float)(&DAT_00536d20)[temp_v2 * 4];
      temp_v3 = (float)(&DAT_00536d14)[temp_v8 * 4] +
              (temp_v12 - temp_v11) * (float)(&DAT_00536d1c)[temp_v8 * 4];
      temp_v12 = (float)(&DAT_00536d18)[temp_v8 * 4] +
               (temp_v12 - temp_v11) * (float)(&DAT_00536d20)[temp_v8 * 4];
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v5 = -temp_v5;
      }
      temp_v22 = temp_v12 * fStack_a0;
      temp_v26 = temp_v3 * fStack_a0;
      temp_v31 = temp_v7 * fStack_a0;
      fStack_a0 = temp_v9 * fStack_a0;
      temp_v30 = -temp_v5;
      temp_v23 = temp_v7 * temp_v12 * temp_v5 - temp_v9 * temp_v3;
      temp_v28 = temp_v9 * temp_v3 * temp_v5 - temp_v7 * temp_v12;
      temp_v24 = temp_v7 * temp_v3 + temp_v9 * temp_v12 * temp_v5;
      temp_v27 = temp_v9 * temp_v12 + temp_v7 * temp_v3 * temp_v5;
      temp_v25 = 0;
      temp_v29 = 0;
      temp_v32 = 0;
      temp_v5 = temp_v16;
      temp_v19 = temp_v14;
      temp_v20 = temp_v13;
      temp_v21 = temp_v16;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v33,&temp_v22,&temp_v19);
      temp_v33 = temp_v33 + (float)DAT_005806cc[temp_v1 * 3 + 0x41];
      temp_v34 = temp_v34 + (float)DAT_005806cc[temp_v1 * 3 + 0x42];
      temp_v35 = temp_v35 + (float)DAT_005806cc[temp_v1 * 3 + 0x43];
      temp_v19 = temp_v14;
      temp_v20 = temp_v14;
      temp_v21 = temp_v5;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v36,&temp_v22,&temp_v19);
      temp_v36 = temp_v36 + (float)DAT_005806cc[temp_v1 * 3 + 0x41];
      temp_v37 = temp_v37 + (float)DAT_005806cc[temp_v1 * 3 + 0x42];
      temp_v38 = temp_v38 + (float)DAT_005806cc[temp_v1 * 3 + 0x43];
      temp_v19 = temp_v13;
      temp_v20 = temp_v13;
      temp_v21 = temp_v5;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v39,&temp_v22,&temp_v19);
      temp_v39 = temp_v39 + (float)DAT_005806cc[temp_v1 * 3 + 0x41];
      temp_v40 = temp_v40 + (float)DAT_005806cc[temp_v1 * 3 + 0x42];
      temp_v41 = temp_v41 + (float)DAT_005806cc[temp_v1 * 3 + 0x43];
      temp_v19 = temp_v13;
      temp_v20 = temp_v14;
      temp_v21 = temp_v5;
      nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v42,&temp_v22,&temp_v19);
      temp_v42 = temp_v42 + (float)DAT_005806cc[temp_v1 * 3 + 0x41];
      temp_v43 = temp_v43 + (float)DAT_005806cc[temp_v1 * 3 + 0x42];
      temp_v44 = temp_v44 + (float)DAT_005806cc[temp_v1 * 3 + 0x43];
      temp_v0 = DAT_005806cc[temp_v1 + 0x141];
      FUN_0019e3d0(temp_v0,temp_v0,temp_v0,temp_v0,DAT_005806cc[temp_v1 * 8 + 0x185],
                   DAT_005806cc[temp_v1 * 8 + 0x186],DAT_005806cc[temp_v1 * 8 + 0x187],
                   DAT_005806cc[temp_v1 * 8 + 0x188]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  return;
}

} /* extern "C" */
