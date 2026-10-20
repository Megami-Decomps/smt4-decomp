/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e164` (_code @ 0x33e164, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030250c(...);
int FUN_003033d4(...);
int FUN_00324cc0(...);
int FUN_00330108(...);
int FUN_00352568(...);
int FUN_00376c64(...);
int FUN_003fd76c(...);
int FUN_003fdb18(...);
int VectorFloatToUnsigned(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

int FUN_0013cab8(...);
int FUN_00163060(...);
int FUN_00178b04(...);
int FUN_00234118(...);
int FUN_00272e64(...);
int FUN_00291038(...);
int FUN_002b56e0(...);
int FUN_002d1780(...);
int FUN_002d1e44(...);
int FUN_003026d8(...);
int FUN_003128d8(...);
int FUN_0033982c(...);
int FUN_0033a374(...);
int FUN_003e5b1c(...);
int FUN_003e5b9c(...);
int FUN_003fd924(...);
int FUN_003fe86c(...);
int FUN_0041a080(...);
int FUN_0045adc0(...);
int FUN_0049fc88(...);
int func_0x002b7f18(...);
int func_0x002d871c(...);

int FUN_0015f858(...);
int FUN_001681c4(...);
int FUN_002950a8(...);
int FUN_002ba3ec(...);
int FUN_00303bd4(...);
int FUN_00314c38(...);
int FUN_003180c4(...);
int FUN_0031ebf8(...);
int FUN_003278ac(...);
int FUN_0033f938(...);
int FUN_00365c94(...);
int FUN_003a366c(...);
int FUN_003adc58(...);
int FUN_003d54f8(...);
int FUN_003e0090(...);
int FUN_003e5728(...);
int FUN_00480fc0(...);
int FUN_0049fe58(...);
int VectorUnsignedToFloat(...);

int FUN_001628c0(...);
int FUN_001f4908(...);
int FUN_0022368c(...);
int FUN_00246688(...);
int FUN_00294a44(...);
int FUN_00297f00(...);
int FUN_002b8070(...);
int FUN_002ba400(...);
int FUN_002c2d44(...);
int FUN_002de104(...);
int FUN_003024a0(...);
int FUN_00312db0(...);
int FUN_00314ba8(...);
int FUN_003d2158(...);
int FUN_003e549c(...);
int FUN_003fd63c(...);

int FUN_00223670(...);
int FUN_002342b8(...);
int FUN_00245e38(...);
int FUN_00246014(...);
int FUN_002d88a0(...);
int FUN_002d8af4(...);
int FUN_00312a30(...);
int FUN_00312a5c(...);
int FUN_00325ba4(...);
int FUN_0033e094(...);
int FUN_00352308(...);
int FUN_00353ad4(...);
int FUN_003b5714(...);

int FUN_0013c1ec(...);
int FUN_0014af98(...);
int FUN_001681cc(...);
int FUN_00233e10(...);
int FUN_002b7f58(...);
int FUN_002d1f40(...);
int FUN_00303460(...);
int FUN_003250ac(...);
int FUN_0033abd4(...);
int FUN_00352bc4(...);
int FUN_003e54b8(...);

int FUN_00145868(...);
int FUN_002b621c(...);
int FUN_002dae68(...);
int FUN_003135bc(...);
int FUN_00324cd0(...);
int FUN_00324e38(...);
int FUN_00325998(...);
int FUN_0033ad04(...);
int FUN_003d2150(...);
int FUN_003d4ed8(...);
int FUN_003e46f4(...);
int FUN_003e542c(...);
int FUN_003e5708(...);
int FUN_003fd7c0(...);
int FUN_004a0524(...);
int FUN_004a08f0(...);
int rt_memcpy_w(...);

int CONCAT44(...);
int FUN_00162e8c(...);
int FUN_00184964(...);
int FUN_001bbf0c(...);
int FUN_001bc124(...);
int FUN_002469d0(...);
int FUN_0025ef68(...);
int FUN_00293f1c(...);
int FUN_00293f94(...);
int FUN_00294c28(...);
int FUN_00295108(...);
int FUN_002b5cb4(...);
int FUN_002b5cd4(...);
int FUN_002b80b8(...);
int FUN_002e364c(...);
int FUN_00313648(...);
int FUN_00317af8(...);
int FUN_00327ee8(...);
int FUN_0033f224(...);
int FUN_00340998(...);
int FUN_00354098(...);
int FUN_00408184(...);
int FUN_004a01c8(...);
int FUN_0050d8e4(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

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
extern unsigned char LAB_002d94f8; /* 0x2d94f8 */
extern unsigned char LAB_002d9eec; /* 0x2d9eec */
extern unsigned char LAB_002d9efc; /* 0x2d9efc */
extern unsigned char LAB_002da77c; /* 0x2da77c */
extern unsigned char LAB_002dab1c; /* 0x2dab1c */
extern unsigned char LAB_002dae38; /* 0x2dae38 */
extern unsigned char LAB_002dae40; /* 0x2dae40 */
extern unsigned char LAB_002dae54; /* 0x2dae54 */
extern unsigned char DAT_00531c18; /* 0x531c18 */
extern unsigned char DAT_00531cb8; /* 0x531cb8 */
extern unsigned char DAT_00531d58; /* 0x531d58 */
extern unsigned char DAT_00531df8; /* 0x531df8 */
extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int *DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581274; /* 0x581274 */
extern int *DAT_00581288; /* 0x581288 */
extern char s______________________00581290[67]; /* 0x581290 */
extern float DAT_005f15d8; /* 0x5f15d8 */
extern float DAT_005f15dc; /* 0x5f15dc */
extern float DAT_005f15e0; /* 0x5f15e0 */
extern unsigned int *DAT_005f15fc; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161e; /* 0x5f161e */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern unsigned char DAT_005f162f; /* 0x5f162f */
extern unsigned char DAT_005f1631; /* 0x5f1631 */
extern unsigned char DAT_005f1633; /* 0x5f1633 */
extern int DAT_005f164c; /* 0x5f164c */
extern unsigned int DAT_005f16a0; /* 0x5f16a0 */
extern unsigned int DAT_005f16a4; /* 0x5f16a4 */
extern unsigned int DAT_005f16a8; /* 0x5f16a8 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern float DAT_005f16b0; /* 0x5f16b0 */
extern float DAT_005f16b4; /* 0x5f16b4 */
extern float DAT_005f16b8; /* 0x5f16b8 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16cc; /* 0x5f16cc */
extern int DAT_005f16e0; /* 0x5f16e0 */
extern int DAT_005f16f0; /* 0x5f16f0 */
extern int DAT_005f16f4; /* 0x5f16f4 */
extern int DAT_005f16f8; /* 0x5f16f8 */
extern int DAT_005f16fc; /* 0x5f16fc */
extern int DAT_005f1700; /* 0x5f1700 */
extern int DAT_005f1704; /* 0x5f1704 */
extern int DAT_005f1708; /* 0x5f1708 */
extern int DAT_005f170c; /* 0x5f170c */
extern int DAT_005f1710; /* 0x5f1710 */
extern int DAT_005f1714; /* 0x5f1714 */
extern int DAT_005f1718; /* 0x5f1718 */
extern int DAT_005f171c; /* 0x5f171c */
extern int DAT_005f1720; /* 0x5f1720 */
extern signed char DAT_005f1774; /* 0x5f1774 */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern int DAT_005f17b0; /* 0x5f17b0 */
extern int DAT_005f17b4; /* 0x5f17b4 */
extern int DAT_005f17b8; /* 0x5f17b8 */
extern int DAT_005f17bc; /* 0x5f17bc */
extern short DAT_005f17c0; /* 0x5f17c0 */
extern unsigned short DAT_005f17c2; /* 0x5f17c2 */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern signed char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern int DAT_005f1848; /* 0x5f1848 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern signed char DAT_005f188c; /* 0x5f188c */
extern float DAT_005f19d0; /* 0x5f19d0 */
extern signed char DAT_005f19ee; /* 0x5f19ee */
extern float DAT_005f1a04; /* 0x5f1a04 */
extern float DAT_005f1a0c; /* 0x5f1a0c */
extern float DAT_005f1a10; /* 0x5f1a10 */
extern float DAT_005f1a14; /* 0x5f1a14 */
extern float DAT_005f1a18; /* 0x5f1a18 */
extern float DAT_005f1a1c; /* 0x5f1a1c */
extern int DAT_005f1a20; /* 0x5f1a20 */
extern float DAT_005f1a24; /* 0x5f1a24 */
extern float DAT_005f1a28; /* 0x5f1a28 */
extern float DAT_005f1a2c; /* 0x5f1a2c */
extern float DAT_005f1a30; /* 0x5f1a30 */
extern float DAT_005f1a34; /* 0x5f1a34 */
extern float DAT_005f1a38; /* 0x5f1a38 */
extern float DAT_005f1a3c; /* 0x5f1a3c */
extern float DAT_005f1a40; /* 0x5f1a40 */
extern float DAT_005f1a44; /* 0x5f1a44 */
extern float DAT_005f1a48; /* 0x5f1a48 */
extern unsigned char DAT_005f1a4c; /* 0x5f1a4c */
extern signed char DAT_005f1a4d; /* 0x5f1a4d */
extern unsigned char DAT_005f1a4e; /* 0x5f1a4e */
extern unsigned char DAT_005f1a4f; /* 0x5f1a4f */
extern int DAT_005f1a50; /* 0x5f1a50 */
extern signed char DAT_005f1a54; /* 0x5f1a54 */
extern unsigned char DAT_005f1adc; /* 0x5f1adc */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be4; /* 0x5f1be4 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */
extern int DAT_005f1c64; /* 0x5f1c64 */
extern int DAT_005f1c94; /* 0x5f1c94 */
extern int DAT_006160dc; /* 0x6160dc */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
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
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0013c1ec. */
/* Supplied declaration required: FUN_0013cab8. */
/* Supplied declaration required: FUN_00145868. */
/* Supplied declaration required: FUN_0014af98. */
extern unsigned int FUN_00152f44(void);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001681c4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00184964. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_00223670. */
/* Supplied declaration required: FUN_0022368c. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_00234118. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: FUN_00245e38. */
/* Supplied declaration required: FUN_00246014. */
/* Supplied declaration required: FUN_00246688. */
/* Supplied declaration required: FUN_002469d0. */
/* Supplied declaration required: FUN_0025ef68. */
/* Supplied declaration required: FUN_00272e64. */
/* Supplied declaration required: FUN_00291038. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_00293f1c. */
/* Supplied declaration required: FUN_00293f94. */
extern int FUN_00294a24(void);
/* Supplied declaration required: FUN_00294a44. */
/* Supplied declaration required: FUN_00294c28. */
/* Supplied declaration required: FUN_002950a8. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: FUN_00297f00. */
/* Supplied declaration required: FUN_002b56e0. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002b621c. */
/* Supplied declaration required: FUN_002b7f58. */
/* Supplied declaration required: FUN_002b8070. */
/* Supplied declaration required: FUN_002b80b8. */
/* Supplied declaration required: FUN_002ba3ec. */
/* Supplied declaration required: FUN_002ba400. */
/* Supplied declaration required: FUN_002c2d44. */
/* Supplied declaration required: FUN_002d1780. */
/* Supplied declaration required: FUN_002d1e44. */
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: FUN_002d88a0. */
/* Supplied declaration required: FUN_002d8af4. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002de104. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_003024a0. */
/* Supplied declaration required: FUN_0030250c. */
/* Supplied declaration required: FUN_003026d8. */
/* Supplied declaration required: FUN_003033d4. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00303bd4. */
/* Supplied declaration required: FUN_003128d8. */
/* Supplied declaration required: FUN_00312a30. */
/* Supplied declaration required: FUN_00312a5c. */
extern int FUN_00312d88(void);
/* Supplied declaration required: FUN_00312db0. */
extern int FUN_003135a8(void);
/* Supplied declaration required: FUN_003135bc. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00314ba8. */
/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031ebf8. */
/* Supplied declaration required: FUN_00324cc0. */
/* Supplied declaration required: FUN_00324cd0. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: FUN_00325998. */
/* Supplied declaration required: FUN_00325ba4. */
/* Supplied declaration required: FUN_003278ac. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: FUN_0033982c. */
/* Supplied declaration required: FUN_0033a374. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: FUN_0033ad04. */
/* Supplied declaration required: FUN_0033e094. */
/* Supplied declaration required: FUN_0033f224. */
/* Supplied declaration required: FUN_0033f938. */
/* Supplied declaration required: FUN_00340998. */
/* Supplied declaration required: FUN_00352308. */
/* Supplied declaration required: FUN_00352568. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_00353ad4. */
/* Supplied declaration required: FUN_00354098. */
/* Supplied declaration required: FUN_00365c94. */
/* Supplied declaration required: FUN_00376c64. */
extern int FUN_003798f0(void);
/* Supplied declaration required: FUN_003a366c. */
/* Supplied declaration required: FUN_003adc58. */
extern unsigned int FUN_003ae90c(void);
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d2158. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_003d54f8. */
extern unsigned int FUN_003e0034(void);
/* Supplied declaration required: FUN_003e0090. */
/* Supplied declaration required: FUN_003e46f4. */
extern int FUN_003e5414(int);
/* Supplied declaration required: FUN_003e542c. */
/* Supplied declaration required: FUN_003e549c. */
/* Supplied declaration required: FUN_003e54b8. */
extern int FUN_003e56f0(int);
/* Supplied declaration required: FUN_003e5708. */
/* Supplied declaration required: FUN_003e5728. */
/* Supplied declaration required: FUN_003e5b1c. */
/* Supplied declaration required: FUN_003e5b9c. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0041a080. */
/* Supplied declaration required: FUN_0045adc0. */
/* Supplied declaration required: FUN_00480fc0. */
/* Supplied declaration required: FUN_0049fc88. */
/* Supplied declaration required: FUN_0049fe58. */
/* Supplied declaration required: FUN_004a01c8. */
/* Supplied declaration required: FUN_004a0524. */
/* Supplied declaration required: FUN_004a08f0. */
extern int FUN_004a0e38(unsigned int, unsigned int);
extern int FUN_004d04f4(void);
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);
extern unsigned int FUN_004ffb58(void);
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: func_0x002b7f18. */
/* Supplied declaration required: func_0x002d871c. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x00397c1c) */
/* WARNING: Removing unreachable block (ram,0x002da738) */
/* WARNING: Removing unreachable block (ram,0x00397c3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0033e164(void)

{
/* irregular: 68 goto(s); irregular input(s): in_d10, in_d11, in_d12, in_d13, in_d14, in_d8, in_d9, in_fpscr, in_s0; 142 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int *piVar7;
  int temp_v5;
  float *pfVar9;
  unsigned int temp_v6;
  int *piVar11;
  unsigned int *puVar12;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  short temp_v12;
  int temp_v13;
  float *pfVar17;
  float unaff_r6;
  unsigned int *puVar18;
  float unaff_r7;
  int *piVar19;
  int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  int *piVar24;
  unsigned int in_fpscr;
  unsigned int temp_v18;
  float temp_v19;
  int in_s0;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned long long temp_v33;
  unsigned long long temp_v34;
  unsigned long long in_d8;
  float temp_v35;
  unsigned long long temp_v36;
  unsigned long long in_d9;
  float temp_v37;
  unsigned long long in_d10;
  unsigned long long temp_v38;
  unsigned long long temp_v39;
  unsigned long long in_d11;
  unsigned long long temp_v40;
  unsigned long long in_d12;
  unsigned long long temp_v41;
  unsigned long long in_d13;
  unsigned long long in_d14;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  unsigned int uStack_2f8;
  float afStack_2f4 [3];
  float afStack_2e8 [40];
  float afStack_248 [38];
  unsigned char temp_v42 [4];
  float fStack_1ac;
  float afStack_1a8 [3];
  int iStack_19c;
  unsigned int uStack_190;
  unsigned int temp_v43 [33];
  float afStack_108 [20];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  unsigned int uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned long long uStack_5c;
  unsigned long long uStack_54;
  unsigned long long uStack_4c;
  unsigned long long uStack_44;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (DAT_00581274 == 0) {
    return;
  }
  temp_v5 = FUN_003135a8();
  if (temp_v5 != 0x1c) {
    return;
  }
  DAT_00581288[1] = 10;
  FUN_00340998();
  temp_v5 = iStack_38;
  temp_v20 = fStack_3c;
  temp_v19 = DAT_005f16bc;
  piVar19 = DAT_00581288;
  fStack_20 = (float)in_d8;
  temp_v35 = fStack_20;
  fStack_1c = (float)(in_d8 >> 0x20);
  temp_v37 = fStack_1c;
  fStack_3c = (float)in_d12;
  iStack_38 = (int)((unsigned long long)in_d12 >> 0x20);
  fStack_20 = (float)in_d10;
  fStack_1c = (float)(in_d10 >> 0x20);
  fStack_2c = (float)in_d11;
  fStack_28 = (float)((unsigned long long)in_d11 >> 0x20);
  temp_v26 = fStack_28;
  fStack_28 = (float)in_d9;
  fStack_24 = (float)((unsigned long long)in_d9 >> 0x20);
  fStack_30 = temp_v26;
  switch(*DAT_00581288) {
  case 1:
    fStack_34 = (float)in_d13;
    fStack_30 = (float)((unsigned long long)in_d13 >> 0x20);
    fStack_2c = (float)in_d14;
    fStack_28 = (float)((unsigned long long)in_d14 >> 0x20);
    temp_v7 = FUN_00162e8c();
    temp_v37 = 20.0f;
    temp_v16 = 0;
    temp_v20 = 0.0f;
    temp_v6 = 0;
    temp_v26 = temp_v37;
    temp_v18 = FUN_0029202c();
    temp_v28 = 2.0f;
    temp_v35 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v35 = temp_v35 * 0.01f;
    temp_v17 = SBORROW4((int)temp_v35,0x40000000);
    temp_v5 = (int)temp_v35 - 0x40000000;
    temp_v15 = temp_v35 == 2.0f;
    temp_v19 = temp_v28;
    if ((int)temp_v35 < 0x40000001) {
      temp_v17 = SBORROW4((int)temp_v35,0x3f800000);
      temp_v5 = (int)temp_v35 - 0x3f800000;
      temp_v15 = temp_v35 == 1.0f;
      temp_v19 = temp_v35;
    }
    if ((!temp_v15 && temp_v5 < 0 == temp_v17) && (temp_v37 = temp_v37 * temp_v19, (int)temp_v37 >= 0x420c0001)) {
      temp_v37 = 35.0f;
    }
    if (DAT_005f1c64 != 0) {
      temp_v37 = temp_v37 * 2.5f;
    }
    if ((DAT_005f1bc4 != '\0') || (DAT_005f1614 != '\0')) {
LAB_002b82a8:
      *(unsigned int *)(temp_v7 + 0xdc8) = 0;
      *(unsigned int *)(temp_v7 + 0x1518) = 0;
      *(unsigned int *)(temp_v7 + 0x151c) = 0;
      piVar19 = DAT_00581288;
      DAT_00581288[0x9d] = 0;
      piVar19[0x9e] = 0;
      piVar19[0x9f] = 0;
      FUN_002e364c(piVar19 + 10);
      FUN_00327ee8();
      return;
    }
    temp_v11 = DAT_005f1618;
    if ((int)DAT_005f1618 < 1) {
      temp_v11 = (unsigned int)DAT_005f161d;
    }
    if (temp_v11 != 0) goto LAB_002b82a8;
    if (0 < *(int *)(temp_v7 + 0xdcc)) {
      *(int *)(temp_v7 + 0xdcc) = *(int *)(temp_v7 + 0xdcc) - 1;
    }
    FUN_00354098();
    temp_v33 = *(unsigned long long *)(DAT_00581288 + 10);
    temp_v36 = CONCAT44(temp_v37,DAT_00581288[0xc]);
    FUN_00317af8(&fStack_6c,&uStack_70,0);
    temp_v15 = 0;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    temp_v5 = FUN_0018719c(0xc);
    if ((temp_v5 != 0) && (temp_v5 = FUN_0018719c(0x10), temp_v5 == 0)) {
      temp_v15 = 1;
    }
    if (DAT_005f1be4 == 0 || DAT_005f1be4 == 3) {
      if (*(short *)((int)DAT_00581288 + 0x19a) >= 1) {
        *(short *)((int)DAT_00581288 + 0x19a) = *(short *)((int)DAT_00581288 + 0x19a) - 1;
      }
      else {
        temp_v5 = FUN_004d04f4();
        puVar6 = (unsigned int *)0x0;
        if (temp_v5 != 0) {
          puVar6 = DAT_005f15fc;
        }
        if ((((temp_v5 != 0 && puVar6 != (unsigned int *)0x24) && (DAT_005806a4[0x2c] == 0)) &&
            (temp_v5 = FUN_0018719c(0x49a), temp_v5 != 0)) && (DAT_005f19ee == '\0' && !temp_v15)) {
          *(unsigned int *)(temp_v7 + 0xdc8) = 0;
          *(unsigned int *)(temp_v7 + 0x1518) = 0;
          *(unsigned int *)(temp_v7 + 0x151c) = 0;
          piVar19 = DAT_00581288;
          DAT_00581288[0x9d] = 0;
          piVar19[0x9e] = 0;
          piVar19[0x9f] = 0;
          FUN_00313648(3);
          FUN_00408184(0x14,1);
          FUN_002e364c(DAT_00581288 + 10);
          FUN_00327ee8();
          if (DAT_00581288[0x74] == 1 || DAT_00581288[0x74] == 9) {
            FUN_0033f224(0);
          }
          return;
        }
      }
    }
    if (DAT_005f1be4 == 1) {
      if (DAT_005f1c48 != '\0') {
        temp_v5 = FUN_001656a0(1);
        if (temp_v5 != 0) {
          DAT_005f1c48 = '\0';
        }
        temp_v5 = FUN_00164af0(5);
        temp_v19 = 50.0f;
        if (temp_v5 != 0) {
          DAT_00581288[0xb] = (int)((float)DAT_00581288[0xb] + 50.0f);
        }
        temp_v5 = FUN_00164af0(6);
        if (temp_v5 != 0) {
          DAT_00581288[0xb] = (int)((float)DAT_00581288[0xb] - temp_v19);
        }
      }
      else {
        temp_v5 = FUN_001656a0(1);
        if (temp_v5 != 0) {
          DAT_005f1c48 = '\x01';
        }
      }
    }
    if ((((unsigned int)fStack_6c < 0xbf000000) && ((int)fStack_6c < 0x3f000000)) &&
       ((uStack_70 < 0xbf000000 && ((int)uStack_70 < 0x3f000000)))) {
      temp_v16 = 1;
    }
    temp_v41 = CONCAT44(0x447a0000,temp_v26);
    if (DAT_005806a4[0x2c] != 0) {
      temp_v16 = 1;
    }
    if ((DAT_005f161e != '\0') && (DAT_005f1c48 == '\0')) {
      if ((!temp_v16) ||
         ((temp_v11 = DAT_00581288[0x1a], 0xbdcccccc < temp_v11 ||
          (temp_v6 = (unsigned int)((int)temp_v11 < 0x3dcccccd), (int)temp_v11 >= 0x3dcccccd)))) {
        DAT_00581288[0xb] = (int)(((float)DAT_00581288[0xb] - temp_v28) - (float)DAT_00581288[0x1a]);
      }
      if (0xc69c4000 < (unsigned int)DAT_00581288[0xb]) {
        DAT_00581288[0xb] = 0x447a0000;
      }
    }
    piVar19 = DAT_00581288;
    temp_v5 = 0x40a00000;
    if (DAT_00581288[0x9d] == 0) {
      if (DAT_00581288[0x15] == 0x14) {
        DAT_00581288[0x16] = 0x41200000;
      }
      else {
        DAT_00581288[0x16] = 0x40a00000;
      }
      piVar19[0x15] = 0;
    }
    temp_v19 = 0.5f;
    temp_v38 = CONCAT44(temp_v28,0x3f800000);
    piVar11 = (int *)(temp_v7 + 0x1518);
    if (temp_v16) {
      *(unsigned char *)(piVar19 + 4) = 0;
      temp_v13 = *piVar11;
      *piVar11 = temp_v13 + 1;
      if ((temp_v13 + 1 >= 901) && (piVar19[0x9d] == 0)) {
        temp_v13 = FUN_00184964(0,9);
        piVar19 = DAT_00581288;
        piVar11 = (int *)(temp_v7 + 0x151c);
        DAT_00581288[0x9d] = (unsigned int)(unsigned char)s______________________00581290[temp_v13 + *piVar11 * 10];
        piVar19[0x9e] = 0;
        piVar19[0x9f] = 0;
        temp_v13 = *piVar11;
        *piVar11 = temp_v13 + 1;
        if (temp_v13 + 1 >= 5) {
          *piVar11 = 0;
        }
      }
      if ((*(int *)(temp_v7 + 0xdcc) == 0) &&
         (temp_v13 = *(int *)(temp_v7 + 0xdc8) + 1, *(int *)(temp_v7 + 0xdc8) = temp_v13, temp_v13 >= 901)) {
        FUN_00295108(0);
        FUN_00294c28();
        FUN_002b80b8();
        *(unsigned int *)(temp_v7 + 0xdcc) = 0xe10;
        *(unsigned int *)(temp_v7 + 0xdc8) = 0;
      }
      temp_v13 = *(int *)(temp_v7 + 0xdec);
      temp_v14 = temp_v13 + 1;
      *(int *)(temp_v7 + 0xdec) = temp_v14;
      if (temp_v14 >= 0x1f) {
        *(int *)(temp_v7 + 0xdec) = temp_v13 - 0x1d;
        FUN_00408184(0x1d,1);
      }
    }
    else {
      *(unsigned int *)(temp_v7 + 0xdc8) = 0;
      *piVar11 = 0;
      *(unsigned int *)(temp_v7 + 0x151c) = 0;
      piVar19[0x9d] = 0;
      piVar19[0x9e] = 0;
      piVar19[0x9f] = 0;
      FUN_0050d8e4();
      fStack_6c = fStack_6c * 57.32484f;
      if ((char)DAT_00581288[4] != '\0') {
        temp_v35 = (float)DAT_00581288[5];
        FUN_002b5cd4();
        temp_v11 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v11 | ((unsigned int)(temp_v20 <= temp_v35) << 0x1d);
        temp_v26 = temp_v35;
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v26 = -temp_v35;
        }
        if ((int)temp_v26 < 0x42700001) {
          temp_v37 = temp_v26 * temp_v19;
          if ((int)temp_v37 < 0x3f800000) {
            temp_v37 = (float)temp_v38;
          }
          in_fpscr = temp_v11 | ((unsigned int)(temp_v26 == temp_v37) << 0x1e) |
                     ((unsigned int)(temp_v37 <= temp_v26) << 0x1d);
          temp_v1 = (unsigned char)(in_fpscr >> 0x18);
          if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) {
            temp_v11 = temp_v11 | ((unsigned int)(temp_v20 < temp_v35) << 0x1f) | ((unsigned int)(temp_v20 == temp_v35) << 0x1e)
            ;
            in_fpscr = temp_v11 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v35 != temp_v35)) << 0x1c);
            temp_v1 = (unsigned char)(temp_v11 >> 0x18);
            if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              fStack_6c = (float)DAT_00581288[5] + temp_v37;
            }
            else {
              fStack_6c = (float)DAT_00581288[5] - temp_v37;
            }
          }
        }
        DAT_00581288[5] = (int)fStack_6c;
        fStack_6c = (float)DAT_00581288[5];
      }
      *(unsigned char *)(DAT_00581288 + 4) = 1;
      temp_v40 = CONCAT44(temp_v19,0x43b40000);
      temp_v19 = fStack_6c - (float)DAT_005806a4[6];
      temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v19) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v11 >> 0x1d,0)) {
        temp_v19 = temp_v19 + 360.0f;
      }
      if ((int)temp_v19 >= 0x43b40001) {
        temp_v19 = temp_v19 - 360.0f;
      }
      if (DAT_005806a4[0x32] != 3) {
        FUN_00293f94();
      }
      else {
        FUN_00293f1c();
      }
      temp_v19 = -temp_v19;
      temp_v35 = (float)DAT_00581288[0x14];
      FUN_002b5cd4();
      temp_v11 = temp_v11 & 0xfffffff;
      temp_v26 = temp_v35;
      if (temp_v35 < temp_v20) {
        temp_v26 = -temp_v35;
      }
      if ((int)temp_v26 < 0x41f00001) {
        temp_v37 = temp_v26 * (float)((unsigned long long)temp_v40 >> 0x20);
        if ((int)temp_v37 < 0x3f800000) {
          temp_v37 = (float)temp_v38;
        }
        if (temp_v37 < temp_v26) {
          temp_v11 = temp_v11 | ((unsigned int)(temp_v20 < temp_v35) << 0x1f);
          if (temp_v20 == temp_v35 || romwright_subpiece_4_1_0(temp_v11 >> 0x1f,0) != ((temp_v20 != temp_v20) || (temp_v35 != temp_v35))) {
            temp_v19 = (float)DAT_00581288[0x14] + temp_v37;
          }
          else {
            temp_v19 = (float)DAT_00581288[0x14] - temp_v37;
          }
        }
      }
      DAT_00581288[0x14] = (int)temp_v19;
      piVar19 = DAT_00581288;
      temp_v26 = (float)DAT_00581288[0x14];
      in_fpscr = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v26) << 0x1d);
      temp_v35 = 0.017453292f;
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v26 = temp_v26 + (float)temp_v40;
        DAT_00581288[0x14] = (int)temp_v26;
      }
      if ((int)temp_v26 >= 0x43b40001) {
        temp_v26 = temp_v26 - (float)temp_v40;
        piVar19[0x14] = (int)temp_v26;
      }
      temp_v26 = temp_v26 * 0.017453292f;
      *(unsigned char *)(piVar19 + 0x1b) = 1;
      piVar19[0x1f] = (int)((unsigned long long)temp_v36 >> 0x20);
      FUN_001bc124();
      piVar19 = DAT_00581288;
      temp_v19 = (float)((unsigned long long)temp_v40 >> 0x20);
      DAT_00581288[10] =
           (int)((float)DAT_00581288[10] + temp_v26 * (float)((unsigned long long)temp_v36 >> 0x20));
      temp_v35 = (float)piVar19[0x14] * temp_v35;
      FUN_001bbf0c();
      piVar19 = DAT_00581288;
      DAT_00581288[0xc] =
           (int)((float)DAT_00581288[0xc] + temp_v35 * (float)((unsigned long long)temp_v36 >> 0x20));
      piVar19[0x15] = 2;
    }
    temp_v13 = (int)temp_v36;
    temp_v11 = 0;
    FUN_002469d0();
    piVar19 = DAT_00581288;
    DAT_00581288[10] = uStack_68;
    piVar19[0xb] = uStack_64;
    piVar19[0xc] = uStack_60;
    piVar19[0xd] = (int)temp_v33;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = temp_v13;
    if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && ((temp_v6 & ~temp_v11) == 0)) {
      piVar7 = piVar19 + 10;
      FUN_0025ef68(piVar7,piVar19 + 0xd,0);
      piVar19 = DAT_00581288;
      piVar11 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar11 = DAT_00581288;
      }
      if (piVar7 != (int *)0x0) {
        piVar11[0x1a] = (int)temp_v20;
      }
      else {
        temp_v26 = (float)DAT_00581288[0x1a] + (float)((unsigned long long)temp_v38 >> 0x20);
        DAT_00581288[0x1a] = (int)temp_v26;
        if ((int)temp_v26 < 0x41a00001) {
          temp_v41 = CONCAT44((int)((unsigned long long)temp_v41 >> 0x20),temp_v26);
        }
        piVar19[0x1a] = (int)temp_v41;
      }
    }
    temp_v14 = (int)((unsigned long long)temp_v41 >> 0x20);
    if (((DAT_005f15fc != (unsigned int *)0x24) && (temp_v4 = FUN_004a0e38(2,5), temp_v4 != 0)) &&
       (!temp_v16)) {
      temp_v26 = (float)temp_v33;
      FUN_002b5cb4();
      temp_v35 = (float)DAT_00581288[0x58];
      DAT_00581288[0x58] = (int)(temp_v35 - temp_v26);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v35 - temp_v26) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        FUN_004a01c8(2,5);
        DAT_00581288[0x58] = temp_v14;
        FUN_00325998(0xf,0x50);
        temp_v14 = FUN_003d4ed8(0x1000224);
        piVar19 = DAT_00581288;
        DAT_00581288[0x68] = temp_v14;
        piVar19[0x69] = 0x14;
      }
    }
    temp_v35 = (float)temp_v33;
    FUN_002b5cb4();
    temp_v26 = *(float *)(temp_v7 + 0xde8) + temp_v35;
    *(float *)(temp_v7 + 0xde8) = temp_v26;
    if ((int)temp_v26 >= 0x47c35001) {
      *(float *)(temp_v7 + 0xde8) = temp_v26 - 100000.0f;
      FUN_00408184(0x12,1);
    }
    temp_v14 = 0x44bb8000;
    temp_v26 = *(float *)(temp_v7 + 0xdf0) + temp_v35;
    *(float *)(temp_v7 + 0xdf0) = temp_v26;
    if ((int)temp_v26 >= 0x44bb8001) {
      *(float *)(temp_v7 + 0xdf0) = temp_v26 - 1500.0f;
      FUN_004a0524();
      FUN_004a08f0();
    }
    temp_v26 = *(float *)(temp_v7 + 0xdf8) + temp_v35;
    *(float *)(temp_v7 + 0xdf8) = temp_v26;
    temp_v15 = *(int *)(temp_v7 + 0xdf4) != 0;
    if (temp_v15) {
      temp_v37 = 60000.0f;
      temp_v4 = (int)temp_v26 - 0x476a6000;
    }
    else {
      *(float *)(temp_v7 + 0xdf8) = temp_v20;
      temp_v4 = 0;
      temp_v37 = 0.0f;
    }
    if ((temp_v15 && temp_v26 != temp_v37) && temp_v4 < 0 == (temp_v15 && SBORROW4((int)temp_v26,(int)temp_v37)))
    {
      *(float *)(temp_v7 + 0xdf8) = temp_v20;
      *(unsigned int *)(temp_v7 + 0xdf4) = 0;
      *(unsigned char *)(temp_v7 + 0xdfc) = 1;
      *(unsigned int *)(temp_v7 + 0x15b4) = 3;
    }
    temp_v26 = *(float *)(temp_v7 + 0x10a0) + temp_v35;
    *(float *)(temp_v7 + 0x10a0) = temp_v26;
    if (*(int *)(temp_v7 + 0x109c) == 0) {
      *(float *)(temp_v7 + 0x10a0) = temp_v20;
    }
    else {
      temp_v37 = *(float *)(temp_v7 + 0x15c0);
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v26 < temp_v37) << 0x1f) |
               ((unsigned int)(temp_v26 == temp_v37) << 0x1e);
      in_fpscr = temp_v6 | ((unsigned int)((temp_v26 != temp_v26) || (temp_v37 != temp_v37)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        FUN_003d2150(0x10000d1);
        temp_v4 = FUN_0018719c(0x4c9);
        if ((temp_v4 == 0) || (temp_v4 = FUN_002e5db4(), temp_v4 != 0)) {
          DAT_00581288[0x74] = 0xf;
        }
        else {
          DAT_00581288[0x74] = 0xb;
        }
        piVar19 = DAT_00581288;
        DAT_00581288[0x8a] = 6;
        *(unsigned char *)(piVar19 + 0x8b) = 1;
        piVar19[0x90] = temp_v5;
        piVar19[0x75] = 0;
        *(float *)(temp_v7 + 0x10a0) = temp_v20;
        *(unsigned int *)(temp_v7 + 0x109c) = 0;
        *(unsigned int *)(temp_v7 + 0x10a4) = 1;
        temp_v5 = FUN_0018719c(0x4c9);
        if ((temp_v5 == 0) || (temp_v5 = FUN_002e5db4(), temp_v5 != 0)) {
          DAT_00581288[0x8e] = 6;
        }
        *(unsigned char *)(DAT_00581288 + 0x8f) = 1;
        temp_v5 = FUN_0018719c(0x4c9);
        if ((temp_v5 == 0) || (temp_v5 = FUN_002e5db4(), temp_v5 != 0)) {
          FUN_003fd7c0(*(unsigned int *)(DAT_00581288[99] + 4),0,2);
        }
      }
    }
    temp_v35 = *(float *)(temp_v7 + 0x14ec) + temp_v35;
    *(float *)(temp_v7 + 0x14ec) = temp_v35;
    temp_v15 = *(int *)(temp_v7 + 0x14e8) != 0;
    if (temp_v15) {
      temp_v26 = 30000.0f;
      temp_v5 = (int)temp_v35 - 0x46ea6000;
    }
    else {
      *(float *)(temp_v7 + 0x14ec) = temp_v20;
      temp_v5 = 0;
      temp_v26 = 0.0f;
    }
    if ((temp_v15 && temp_v35 != temp_v26) && temp_v5 < 0 == (temp_v15 && SBORROW4((int)temp_v35,(int)temp_v26)))
    {
      *(float *)(temp_v7 + 0x14ec) = temp_v20;
      *(int *)(temp_v7 + 0x14e8) = 0;
      *(unsigned int *)(temp_v7 + 0x14f0) = 1;
    }
    piVar19 = DAT_00581288 + 10;
    FUN_002e364c();
    temp_v26 = (float)temp_v33;
    if (((unsigned int)piVar19 & 2) != 0) {
      if (!temp_v16) {
        FUN_002b5cb4();
        temp_v35 = (float)DAT_00581288[0x57];
        DAT_00581288[0x57] = (int)(temp_v35 - temp_v26);
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v35 - temp_v26) << 0x1d);
        if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v5 = FUN_003e46f4(0x85), temp_v5 == 0)) {
          puVar6 = (unsigned int *)&DAT_005f15fc;
          if (DAT_005f15fc == (unsigned int *)0x5) {
            puVar6 = DAT_005f1600;
          }
          if (!(DAT_005f15fc == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9)) {
            DAT_00581288[0x57] = 0x43fa0000;
          }
          else {
            DAT_00581288[0x57] = temp_v14;
          }
          FUN_00313648(0x20);
        }
      }
      DAT_005f1633 = 4;
      temp_v35 = temp_v20;
    }
    else {
      temp_v35 = (float)DAT_00581288[0x57];
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v35 < temp_v20) << 0x1f) |
               ((unsigned int)(temp_v35 == temp_v20) << 0x1e);
      temp_v11 = temp_v6 | ((unsigned int)((temp_v35 != temp_v35) || (temp_v20 != temp_v20)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      temp_v35 = temp_v20;
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
        FUN_002b5cb4();
        DAT_00581288[0x57] = (int)((float)DAT_00581288[0x57] - temp_v26);
      }
      temp_v26 = (float)DAT_00581288[0x57];
      temp_v6 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v26 < temp_v20) << 0x1f) |
               ((unsigned int)(temp_v26 == temp_v20) << 0x1e);
      in_fpscr = temp_v6 | ((unsigned int)((temp_v26 != temp_v26) || (temp_v20 != temp_v20)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v20 = temp_v26;
      }
      DAT_00581288[0x57] = (int)temp_v20;
      DAT_005f1633 = 0xff;
    }
    if ((((unsigned int)piVar19 & 4) != 0) && (DAT_005f17d0 == '\0')) {
      DAT_005f161c = 1;
      *(unsigned char *)(temp_v7 + 0xe09) = 0;
      FUN_00313648(0x1f);
      FUN_00408184(0x16,1);
    }
    FUN_00327ee8();
    if (((unsigned int)piVar19 & 0x800) != 0) {
      FUN_0033ad04();
    }
    if (((unsigned int)piVar19 & 0x2000) != 0) {
      FUN_002b621c();
    }
    piVar19 = DAT_00581288;
    if (temp_v16) {
      DAT_00581288[0x1f] = (int)temp_v35;
      piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * temp_v19);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.33333334f)
      ;
      temp_v19 = (float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * temp_v19;
      piVar19[9] = (int)temp_v19;
      temp_v5 = piVar19[0x9d];
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 != 2) {
            if (temp_v5 == 3) {
              temp_v5 = piVar19[0x9e];
              if (temp_v5 != 0) {
                if (temp_v5 != 1) {
                  if (temp_v5 != 2) {
                    if (temp_v5 != 3) {
                      if (temp_v5 == 4) {
                        temp_v5 = FUN_003e56f0(piVar19[0x6a]);
                        piVar19 = DAT_00581288;
                        DAT_00581288 = piVar19;
                        if (temp_v5 != 0) {
                          piVar19[0x15] = 0;
                          piVar19[0x16] = (int)temp_v35;
                          piVar19[0x9d] = 0;
                          piVar19[0x9e] = 0;
                        }
                      }
                    }
                    else {
                      piVar19[0x9f] = piVar19[0x9f] + 1;
                      FUN_003e5708(piVar19[0x6a]);
                      piVar19 = DAT_00581288;
                      temp_v20 = (float)VectorSignedToFloat(DAT_00581288[0x9f],
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      if (temp_v19 * 3.0f < temp_v20) {
                        DAT_00581288[0x15] = 0x28;
                        piVar19[0x16] = (int)temp_v35;
                        piVar19[0x9e] = 4;
                        piVar19[0x9f] = 0;
                      }
                    }
                  }
                  else {
                    temp_v5 = FUN_003e56f0(piVar19[0x6a]);
                    piVar19 = DAT_00581288;
                    if (temp_v5 != 0) {
                      DAT_00581288[0x15] = 0x27;
                      piVar19[0x16] = (int)temp_v35;
                      piVar19[0x9e] = 3;
                      piVar19[0x9f] = 0;
                    }
                  }
                }
                else {
                  temp_v5 = FUN_003e56f0(piVar19[0x6a]);
                  piVar19 = DAT_00581288;
                  if (temp_v5 != 0) {
                    DAT_00581288[0x15] = 0x26;
                    piVar19[0x16] = (int)temp_v35;
                    piVar19[0x9e] = 2;
                    piVar19[0x9f] = 0;
                  }
                }
              }
              else {
                FUN_003e542c(piVar19[0x6a]);
                temp_v26 = (float)temp_v38;
                temp_v20 = temp_v19;
                FUN_003e5708(DAT_00581288[0x6a]);
                if (temp_v20 >= temp_v19 - temp_v26) {
                  piVar19 = DAT_00581288;
                  DAT_00581288[0x15] = 0x25;
                  piVar19[0x16] = (int)temp_v35;
                  piVar19[0x9e] = 1;
                }
              }
            }
          }
          else {
            temp_v5 = piVar19[0x9e];
            if (temp_v5 != 0) {
              if (temp_v5 != 1) {
                if (temp_v5 != 2) {
                  if (temp_v5 == 3) {
                    temp_v5 = FUN_003e56f0(piVar19[0x6a]);
                    piVar19 = DAT_00581288;
                    DAT_00581288 = piVar19;
                    if (temp_v5 != 0) {
                      piVar19[0x15] = 0;
                      piVar19[0x16] = (int)temp_v35;
                      piVar19[0x9d] = 0;
                      piVar19[0x9e] = 0;
                    }
                  }
                }
                else {
                  piVar19[0x9f] = piVar19[0x9f] + 1;
                  FUN_003e5708(piVar19[0x6a]);
                  piVar19 = DAT_00581288;
                  temp_v20 = (float)VectorSignedToFloat(DAT_00581288[0x9f],
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  if (temp_v19 * (float)((unsigned long long)temp_v38 >> 0x20) < temp_v20) {
                    DAT_00581288[0x15] = 0x28;
                    piVar19[0x16] = (int)temp_v35;
                    piVar19[0x9e] = 3;
                    piVar19[0x9f] = 0;
                  }
                }
              }
              else {
                temp_v5 = FUN_003e56f0(piVar19[0x6a]);
                piVar19 = DAT_00581288;
                if (temp_v5 != 0) {
                  DAT_00581288[0x15] = 0x27;
                  piVar19[0x16] = (int)temp_v35;
                  piVar19[0x9e] = 2;
                  piVar19[0x9f] = 0;
                }
              }
            }
            else {
              FUN_003e542c(piVar19[0x6a]);
              temp_v26 = (float)temp_v38;
              temp_v20 = temp_v19;
              FUN_003e5708(DAT_00581288[0x6a]);
              piVar19 = DAT_00581288;
              if (temp_v19 - temp_v26 <= temp_v20) {
                DAT_00581288[0x15] = 0x26;
                piVar19[0x16] = (int)temp_v35;
                piVar19[0x9e] = 1;
              }
            }
          }
        }
        else if (piVar19[0x9e] != 0) {
          if (piVar19[0x9e] == 1) {
            temp_v5 = FUN_003e56f0(piVar19[0x6a]);
            piVar19 = DAT_00581288;
            DAT_00581288 = piVar19;
            if (temp_v5 != 0) {
              piVar19[0x15] = 0;
              piVar19[0x16] = (int)temp_v35;
              piVar19[0x9d] = 0;
              piVar19[0x9e] = 0;
            }
          }
        }
        else {
          FUN_003e542c(piVar19[0x6a]);
          temp_v26 = (float)temp_v38;
          temp_v20 = temp_v19;
          FUN_003e5708(DAT_00581288[0x6a]);
          if (temp_v20 >= temp_v19 - temp_v26) {
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0x25;
            piVar19[0x16] = (int)temp_v35;
            piVar19[0x9e] = 1;
          }
        }
      }
    }
    else {
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.33333334f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    FUN_002dae68();
    piVar19 = DAT_00581288;
    piVar7 = DAT_00581288 + 8;
    temp_v5 = DAT_00581288[9];
    piVar11 = DAT_00581288 + 0xd;
    DAT_00581288[0x10] = DAT_00581288[7];
    piVar19[0x11] = *piVar7;
    piVar19[0x12] = temp_v5;
    *piVar11 = (int)temp_v33;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = temp_v13;
    return;
  case 2:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    if (piVar19[1] == 0) {
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = 1;
      piVar19[2] = 0;
    }
    goto LAB_00246d70;
  case 3:
    uStack_68 = 0;
    temp_v19 = fStack_3c;
    fStack_3c = fStack_20;
    fStack_28 = (float)iStack_38;
    iStack_38 = (int)fStack_1c;
    fStack_34 = fStack_2c;
    fStack_2c = temp_v19;
    temp_v5 = FUN_00162e8c();
    FUN_00145868();
    rt_memcpy_w(afStack_2e8,&DAT_00531c18,0xa0);
    rt_memcpy_w(afStack_248,&DAT_00531cb8,0xa0);
    rt_memcpy_w(afStack_1a8,&DAT_00531d58,0xa0);
    rt_memcpy_w(afStack_108,&DAT_00531df8,0xa0);
    temp_v19 = (float)DAT_00581288[10];
    temp_v33 = romwright_piece_4_4(DAT_00581288[0xb],DAT_00581288[0xc]);
    FUN_002dae68();
    piVar19 = DAT_00581288;
    temp_v26 = 0.33333334f;
    temp_v20 = 0.0f;
    temp_v7 = DAT_00581288[1];
    if (temp_v7 != 0) {
      temp_v35 = 20.0f;
      if (temp_v7 != 1) {
        if (temp_v7 != 2) goto LAB_003270b0;
        DAT_00581288[2] = DAT_00581288[2] + 1;
        if (((DAT_005f15fc != (unsigned int *)0x24) && (temp_v5 = FUN_004a0e38(2,5), temp_v5 != 0)) &&
           ((float)DAT_00581288[0x58] < temp_v20)) {
          FUN_004a01c8(2,5);
          DAT_00581288[0x58] = 0x447a0000;
          FUN_00325998(0xf,0x50);
          temp_v5 = FUN_003d4ed8(0x1000224);
          piVar19 = DAT_00581288;
          DAT_00581288[0x68] = temp_v5;
          piVar19[0x69] = 0x14;
        }
        if ((temp_v20 <= (float)DAT_00581288[0x57]) || (temp_v5 = FUN_003e46f4(0x85), temp_v5 != 0)) {
          FUN_00317af8(&uStack_64,&uStack_60,0);
          if (DAT_005f1848 != 0) {
            if (DAT_005f1848 == 1) {
              if (DAT_00581288[2] == 5) {
                FUN_00324e38(0xffffffff);
                FUN_00324cd0();
                FUN_003135bc();
              }
              temp_v5 = DAT_00581288[2];
joined_r0x00326e7c:
              if (temp_v5 == 6) {
                FUN_00324cd0();
                FUN_003135bc();
              }
              goto LAB_00326f3c;
            }
            if (DAT_005f1848 == 2) {
              if (DAT_00581288[2] == 5) {
                FUN_00324e38(0xffffffff);
                FUN_00324cd0();
                FUN_003135bc();
              }
              temp_v5 = DAT_00581288[2];
              goto joined_r0x00326e7c;
            }
            if (DAT_005f1848 == 3) {
              if (DAT_00581288[2] == 5) {
                FUN_00324e38(0xffffffff);
                FUN_00324cd0();
                FUN_003135bc();
              }
              temp_v5 = DAT_00581288[2];
              goto joined_r0x00326e38;
            }
          }
          else {
            if (DAT_00581288[2] == 5) {
              FUN_00324e38(0xffffffff);
              FUN_00324cd0();
              FUN_003135bc();
            }
            temp_v5 = DAT_00581288[2];
joined_r0x00326e38:
            if (temp_v5 == 6) {
              FUN_003135bc();
              FUN_00324cd0();
            }
LAB_00326f3c:
            if (DAT_005f1848 != 0) {
              if (DAT_005f1848 == 1) {
                temp_v5 = FUN_004d04f4();
                goto joined_r0x00326f98;
              }
              if (DAT_005f1848 == 2) {
                temp_v5 = FUN_004d04f4();
                if (temp_v5 == 0) goto LAB_00326fcc;
                goto LAB_00326f78;
              }
              if (DAT_005f1848 == 3) {
                temp_v5 = FUN_004d04f4();
                goto joined_r0x00326f98;
              }
            }
            else {
              temp_v5 = FUN_004d04f4();
joined_r0x00326f98:
              if (temp_v5 != 0) {
LAB_00326f78:
                piVar19 = DAT_00581288;
                DAT_00581288[1] = 0;
                piVar19[2] = 0;
                goto LAB_003270b0;
              }
            }
          }
LAB_00326fcc:
          if ((((0xbf000000 < uStack_64) || ((int)uStack_64 >= 0x3f000001)) ||
              (0xbf000000 < uStack_60)) ||
             (((int)uStack_60 >= 0x3f000001 || (temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]), temp_v5 != 0)
              ))) {
            piVar19 = DAT_00581288;
            DAT_00581288[0x1a] = (int)temp_v20;
            piVar19[0x16] = (int)temp_v20;
            temp_v5 = FUN_003e56f0(piVar19[0x6a]);
            if (temp_v5 != 0) {
              *(unsigned short *)((int)DAT_00581288 + 0x19a) = 1;
            }
            else if ((DAT_005f1848 == 0) ||
                    ((DAT_005f1848 == 1 || DAT_005f1848 == 2) || DAT_005f1848 == 3)) {
              *(unsigned short *)((int)DAT_00581288 + 0x19a) = 2;
            }
            temp_v18 = 1;
            FUN_00313648(temp_v18);
          }
        }
        else {
          puVar6 = DAT_005f15fc;
          if (DAT_005f15fc == (unsigned int *)0x5) {
            puVar6 = DAT_005f1600;
          }
          if (DAT_005f15fc == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9) {
            temp_v5 = 0x44bb8000;
          }
          else {
            temp_v5 = 0x43fa0000;
          }
          DAT_00581288[0x57] = temp_v5;
          temp_v18 = 0x20;
          FUN_00313648(temp_v18);
        }
        goto LAB_003270a0;
      }
      temp_v7 = DAT_00581288[2];
      DAT_00581288[2] = temp_v7 + 1;
      if (temp_v7 + 1 == 1) {
        DAT_005f17ac = '\x01';
        piVar19[0x5a] = -1;
        piVar19[0x59] = 0;
        FUN_003e54b8(piVar19[0x6a]);
      }
      temp_v37 = 0.017453292f;
      temp_v7 = DAT_00581288[2];
      if (temp_v7 < 0x14) {
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 != 1) {
            if (DAT_005f1848 != 2) {
              if (DAT_005f1848 == 3) {
                unaff_r7 = afStack_108[temp_v7 * 2];
                unaff_r6 = afStack_108[temp_v7 * 2 + 1];
              }
            }
            else {
              unaff_r7 = afStack_1a8[temp_v7 * 2];
              unaff_r6 = afStack_1a8[temp_v7 * 2 + 1];
            }
          }
          else {
            unaff_r7 = afStack_248[temp_v7 * 2];
            unaff_r6 = afStack_248[temp_v7 * 2 + 1];
          }
        }
        else {
          unaff_r7 = afStack_2e8[temp_v7 * 2];
          unaff_r6 = afStack_2e8[temp_v7 * 2 + 1];
        }
        if ((int)unaff_r7 >> 0x10 != 0) {
          VectorSignedToFloat((int)unaff_r6 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)romwright_subpiece_4_2_0(unaff_r6,0),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003135bc((int)unaff_r6 >> 0x10,(int)romwright_subpiece_4_2_0(unaff_r6,0));
        }
        temp_v21 = (float)VectorSignedToFloat((int)romwright_subpiece_4_2_0(unaff_r7,0),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)DAT_00581288[0x14] * temp_v37;
        FUN_001bc124();
        piVar19 = DAT_00581288;
        DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v28 * temp_v21);
        temp_v37 = (float)piVar19[0x14] * temp_v37;
        FUN_001bbf0c();
        piVar11 = &iStack_304;
        DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v37 * temp_v21);
        FUN_002469d0();
        piVar19 = DAT_00581288;
        DAT_00581288[10] = iStack_304;
        piVar19[0xb] = iStack_300;
        piVar19[0xc] = iStack_2fc;
        piVar19[0xd] = (int)temp_v19;
        piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
        piVar19[0xf] = (int)temp_v33;
        if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) &&
           ((uStack_68 & ~(unsigned int)piVar11) == 0)) {
          piVar7 = piVar19 + 10;
          FUN_0025ef68(piVar7,piVar19 + 0xd,0);
          piVar19 = DAT_00581288;
          piVar11 = (int *)0x0;
          if (piVar7 != (int *)0x0) {
            piVar11 = DAT_00581288;
          }
          if (piVar7 != (int *)0x0) {
            piVar11[0x1a] = (int)temp_v20;
          }
          else {
            temp_v37 = (float)DAT_00581288[0x1a] + 2.0f;
            DAT_00581288[0x1a] = (int)temp_v37;
            if ((int)temp_v37 < 0x41a00001) {
              temp_v35 = temp_v37;
            }
            piVar19[0x1a] = (int)temp_v35;
          }
        }
        temp_v35 = temp_v19;
        if ((DAT_005f15fc != (unsigned int *)0x24) &&
           (temp_v7 = FUN_004a0e38(2,5), temp_v35 = temp_v19, temp_v7 != 0)) {
          FUN_002b5cb4();
          DAT_00581288[0x58] = (int)((float)DAT_00581288[0x58] - temp_v19);
        }
        temp_v37 = temp_v35;
        FUN_002b5cb4();
        temp_v19 = *(float *)(temp_v5 + 0xdf8) + temp_v35;
        *(float *)(temp_v5 + 0xdf8) = temp_v19;
        temp_v16 = *(int *)(temp_v5 + 0xdf4) != 0;
        if (temp_v16) {
          temp_v28 = 60000.0f;
          temp_v7 = (int)temp_v19 - 0x476a6000;
        }
        else {
          *(float *)(temp_v5 + 0xdf8) = temp_v20;
          temp_v7 = 0;
          temp_v28 = 0.0f;
        }
        if ((temp_v16 && temp_v19 != temp_v28) &&
            temp_v7 < 0 == (temp_v16 && SBORROW4((int)temp_v19,(int)temp_v28))) {
          *(float *)(temp_v5 + 0xdf8) = temp_v20;
          *(unsigned int *)(temp_v5 + 0xdf4) = 0;
          *(unsigned char *)(temp_v5 + 0xdfc) = 1;
          *(unsigned int *)(temp_v5 + 0x15b4) = 3;
        }
        temp_v19 = *(float *)(temp_v5 + 0x10a0) + temp_v35;
        *(float *)(temp_v5 + 0x10a0) = temp_v19;
        if (*(int *)(temp_v5 + 0x109c) == 0) {
          *(float *)(temp_v5 + 0x10a0) = temp_v20;
        }
        else if (*(float *)(temp_v5 + 0x15c0) < temp_v19) {
          FUN_003d2150(0x10000d1);
          temp_v7 = FUN_0018719c(0x4c9);
          if ((temp_v7 == 0) || (temp_v7 = FUN_002e5db4(), temp_v7 != 0)) {
            DAT_00581288[0x74] = 0xf;
          }
          else {
            DAT_00581288[0x74] = 0xb;
          }
          piVar19 = DAT_00581288;
          DAT_00581288[0x8a] = 6;
          piVar19[0x90] = 0x40a00000;
          *(unsigned char *)(piVar19 + 0x8b) = 1;
          piVar19[0x75] = 0;
          *(float *)(temp_v5 + 0x10a0) = temp_v20;
          *(unsigned int *)(temp_v5 + 0x109c) = 0;
          *(unsigned int *)(temp_v5 + 0x10a4) = 1;
          temp_v7 = FUN_0018719c(0x4c9);
          if ((temp_v7 == 0) || (temp_v7 = FUN_002e5db4(), temp_v7 != 0)) {
            DAT_00581288[0x8e] = 6;
          }
          *(unsigned char *)(DAT_00581288 + 0x8f) = 1;
          temp_v7 = FUN_0018719c(0x4c9);
          if ((temp_v7 == 0) || (temp_v7 = FUN_002e5db4(), temp_v7 != 0)) {
            FUN_003fd7c0(*(unsigned int *)(DAT_00581288[99] + 4),0,2);
          }
        }
        temp_v35 = *(float *)(temp_v5 + 0x14ec) + temp_v35;
        *(float *)(temp_v5 + 0x14ec) = temp_v35;
        temp_v16 = *(int *)(temp_v5 + 0x14e8) != 0;
        if (temp_v16) {
          temp_v19 = 30000.0f;
          temp_v7 = (int)temp_v35 - 0x46ea6000;
        }
        else {
          *(float *)(temp_v5 + 0x14ec) = temp_v20;
          temp_v7 = 0;
          temp_v19 = 0.0f;
        }
        if ((temp_v16 && temp_v35 != temp_v19) &&
            temp_v7 < 0 == (temp_v16 && SBORROW4((int)temp_v35,(int)temp_v19))) {
          *(float *)(temp_v5 + 0x14ec) = temp_v20;
          *(int *)(temp_v5 + 0x14e8) = 0;
          *(unsigned int *)(temp_v5 + 0x14f0) = 1;
        }
        piVar19 = DAT_00581288 + 10;
        FUN_002e364c();
        temp_v19 = temp_v37;
        if (((unsigned int)piVar19 & 2) != 0) {
          FUN_002b5cb4();
          DAT_00581288[0x57] = (int)((float)DAT_00581288[0x57] - temp_v37);
          DAT_005f1633 = 4;
        }
        else {
          if (temp_v20 < (float)DAT_00581288[0x57]) {
            FUN_002b5cb4();
            DAT_00581288[0x57] = (int)((float)DAT_00581288[0x57] - temp_v37);
          }
          if (temp_v20 < (float)DAT_00581288[0x57]) {
            temp_v20 = (float)DAT_00581288[0x57];
          }
          DAT_00581288[0x57] = (int)temp_v20;
          DAT_005f1633 = 0xff;
        }
        if ((((unsigned int)piVar19 & 4) != 0) && (DAT_005f17d0 == '\0')) {
          *(unsigned char *)(temp_v5 + 0xe09) = 0;
          FUN_00313648(0x1f);
          FUN_00408184(0x16,1);
        }
        piVar19 = DAT_00581288;
        piVar11 = DAT_00581288 + 7;
        piVar7 = DAT_00581288 + 0x10;
        DAT_00581288[7] =
             (int)((float)DAT_00581288[7] +
                  ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * temp_v26);
        piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * temp_v26);
        temp_v20 = (float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * temp_v26;
        piVar19[9] = (int)temp_v20;
        temp_v5 = piVar19[8];
        *piVar7 = *piVar11;
        piVar19[0x11] = temp_v5;
        piVar19[0x12] = (int)temp_v20;
        piVar19[0xd] = (int)temp_v19;
        piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
        piVar19[0xf] = (int)temp_v33;
      }
      temp_v18 = FUN_00145868();
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if (DAT_005f1848 == 3) {
              if (DAT_00581288[2] == 2) {
                temp_v12 = (short)DAT_00581288[0x67];
                if (0 < temp_v12) goto LAB_003267fc;
                *(unsigned short *)(DAT_00581288 + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                temp_v5 = FUN_00184964(0,1);
                if (DAT_00581288[0x74] != 10) {
                  FUN_0014af98();
                  FUN_0013c1ec();
                  FUN_003d2150(temp_v5 + 0x10002e2);
                  FUN_0013c1ec(temp_v18);
                }
              }
              if (DAT_00581288[2] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029e);
                FUN_00324e38(0xffffffff);
              }
              if ((DAT_00581288[2] == 6) && (FUN_00324cd0(), DAT_00581288[2] == 6)) {
                temp_v3 = 0x14;
                temp_v18 = 6;
                FUN_002d1f40(temp_v18,temp_v3,0);
              }
            }
            if (DAT_00581288[2] >= 8) {
              *(unsigned char *)(DAT_00581288 + 0x89) = 0;
            }
          }
          else {
            if (DAT_00581288[2] != 2) {
LAB_00326870:
              if (DAT_00581288[2] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029d);
                FUN_00324e38(0xffffffff);
              }
              if (DAT_00581288[2] != 4) goto LAB_00326a10;
              goto LAB_003268e4;
            }
            temp_v12 = (short)DAT_00581288[0x67];
            if (temp_v12 < 1) {
              *(unsigned short *)(DAT_00581288 + 0x67) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v5 = FUN_00184964(0,1);
              if (DAT_00581288[0x74] != 10) {
                FUN_0014af98();
                FUN_0013c1ec();
                FUN_003d2150(temp_v5 + 0x10002e0);
                FUN_0013c1ec(temp_v18);
              }
              goto LAB_00326870;
            }
LAB_003267fc:
            *(short *)(DAT_00581288 + 0x67) = temp_v12 - 1;
          }
        }
        else {
          if (DAT_00581288[2] == 3) {
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_003d4ed8(0x100029c);
            if ((short)DAT_00581288[0x67] >= 1) {
              *(short *)(DAT_00581288 + 0x67) = (short)DAT_00581288[0x67] - 1;
            }
            else {
              *(unsigned short *)(DAT_00581288 + 0x67) = 1;
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v5 = FUN_00184964(0,1);
              if (DAT_00581288[0x74] != 10) {
                FUN_0014af98();
                FUN_0013c1ec();
                FUN_003d2150(temp_v5 + 0x10002de);
                FUN_0013c1ec(temp_v18);
              }
            }
            FUN_00324e38(0xffffffff);
          }
          if (DAT_00581288[2] == 6) {
LAB_003268e4:
            FUN_00324cd0();
          }
          if (DAT_00581288[2] >= 8) {
            *(unsigned char *)(DAT_00581288 + 0x89) = 0;
          }
        }
      }
      else {
        if (DAT_00581288[2] == 3) {
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_003d4ed8(0x100029b);
          if ((short)DAT_00581288[0x67] >= 1) {
            *(short *)(DAT_00581288 + 0x67) = (short)DAT_00581288[0x67] - 1;
          }
          else {
            *(unsigned short *)(DAT_00581288 + 0x67) = 1;
            FUN_001bc124();
            FUN_001bbf0c();
            temp_v5 = FUN_00184964(0,1);
            if (DAT_00581288[0x74] != 10) {
              FUN_0014af98();
              FUN_0013c1ec();
              FUN_003d2150(temp_v5 + 0x10002dc);
              FUN_0013c1ec(temp_v18);
            }
          }
          FUN_00324e38(0xffffffff);
        }
        if ((DAT_00581288[2] == 6) && (FUN_00324cd0(), DAT_00581288[2] == 6)) {
          temp_v3 = 8;
          temp_v18 = 4;
          FUN_002d1f40(temp_v18,temp_v3,0);
        }
LAB_00326a10:
        if (DAT_00581288[2] >= 8) {
          *(unsigned char *)(DAT_00581288 + 0x89) = 0;
        }
      }
      if (DAT_005f17ac != '\0') {
        DAT_005f17b0 = DAT_00581288[7];
        DAT_005f17b4 = DAT_00581288[8];
        DAT_005f17b8 = DAT_00581288[9];
        DAT_005f17bc = DAT_00581288[0x13];
        DAT_005f17c0 = DAT_005f17c0 + 1;
        temp_v5 = (int)DAT_005f17c0;
        DAT_005f17c2 = 0;
        if (DAT_005f1848 != 0) {
          if (DAT_005f1848 != 1) {
            if (DAT_005f1848 != 2) {
              if ((DAT_005f1848 == 3) && (temp_v5 - 1U < 0xb)) {
                DAT_005f17c2 = 1;
              }
            }
            else if (temp_v5 - 1U < 0xd) {
              DAT_005f17c2 = 1;
            }
          }
          else if (temp_v5 - 1U < 8) {
            DAT_005f17c2 = 1;
          }
        }
        else if (temp_v5 - 1U < 10) {
          DAT_005f17c2 = 1;
        }
      }
      if ((DAT_005f17d0 == '\0') && (0 < DAT_005f17c4)) {
        DAT_005f17d0 = '\x01';
        DAT_005f17d4 = 0;
        goto LAB_003270a0;
      }
      if (DAT_005f17c4 != 0) goto LAB_003270a0;
      temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]);
      piVar19 = DAT_00581288;
      if (temp_v5 != 0) {
        DAT_005f17ac = '\0';
        DAT_00581288[0x59] = 0;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
        goto LAB_003270a0;
      }
      FUN_00317af8(&uStack_64,&uStack_60,0);
      piVar19 = DAT_00581288;
      if (((((0xbf000000 < uStack_64) || ((int)uStack_64 >= 0x3f000001)) || (0xbf000000 < uStack_60))
          || ((int)uStack_60 >= 0x3f000001)) && (DAT_00581288[2] >= 0xe)) {
        DAT_005f17ac = '\0';
        DAT_00581288[0x59] = 0;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
      }
      if (DAT_005f1848 != 0) {
        if (DAT_005f1848 != 1) {
          if (DAT_005f1848 != 2) {
            if (((DAT_005f1848 == 3) && (DAT_00581288[2] >= 9)) &&
               (temp_v5 = FUN_004d04f4(), piVar19 = DAT_00581288, temp_v5 != 0)) {
              DAT_005f17ac = '\0';
              DAT_00581288[0x59] = 0;
              piVar19[1] = 0;
              piVar19[2] = 0;
              if (piVar19[0x74] != 1 && piVar19[0x74] != 9) goto LAB_003270b0;
LAB_00326cc4:
              FUN_0033f224(0);
            }
          }
          else if ((DAT_00581288[2] >= 9) &&
                  (temp_v5 = FUN_004d04f4(), piVar19 = DAT_00581288, temp_v5 != 0)) {
            DAT_005f17ac = '\0';
            DAT_00581288[0x59] = 0;
            piVar19[1] = 0;
            piVar19[2] = 0;
            if (piVar19[0x74] == 1 || piVar19[0x74] == 9) goto LAB_00326cc4;
            goto LAB_003270b0;
          }
        }
        else if ((DAT_00581288[2] >= 8) &&
                (temp_v5 = FUN_004d04f4(), piVar19 = DAT_00581288, temp_v5 != 0)) {
          DAT_005f17ac = '\0';
          DAT_00581288[0x59] = 0;
          piVar19[1] = 0;
          piVar19[2] = 0;
          if (piVar19[0x74] == 1 || piVar19[0x74] == 9) goto LAB_00326cc4;
          goto LAB_003270b0;
        }
        goto LAB_003270a0;
      }
      if ((DAT_00581288[2] < 8) || (temp_v5 = FUN_004d04f4(), piVar19 = DAT_00581288, temp_v5 == 0))
      goto LAB_003270a0;
      DAT_005f17ac = '\0';
      DAT_00581288[0x59] = 0;
      piVar19[1] = 0;
      piVar19[2] = 0;
      if (piVar19[0x74] == 1 || piVar19[0x74] == 9) goto LAB_00326cc4;
    }
    else {
      *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
      if (DAT_005f1848 == 0) {
        temp_v5 = 4;
        piVar19[0x15] = temp_v5;
      }
      else if (DAT_005f1848 == 1) {
        temp_v5 = 0x16;
        piVar19[0x15] = temp_v5;
      }
      else if (DAT_005f1848 == 2) {
        temp_v5 = 0x17;
        piVar19[0x15] = temp_v5;
      }
      else if (DAT_005f1848 == 3) {
        temp_v5 = 0x18;
        piVar19[0x15] = temp_v5;
      }
      piVar19[0x16] = 0;
      *(unsigned char *)(piVar19 + 0x17) = 1;
      piVar19[0x5a] = -1;
      piVar19[0x59] = 0;
      DAT_005f17b0 = piVar19[7];
      DAT_005f17b4 = piVar19[8];
      DAT_005f17b8 = piVar19[9];
      DAT_005f17bc = piVar19[0x13];
      DAT_005f17c0 = 0;
      DAT_005f17c2 = 0;
      FUN_00317af8(afStack_2f4,&uStack_2f8,0);
      if ((((0xbeffffff < (unsigned int)afStack_2f4[0]) || ((int)afStack_2f4[0] >= 0x3f000000)) ||
          (0xbeffffff < uStack_2f8)) || ((int)uStack_2f8 >= 0x3f000000)) {
        FUN_0050d8e4();
        temp_v36 = CONCAT44(0x43b40000,temp_v20);
        temp_v35 = afStack_2f4[0] * 57.32484f - (float)DAT_005806a4[6];
        if (temp_v35 < temp_v20) {
          temp_v35 = temp_v35 + 360.0f;
        }
        if ((int)temp_v35 >= 0x43b40001) {
          temp_v35 = temp_v35 - 360.0f;
        }
        if (DAT_005806a4[0x32] != 3) {
          FUN_00293f94();
        }
        else {
          FUN_00293f1c();
        }
        temp_v35 = -temp_v35;
        temp_v37 = (float)DAT_00581288[0x14];
        FUN_002b5cd4();
        temp_v28 = (float)temp_v36;
        temp_v20 = temp_v37;
        if (temp_v37 < temp_v28) {
          temp_v20 = -temp_v37;
        }
        if ((int)temp_v20 < 0x41f00001) {
          temp_v21 = temp_v20 * 0.5f;
          if ((int)temp_v21 < 0x3f800000) {
            temp_v21 = 1.0f;
          }
          if (temp_v21 < temp_v20) {
            if (temp_v28 <= temp_v37) {
              temp_v35 = (float)DAT_00581288[0x14] + temp_v21;
            }
            else {
              temp_v35 = (float)DAT_00581288[0x14] - temp_v21;
            }
          }
        }
        DAT_00581288[0x14] = (int)temp_v35;
        piVar19 = DAT_00581288;
        temp_v20 = (float)DAT_00581288[0x14];
        temp_v35 = (float)((unsigned long long)temp_v36 >> 0x20);
        if (temp_v20 < temp_v28) {
          temp_v20 = temp_v20 + temp_v35;
          DAT_00581288[0x14] = (int)temp_v20;
        }
        if ((int)temp_v20 >= 0x43b40001) {
          piVar19[0x14] = (int)(temp_v20 - temp_v35);
        }
      }
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
LAB_003270a0:
      if (DAT_00581288[1] == 1) goto LAB_003270bc;
    }
LAB_003270b0:
    FUN_002e364c(DAT_00581288 + 10);
LAB_003270bc:
    FUN_00327ee8();
    FUN_002dae68();
    piVar19 = DAT_00581288;
    piVar11 = DAT_00581288 + 7;
    piVar7 = DAT_00581288 + 0x10;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] + ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * temp_v26)
    ;
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    temp_v20 = (float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * temp_v26;
    piVar19[9] = (int)temp_v20;
    temp_v5 = piVar19[8];
    *piVar7 = *piVar11;
    piVar19[0x11] = temp_v5;
    piVar19[0x12] = (int)temp_v20;
    piVar19[0xd] = (int)temp_v19;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = (int)temp_v33;
    return;
  case 4:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    temp_v5 = 0;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    temp_v7 = piVar19[1];
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        if ((temp_v7 == 2) && (temp_v7 = piVar19[2], piVar19[2] = temp_v7 + 1, temp_v7 + 1 >= 4)) {
          piVar19[0x15] = 0;
          piVar19[0x16] = 0x40a00000;
          piVar19[1] = 3;
          piVar19[2] = temp_v5;
          return;
        }
      }
      else {
        temp_v5 = piVar19[2];
        piVar19[2] = temp_v5 + 1;
        if (temp_v5 + 1 >= 0x24) {
          piVar19[1] = 2;
          piVar19[2] = 0;
          return;
        }
      }
    }
    else {
      piVar19[0x15] = 0xc;
      piVar19[0x16] = 0x40400000;
      piVar19[1] = 1;
      piVar19[2] = 0;
    }
    break;
  case 5:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.083333336f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.083333336f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.083333336f);
    temp_v5 = piVar19[1];
    if (temp_v5 == 0) {
      FUN_00324e38(1);
      piVar19 = DAT_00581288;
      if (DAT_005f15fc != (unsigned int *)0x16) {
        DAT_00581288[0x15] = 8;
        piVar19[0x16] = 0;
        temp_v5 = piVar19[10];
        FUN_00352bc4();
        DAT_00581288[0x14] = temp_v5;
      }
      else {
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = 0x40a00000;
        temp_v5 = piVar19[7];
        FUN_00352bc4();
        DAT_00581288[0x14] = temp_v5;
      }
      FUN_00303460(0xe);
      FUN_001681cc(0xdd);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v5 != 1) {
      if ((temp_v5 == 2) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
        piVar19[1] = 3;
        piVar19[2] = 0;
        return;
      }
    }
    else {
      temp_v5 = piVar19[2] + 1;
      piVar19[2] = temp_v5;
      if (DAT_005f15fc == (unsigned int *)0x16 && temp_v5 == 0x14) {
        piVar19[0x15] = 0xe;
        piVar19[0x16] = 0x40a00000;
        return;
      }
      if (temp_v5 >= 0x24) {
        piVar19[1] = 2;
        piVar19[2] = 0;
        return;
      }
    }
    break;
  case 6:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    temp_v18 = FUN_00145868();
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 != 2) {
          if (temp_v5 == 3) {
            DAT_00581288[0x16] = 0x40a00000;
          }
        }
        else {
          temp_v5 = DAT_00581288[2] + 1;
          DAT_00581288[2] = temp_v5;
          if (temp_v5 < 0x13) {
            temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar19[0xc] = (int)((float)piVar19[0x50] + (float)piVar19[0x56] * temp_v19);
            piVar19[10] = (int)((float)piVar19[0x4e] + (float)piVar19[0x54] * temp_v19);
            piVar19[0xb] = (int)((float)piVar19[0x4f] + (float)piVar19[0x55] * temp_v19);
          }
          else {
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              temp_v3 = 0x10002c5;
              FUN_003d4ed8(temp_v3);
              break;
            case 1:
              temp_v3 = 0x10002c7;
              FUN_003d4ed8(temp_v3);
              break;
            case 2:
              temp_v3 = 0x10002c9;
              FUN_003d4ed8(temp_v3);
              break;
            case 3:
              temp_v3 = 0x10002cb;
              FUN_003d4ed8(temp_v3);
              break;
            case 4:
              temp_v3 = 0x10002cd;
              FUN_003d4ed8(temp_v3);
              break;
            case 5:
              temp_v3 = 0x10002da;
              FUN_003d4ed8(temp_v3);
              break;
            default:
            }
            FUN_00324e38(0xffffffff);
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_0014af98();
            FUN_0013c1ec();
            FUN_003d2150(0x10002e6);
            FUN_0013c1ec(temp_v18);
            piVar19 = DAT_00581288;
            DAT_00581288[1] = DAT_00581288[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 >= 10) {
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c4;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c6;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c8;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002ca;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cc;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002d9;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e5);
          FUN_0013c1ec(temp_v18);
          piVar19 = DAT_00581288;
          DAT_00581288[1] = DAT_00581288[1] + 1;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 0xd;
      piVar19[0x16] = 0x40400000;
      piVar19[1] = 1;
      piVar19[2] = 0;
    }
    piVar19 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    FUN_002e364c(piVar19 + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 7:
    temp_v33 = *(unsigned long long *)(DAT_00581288 + 10);
    temp_v7 = DAT_00581288[0xc];
    iStack_38 = (int)temp_v35;
    fStack_34 = temp_v37;
    fStack_30 = fStack_28;
    temp_v19 = fStack_2c;
    fStack_2c = fStack_24;
    fStack_28 = fStack_20;
    fStack_24 = fStack_1c;
    fStack_20 = temp_v19;
    fStack_1c = temp_v26;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    temp_v19 = (float)DAT_00581288[7] +
             ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f;
    DAT_00581288[7] = (int)temp_v19;
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    temp_v5 = piVar19[1];
    if (temp_v5 != 0xc) {
      if (temp_v5 < 0xc) {
        temp_v13 = 0x40a00000;
        if (temp_v5 != 2) {
          if (temp_v5 < 2) {
            if (temp_v5 != 0) {
              if (temp_v5 == 1) {
                piVar19[2] = piVar19[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] >= 3) {
                  temp_v5 = DAT_00581288[1];
                  DAT_00581288[0x15] = 0x1d;
                  piVar19[0x16] = 0x40000000;
                  piVar19[1] = temp_v5 + 1;
                  piVar19[2] = 0;
                }
              }
            }
            else {
              piVar19[0x15] = 0;
              piVar19[0x16] = 0x40400000;
              *(unsigned char *)(piVar19 + 0x1b) = 0;
              FUN_002b5cb4();
              temp_v26 = DAT_005f16b8;
              temp_v20 = DAT_005f16b4;
              piVar19 = DAT_00581288;
              temp_v35 = 0.017453292f;
              temp_v28 = 100.0f;
              temp_v5 = 0x41f00000;
              temp_v37 = 180.0f;
              DAT_00581288[0x46] = (int)DAT_005f16b0;
              piVar19[0x47] = (int)temp_v20;
              piVar19[0x48] = (int)temp_v26;
              if ((int)temp_v19 < 0x42700000) {
                temp_v19 = ((float)piVar19[0x13] + 180.0f) * 0.017453292f;
                FUN_001bc124();
                piVar19 = DAT_00581288;
                DAT_00581288[0x46] = (int)((float)DAT_00581288[0x46] + temp_v19 * temp_v28);
                temp_v35 = ((float)piVar19[0x13] + temp_v37) * temp_v35;
                FUN_001bbf0c();
                piVar19 = DAT_00581288 + 0x49;
                DAT_00581288[0x48] = (int)((float)DAT_00581288[0x48] + temp_v35 * temp_v28);
                FUN_003250ac(piVar19);
                piVar19 = DAT_00581288;
                DAT_00581288[0x4c] = temp_v5;
                *(unsigned char *)((int)piVar19 + 0x115) = 1;
                temp_v5 = piVar19[10];
                FUN_00352bc4();
                DAT_00581288[0x14] = temp_v5;
              }
              else {
                temp_v19 = ((float)piVar19[0x14] + 180.0f) * 0.017453292f;
                FUN_001bc124();
                piVar19 = DAT_00581288;
                DAT_00581288[0x46] = (int)((float)DAT_00581288[0x46] + temp_v19 * temp_v28);
                temp_v35 = ((float)piVar19[0x14] + temp_v37) * temp_v35;
                FUN_001bbf0c();
                piVar19 = DAT_00581288 + 0x49;
                DAT_00581288[0x48] = (int)((float)DAT_00581288[0x48] + temp_v35 * temp_v28);
                FUN_003250ac(piVar19);
                piVar19 = DAT_00581288;
                DAT_00581288[0x4c] = temp_v5;
                *(unsigned char *)((int)piVar19 + 0x115) = 1;
                temp_v5 = piVar19[10];
                FUN_00352bc4();
                DAT_00581288[0x14] = temp_v5;
              }
              FUN_00303460(10);
              DAT_005806a4[0x2c] = -1;
              FUN_001681cc(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_002b7f58();
              piVar19 = DAT_00581288;
              temp_v5 = piVar19[1];
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else if (temp_v5 != 10) {
            if ((temp_v5 == 0xb) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 == 0x14)) {
              FUN_002342b8();
              temp_v5 = DAT_00581288[1];
              piVar19 = DAT_00581288;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else {
            DAT_005f185a = 0;
            piVar19[0x15] = 8;
            piVar19[0x16] = 0x40a00000;
            temp_v5 = piVar19[1];
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          piVar19[2] = piVar19[2] + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v5 = FUN_004d0584();
          piVar19 = DAT_00581288;
          if (temp_v5 != 0) {
            DAT_00581288[1] = 10;
            piVar19[2] = 0;
          }
          else {
            temp_v5 = FUN_001656a0(5);
            if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
              piVar19 = DAT_005806a4;
              DAT_005806a4[6] = DAT_00581288[0x14];
              piVar19[0x2c] = 0;
              FUN_00303460(0);
              piVar19 = DAT_00581288;
              DAT_00581288[0x15] = 0;
              piVar19[0x16] = temp_v13;
              FUN_00233e10(0,DAT_005f16ac);
              FUN_00353ad4();
              piVar19 = DAT_00581288;
              DAT_00581288[1] = 0x5a;
              piVar19[2] = 0;
            }
          }
        }
      }
      else if (temp_v5 != 0xd) {
        if (temp_v5 != 0x5a) {
          if (temp_v5 != 0x5b) {
            if ((temp_v5 == 0x5c) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
              temp_v18 = 1;
              FUN_00313648(temp_v18);
            }
          }
          else {
            FUN_0033e094();
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
      else {
        temp_v5 = piVar19[2];
        piVar19[2] = temp_v5 + 1;
        if (temp_v5 + 1 == 0x14) {
          FUN_0033e094();
          FUN_00223670();
          temp_v18 = 8;
          FUN_00313648(temp_v18);
        }
      }
    }
    else {
      temp_v5 = FUN_00294a24();
      if (temp_v5 == 0) {
        FUN_00353ad4();
        piVar19 = DAT_005806a4;
        DAT_005806a4[6] = DAT_00581288[0x14];
        piVar19[0x2c] = 0;
        FUN_00303460(0);
        temp_v5 = DAT_00581288[1];
        piVar19 = DAT_00581288;
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    if (*(char *)((int)DAT_00581288 + 0x115) != '\0') {
      temp_v19 = (float)DAT_00581288[10];
      FUN_002b5cb4();
      piVar19 = DAT_00581288;
      temp_v20 = (float)DAT_00581288[0x4c];
      if (temp_v20 >= temp_v19) {
        temp_v5 = DAT_00581288[0x47];
        temp_v13 = DAT_00581288[0x48];
        DAT_00581288[10] = DAT_00581288[0x46];
        *(unsigned char *)((int)piVar19 + 0x115) = 0;
        piVar19[0xb] = temp_v5;
        piVar19[0xc] = temp_v13;
      }
      else {
        pfVar9 = (float *)(DAT_00581288 + 0x4a);
        temp_v19 = (float)DAT_00581288[0x4b];
        DAT_00581288[10] = (int)((float)DAT_00581288[10] + (float)DAT_00581288[0x49] * temp_v20);
        piVar19[0xb] = (int)((float)piVar19[0xb] + *pfVar9 * temp_v20);
        piVar19[0xc] = (int)((float)piVar19[0xc] + temp_v19 * temp_v20);
      }
      piVar19 = DAT_00581288;
      piVar11 = DAT_00581288 + 0xd;
      DAT_00581288[0xd] = (int)temp_v33;
      piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
      piVar19[0xf] = temp_v7;
      piVar19 = piVar19 + 10;
      FUN_0025ef68(piVar19,piVar11,0);
      if (piVar19 != (int *)0x0) {
        *(unsigned char *)((int)DAT_00581288 + 0x115) = 0;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_34,iStack_38);
    in_d9 = CONCAT44(fStack_2c,fStack_30);
    in_d10 = CONCAT44(fStack_24,fStack_28);
    in_d11 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 9:
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    temp_v5 = piVar19[1];
    if (temp_v5 != 0xc) {
      if (temp_v5 < 0xc) {
        temp_v7 = 0x40a00000;
        if (temp_v5 != 2) {
          if (temp_v5 < 2) {
            if (temp_v5 != 0) {
              if (temp_v5 == 1) {
                piVar19[2] = piVar19[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] >= 3) {
                  temp_v5 = DAT_00581288[1];
                  DAT_00581288[0x15] = 0x1d;
                  piVar19[0x16] = 0x40000000;
                  piVar19[1] = temp_v5 + 1;
                  piVar19[2] = 0;
                }
              }
            }
            else {
              piVar19[0x15] = 0;
              piVar19[0x16] = 0x40400000;
              *(unsigned char *)(piVar19 + 0x1b) = 0;
              temp_v20 = DAT_005f16b8;
              temp_v19 = DAT_005f16b4;
              temp_v26 = 0.017453292f;
              piVar19[10] = (int)DAT_005f16b0;
              piVar19[0xb] = (int)temp_v19;
              piVar19[0xc] = (int)temp_v20;
              temp_v19 = DAT_005f16cc * 0.017453292f;
              FUN_001bc124();
              temp_v20 = 40.0f;
              DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * 40.0f);
              temp_v26 = DAT_005f16cc * temp_v26;
              FUN_001bbf0c();
              piVar19 = DAT_00581288;
              DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v26 * temp_v20);
              piVar19[0x14] = (int)DAT_005f16bc;
              FUN_00303460(0xb);
              DAT_005806a4[0x2c] = -2;
              FUN_001681cc(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_00245e38();
              temp_v5 = DAT_00581288[1];
              piVar19 = DAT_00581288;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else if (temp_v5 != 10) {
            if ((temp_v5 == 0xb) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 == 0x14)) {
              FUN_002342b8();
              temp_v5 = DAT_00581288[1];
              piVar19 = DAT_00581288;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else {
            DAT_005f185a = 0;
            piVar19[0x15] = 8;
            piVar19[0x16] = 0x40a00000;
            FUN_00324e38(1);
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          piVar19[2] = piVar19[2] + 1;
          FUN_00233e10(1,DAT_005f16ac);
          temp_v5 = FUN_004d0584();
          piVar19 = DAT_00581288;
          if (temp_v5 != 0) {
            DAT_00581288[1] = 10;
            piVar19[2] = 0;
          }
          else {
            temp_v5 = FUN_001656a0(5);
            if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
              piVar19 = DAT_005806a4;
              DAT_005806a4[6] = DAT_00581288[0x14];
              piVar19[0x2c] = 0;
              FUN_00303460(0);
              piVar19 = DAT_00581288;
              DAT_00581288[0x15] = 0;
              piVar19[0x16] = temp_v7;
              FUN_00233e10(0,DAT_005f16ac);
              FUN_00312a30();
              piVar19 = DAT_00581288;
              DAT_00581288[1] = 0x5a;
              piVar19[2] = 0;
            }
          }
        }
      }
      else if (temp_v5 != 0xd) {
        if (temp_v5 != 0x5a) {
          if (temp_v5 != 0x5b) {
            if ((temp_v5 == 0x5c) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
              temp_v18 = 1;
              FUN_00313648(temp_v18);
            }
          }
          else {
            FUN_002d88a0();
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
      else {
        temp_v5 = piVar19[2];
        piVar19[2] = temp_v5 + 1;
        if (temp_v5 + 1 == 0x14) {
          FUN_002d88a0();
          FUN_00223670();
          temp_v18 = 10;
          FUN_00313648(temp_v18);
        }
      }
    }
    else {
      temp_v5 = FUN_00294a24();
      if (temp_v5 == 0) {
        FUN_00312a30();
        piVar19 = DAT_005806a4;
        DAT_005806a4[6] = DAT_00581288[0x14];
        piVar19[0x2c] = 0;
        FUN_00303460(0);
        temp_v5 = DAT_00581288[1];
        piVar19 = DAT_00581288;
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_2c,fStack_30);
    in_d9 = CONCAT44(fStack_24,fStack_28);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0xb:
    temp_v19 = fStack_3c;
    fStack_3c = fStack_20;
    fStack_28 = (float)iStack_38;
    iStack_38 = (int)fStack_1c;
    fStack_34 = fStack_2c;
    fStack_2c = temp_v19;
    temp_v18 = FUN_00145868();
    uStack_5c = romwright_piece_4_4(temp_v18,(int)uStack_5c);
    if (DAT_00581288[1] < 10) {
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    piVar19 = DAT_00581288;
    temp_v18 = 0x10002c4;
    temp_v5 = DAT_00581288[1];
    temp_v19 = 0.017453292f;
    temp_v7 = 0x40000000;
    if (temp_v5 != 0x10) {
      if (temp_v5 >= 0x10) {
        if (temp_v5 == 0x36) {
          FUN_00312a5c();
          piVar11 = DAT_00581288;
          DAT_00581288[0x1a] = 0;
          piVar19 = DAT_005806a4;
          DAT_005806a4[6] = piVar11[0x14];
          piVar19[0x2c] = 0;
          FUN_00303460(0);
          piVar19 = DAT_00581288;
          temp_v5 = piVar19[1];
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
          FUN_002e364c(DAT_00581288 + 10);
          FUN_00327ee8();
          return;
        }
        if (temp_v5 < 0x37) {
          if (temp_v5 == 0x32) {
            DAT_005f185a = 0;
            DAT_005806a4[3] = 2;
            piVar19[0x15] = 5;
            piVar19[0x16] = 0x40400000;
            piVar19[0x2d] = (int)((float)piVar19[0x29] - (float)piVar19[8]);
            piVar19[0x2e] = (int)((float)piVar19[0x2a] - (float)piVar19[9]);
            piVar19[0x2c] = (int)(((float)piVar19[0x28] - (float)piVar19[7]) * 0.025f);
            piVar19[0x2d] = (int)((float)piVar19[0x2d] * 0.025f);
            piVar19[0x2e] = (int)((float)piVar19[0x2e] * 0.025f);
            piVar19 = DAT_00581288;
            DAT_00581288[0x2f] = 0;
            temp_v5 = piVar19[1];
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v5 == 0x33) {
            temp_v5 = DAT_00581288[2];
            DAT_00581288[2] = temp_v5 + 1;
            if (temp_v5 + 1 < 0x15) {
              FUN_002e364c(DAT_00581288 + 10);
              FUN_00327ee8();
              return;
            }
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              FUN_003d4ed8(temp_v18);
              break;
            case 1:
              temp_v18 = 0x10002c6;
              FUN_003d4ed8(temp_v18);
              break;
            case 2:
              temp_v18 = 0x10002c8;
              FUN_003d4ed8(temp_v18);
              break;
            case 3:
              temp_v18 = 0x10002ca;
              FUN_003d4ed8(temp_v18);
              break;
            case 4:
              temp_v18 = 0x10002cc;
              FUN_003d4ed8(temp_v18);
              break;
            case 5:
              temp_v18 = 0x10002d9;
              FUN_003d4ed8(temp_v18);
            }
            goto LAB_00366704;
          }
          if (temp_v5 != 0x34) {
            if (temp_v5 != 0x35) {
              FUN_002e364c(DAT_00581288 + 10);
              FUN_00327ee8();
              return;
            }
            temp_v19 = (float)DAT_00581288[0x1a];
            pfVar9 = (float *)(DAT_00581288 + 8);
            temp_v5 = DAT_00581288[0x2f];
            DAT_00581288[0x1a] = (int)(temp_v19 - 2.0f);
            piVar19[8] = (int)(*pfVar9 + (temp_v19 - 2.0f));
            if (temp_v5 < 0x28) {
              piVar19[0x2f] = temp_v5 + 1;
              piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
              piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
            }
            temp_v5 = piVar19[2];
            piVar19[2] = temp_v5 + 1;
            if (temp_v5 + 1 == 0x1e) {
              FUN_002342b8();
            }
            if ((DAT_00581288[2] < 0x1f) || (temp_v5 = FUN_00294a24(), temp_v5 != 0)) {
              FUN_002e364c(DAT_00581288 + 10);
              FUN_00327ee8();
              return;
            }
            FUN_002342b8();
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
          }
          else {
            pfVar9 = (float *)(DAT_00581288 + 8);
            temp_v7 = DAT_00581288[0x2f];
            temp_v19 = (float)DAT_00581288[0x1a] - 2.0f;
            DAT_00581288[0x1a] = (int)temp_v19;
            piVar19[8] = (int)(*pfVar9 + temp_v19);
            if (temp_v7 < 0x28) {
              piVar19[0x2f] = temp_v7 + 1;
              piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
              piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
            }
            piVar19[2] = piVar19[2] + 1;
            if (temp_v19 <= 0.0f) {
              FUN_002e364c(DAT_00581288 + 10);
              FUN_00327ee8();
              return;
            }
          }
        }
        else {
          if (temp_v5 == 0x37) {
            DAT_00581288[2] = DAT_00581288[2] + 1;
            FUN_002d8af4();
            FUN_00313648(0xc);
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v5 != 0x5a) {
            if (temp_v5 != 0x5b) {
              if ((temp_v5 != 0x5c) ||
                 (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 < 4)) {
                FUN_002e364c(DAT_00581288 + 10);
                FUN_00327ee8();
                return;
              }
              temp_v18 = 1;
              FUN_00313648(temp_v18);
              FUN_002e364c(DAT_00581288 + 10);
              FUN_00327ee8();
              return;
            }
            FUN_002d8af4();
            piVar19 = DAT_00581288;
            temp_v5 = piVar19[1];
          }
        }
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
        FUN_002e364c(DAT_00581288 + 10);
        FUN_00327ee8();
        return;
      }
      switch(temp_v5) {
      case 0:
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = 0x40400000;
        *(unsigned char *)(piVar19 + 0x1b) = 0;
        temp_v20 = DAT_005f16b8;
        temp_v19 = DAT_005f16b4;
        piVar19[10] = (int)DAT_005f16b0;
        piVar19[0xb] = (int)temp_v19;
        piVar19[0xc] = (int)temp_v20;
        piVar19[0x14] = (int)DAT_005f16bc;
        FUN_00303460(0xc);
        DAT_005806a4[0x2c] = -3;
        FUN_001681cc(0xdd);
        FUN_00233e10(1,DAT_005f16ac);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00246014();
        piVar19 = DAT_00581288;
        temp_v5 = piVar19[1];
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
        break;
      case 1:
        DAT_00581288[2] = DAT_00581288[2] + 1;
        FUN_00233e10(1,DAT_005f16ac);
        piVar19 = DAT_00581288;
        if (DAT_00581288[2] >= 3) {
          temp_v5 = DAT_00581288[1];
          DAT_00581288[0x15] = 0x1d;
          piVar19[0x16] = temp_v7;
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
        break;
      case 2:
        DAT_00581288[2] = DAT_00581288[2] + 1;
        FUN_00233e10(1,DAT_005f16ac);
        temp_v5 = FUN_004d0584();
        if (temp_v5 != 0) {
          FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
          temp_v5 = FUN_003798f0();
          piVar19 = DAT_00581288;
          if (DAT_005f164c != 0) {
            temp_v20 = (float)DAT_00581288[0x14] * temp_v19;
            FUN_001bc124();
            piVar19 = DAT_00581288;
            temp_v26 = 250.0f;
            DAT_00581288[0x28] = (int)((float)DAT_00581288[10] + temp_v20 * 250.0f);
            piVar19[0x29] = (int)((float)piVar19[0xb] - 500.0f);
            temp_v19 = (float)piVar19[0x14] * temp_v19;
            FUN_001bbf0c();
            piVar19 = DAT_00581288;
            DAT_00581288[0x2a] = (int)((float)DAT_00581288[0xc] + temp_v19 * temp_v26);
            piVar19[0x2b] = piVar19[0x14];
            piVar19[1] = 0x32;
            piVar19[2] = 0;
          }
          else {
            temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v5 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_00581288[0x28] = temp_v7;
            temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v5 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar19[0x29] = temp_v7;
            temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar19[0x2a] = temp_v7;
            temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            piVar19[0x2b] = temp_v5;
            piVar19[1] = 10;
            piVar19[2] = 0;
          }
        }
        else {
          temp_v5 = FUN_001656a0(5);
          if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
            piVar19 = DAT_005806a4;
            DAT_005806a4[6] = DAT_00581288[0x14];
            piVar19[0x2c] = 0;
            FUN_00303460(0);
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0;
            piVar19[0x16] = 0x40a00000;
            FUN_00233e10(0,DAT_005f16ac);
            FUN_00312a5c();
            piVar19 = DAT_00581288;
            DAT_00581288[1] = 0x5a;
            piVar19[2] = 0;
          }
        }
        break;
      case 10:
        DAT_005f185a = 0;
        DAT_005806a4[3] = 1;
        piVar19[0x15] = 5;
        piVar19[0x16] = 0x40400000;
        piVar19[0x2c] = (int)((float)piVar19[0x28] - (float)piVar19[7]);
        piVar19[0x2d] = (int)((float)piVar19[0x29] - (float)piVar19[8]);
        piVar19[0x2e] = (int)((float)piVar19[0x2a] - (float)piVar19[9]);
        piVar19[0x2c] = (int)(((float)piVar19[0x28] - (float)piVar19[7]) * 0.025f);
        piVar19[0x2d] = (int)((float)piVar19[0x2d] * 0.025f);
        piVar19[0x2e] = (int)((float)piVar19[0x2e] * 0.025f);
        piVar19 = DAT_00581288;
        DAT_00581288[0x2f] = 0;
        temp_v5 = piVar19[1];
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
        break;
      case 0xb:
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 < 0x15) break;
        FUN_0033abd4();
        switch(DAT_005f162e) {
        case 0:
          FUN_003d4ed8(temp_v18);
          break;
        case 1:
          temp_v18 = 0x10002c6;
          FUN_003d4ed8(temp_v18);
          break;
        case 2:
          temp_v18 = 0x10002c8;
          FUN_003d4ed8(temp_v18);
          break;
        case 3:
          temp_v18 = 0x10002ca;
          FUN_003d4ed8(temp_v18);
          break;
        case 4:
          temp_v18 = 0x10002cc;
          FUN_003d4ed8(temp_v18);
          break;
        case 5:
          temp_v18 = 0x10002d9;
          FUN_003d4ed8(temp_v18);
          break;
        default:
        }
LAB_00366704:
        FUN_00324e38(0xffffffff);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_0014af98();
        FUN_0013c1ec();
        FUN_003d2150(0x10002e5);
        FUN_0013c1ec((*(unsigned int *)((unsigned char *)&uStack_5c + 4)));
        piVar19 = DAT_00581288;
        DAT_00581288[0x1a] = 0x41700000;
        piVar19[8] = (int)((float)piVar19[8] + 15.0f);
        temp_v5 = piVar19[1];
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
        break;
      case 0xc:
        pfVar9 = (float *)(DAT_00581288 + 8);
        temp_v5 = DAT_00581288[0x2f];
        temp_v19 = (float)DAT_00581288[0x1a] - 2.0f;
        DAT_00581288[0x1a] = (int)temp_v19;
        piVar19[8] = (int)(*pfVar9 + temp_v19);
        if (temp_v5 < 0x28) {
          piVar19[0x2f] = temp_v5 + 1;
          piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
          piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
        }
        piVar19[2] = piVar19[2] + 1;
        if (0.0f < temp_v19) {
          piVar19[1] = 0xd;
          piVar19[2] = 0;
        }
        break;
      case 0xd:
        temp_v19 = (float)DAT_00581288[0x1a];
        pfVar9 = (float *)(DAT_00581288 + 8);
        temp_v5 = DAT_00581288[0x2f];
        DAT_00581288[0x1a] = (int)(temp_v19 - 2.0f);
        temp_v19 = *pfVar9 + (temp_v19 - 2.0f);
        piVar19[8] = (int)temp_v19;
        if (temp_v5 < 0x28) {
          piVar19[0x2f] = temp_v5 + 1;
          piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
          piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
        }
        temp_v20 = (float)piVar19[0x29];
        piVar19[2] = piVar19[2] + 1;
        if (temp_v19 < temp_v20) {
          temp_v5 = piVar19[0x28];
          temp_v7 = piVar19[0x2a];
          piVar19[7] = temp_v5;
          piVar19[8] = (int)temp_v20;
          piVar19[9] = temp_v7;
          piVar19[10] = temp_v5;
          piVar19[0xb] = (int)temp_v20;
          piVar19[0xc] = temp_v7;
          piVar19[0xd] = temp_v5;
          piVar19[0xe] = (int)temp_v20;
          piVar19[0xf] = temp_v7;
          piVar19[0x10] = temp_v5;
          piVar19[0x11] = (int)temp_v20;
          piVar19[0x12] = temp_v7;
          piVar19[0x1a] = 0;
          piVar19[0x15] = 7;
          piVar19[0x16] = 0x40400000;
          piVar19[1] = 0xe;
          piVar19[2] = 0;
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00352308();
        }
        break;
      case 0xe:
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 == 1) {
          FUN_00312a5c();
          piVar19 = DAT_005806a4;
          DAT_005806a4[6] = DAT_00581288[0x14];
          piVar19[0x2c] = 0;
          FUN_00303460(0);
          *(unsigned char *)(DAT_005806a4 + 0x2a) = 1;
        }
        if (DAT_00581288[2] == 3) {
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v18 = 0x10002c5;
            FUN_003d4ed8(temp_v18);
            break;
          case 1:
            temp_v18 = 0x10002c7;
            FUN_003d4ed8(temp_v18);
            break;
          case 2:
            temp_v18 = 0x10002c9;
            FUN_003d4ed8(temp_v18);
            break;
          case 3:
            temp_v18 = 0x10002cb;
            FUN_003d4ed8(temp_v18);
            break;
          case 4:
            temp_v18 = 0x10002cd;
            FUN_003d4ed8(temp_v18);
            break;
          case 5:
            temp_v18 = 0x10002da;
            FUN_003d4ed8(temp_v18);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e6);
          FUN_0013c1ec((*(unsigned int *)((unsigned char *)&uStack_5c + 4)));
        }
        if (DAT_00581288[2] != 6) break;
        if (DAT_00581288[0x2f] >= 0x24) {
          temp_v18 = 0x1e;
          temp_v3 = 0x14;
        }
        else {
          temp_v18 = 0xf;
          temp_v3 = 10;
        }
        FUN_002d1f40(temp_v3,temp_v18,0);
        temp_v5 = DAT_00581288[1];
        piVar19 = DAT_00581288;
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
        break;
      case 0xf:
        FUN_002d8af4();
        piVar19 = DAT_00581288;
        temp_v5 = piVar19[1];
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    else {
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 < 0x12) {
        FUN_002e364c(DAT_00581288 + 10);
        FUN_00327ee8();
        return;
      }
      FUN_00317af8(&uStack_54,(int)&uStack_54 + 4,0);
      if (((((unsigned int)uStack_54 < 0xbf000001) && ((int)(unsigned int)uStack_54 < 0x3f000001)) &&
          ((*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0xbf000001)) &&
         (((int)(*(unsigned int *)((unsigned char *)&uStack_54 + 4)) < 0x3f000001 && (DAT_00581288[2] < 0x1f)))) {
        FUN_002e364c(DAT_00581288 + 10);
        FUN_00327ee8();
        return;
      }
      DAT_00581288[0x16] = 0x40a00000;
      temp_v18 = 0xc;
      FUN_00313648(temp_v18);
    }
    FUN_002e364c(DAT_00581288 + 10);
    FUN_00327ee8();
    return;
  case 0xd:
    fStack_3c = temp_v20;
    iStack_38 = temp_v5;
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    temp_v18 = FUN_00145868();
    if (DAT_00581288[1] < 10) {
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    temp_v7 = 0x40000000;
    temp_v20 = 0.0f;
    temp_v19 = 180.0f;
    if (temp_v5 != 0xb) {
      if (temp_v5 < 0xb) {
        temp_v26 = 0.017453292f;
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            if (temp_v5 != 2) {
              if (temp_v5 == 10) {
                temp_v5 = DAT_00581288[2];
                DAT_00581288[2] = temp_v5 + 1;
                if (temp_v5 + 1 == 1) {
                  if ((DAT_005f15fc != (unsigned int *)0x26) && (DAT_005f15fc != (unsigned int *)0x1a))
                  {
                    FUN_003d4ed8(0x10002bb);
                  }
                  FUN_00324e38(0xffffffff);
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_0014af98();
                  FUN_0013c1ec();
                  FUN_003d2150(0x10002e7);
                  FUN_0013c1ec(temp_v18);
                }
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] == 2) {
                  DAT_00581288[0x15] = 0x10;
                  piVar19[0x16] = (int)temp_v20;
                  FUN_00312a5c();
                  piVar19 = DAT_00581288;
                  DAT_005f185a = 0;
                  piVar11 = DAT_00581288 + 7;
                  DAT_00581288[0x13] = DAT_00581288[0x14];
                  temp_v5 = piVar19[0xb];
                  temp_v7 = piVar19[0xc];
                  *piVar11 = piVar19[10];
                  piVar19[8] = temp_v5;
                  piVar19[9] = temp_v7;
                  piVar19[1] = piVar19[1] + 1;
                  if (DAT_005f15fc == (unsigned int *)0x26 || DAT_005f15fc == (unsigned int *)0x1a) {
                    FUN_003d4ed8(0x10000f7);
                  }
                  DAT_00581288[2] = 0;
                }
              }
            }
            else {
              DAT_00581288[2] = DAT_00581288[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v5 = FUN_004d0584();
              piVar19 = DAT_00581288;
              if (temp_v5 != 0) {
                DAT_00581288[1] = 10;
                piVar19[2] = 0;
                if (DAT_005f164c == 0) {
                  temp_v5 = 3;
                }
                else {
                  temp_v5 = 4;
                }
                DAT_005806a4[3] = temp_v5;
                fStack_3c = (float)piVar19[0xb];
                iStack_38 = piVar19[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar19[10],0xffffffff);
                FUN_00325ba4(2,10,0x66,(int)&uStack_44 + 4);
                piVar19 = DAT_00581288;
                fStack_34 = fStack_34 + temp_v19;
                if (fStack_34 < temp_v20) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                DAT_00581288[0x14] = (int)fStack_34;
                piVar19[10] = (int)(*(float *)((unsigned char *)&uStack_44 + 4));
                piVar19[0xb] = (int)fStack_3c;
                piVar19[0xc] = iStack_38;
                temp_v20 = (fStack_34 + temp_v19) * temp_v26;
                piVar19[0xb] = (int)(fStack_3c - 142.0f);
                FUN_001bc124();
                piVar19 = DAT_00581288;
                temp_v35 = 35.0f;
                DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v20 * 35.0f);
                temp_v26 = ((float)piVar19[0x14] + temp_v19) * temp_v26;
                FUN_001bbf0c();
                DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v26 * temp_v35);
              }
              else {
                temp_v5 = FUN_001656a0(5);
                if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
                  piVar19 = DAT_005806a4;
                  DAT_005806a4[6] = DAT_00581288[0x14];
                  piVar19[0x2c] = 0;
                  FUN_00303460(0);
                  piVar19 = DAT_00581288;
                  DAT_00581288[0x15] = 0;
                  piVar19[0x16] = 0x40a00000;
                  FUN_00233e10(0,DAT_005f16ac);
                  FUN_00312a5c();
                  piVar19 = DAT_00581288;
                  DAT_00581288[1] = 0x5a;
                  piVar19[2] = 0;
                }
              }
            }
          }
          else {
            DAT_00581288[2] = DAT_00581288[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar19 = DAT_00581288;
            if (DAT_00581288[2] >= 3) {
              temp_v5 = DAT_00581288[1];
              DAT_00581288[0x15] = 0x1d;
              piVar19[0x16] = temp_v7;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          DAT_00581288[0x15] = 0;
          piVar19[0x16] = 0x40400000;
          *(unsigned char *)(piVar19 + 0x1b) = 0;
          temp_v20 = DAT_005f16b8;
          temp_v19 = DAT_005f16b4;
          piVar19[10] = (int)DAT_005f16b0;
          piVar19[0xb] = (int)temp_v19;
          piVar19[0xc] = (int)temp_v20;
          piVar19[0x14] = (int)DAT_005f16bc;
          FUN_00303460(0xc);
          DAT_005806a4[0x2c] = -3;
          FUN_001681cc(0xdd);
          FUN_00233e10(1,DAT_005f16ac);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00246014();
          piVar19 = DAT_00581288;
          DAT_00581288[1] = DAT_00581288[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        if (temp_v5 == 0xc) {
          temp_v18 = 0xe;
        }
        else {
          if (temp_v5 == 0x5a) {
            DAT_00581288[1] = 0x5b;
            piVar19[2] = 0;
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v5 == 0x5b) {
            FUN_002d8af4();
            piVar19 = DAT_00581288;
            DAT_00581288[1] = DAT_00581288[1] + 1;
            piVar19[2] = 0;
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if ((temp_v5 != 0x5c) ||
             (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 < 4)) {
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          temp_v18 = 1;
        }
        FUN_00313648(temp_v18);
      }
    }
    else {
      temp_v6 = DAT_00581288[2] + 1;
      DAT_00581288[2] = temp_v6;
      temp_v26 = (float)piVar19[0xb];
      piVar19[0xb] = (int)(temp_v26 - 2.0f);
      piVar19[7] = piVar19[10];
      piVar19[8] = (int)(temp_v26 - 2.0f);
      piVar19[9] = piVar19[0xc];
      if ((DAT_005f15fc != (unsigned int *)0x26) && (DAT_005f15fc != (unsigned int *)0x1a)) {
        if ((temp_v6 == 1 || temp_v6 == 0xb) || (temp_v6 == 0x1c || temp_v6 == 0x29)) {
          FUN_003d4ed8((temp_v6 & 3) + 0x10002bb);
          FUN_00324e38(0xffffffff);
        }
      }
      else if ((temp_v6 == 1 || temp_v6 == 0xb) || (temp_v6 == 0x1c || temp_v6 == 0x29)) {
        FUN_00324e38(0xffffffff);
      }
      if (DAT_00581288[2] == 0x1e) {
        FUN_002342b8();
      }
      if ((DAT_00581288[2] >= 0x1f) && (temp_v5 = FUN_00294a24(), temp_v5 == 0)) {
        FUN_002d8af4();
        piVar19 = DAT_005806a4;
        DAT_005806a4[6] = (int)((float)DAT_00581288[0x14] + temp_v19);
        piVar19[0x2c] = 0;
        FUN_00303460(0);
        piVar19 = DAT_00581288;
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = (int)temp_v20;
        piVar19[1] = piVar19[1] + 1;
        piVar19[2] = 0;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    FUN_00327ee8();
    return;
  case 0xf:
    fStack_20 = fStack_28;
    fStack_28 = temp_v35;
    fStack_1c = fStack_24;
    fStack_24 = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    temp_v19 = (float)DAT_00581288[7] +
             ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f;
    DAT_00581288[7] = (int)temp_v19;
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    temp_v5 = piVar19[1];
    if (temp_v5 != 0xb) {
      if (temp_v5 < 0xc) {
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            temp_v7 = 0x40a00000;
            if (temp_v5 != 2) {
              if (temp_v5 == 10) {
                DAT_005f185a = 0;
                piVar19[0x15] = 8;
                piVar19[0x16] = 0x40a00000;
                FUN_00324e38(1);
                temp_v5 = DAT_00581288[1];
                piVar19 = DAT_00581288;
                piVar19[1] = temp_v5 + 1;
                piVar19[2] = 0;
              }
            }
            else {
              piVar19[2] = piVar19[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v5 = FUN_004d0584();
              piVar19 = DAT_00581288;
              if (temp_v5 != 0) {
                DAT_00581288[1] = 10;
                piVar19[2] = 0;
              }
              else {
                temp_v5 = FUN_001656a0(5);
                if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
                  piVar19 = DAT_005806a4;
                  DAT_005806a4[6] = DAT_00581288[0x14];
                  piVar19[0x2c] = 0;
                  FUN_00303460(0);
                  piVar19 = DAT_00581288;
                  DAT_00581288[0x15] = 0;
                  piVar19[0x16] = temp_v7;
                  FUN_00233e10(0,DAT_005f16ac);
                  piVar19 = DAT_00581288;
                  DAT_00581288[1] = 0x5a;
                  piVar19[2] = 0;
                }
              }
            }
          }
          else {
            piVar19[2] = piVar19[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar19 = DAT_00581288;
            if (DAT_00581288[2] >= 3) {
              temp_v5 = DAT_00581288[1];
              DAT_00581288[0x15] = 0x1d;
              piVar19[0x16] = 0x40000000;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          piVar19[0x15] = 0;
          piVar19[0x16] = 0x40400000;
          *(unsigned char *)(piVar19 + 0x1b) = 0;
          FUN_002b5cb4();
          temp_v26 = DAT_005f16b8;
          temp_v20 = DAT_005f16b4;
          piVar19 = DAT_00581288;
          temp_v37 = 180.0f;
          temp_v35 = 0.017453292f;
          temp_v28 = 100.0f;
          if ((int)temp_v19 < 0x42700000) {
            DAT_00581288[10] = (int)DAT_005f16b0;
            piVar19[0xb] = (int)temp_v20;
            piVar19[0xc] = (int)temp_v26;
            temp_v19 = ((float)piVar19[0x13] + 180.0f) * 0.017453292f;
            FUN_001bc124();
            piVar19 = DAT_00581288;
            DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * temp_v28);
            temp_v35 = ((float)piVar19[0x13] + temp_v37) * temp_v35;
            FUN_001bbf0c();
            piVar19 = DAT_00581288;
            DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v35 * temp_v28);
            temp_v5 = piVar19[10];
            FUN_00352bc4();
            DAT_00581288[0x14] = temp_v5;
          }
          else {
            temp_v26 = (float)DAT_00581288[10];
            FUN_00352bc4();
            piVar19 = DAT_00581288;
            DAT_00581288[0x14] = (int)temp_v26;
            temp_v20 = DAT_005f16b8;
            temp_v19 = DAT_005f16b4;
            piVar19[10] = (int)DAT_005f16b0;
            piVar19[0xb] = (int)temp_v19;
            piVar19[0xc] = (int)temp_v20;
            temp_v19 = (temp_v26 + temp_v37) * temp_v35;
            FUN_001bc124();
            piVar19 = DAT_00581288;
            DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * temp_v28);
            temp_v35 = ((float)piVar19[0x14] + temp_v37) * temp_v35;
            FUN_001bbf0c();
            DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v35 * temp_v28);
          }
          FUN_00303460(10);
          DAT_005806a4[0x2c] = -1;
          FUN_001681cc(0xdd);
          FUN_00233e10(1,DAT_005f16ac);
          temp_v5 = DAT_00581288[1];
          piVar19 = DAT_00581288;
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
      else if (!(temp_v5 == 0x5a || temp_v5 == 0x5b)) {
        if ((temp_v5 == 0x5c) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
          FUN_00324e38(0);
          temp_v18 = 1;
          FUN_00313648(temp_v18);
        }
      }
      else {
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    else {
      temp_v5 = piVar19[2];
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 >= 0x10) {
        temp_v18 = 0x10;
        FUN_00313648(temp_v18);
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_24,fStack_28);
    in_d9 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x11:
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    temp_v18 = FUN_00145868();
    if (DAT_00581288[1] < 10) {
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    piVar19 = DAT_00581288;
    temp_v7 = 0x40000000;
    temp_v13 = 0;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0x35) {
      if (temp_v5 < 0x36) {
        temp_v19 = 0.017453292f;
        if (temp_v5 != 0x32) {
          if (temp_v5 < 0x33) {
            if (temp_v5 != 0) {
              if (temp_v5 != 1) {
                if (temp_v5 == 2) {
                  DAT_00581288[2] = DAT_00581288[2] + 1;
                  FUN_00233e10(1,DAT_005f16ac);
                  temp_v5 = FUN_004d0584();
                  if (temp_v5 != 0) {
                    FUN_003b5714(DAT_005f16a0,DAT_005f16a4,DAT_005f16a8);
                    piVar19 = DAT_00581288;
                    DAT_00581288[0x28] = (int)DAT_005f16b0;
                    piVar19[0x29] = (int)(DAT_005f16b4 - 500.0f);
                    piVar19[0x2a] = (int)DAT_005f16b8;
                    piVar19[0x2b] = piVar19[0x14];
                    piVar19[1] = 0x32;
                    piVar19[2] = 0;
                  }
                  else {
                    temp_v5 = FUN_001656a0(5);
                    if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
                      piVar19 = DAT_005806a4;
                      DAT_005806a4[6] = DAT_00581288[0x14];
                      piVar19[0x2c] = 0;
                      FUN_00303460(0);
                      piVar19 = DAT_00581288;
                      DAT_00581288[0x15] = 0;
                      piVar19[0x16] = 0x40a00000;
                      FUN_00233e10(0,DAT_005f16ac);
                      FUN_00312a5c();
                      piVar19 = DAT_00581288;
                      DAT_00581288[1] = 0x5a;
                      piVar19[2] = 0;
                    }
                  }
                }
              }
              else {
                DAT_00581288[2] = DAT_00581288[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] >= 3) {
                  temp_v5 = DAT_00581288[1];
                  DAT_00581288[0x15] = 0x1d;
                  piVar19[0x16] = temp_v7;
                  piVar19[1] = temp_v5 + 1;
                  piVar19[2] = 0;
                }
              }
            }
            else {
              DAT_00581288[0x15] = 0;
              piVar19[0x16] = 0x40400000;
              *(unsigned char *)(piVar19 + 0x1b) = 0;
              temp_v35 = (float)piVar19[10];
              FUN_00352bc4();
              piVar19 = DAT_00581288;
              temp_v37 = 180.0f;
              DAT_00581288[0x14] = (int)temp_v35;
              temp_v26 = DAT_005f16b8;
              temp_v20 = DAT_005f16b4;
              piVar19[10] = (int)DAT_005f16b0;
              piVar19[0xb] = (int)temp_v20;
              piVar19[0xc] = (int)temp_v26;
              temp_v20 = (temp_v35 + 180.0f) * temp_v19;
              FUN_001bc124();
              piVar19 = DAT_00581288;
              temp_v26 = 110.0f;
              DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v20 * 110.0f);
              temp_v19 = ((float)piVar19[0x14] + temp_v37) * temp_v19;
              FUN_001bbf0c();
              DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v19 * temp_v26);
              FUN_00303460(10);
              DAT_005806a4[0x2c] = -1;
              FUN_001681cc(0xdd);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_00246014();
              temp_v5 = DAT_00581288[1];
              piVar19 = DAT_00581288;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
            goto LAB_00367f20;
          }
          if (temp_v5 != 0x33) {
            if (temp_v5 == 0x34) {
              pfVar9 = (float *)(DAT_00581288 + 8);
              temp_v7 = DAT_00581288[0x2f];
              temp_v19 = (float)DAT_00581288[0x1a] - 2.0f;
              DAT_00581288[0x1a] = (int)temp_v19;
              piVar19[8] = (int)(*pfVar9 + temp_v19);
              if (temp_v7 < 0x28) {
                piVar19[0x2f] = temp_v7 + 1;
                piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
                piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
              }
              piVar19[2] = piVar19[2] + 1;
              if (0.0f < temp_v19) {
                piVar19[1] = temp_v5 + 1;
                piVar19[2] = 0;
              }
            }
            goto LAB_00367f20;
          }
          temp_v5 = DAT_00581288[2];
          DAT_00581288[2] = temp_v5 + 1;
          if (temp_v5 + 1 < 0x15) goto LAB_00367f20;
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c4;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c6;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c8;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002ca;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cc;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002d9;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e5);
          FUN_0013c1ec(temp_v18);
          piVar19 = DAT_00581288;
          DAT_00581288[0x1a] = 0x41000000;
          piVar19[8] = (int)((float)piVar19[8] + 8.0f);
        }
        else {
          DAT_005f185a = 0;
          DAT_005806a4[3] = 2;
          piVar19[0x15] = 5;
          piVar19[0x16] = 0x40400000;
          piVar19[0x2c] = (int)((float)piVar19[0x28] - (float)piVar19[7]);
          piVar19[0x2d] = (int)((float)piVar19[0x29] - (float)piVar19[8]);
          piVar19[0x2e] = (int)((float)piVar19[0x2a] - (float)piVar19[9]);
          piVar19[0x2c] = (int)(((float)piVar19[0x28] - (float)piVar19[7]) * 0.025f);
          piVar19[0x2d] = (int)((float)piVar19[0x2d] * 0.025f);
          piVar19[0x2e] = (int)((float)piVar19[0x2e] * 0.025f);
          piVar19 = DAT_00581288;
          DAT_00581288[0x2f] = 0;
        }
        temp_v5 = piVar19[1];
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
      else if (temp_v5 != 0x5a) {
        if (temp_v5 < 0x5b) {
          if (temp_v5 != 0x36) {
            if (temp_v5 == 0x37) {
              DAT_00581288[2] = DAT_00581288[2] + 1;
              FUN_002d8af4();
              temp_v18 = 0x12;
              FUN_00313648(temp_v18);
            }
            goto LAB_00367f20;
          }
          FUN_00312a5c();
          piVar11 = DAT_00581288;
          DAT_00581288[0x1a] = temp_v13;
          piVar19 = DAT_005806a4;
          DAT_005806a4[6] = piVar11[0x14];
          piVar19[0x2c] = 0;
          FUN_00303460(0);
          piVar19 = DAT_00581288;
          temp_v5 = piVar19[1];
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
        else if (temp_v5 != 0x5b) {
          if ((temp_v5 == 0x5c) &&
             (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
            temp_v18 = 1;
            FUN_00313648(temp_v18);
          }
        }
        else {
          FUN_002d8af4();
          piVar19 = DAT_00581288;
          temp_v5 = piVar19[1];
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
      else {
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    else {
      temp_v19 = (float)DAT_00581288[0x1a];
      pfVar9 = (float *)(DAT_00581288 + 8);
      temp_v5 = DAT_00581288[0x2f];
      DAT_00581288[0x1a] = (int)(temp_v19 - 2.0f);
      piVar19[8] = (int)(*pfVar9 + (temp_v19 - 2.0f));
      if (temp_v5 < 0x28) {
        piVar19[0x2f] = temp_v5 + 1;
        piVar19[7] = (int)((float)piVar19[7] + (float)piVar19[0x2c]);
        piVar19[9] = (int)((float)piVar19[9] + (float)piVar19[0x2e]);
      }
      temp_v5 = piVar19[2];
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 == 10) {
        FUN_003d2150(0x1000112);
      }
      if (DAT_00581288[2] == 0x1e) {
        FUN_001f4908(0,10,0xff);
        FUN_001f4908(1,10,0xff);
      }
      if ((DAT_00581288[2] >= 0x1f) && (temp_v5 = FUN_002e07f4(), temp_v5 != 0)) {
        temp_v5 = DAT_00581288[1];
        piVar19 = DAT_00581288;
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
LAB_00367f20:
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_2c,fStack_30);
    in_d9 = CONCAT44(fStack_24,fStack_28);
    in_d10 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x13:
    fStack_28 = temp_v35;
    fStack_24 = temp_v37;
    temp_v18 = FUN_00145868();
    if (DAT_00581288[1] < 10) {
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    piVar19 = DAT_00581288;
    temp_v7 = 0x40a00000;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0xd) {
      if (0xd >= temp_v5) {
        temp_v19 = 0.017453292f;
        if (temp_v5 != 10) {
          if (10 >= temp_v5) {
            if (temp_v5 != 0) {
              if (temp_v5 != 1) {
                if (temp_v5 == 2) {
                  DAT_00581288[2] = DAT_00581288[2] + 1;
                  FUN_00233e10(1,DAT_005f16ac);
                  temp_v5 = FUN_004d0584();
                  piVar19 = DAT_00581288;
                  if (temp_v5 != 0) {
                    DAT_00581288[1] = 10;
                    piVar19[2] = 0;
                  }
                  else {
                    temp_v5 = FUN_001656a0(6);
                    if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
                      piVar19 = DAT_005806a4;
                      DAT_005806a4[6] = DAT_00581288[0x14];
                      piVar19[0x2c] = 0;
                      FUN_00303460(0);
                      piVar19 = DAT_00581288;
                      DAT_00581288[0x15] = 0;
                      piVar19[0x16] = temp_v7;
                      FUN_00233e10(0,DAT_005f16ac);
                      FUN_002b8070();
                      piVar19 = DAT_00581288;
                      DAT_00581288[1] = 0x5a;
                      piVar19[2] = 0;
                    }
                  }
                }
              }
              else {
                DAT_00581288[2] = DAT_00581288[2] + 1;
                FUN_00233e10(1,DAT_005f16ac);
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] >= 3) {
                  temp_v5 = DAT_00581288[1];
                  DAT_00581288[0x15] = 0x1c;
                  piVar19[0x16] = 0x40000000;
                  piVar19[1] = temp_v5 + 1;
                  piVar19[2] = 0;
                }
              }
            }
            else {
              DAT_00581288[0x15] = 0;
              piVar19[0x16] = 0x40400000;
              *(unsigned char *)(piVar19 + 0x1b) = 0;
              temp_v26 = DAT_005f16b8;
              temp_v20 = DAT_005f16b4;
              piVar19[10] = (int)DAT_005f16b0;
              piVar19[0xb] = (int)temp_v20;
              piVar19[0xc] = (int)temp_v26;
              temp_v20 = DAT_005f16cc * 0.017453292f;
              FUN_001bc124();
              temp_v26 = 25.0f;
              DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v20 * 25.0f);
              temp_v19 = DAT_005f16cc * temp_v19;
              FUN_001bbf0c();
              piVar19 = DAT_00581288;
              DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v19 * temp_v26);
              piVar19[0x14] = (int)DAT_005f16bc;
              FUN_00303460(0xd);
              DAT_005806a4[0x2c] = 1;
              FUN_001681cc(0xdc);
              FUN_00233e10(1,DAT_005f16ac);
              FUN_0022368c();
              piVar19 = DAT_00581288;
              temp_v5 = piVar19[1];
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else {
            if (temp_v5 != 0xb) {
              if ((temp_v5 == 0xc) && (temp_v5 = FUN_00294a24(), temp_v5 == 0)) {
                FUN_002b8070();
                piVar19 = DAT_005806a4;
                DAT_005806a4[6] = DAT_00581288[0x14];
                piVar19[0x2c] = 0;
                FUN_00303460(0);
                temp_v5 = DAT_00581288[1];
                piVar19 = DAT_00581288;
                piVar19[1] = temp_v5 + 1;
                piVar19[2] = 0;
              }
              goto LAB_0033eae8;
            }
            temp_v5 = DAT_00581288[2];
            DAT_00581288[2] = temp_v5 + 1;
            if (temp_v5 + 1 != 10) goto LAB_0033eae8;
            FUN_0033abd4();
            switch(DAT_005f162e) {
            case 0:
              temp_v3 = 0x10002c4;
              FUN_003d4ed8(temp_v3);
              break;
            case 1:
              temp_v3 = 0x10002c6;
              FUN_003d4ed8(temp_v3);
              break;
            case 2:
              temp_v3 = 0x10002c8;
              FUN_003d4ed8(temp_v3);
              break;
            case 3:
              temp_v3 = 0x10002ca;
              FUN_003d4ed8(temp_v3);
              break;
            case 4:
              temp_v3 = 0x10002cc;
              FUN_003d4ed8(temp_v3);
              break;
            case 5:
              temp_v3 = 0x10002d9;
              FUN_003d4ed8(temp_v3);
              break;
            default:
            }
            FUN_00324e38(0xffffffff);
            FUN_001bc124();
            FUN_001bbf0c();
            FUN_0014af98();
            FUN_0013c1ec();
            FUN_003d2150(0x10002e5);
            FUN_0013c1ec(temp_v18);
            FUN_002342b8();
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          DAT_005f185a = 0;
          DAT_005806a4[3] = 1;
          piVar19[0x15] = 0x15;
          piVar19[0x16] = 0x40a00000;
          temp_v5 = piVar19[1];
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
      else if (temp_v5 != 100) {
        if (100 >= temp_v5) {
          if (temp_v5 != 0x5a) {
            if (temp_v5 != 0x5b) {
              if ((temp_v5 == 0x5c) &&
                 (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
                FUN_00313648(1);
              }
            }
            else {
              FUN_00294a44();
              temp_v5 = DAT_00581288[1];
              piVar19 = DAT_00581288;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
          else {
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else if (temp_v5 != 0x65) {
          if (temp_v5 == 0x66) {
            FUN_00294a44();
            FUN_00313648(0x14);
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
        else {
          temp_v5 = FUN_002e07f4();
          piVar19 = DAT_005806a4;
          if (temp_v5 != 0) {
            DAT_005806a4[6] = DAT_00581288[0x14];
            piVar19[0x2c] = 0;
            FUN_00303460(0);
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0;
            piVar19[0x16] = temp_v7;
            FUN_00233e10(0,DAT_005f16ac);
            FUN_002b8070();
            temp_v5 = DAT_00581288[1];
            piVar19 = DAT_00581288;
            piVar19[1] = temp_v5 + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        FUN_001f4908(0,10,0xff);
        temp_v5 = DAT_00581288[1];
        piVar19 = DAT_00581288;
        piVar19[1] = temp_v5 + 1;
        piVar19[2] = 0;
      }
    }
    else {
      FUN_00294a44();
      FUN_00313648(0x14);
      temp_v5 = DAT_00581288[1];
      piVar19 = DAT_00581288;
      piVar19[1] = temp_v5 + 1;
      piVar19[2] = 0;
    }
LAB_0033eae8:
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_24,fStack_28);
    goto code_r0x00327ee8;
  case 0x15:
    fStack_3c = temp_v20;
    iStack_38 = temp_v5;
    fStack_2c = temp_v35;
    temp_v19 = fStack_28;
    fStack_28 = temp_v37;
    fStack_20 = fStack_24;
    fStack_24 = temp_v19;
    temp_v18 = FUN_00145868();
    if (DAT_00581288[1] < 10) {
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] +
                ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
    }
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    temp_v7 = 0x40000000;
    temp_v19 = 0.0f;
    if (temp_v5 != 0xb) {
      if (temp_v5 < 0xb) {
        temp_v20 = 0.017453292f;
        temp_v26 = 25.0f;
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            if (temp_v5 != 2) {
              if (temp_v5 == 10) {
                temp_v5 = DAT_00581288[2];
                DAT_00581288[2] = temp_v5 + 1;
                if (temp_v5 + 1 == 1) {
                  if ((DAT_005f15fc != (unsigned int *)0x26) && (DAT_005f15fc != (unsigned int *)0x1a))
                  {
                    FUN_003d4ed8(0x10002bb);
                  }
                  FUN_00324e38(0xffffffff);
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_0014af98();
                  FUN_0013c1ec();
                  FUN_003d2150(0x10002e7);
                  FUN_0013c1ec(temp_v18);
                }
                piVar19 = DAT_00581288;
                if (DAT_00581288[2] == 2) {
                  DAT_00581288[0x15] = 0xf;
                  piVar19[0x16] = (int)temp_v19;
                  DAT_005f185a = 0;
                  FUN_002b8070();
                  piVar19 = DAT_00581288;
                  piVar11 = DAT_00581288 + 7;
                  DAT_00581288[0x13] = DAT_00581288[0x14];
                  temp_v5 = piVar19[0xb];
                  temp_v7 = piVar19[0xc];
                  *piVar11 = piVar19[10];
                  piVar19[8] = temp_v5;
                  piVar19[9] = temp_v7;
                  piVar19[1] = piVar19[1] + 1;
                  if (DAT_005f15fc == (unsigned int *)0x26 || DAT_005f15fc == (unsigned int *)0x1a) {
                    FUN_003d4ed8(0x10000f7);
                  }
                  DAT_00581288[2] = 0;
                }
              }
            }
            else {
              DAT_00581288[2] = DAT_00581288[2] + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v5 = FUN_004d0584();
              piVar19 = DAT_00581288;
              if (temp_v5 != 0) {
                DAT_00581288[1] = 10;
                piVar19[2] = 0;
                DAT_005806a4[3] = 2;
                fStack_3c = (float)piVar19[0xb];
                iStack_38 = piVar19[0xc];
                uStack_4c = romwright_piece_4_4(&fStack_34,(unsigned int)uStack_4c);
                uStack_44 = romwright_piece_4_4(piVar19[10],1);
                FUN_00325ba4(2,10,0x66,(int)&uStack_44 + 4);
                piVar19 = DAT_00581288;
                temp_v35 = 180.0f;
                fStack_34 = fStack_34 + 180.0f;
                if (fStack_34 < temp_v19) {
                  fStack_34 = fStack_34 + 360.0f;
                }
                if ((int)fStack_34 >= 0x43b40001) {
                  fStack_34 = fStack_34 - 360.0f;
                }
                DAT_00581288[0x14] = (int)fStack_34;
                piVar19[10] = (int)(*(float *)((unsigned char *)&uStack_44 + 4));
                piVar19[0xb] = (int)fStack_3c;
                piVar19[0xc] = iStack_38;
                piVar19[0xb] = (int)(fStack_3c - 250.0f);
                temp_v19 = ((float)piVar19[0x13] + 180.0f) * temp_v20;
                FUN_001bc124();
                piVar19 = DAT_00581288;
                DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * temp_v26);
                temp_v20 = ((float)piVar19[0x13] + temp_v35) * temp_v20;
                FUN_001bbf0c();
                DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v20 * temp_v26);
              }
              else {
                temp_v5 = FUN_001656a0(6);
                if ((temp_v5 != 0) || (temp_v5 = FUN_004d0554(), temp_v5 != 0)) {
                  piVar19 = DAT_005806a4;
                  DAT_005806a4[6] = DAT_00581288[0x14];
                  piVar19[0x2c] = 0;
                  FUN_00303460(0);
                  piVar19 = DAT_00581288;
                  DAT_00581288[0x15] = 0;
                  piVar19[0x16] = 0x40a00000;
                  FUN_00233e10(0,DAT_005f16ac);
                  FUN_002b8070();
                  piVar19 = DAT_00581288;
                  DAT_00581288[1] = 0x5a;
                  piVar19[2] = 0;
                }
              }
            }
          }
          else {
            DAT_00581288[2] = DAT_00581288[2] + 1;
            FUN_00233e10(1,DAT_005f16ac);
            piVar19 = DAT_00581288;
            if (DAT_00581288[2] >= 3) {
              temp_v5 = DAT_00581288[1];
              DAT_00581288[0x15] = 0x1c;
              piVar19[0x16] = temp_v7;
              piVar19[1] = temp_v5 + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          DAT_00581288[0x15] = 0;
          piVar19[0x16] = 0x40400000;
          *(unsigned char *)(piVar19 + 0x1b) = 0;
          temp_v35 = DAT_005f16b8;
          temp_v19 = DAT_005f16b4;
          piVar19[10] = (int)DAT_005f16b0;
          piVar19[0xb] = (int)temp_v19;
          piVar19[0xc] = (int)temp_v35;
          temp_v19 = DAT_005f16cc * 0.017453292f;
          FUN_001bc124();
          DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * temp_v26);
          temp_v20 = DAT_005f16cc * temp_v20;
          FUN_001bbf0c();
          piVar19 = DAT_00581288;
          DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v20 * temp_v26);
          piVar19[0x14] = (int)DAT_005f16bc;
          FUN_00303460(0xd);
          DAT_005806a4[0x2c] = 1;
          FUN_001681cc(0xdc);
          FUN_00233e10(1,DAT_005f16ac);
          FUN_0022368c();
          piVar19 = DAT_00581288;
          DAT_00581288[1] = DAT_00581288[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        if (temp_v5 == 0xc) {
          temp_v18 = 0x16;
        }
        else {
          if (temp_v5 == 0x5a) {
            DAT_00581288[1] = 0x5b;
            piVar19[2] = 0;
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if (temp_v5 == 0x5b) {
            FUN_00294a44();
            piVar19 = DAT_00581288;
            DAT_00581288[1] = DAT_00581288[1] + 1;
            piVar19[2] = 0;
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          if ((temp_v5 != 0x5c) ||
             (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 < 4)) {
            FUN_002e364c(DAT_00581288 + 10);
            FUN_00327ee8();
            return;
          }
          temp_v18 = 1;
        }
        FUN_00313648(temp_v18);
      }
    }
    else {
      temp_v6 = DAT_00581288[2] + 1;
      DAT_00581288[2] = temp_v6;
      temp_v20 = (float)piVar19[0xb];
      piVar19[0xb] = (int)(temp_v20 + 2.0f);
      piVar19[7] = piVar19[10];
      piVar19[8] = (int)(temp_v20 + 2.0f);
      piVar19[9] = piVar19[0xc];
      if ((DAT_005f15fc != (unsigned int *)0x26) && (DAT_005f15fc != (unsigned int *)0x1a)) {
        if ((temp_v6 == 0xb || temp_v6 == 0x1c) || temp_v6 == 0x29) {
          FUN_003d4ed8((temp_v6 & 3) + 0x10002bb);
          FUN_00324e38(0xffffffff);
        }
      }
      else if ((temp_v6 == 0xb || temp_v6 == 0x1c) || temp_v6 == 0x29) {
        FUN_00324e38(0xffffffff);
      }
      if (DAT_00581288[2] == 0x1e) {
        FUN_002342b8();
      }
      if ((DAT_00581288[2] >= 0x1f) && (temp_v5 = FUN_00294a24(), temp_v5 == 0)) {
        FUN_00294a44();
        piVar19 = DAT_005806a4;
        DAT_005806a4[6] = DAT_00581288[0x14];
        piVar19[0x2c] = 0;
        FUN_00303460(0);
        piVar19 = DAT_00581288;
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = (int)temp_v19;
        piVar19[1] = piVar19[1] + 1;
        piVar19[2] = 0;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    FUN_00327ee8();
    return;
  case 0x17:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v18 = FUN_00145868();
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 == 2) && (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 6)) {
          FUN_00313648(1);
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 == 3) {
          FUN_0033abd4();
        }
        if (DAT_00581288[2] == 6) {
          FUN_002d1f40(0x1e,0x32,0);
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c5;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c7;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c9;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002cb;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cd;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002da;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e6);
          FUN_0013c1ec(temp_v18);
        }
        piVar19 = DAT_00581288;
        if (DAT_00581288[2] >= 0x24) {
          temp_v5 = DAT_00581288[1];
          DAT_00581288[0x16] = 0x40a00000;
          piVar19[0x15] = 0;
          piVar19[1] = temp_v5 + 1;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 7;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x18:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v18 = FUN_00145868();
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 == 2) && (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 0x1f)
           ) {
          FUN_00303460(0);
          FUN_00313648(1);
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 == 3) {
          FUN_0033abd4();
        }
        if (DAT_00581288[2] == 6) {
          FUN_002d1f40(0x1e,0x32,0);
          switch(DAT_005f162e) {
          case 0:
            temp_v3 = 0x10002c5;
            FUN_003d4ed8(temp_v3);
            break;
          case 1:
            temp_v3 = 0x10002c7;
            FUN_003d4ed8(temp_v3);
            break;
          case 2:
            temp_v3 = 0x10002c9;
            FUN_003d4ed8(temp_v3);
            break;
          case 3:
            temp_v3 = 0x10002cb;
            FUN_003d4ed8(temp_v3);
            break;
          case 4:
            temp_v3 = 0x10002cd;
            FUN_003d4ed8(temp_v3);
            break;
          case 5:
            temp_v3 = 0x10002da;
            FUN_003d4ed8(temp_v3);
            break;
          default:
          }
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e6);
          FUN_0013c1ec(temp_v18);
        }
        if (DAT_00581288[2] >= 0x24) {
          FUN_00303460(9);
          piVar19 = DAT_00581288;
          DAT_00581288[0x15] = 0;
          piVar19[0x16] = 0x40a00000;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 7;
      piVar19[0x16] = 0;
      FUN_00303460(8);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x19:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if ((temp_v5 == 2) && (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 2)) {
          piVar19[0x16] = 0x40a00000;
          FUN_00313648(1);
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v5 + 1 >= 0x10) {
          piVar19[1] = 2;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 0x1b;
      piVar19[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00324e38(0);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x1a:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v18 = FUN_00145868();
    piVar19 = DAT_00581288;
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 == 2) && (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, temp_v5 + 1 >= 2)) {
          piVar19[0x16] = 0x40a00000;
          FUN_00313648(1);
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        if (temp_v5 + 1 >= 0x10) {
          piVar19[1] = 2;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 0x1b;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
      switch(DAT_005f162e) {
      case 0:
        temp_v3 = 0x10002c5;
        FUN_003d4ed8(temp_v3);
        break;
      case 1:
        temp_v3 = 0x10002c7;
        FUN_003d4ed8(temp_v3);
        break;
      case 2:
        temp_v3 = 0x10002c9;
        FUN_003d4ed8(temp_v3);
        break;
      case 3:
        temp_v3 = 0x10002cb;
        FUN_003d4ed8(temp_v3);
        break;
      case 4:
        temp_v3 = 0x10002cd;
        FUN_003d4ed8(temp_v3);
        break;
      case 5:
        temp_v3 = 0x10002da;
        FUN_003d4ed8(temp_v3);
        break;
      default:
      }
      FUN_00324e38(0xffffffff);
      FUN_001bc124();
      FUN_001bbf0c();
      FUN_0014af98();
      FUN_0013c1ec();
      FUN_003d2150(0x10002e6);
      FUN_0013c1ec(temp_v18);
    }
    goto code_r0x0024947c;
  case 0x1c:
    temp_v33 = *(unsigned long long *)(DAT_00581288 + 10);
    temp_v5 = DAT_00581288[0xc];
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    temp_v7 = DAT_00581288[1];
    if (temp_v7 != 0xb) {
      if (temp_v7 < 0xc) {
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 == 10) {
              DAT_00581288[0x15] = 0x13;
              piVar19[0x16] = 0x40a00000;
              piVar11 = DAT_005806a4;
              DAT_005806a4[0x84] = 0;
              piVar11[0x85] = 0;
              piVar19[0x1a] = 0;
              piVar19[7] = piVar19[10];
              piVar19[8] = piVar19[0xb];
              piVar19[9] = piVar19[0xc];
              FUN_003e549c(piVar19[0x6a],piVar19[0x15]);
              piVar19 = DAT_00581288;
              temp_v7 = 0;
              DAT_00581288[1] = DAT_00581288[1] + 1;
              piVar19[2] = temp_v7;
            }
          }
          else {
            temp_v7 = DAT_00581288[2] + 1;
            piVar19[2] = temp_v7;
          }
        }
        else {
          DAT_00581288[0x15] = 0x13;
          piVar19[0x16] = 0x40a00000;
          FUN_00324e38(0);
          piVar19 = DAT_00581288;
          temp_v7 = 0;
          *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = temp_v7;
        }
      }
      else if (temp_v7 == 0x14) {
        DAT_00581288[2] = DAT_00581288[2] + 1;
        FUN_00317af8(&uStack_190,temp_v43,0);
        if ((((0xbf000000 < uStack_190) || ((int)uStack_190 >= 0x3f000001)) ||
            (0xbf000000 < temp_v43[0])) ||
           (((int)temp_v43[0] >= 0x3f000001 ||
            (FUN_003e542c(DAT_00581288[0x6a]), in_s0 >= 0x42d20001)))) {
          piVar19 = DAT_00581288;
          DAT_00581288[1] = 100;
          piVar19[2] = 0;
        }
      }
    }
    else {
      temp_v7 = DAT_00581288[2] + 1;
      piVar19[2] = temp_v7;
    }
    pfVar9 = &fStack_1ac;
    FUN_002469d0();
    piVar19 = DAT_00581288;
    pfVar17 = (float *)(DAT_00581288 + 10);
    DAT_00581288[0xc] = (int)afStack_1a8[1];
    *pfVar17 = fStack_1ac;
    piVar19[0xb] = (int)afStack_1a8[0];
    piVar19[0xd] = (int)temp_v33;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = temp_v5;
    afStack_1a8[2] = afStack_1a8[0];
joined_r0x00248750:
    if (((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) && (pfVar9 != (float *)0x0)) {
      *(float *)((int)piVar19 + 0x2c) = afStack_1a8[2] - 2.0f;
      FUN_0025ef68((int *)((int)piVar19 + 0x28),(int *)((int)piVar19 + 0x34),0);
    }
    piVar19 = DAT_00581288;
    piVar11 = DAT_00581288 + 7;
    piVar7 = DAT_00581288 + 0x10;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.33333334f);
    temp_v19 = (float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f;
    piVar19[9] = (int)temp_v19;
    temp_v7 = piVar19[8];
    *piVar7 = *piVar11;
    piVar19[0x11] = temp_v7;
    piVar19[0x12] = (int)temp_v19;
    piVar19[0xd] = (int)temp_v33;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = temp_v5;
    return;
  case 0x1d:
    DAT_00581288[0x15] = 0;
    piVar19[0x16] = 0;
    return;
  case 0x1e:
    if (DAT_00581288[1] == 0) {
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 < 0x3d) {
        return;
      }
      piVar19[0x15] = 0x11;
      temp_v5 = 1;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = temp_v5;
      piVar19[2] = 0;
      return;
    }
    if (DAT_00581288[1] != 1) {
      return;
    }
    temp_v5 = DAT_00581288[2] + 1;
    DAT_00581288[2] = temp_v5;
    if (temp_v5 == 0x96) {
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      return;
    }
    break;
  case 0x1f:
    uStack_44 = in_d8;
    fStack_3c = fStack_28;
    iStack_38 = (int)fStack_24;
    fStack_34 = fStack_20;
    fStack_30 = fStack_1c;
    fStack_28 = temp_v26;
    temp_v18 = FUN_00162e8c();
    uStack_5c = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_5c + 4)),temp_v18);
    temp_v18 = FUN_00145868();
    piVar19 = DAT_00581288;
    uStack_54 = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_54 + 4)),temp_v18);
    temp_v19 = 0.0f;
    temp_v5 = 0x40400000;
    temp_v7 = DAT_00581288[1];
    if (temp_v7 != 9) {
      if (temp_v7 < 9) {
        switch(temp_v7) {
        case 0:
          DAT_005f1adc = 1;
          DAT_005f161c = 1;
          DAT_005f1859 = 0;
          DAT_005f185a = 0;
          temp_v5 = FUN_00314ba8();
          FUN_002ba400(*(short *)(temp_v5 + 0xe) != 0);
          piVar19 = DAT_00581288;
          piVar11 = DAT_00581288 + 7;
          DAT_00581288[0x15] = 9;
          piVar19[0x16] = (int)temp_v19;
          piVar19[0x14] = piVar19[0x13];
          piVar19[10] = *piVar11;
          piVar19[0xb] = piVar19[8];
          piVar19[0xc] = piVar19[9];
          *(unsigned char *)(piVar19 + 0x1b) = 0;
          FUN_001bc124();
          FUN_001bbf0c();
          temp_v18 = FUN_00152f44();
          temp_v3 = FUN_0014af98();
          FUN_001628c0(&LAB_002d9eec,temp_v3,temp_v18,1);
          piVar19 = DAT_00581288;
          DAT_00581288[1] = DAT_00581288[1] + 1;
          piVar19[2] = 0;
          piVar19[0x9c] = 0;
          temp_v5 = FUN_0018719c(0x68);
          if (temp_v5 != 0) {
            FUN_002c2d44(
                        "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                        );
            FUN_001681cc(0xe9);
          }
          *(unsigned char *)((int)DAT_00581288 + 0x291) = 0;
          FUN_002d1f40(8,0x78,0);
          temp_v5 = FUN_003d2150(0x10000d2);
          DAT_00581288[0x99] = temp_v5;
          break;
        case 1:
          temp_v7 = DAT_00581288[2];
          DAT_00581288[2] = temp_v7 + 1;
          if (temp_v7 + 1 == 6) {
            FUN_00324e38(0);
          }
          piVar19 = DAT_00581288;
          if (DAT_00581288[2] >= 0x15) {
            temp_v7 = DAT_00581288[1];
            DAT_00581288[0x15] = 10;
            piVar19[0x16] = temp_v5;
            piVar19[2] = 0;
            piVar19[3] = 0;
            piVar19[1] = temp_v7 + 1;
            piVar19[0x9b] = 0;
            FUN_003024a0(1);
          }
          if (DAT_005f15fc == (unsigned int *)0x18) {
            piVar19 = (int *)((int)uStack_5c + 0x1520);
            temp_v5 = *piVar19;
            if (temp_v5 != 0) {
              FUN_003fd63c(temp_v5,1);
              *piVar19 = 0;
            }
          }
          break;
        case 2:
          temp_v7 = FUN_0018719c(0x68);
          if (temp_v7 == 0) {
            FUN_00312db0(&LAB_002d9efc);
            DAT_00581288[1] = 99;
          }
          temp_v7 = FUN_00314ba8();
          piVar19 = DAT_00581288;
          DAT_00581288[2] = DAT_00581288[2] + 1;
          if (piVar19[0x15] != 10) {
            piVar19[0x9c] = piVar19[0x9c] + 1;
          }
          temp_v13 = FUN_004d04f4();
          piVar19 = DAT_00581288;
          if ((temp_v13 != 0) && ((DAT_00581288[0x9c] >= 0x13 || (DAT_00581288[0x15] == 10)))) {
            *(unsigned char *)((int)DAT_00581288 + 0x291) = 1;
            if (DAT_005f1848 == 0) {
              temp_v13 = 4;
              piVar19[0x15] = temp_v13;
            }
            else if (DAT_005f1848 == 1) {
              piVar19[0x15] = 0x16;
            }
            else if (DAT_005f1848 == 2) {
              piVar19[0x15] = 0x17;
            }
            else if (DAT_005f1848 == 3) {
              temp_v13 = 0x18;
              piVar19[0x15] = temp_v13;
            }
            *(unsigned char *)(piVar19 + 0x17) = 1;
            piVar19[0x9c] = 0;
          }
          if (DAT_005f1848 != 0) {
            if (DAT_005f1848 != 1) {
              if (DAT_005f1848 != 2) {
                if (DAT_005f1848 != 3) goto LAB_002da3cc;
                if (DAT_00581288[0x9c] == 2) {
                  temp_v12 = (short)DAT_00581288[0x67];
                  if (0 < temp_v12) goto LAB_002da2b0;
                  *(unsigned short *)(DAT_00581288 + 0x67) = 1;
                  FUN_001bc124();
                  FUN_001bbf0c();
                  uStack_60 = FUN_00184964(0,1);
                  FUN_0014af98();
                  FUN_0013c1ec();
                  FUN_003d2150(uStack_60 + 0x10002e2);
                  FUN_0013c1ec((unsigned int)uStack_54);
                }
                if (DAT_00581288[0x9c] == 3) {
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_003d4ed8(0x100029e);
                  FUN_00324e38(0xffffffff);
                }
                if ((DAT_00581288[0x9c] == 6) && (FUN_00324cd0(), DAT_00581288[0x9c] == 6)) {
                  FUN_00297f00(8,10);
                  FUN_002d1f40(8,0x28,0);
                }
                temp_v13 = DAT_00581288[0x9c];
                goto joined_r0x002da15c;
              }
              if (DAT_00581288[0x9c] != 2) {
LAB_002da1e4:
                if (DAT_00581288[0x9c] == 3) {
                  FUN_001bc124();
                  FUN_001bbf0c();
                  FUN_003d4ed8(0x100029d);
                  FUN_00324e38(0xffffffff);
                }
                if (DAT_00581288[0x9c] == 4) {
                  FUN_00297f00(8,10);
                  FUN_002d1f40(8,0x28,0);
                  FUN_00324cd0();
                }
                temp_v13 = DAT_00581288[0x9c];
                goto joined_r0x002da15c;
              }
              temp_v12 = (short)DAT_00581288[0x67];
              if (temp_v12 < 1) {
                *(unsigned short *)(DAT_00581288 + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                uStack_60 = FUN_00184964(0,1);
                FUN_0014af98();
                FUN_0013c1ec();
                FUN_003d2150(uStack_60 + 0x10002e0);
                FUN_0013c1ec((unsigned int)uStack_54);
                goto LAB_002da1e4;
              }
LAB_002da2b0:
              *(short *)(DAT_00581288 + 0x67) = temp_v12 - 1;
            }
            else {
              if (DAT_00581288[0x9c] == 3) {
                FUN_001bc124();
                FUN_001bbf0c();
                FUN_003d4ed8(0x100029c);
                if ((short)DAT_00581288[0x67] >= 1) {
                  *(short *)(DAT_00581288 + 0x67) = (short)DAT_00581288[0x67] - 1;
                }
                else {
                  *(unsigned short *)(DAT_00581288 + 0x67) = 1;
                  FUN_001bc124();
                  FUN_001bbf0c();
                  uStack_60 = FUN_00184964(0,1);
                  FUN_0014af98();
                  FUN_0013c1ec();
                  FUN_003d2150(uStack_60 + 0x10002de);
                  FUN_0013c1ec((unsigned int)uStack_54);
                }
                FUN_00324e38(0xffffffff);
              }
              if (DAT_00581288[0x9c] == 6) {
                FUN_00297f00(8,10);
                FUN_002d1f40(8,0x28,0);
                FUN_00324cd0();
              }
              temp_v13 = DAT_00581288[0x9c];
joined_r0x002da15c:
              if (temp_v13 != 0xe) {
LAB_002da3cc:
                piVar19 = DAT_00581288;
                if (DAT_00581288[0x9c] == 1) {
                  DAT_00581288[0x5a] = -1;
                  piVar19[0x59] = 0;
                  FUN_003e54b8(piVar19[0x6a]);
                  DAT_005f17ac = '\x01';
                }
                piVar19 = DAT_00581288;
                if (DAT_00581288[0x9c] >= 0x14) {
                  DAT_005f17ac = '\0';
                  DAT_00581288[0x15] = 10;
                  piVar19[0x59] = 0;
                }
              }
              else {
                DAT_00581288[0x9b] = DAT_005f1c94 + DAT_00581288[0x9b] + 3;
              }
            }
          }
          else {
            if (DAT_00581288[0x9c] == 3) {
              FUN_001bc124();
              FUN_001bbf0c();
              FUN_003d4ed8(0x100029b);
              if ((short)DAT_00581288[0x67] >= 1) {
                *(short *)(DAT_00581288 + 0x67) = (short)DAT_00581288[0x67] - 1;
              }
              else {
                *(unsigned short *)(DAT_00581288 + 0x67) = 1;
                FUN_001bc124();
                FUN_001bbf0c();
                uStack_60 = FUN_00184964(0,1);
                FUN_0014af98();
                FUN_0013c1ec();
                FUN_003d2150(uStack_60 + 0x10002dc);
                FUN_0013c1ec((unsigned int)uStack_54);
              }
              FUN_00324e38(0xffffffff);
            }
            if ((DAT_00581288[0x9c] == 6) && (FUN_00324cd0(), DAT_00581288[0x9c] == 6)) {
              FUN_00297f00(8,10);
              FUN_002d1f40(8,0x28,0);
            }
            if (DAT_00581288[0x9c] != 0xe) goto LAB_002da3cc;
            DAT_00581288[0x9b] = DAT_005f1c94 + DAT_00581288[0x9b] + 3;
          }
          if ((int)(unsigned int)*(unsigned short *)(temp_v7 + 2) <= DAT_00581288[2]) {
            FUN_002d1f40(10,0x78,0);
            if (DAT_00581288[0x9b] >= (int)(unsigned int)*(unsigned short *)(temp_v7 + 4)) {
              FUN_00246688();
              FUN_003d2158(DAT_00581288[0x99],0);
              FUN_002de104();
              FUN_00324e38(0);
              piVar19 = DAT_00581288;
              DAT_00581288[0x15] = 0;
              piVar19[0x16] = 0x40a00000;
              piVar19[1] = 0x15;
              piVar19[2] = 0;
              FUN_003024a0(0);
              DAT_005f17ac = '\0';
            }
            else {
              FUN_00246688();
              FUN_003d2158(DAT_00581288[0x99],0);
              FUN_003278ac();
              FUN_00324e38(0);
              piVar19 = DAT_00581288;
              DAT_00581288[0x15] = 3;
              piVar19[0x16] = temp_v5;
              DAT_005f17ac = '\0';
              FUN_003024a0(0);
              temp_v12 = *(short *)(temp_v7 + 10);
              if (temp_v12 == 0) {
                DAT_00581288[1] = 0x16;
              }
              else if (temp_v12 == 1) {
                DAT_00581288[1] = 0x17;
              }
              else {
                if (temp_v12 == 2) {
                  temp_v5 = 0x18;
                }
                else {
                  if (temp_v12 != 3) {
                    DAT_00581288[2] = 0;
                    break;
                  }
                  temp_v5 = 0x19;
                }
                DAT_00581288[1] = temp_v5;
              }
              DAT_00581288[2] = 0;
            }
          }
          break;
        case 3:
          DAT_00581288[2] = DAT_00581288[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar19[2] == 1) {
            piVar19[0x15] = 0;
            piVar19[0x16] = 0x40400000;
            temp_v18 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(&LAB_002da77c,temp_v3,temp_v18,1);
          }
          if (DAT_00581288[2] >= 6) {
            FUN_002ba3ec();
            FUN_003adc58();
            FUN_00303460(0);
            FUN_00313648(1);
            DAT_005f161c = 0;
            DAT_005f1614 = '\0';
            DAT_005f1859 = 1;
            DAT_005f185a = 1;
          }
          break;
        case 4:
          DAT_00581288[2] = DAT_00581288[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar19[2] >= 11) {
            temp_v7 = FUN_00314ba8();
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0;
            piVar19[0x16] = temp_v5;
            piVar19[1] = 10;
            piVar19[2] = 0;
            temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 8);
            FUN_00303bd4();
            if (temp_v6 != 0) {
              temp_v11 = temp_v6;
              FUN_0015f858();
              FUN_003180c4(0,temp_v11);
              FUN_00480fc0(temp_v6,1);
              FUN_00312db0(&LAB_002dab1c);
            }
            else {
              FUN_00313648(1);
              DAT_005f161c = 0;
              DAT_005f1859 = 1;
              DAT_005f185a = 1;
            }
          }
          break;
        case 5:
          DAT_00581288[2] = DAT_00581288[2] + 1;
          DAT_005f17ac = '\0';
          if (piVar19[2] >= 11) {
            temp_v7 = FUN_00314ba8();
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0;
            piVar19[0x16] = temp_v5;
            piVar19[1] = 10;
            piVar19[2] = 0;
            temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 8);
            FUN_00303bd4();
            temp_v18 = FUN_003e0034();
            temp_v20 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v26 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat
                                      ((unsigned int)*(unsigned short *)(temp_v7 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            FUN_003e0090((int)(short)(int)(temp_v20 - temp_v26 * temp_v19 * 0.01f));
            if (temp_v6 == 0) {
              temp_v18 = 0x2dab34;
            }
            else {
              temp_v11 = temp_v6;
              FUN_0015f858(temp_v6,0);
              FUN_003180c4(0,temp_v11);
              FUN_00480fc0(temp_v6,1);
              temp_v18 = 0x2dab4c;
            }
            FUN_00312db0(temp_v18);
          }
          break;
        case 6:
          DAT_00581288[2] = DAT_00581288[2] + 1;
          DAT_005f17ac = '\0';
          if (0 < piVar19[2]) {
            DAT_005f1614 = '\x01';
            FUN_00314ba8();
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0;
            piVar19[0x16] = temp_v5;
            piVar19[1] = 7;
            piVar19[2] = 0;
            FUN_001f4908(0,10,0xff);
            FUN_001f4908(1,10,0xff);
            FUN_003d2150(0x10000c4);
          }
          break;
        case 7:
          temp_v5 = FUN_002e07f4();
          if (temp_v5 != 0) {
            temp_v5 = FUN_00314ba8();
            DAT_00581288[2] = DAT_00581288[2] + 1;
            puVar6 = (unsigned int *)(unsigned int)*(unsigned short *)(temp_v5 + 0x12);
            if ((DAT_005f15fc != puVar6) ||
               (DAT_005f1600 != (unsigned int *)(unsigned int)*(unsigned short *)(temp_v5 + 0x14))) {
              FUN_00365c94(puVar6,*(unsigned short *)(temp_v5 + 0x14),*(unsigned short *)(temp_v5 + 0x16));
              temp_v5 = FUN_00314ba8();
              temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + 8);
              FUN_00303bd4();
              DAT_005f19d0 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              FUN_003b5714(puVar6,(unsigned int *)(unsigned int)*(unsigned short *)(temp_v5 + 0x14),
                           *(unsigned short *)(temp_v5 + 0x16));
              if (puVar6 != (unsigned int *)0xffffffff) {
                temp_v7 = FUN_003798f0();
                piVar19 = DAT_00581288;
                temp_v13 = VectorSignedToFloat((int)*(short *)(temp_v7 + 4),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                DAT_00581288[7] = temp_v13;
                temp_v13 = VectorSignedToFloat((int)*(short *)(temp_v7 + 6),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar19[8] = temp_v13;
                temp_v13 = VectorSignedToFloat((int)*(short *)(temp_v7 + 8),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar19[9] = temp_v13;
                piVar19[10] = piVar19[7];
                piVar19[0xb] = piVar19[8];
                piVar19[0xc] = temp_v13;
                temp_v13 = VectorSignedToFloat((int)*(short *)(temp_v7 + 10),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                piVar19[0x13] = temp_v13;
                piVar19[0x14] = temp_v13;
                temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v7 + 10),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                DAT_005806a4[6] = temp_v7;
                uStack_60 = 0;
                uStack_5c = uStack_5c & 0xffffffff00000000;
                FUN_00314c38(*(unsigned short *)(temp_v5 + 0x18) & 0xff,*(unsigned short *)(temp_v5 + 0x1a) & 0xff,0);
                DAT_005f1604 = (unsigned int)*(unsigned short *)(temp_v5 + 0x18);
                FUN_003a366c(*(unsigned short *)(temp_v5 + 0x12),*(unsigned short *)(temp_v5 + 0x14),
                             *(unsigned short *)(temp_v5 + 0x18));
                FUN_0033f938(DAT_005f1608);
                temp_v5 = FUN_00314ba8();
                temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + 8);
                FUN_00303bd4();
                DAT_005f19d0 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              if (DAT_00581288[2] >= 0x1f) {
LAB_002dad8c:
                DAT_00581288[2] = 0;
                FUN_003d54f8(0,10);
                FUN_003d54f8(1,10);
                piVar19 = DAT_00581288;
                DAT_00581288[1] = 8;
                piVar19[0x15] = 0x23;
                FUN_00303460(0x16);
                DAT_00581288[0x16] = (int)temp_v19;
              }
            }
          }
          break;
        case 8:
          temp_v5 = DAT_00581288[2];
          DAT_00581288[2] = temp_v5 + 1;
          if (temp_v5 + 1 == 5) {
            FUN_003d2150(0x10000c5);
            temp_v18 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(&LAB_002dae38,temp_v3,temp_v18,1);
          }
          if (DAT_00581288[2] == 7) {
            FUN_002d1f40(4,0x32,0);
          }
          temp_v5 = FUN_003e5414(DAT_00581288[0x6a]);
          if ((temp_v5 == 0x23) && (temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]), temp_v5 != 0)) {
            FUN_00303460(0x17);
            piVar19 = DAT_00581288;
            DAT_00581288[0x15] = 0x24;
            piVar19[0x16] = (int)temp_v19;
            piVar19[1] = 9;
            piVar19[2] = 0;
          }
        }
      }
      else if (temp_v7 != 0x16) {
        if (temp_v7 < 0x16) {
          if (temp_v7 != 10) {
            if (temp_v7 != 0xb) {
              if (temp_v7 != 0xc) {
                if (temp_v7 == 0x15) {
                  temp_v7 = DAT_00581288[2];
                  DAT_00581288[2] = temp_v7 + 1;
                  if (temp_v7 + 1 == 1) {
                    FUN_003d2150(0x10000c3);
                  }
                  if (DAT_00581288[2] == 0x14) {
                    DAT_005f1adc = 0;
                    if (*(char *)((int)DAT_00581288 + 0x291) != '\0') {
                      FUN_002950a8();
                    }
                    piVar19 = DAT_00581288;
                    DAT_00581288[0x15] = 0x11;
                    piVar19[0x16] = temp_v5;
                  }
                  temp_v5 = FUN_003e5414(DAT_00581288[0x6a]);
                  if ((temp_v5 == 0x11) && (temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]), temp_v5 != 0)) {
                    FUN_003e5728(DAT_00581288[0x6a]);
                    piVar19 = DAT_00581288;
                    DAT_00581288[1] = 3;
                    piVar19[2] = 0;
                  }
                }
              }
              else {
                temp_v5 = FUN_002e07f4();
                if (temp_v5 != 0) {
                  FUN_00314ba8();
                  DAT_00581288[2] = DAT_00581288[2] + 1;
                  FUN_0031ebf8();
                  if (DAT_00581288[2] >= 11) goto LAB_002dad8c;
                }
              }
            }
            else {
              DAT_00581288[2] = DAT_00581288[2] + 1;
              DAT_005f17ac = '\0';
              if (0 < piVar19[2]) {
                FUN_00314ba8();
                piVar19 = DAT_00581288;
                DAT_00581288[0x15] = 0;
                piVar19[0x16] = temp_v5;
                piVar19[1] = 0xc;
                piVar19[2] = 0;
                FUN_001f4908(0,10,0xff);
                FUN_001f4908(1,10,0xff);
              }
            }
          }
          else {
            temp_v5 = FUN_00312d88();
            if (temp_v5 != 0) {
              DAT_005f1adc = 0;
              FUN_003adc58();
              FUN_00303460(0);
              FUN_00313648(1);
              DAT_005f161c = 0;
              DAT_005f1614 = '\0';
              DAT_005f1859 = 1;
              DAT_005f185a = 1;
            }
          }
        }
        else if (temp_v7 != 0x17) {
          if (temp_v7 != 0x18) {
            if (temp_v7 != 0x19) {
              if ((temp_v7 == 99) && (temp_v5 = FUN_00312d88(), temp_v5 != 0)) {
                FUN_001681cc(0xe9);
                FUN_002c2d44(
                            "碂辂閂暁銂薂䂁钂銂膂邂邂薂蒂䦁䂁熂膂邂覂蒂貂馂䂁邂銂薂鎂鎂䂁钂袂薂䂁瞂䂁憂閂钂钂辂躂䒁"
                            );
                DAT_00581288[1] = 2;
                temp_v5 = FUN_003d2150(0x10000d2);
                DAT_00581288[0x99] = temp_v5;
              }
            }
            else {
              temp_v5 = DAT_00581288[2] + 1;
              DAT_00581288[2] = temp_v5;
              if (temp_v5 != 1) {
                if (temp_v5 >= 2) {
                  piVar19[1] = 0xb;
                  piVar19[2] = 0;
                }
              }
              else {
                piVar19[0x15] = 0;
                piVar19[0x16] = 0x40400000;
              }
            }
          }
          else {
            temp_v5 = DAT_00581288[2] + 1;
            DAT_00581288[2] = temp_v5;
            if (temp_v5 != 1) {
              if (temp_v5 >= 2) {
                piVar19[1] = 6;
                piVar19[2] = 0;
              }
            }
            else {
              piVar19[0x15] = 0;
              piVar19[0x16] = 0x40400000;
            }
          }
        }
        else {
          temp_v5 = DAT_00581288[2] + 1;
          DAT_00581288[2] = temp_v5;
          if (temp_v5 != 10) {
            if (temp_v5 >= 0x29) {
              piVar19[1] = 5;
              piVar19[2] = 0;
            }
          }
          else {
            piVar19[0x15] = 0;
            piVar19[0x16] = 0x40400000;
          }
        }
      }
      else {
        temp_v5 = DAT_00581288[2] + 1;
        DAT_00581288[2] = temp_v5;
        if (temp_v5 != 10) {
          if (temp_v5 >= 0x29) {
            piVar19[1] = 4;
            piVar19[2] = 0;
          }
        }
        else {
          piVar19[0x15] = 0;
          piVar19[0x16] = 0x40400000;
        }
      }
    }
    else {
      temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]);
      if ((temp_v5 != 0) && (temp_v5 = FUN_002e07f4(), temp_v5 != 0)) {
        temp_v5 = (int)DAT_005f19d0;
        if (temp_v5 != 0) {
          temp_v7 = temp_v5;
          FUN_0015f858(temp_v5,0);
          FUN_003180c4(0,temp_v7);
          FUN_00480fc0(temp_v5,1);
          FUN_00312db0(&LAB_002dae40);
          FUN_001681c4();
        }
        else {
          FUN_00312db0(&LAB_002dae54);
          FUN_001681c4();
        }
        DAT_00581288[1] = 10;
        DAT_005f19d0 = temp_v19;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    in_d9 = CONCAT44(iStack_38,fStack_3c);
    in_d10 = CONCAT44(fStack_30,fStack_34);
    in_d11 = CONCAT44(fStack_28,fStack_2c);
    temp_v34 = uStack_44;
    goto code_r0x00327ee8;
  case 0x20:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v18 = FUN_00145868();
    piVar11 = DAT_00581288;
    if (DAT_00581288[1] != 0) {
      piVar19 = DAT_00581288;
      if ((DAT_00581288[1] == 1) &&
         (temp_v5 = DAT_00581288[2], DAT_00581288[2] = temp_v5 + 1, piVar19 = DAT_00581288,
         temp_v5 + 1 >= 11)) {
        piVar11[0x16] = 0x40a00000;
        FUN_00313648(1);
        piVar19 = DAT_00581288;
      }
    }
    else {
      DAT_00581288[0x15] = 3;
      piVar11[0x16] = 0x40000000;
      piVar11[0x14] = piVar11[0x13];
      piVar11[10] = piVar11[7];
      piVar11[0xb] = piVar11[8];
      piVar11[0xc] = piVar11[9];
      *(unsigned char *)(piVar11 + 0x1b) = 0;
      FUN_002d1f40(10,0x14,0);
      FUN_00324e38(0);
      FUN_003d4ed8(0x1000224);
      FUN_001bc124();
      FUN_001bbf0c();
      temp_v5 = FUN_00184964(0,1);
      if (temp_v5 == 0) {
        FUN_0014af98();
        FUN_0013c1ec();
        FUN_003d2150(0x10002e4);
        FUN_0013c1ec(temp_v18);
      }
      puVar6 = (unsigned int *)&DAT_005f15fc;
      if (DAT_005f15fc == (unsigned int *)0x5) {
        puVar6 = DAT_005f1600;
      }
      if (!(DAT_005f15fc == (unsigned int *)0x5 && puVar6 == (unsigned int *)0x9)) {
        FUN_003e46f4(0x84);
        FUN_0049fe58(2);
        FUN_0049fc88(2,5);
      }
      else {
        FUN_003e46f4(0x84);
        FUN_0049fe58(2);
        FUN_0049fc88(2,5);
      }
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      piVar19 = DAT_00581288;
    }
    goto LAB_00246d70;
  case 0x21:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    piVar19[0x15] = 0;
    piVar19[0x16] = 0;
    piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    goto LAB_00246d70;
  case 0x22:
    switch(DAT_00581288[1]) {
    case 0:
      DAT_00581288[0x15] = 0x21;
      piVar19[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00303460(5);
      FUN_00234118();
      piVar19 = DAT_00581288;
      piVar11 = DAT_00581288 + 10;
      DAT_00581288[0x14] = DAT_00581288[0x13];
      temp_v5 = piVar19[8];
      temp_v7 = piVar19[9];
      *piVar11 = piVar19[7];
      piVar19[0xb] = temp_v5;
      piVar19[0xc] = temp_v7;
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      return;
    case 1:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (DAT_00581288[2] == 2) {
        FUN_003d2150(0x1000219);
      }
      if ((DAT_00581288[2] == 0x2d) && (FUN_003d2150(0x10002a9), DAT_00581288[2] == 0x2d)) {
        FUN_003d2150(0x10000c9);
      }
      if (DAT_00581288[2] == 0x9c) {
        FUN_003d2150(0x10000c8);
      }
      if (DAT_00581288[2] == 0xf0) {
        FUN_003d2150(0x10002aa);
      }
      piVar19 = DAT_00581288;
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 >= 0xf1) {
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
        return;
      }
      break;
    case 2:
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 >= 0x5b) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        FUN_001f4908(0,10,0xff);
        piVar19 = DAT_00581288;
        DAT_00581288[1] = DAT_00581288[1] + 1;
        piVar19[2] = 0;
        return;
      }
      break;
    case 3:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v5 = FUN_002e07f4();
      if (temp_v5 != 0) {
        FUN_00303460(0);
        piVar19 = DAT_00581288;
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = 0x40a00000;
        func_0x002d871c();
        piVar19 = DAT_00581288;
        DAT_00581288[1] = DAT_00581288[1] + 1;
        piVar19[2] = 0;
        return;
      }
      break;
    case 4:
      temp_v5 = 5;
      piVar19[1] = temp_v5;
      piVar19[2] = 0;
      return;
    case 5:
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      func_0x002b7f18();
      piVar19 = DAT_00581288;
      DAT_00581288[0x15] = 0;
      piVar19[0x16] = 0;
      if (DAT_005f188c == '\0') {
        FUN_0013cab8(0,10,0xff);
      }
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    case 6:
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 >= 0x10) {
        piVar19[0x16] = 0x40a00000;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
code_r0x00313648:
        temp_v5 = FUN_00162e8c();
        piVar19 = DAT_00581288;
        if (*DAT_00581288 != 1) {
          DAT_00581288[1] = 0;
          *piVar19 = 1;
          piVar19[2] = 0;
          piVar19[0x9d] = 0;
          piVar19[0x9e] = 0;
          *(unsigned int *)(temp_v5 + 0x1518) = 0;
          *(unsigned int *)(temp_v5 + 0x151c) = 0;
          if (*piVar19 == 1) {
            piVar19[0x16] = 0x40a00000;
          }
          else if ((*piVar19 == 3) || (DAT_005f17ac = '\0', *piVar19 == 3)) {
            *(unsigned short *)(piVar19 + 0x67) = 0;
          }
        }
        return;
      }
    }
    break;
  case 0x23:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    rt_memcpy_w(afStack_1a8,0x531fd8,0x188);
    temp_v5 = piVar19[1];
    if (temp_v5 == 0) {
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40000000;
      temp_v19 = DAT_005f16cc;
      piVar19[0x13] = (int)DAT_005f16cc;
      piVar19[0x14] = (int)temp_v19;
      temp_v26 = DAT_005f16b8;
      temp_v20 = DAT_005f16b4;
      temp_v19 = DAT_005f16b0;
      piVar19[7] = (int)DAT_005f16b0;
      piVar19[8] = (int)temp_v20;
      piVar19[9] = (int)temp_v26;
      piVar19[10] = (int)temp_v19;
      piVar19[0xb] = (int)temp_v20;
      piVar19[0xc] = (int)temp_v26;
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      FUN_00303460(6);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v5 != 1) {
      if (temp_v5 == 2) {
        temp_v6 = piVar19[2];
        if (temp_v6 < 0x62) {
          piVar19[8] = (int)((float)piVar19[0xb] + afStack_1a8[temp_v6]);
        }
        piVar19[2] = temp_v6 + 1;
        return;
      }
    }
    else {
      temp_v5 = piVar19[2];
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 >= 11) {
        FUN_003128d8();
        FUN_003d2150(0x10000e7);
        piVar19 = DAT_00581288;
        DAT_00581288[1] = DAT_00581288[1] + 1;
        piVar19[2] = 0;
        return;
      }
    }
    break;
  case 0x24:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 == 0) {
      DAT_00581288[0x15] = 0;
      piVar19[0x16] = 0x40400000;
      temp_v20 = DAT_005f16b8;
      temp_v19 = DAT_005f16b4;
      piVar19[10] = (int)DAT_005f16b0;
      piVar19[0xb] = (int)temp_v19;
      piVar19[0xc] = (int)temp_v20;
      temp_v5 = piVar19[7];
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00352bc4();
      piVar19 = DAT_00581288;
      DAT_00581288[0x14] = temp_v5;
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v5 != 1) {
      if (temp_v5 != 2) {
        if (temp_v5 == 3) {
          if (DAT_00581288[2] == 4) {
            fStack_20 = temp_v35;
            fStack_1c = temp_v37;
            FUN_00324e38(0);
            FUN_001bc124();
            FUN_001bbf0c();
            temp_v18 = FUN_00152f44();
            temp_v3 = FUN_0014af98();
            FUN_001628c0(0x2483f0,temp_v3,temp_v18,1);
          }
          piVar19 = DAT_00581288;
          DAT_00581288[7] =
               (int)((float)DAT_00581288[7] +
                    ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.1f);
          piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.1f);
          temp_v5 = piVar19[2] + 1;
          temp_v19 = (float)VectorSignedToFloat(piVar19[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar19[8] = (int)((float)piVar19[8] + temp_v19 * 3.0f);
          piVar19[2] = temp_v5;
          return;
        }
      }
      else {
        pfVar9 = (float *)(DAT_00581288 + 10);
        pfVar17 = (float *)(DAT_00581288 + 7);
        temp_v20 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[9];
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        piVar19[7] = (int)(*pfVar17 + (*pfVar9 - *pfVar17) * 0.1f);
        piVar19[9] = (int)(temp_v19 + (temp_v20 - temp_v19) * 0.1f);
        if (temp_v5 + 1 >= 6) {
          piVar19[0x15] = 6;
          piVar19[0x16] = 0x40400000;
          piVar19[1] = 3;
          piVar19[2] = 0;
          return;
        }
      }
    }
    else {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_002dae68();
      piVar19 = DAT_00581288;
      DAT_00581288[7] =
           (int)((float)DAT_00581288[7] + ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.1f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.1f);
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.1f);
      temp_v5 = piVar19[2];
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 == 1) {
        if ((DAT_005f1600 != (unsigned int *)0x3) && (DAT_005f1600 != (unsigned int *)0x7)) {
          return;
        }
        FUN_00303460(7);
      }
      if (DAT_005f1600 != (unsigned int *)0x3) {
        if (DAT_00581288[2] >= 8) {
          FUN_003d2150(0x10000e8);
          piVar19 = DAT_00581288;
          DAT_00581288[1] = DAT_00581288[1] + 1;
          piVar19[2] = 0;
          return;
        }
      }
      else if (DAT_00581288[2] >= 0x10) {
        FUN_003d2150(0x10000e8);
        piVar19 = DAT_00581288;
        DAT_00581288[1] = DAT_00581288[1] + 1;
        piVar19[2] = 0;
        return;
      }
    }
    break;
  case 0x25:
    temp_v7 = DAT_00581288[10];
    temp_v26 = (float)DAT_00581288[0xb];
    temp_v5 = DAT_00581288[0xc];
    DAT_00581288[0x14] = (int)DAT_005f16bc;
    *(unsigned char *)(piVar19 + 0x1b) = 0;
    if (((DAT_005f161e != '\0') && (DAT_005f1c48 == '\0')) &&
       ((temp_v28 = (float)piVar19[0x1a], 0xbdcccccc < (unsigned int)temp_v28 || ((int)temp_v28 >= 0x3dcccccd)))) {
      piVar19[0xb] = (int)((temp_v26 - 2.0f) - temp_v28);
    }
    temp_v28 = (float)piVar19[0x1f];
    piVar19[0x15] = 0x12;
    piVar19[0x16] = 0x41200000;
    if ((int)temp_v28 < 0x40800001) {
      piVar19[0x1f] = 0x40800000;
    }
    else {
      piVar19[0x1f] = (int)(temp_v28 - (temp_v28 - 4.0f) * 0.5f);
    }
    temp_v28 = 0.017453292f;
    temp_v19 = temp_v19 * 0.017453292f;
    fStack_3c = temp_v20;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_001bc124();
    piVar19 = DAT_00581288;
    DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * (float)DAT_00581288[0x1f]);
    temp_v28 = (float)piVar19[0x14] * temp_v28;
    FUN_001bbf0c();
    piVar19 = DAT_00581288;
    DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v28 * (float)DAT_00581288[0x1f]);
    piVar19[0xd] = temp_v7;
    piVar19[0xe] = (int)temp_v26;
    piVar19[0xf] = temp_v5;
    if ((DAT_005f1c48 == '\0') && (DAT_005f161e != '\0')) {
      piVar11 = piVar19 + 10;
      FUN_0025ef68(piVar11,piVar19 + 0xd,0);
      piVar19 = DAT_00581288;
      if (piVar11 != (int *)0x0) {
        DAT_00581288[0x1a] = 0;
      }
      else {
        temp_v19 = (float)DAT_00581288[0x1a] + 2.0f;
        DAT_00581288[0x1a] = (int)temp_v19;
        if ((int)temp_v19 >= 0x41a00001) {
          temp_v19 = 20.0f;
        }
        piVar19[0x1a] = (int)temp_v19;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    DAT_00581288[0x57] = 0;
    FUN_00327ee8();
    piVar19 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.33333334f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    FUN_002dae68();
    piVar19 = DAT_00581288;
    piVar11 = DAT_00581288 + 8;
    temp_v13 = DAT_00581288[9];
    DAT_00581288[0x10] = DAT_00581288[7];
    piVar19[0x11] = *piVar11;
    piVar19[0x12] = temp_v13;
    piVar19[0xd] = temp_v7;
    piVar19[0xe] = (int)temp_v26;
    piVar19[0xf] = temp_v5;
    temp_v5 = 0xf;
    in_d8 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00303460;
  case 0x26:
    DAT_00581288[0x14] = (int)DAT_005f16bc;
    if (piVar19[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (((piVar19[1] == 1) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 == 4)) &&
         (DAT_005f16e0 < 99)) {
        if (DAT_005f16e0 != 0x62) {
          if (DAT_005f16e0 == 0x61) {
            temp_v5 = 0x10001b6;
          }
          else if (DAT_005f16e0 == 0x60) {
            temp_v5 = 0x100010c;
          }
          else if (DAT_005f16e0 == 0x5f) {
            temp_v5 = 0x100010e;
          }
          else {
            temp_v5 = DAT_005f16e0 + 0x10000d6;
          }
          FUN_003d2150(temp_v5);
        }
        else {
          FUN_003d2150(0x1000130);
        }
        DAT_005f1a50 = DAT_005f16e0;
        if (DAT_005f16e0 == 0x61 || DAT_005f16e0 == 0x60) {
          DAT_005f1a50 = -1;
        }
        if (DAT_005f1a54 != '\0') {
          DAT_005f1a54 = '\0';
          DAT_005f1a50 = -1;
        }
      }
    }
    else {
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = 1;
      piVar19[2] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
    }
    FUN_002e364c(DAT_00581288 + 10);
    DAT_00581288[0x57] = 0;
    FUN_00327ee8();
    piVar19 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    temp_v20 = (float)DAT_00581288[0x13];
    FUN_002b5cd4();
    temp_v19 = temp_v20;
    if (temp_v20 < 0.0f) {
      temp_v19 = -temp_v20;
    }
    if ((int)temp_v19 < 0x41700000) {
      temp_v26 = 0.2f;
    }
    else {
      temp_v26 = 0.33333334f;
    }
    piVar19 = (int *)romwright_f2u((float)((temp_v19 * temp_v26)));
    piVar11 = piVar19;
    if ((int)piVar19 < 0x40a00000) {
      piVar11 = (int *)0x40a00000;
    }
    if (temp_v19 <= romwright_u2f((unsigned int)(piVar11))) {
      piVar19 = DAT_00581288;
    }
    if (temp_v19 <= romwright_u2f((unsigned int)(piVar11))) {
      temp_v19 = (float)piVar19[0x14];
    }
    else if (temp_v20 < 0.0f) {
      temp_v19 = (float)DAT_00581288[0x13] - romwright_u2f((unsigned int)(piVar11));
    }
    else {
      temp_v19 = (float)DAT_00581288[0x13] + romwright_u2f((unsigned int)(piVar11));
    }
    if (temp_v19 < 0.0f) {
      temp_v19 = temp_v19 + 360.0f;
    }
    if ((int)temp_v19 >= 0x43b40001) {
      temp_v19 = temp_v19 - 360.0f;
    }
    DAT_00581288[0x13] = (int)temp_v19;
    return;
  case 0x27:
    temp_v33 = *(unsigned long long *)(DAT_00581288 + 10);
    temp_v5 = DAT_00581288[0xc];
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    if (DAT_00581288[1] != 0) {
      if (DAT_00581288[1] == 1) {
        DAT_00581288[2] = DAT_00581288[2] + 1;
        FUN_003e542c(piVar19[0x6a]);
        piVar19 = DAT_00581288;
        if (in_s0 >= 0x41800000) {
          DAT_00581288[0x15] = 0x14;
          piVar19[0x16] = 0;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 0x13;
      piVar19[0x16] = 0;
      FUN_00324e38(0);
      piVar19 = DAT_00581288;
      *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
    }
    pfVar9 = afStack_1a8 + 1;
    FUN_002469d0();
    piVar19 = DAT_00581288;
    piVar11 = DAT_00581288 + 10;
    DAT_00581288[0xc] = iStack_19c;
    *piVar11 = (int)afStack_1a8[1];
    piVar19[0xb] = (int)afStack_1a8[2];
    piVar19[0xd] = (int)temp_v33;
    piVar19[0xe] = (int)((unsigned long long)temp_v33 >> 0x20);
    piVar19[0xf] = temp_v5;
    goto joined_r0x00248750;
  case 0x28:
    if (DAT_00581288[1] == 0) {
      DAT_00581288[0x15] = 0x11;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = 1;
      piVar19[2] = 0;
      return;
    }
    if (DAT_00581288[1] != 1) {
      return;
    }
    temp_v5 = DAT_00581288[2] + 1;
    DAT_00581288[2] = temp_v5;
    if (temp_v5 == 0x96) {
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      return;
    }
    break;
  case 0x29:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    if (DAT_005f1774 != '\0') {
      piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.083333336f)
      ;
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.083333336f
                        );
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.083333336f
                        );
    }
    else {
      piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f)
      ;
      piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.33333334f);
      piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f)
      ;
    }
    temp_v5 = piVar19[1];
    if (temp_v5 == 0) {
      FUN_00324e38(1);
      piVar19 = DAT_00581288;
      if (DAT_005f15fc != (unsigned int *)0x16) {
        DAT_00581288[0x15] = 0x1f;
        piVar19[0x16] = 0;
        if (DAT_005f1774 != '\0') {
          temp_v5 = piVar19[10];
          FUN_00352bc4();
          DAT_00581288[0x14] = temp_v5;
        }
      }
      else {
        DAT_00581288[0x15] = 0;
        piVar19[0x16] = 0x40a00000;
        temp_v5 = piVar19[7];
        FUN_00352bc4();
        DAT_00581288[0x14] = temp_v5;
      }
      FUN_00303460(0xe);
      FUN_001681cc(0xdd);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v5 != 1) {
      if ((temp_v5 == 2) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 >= 4)) {
        piVar19[1] = 3;
        piVar19[2] = 0;
        return;
      }
    }
    else {
      temp_v5 = piVar19[2] + 1;
      piVar19[2] = temp_v5;
      if (DAT_005f15fc == (unsigned int *)0x16 && temp_v5 == 0x14) {
        piVar19[0x15] = 0xe;
        piVar19[0x16] = 0x40a00000;
        return;
      }
      if (temp_v5 >= 0x24) {
        piVar19[1] = 2;
        piVar19[2] = 0;
        return;
      }
    }
    break;
  case 0x2a:
    if (DAT_00581288[1] == 0) {
      DAT_00581288[0x15] = 0x20;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
      return;
    }
    if (DAT_00581288[1] == 1) {
      DAT_00581288[2] = DAT_00581288[2] + 1;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v5 = FUN_003e56f0(piVar19[0x6a]);
      if (temp_v5 == 0) {
        return;
      }
      goto code_r0x00313648;
    }
    break;
  case 0x2b:
    temp_v7 = 0;
    temp_v19 = 5.0f;
    temp_v5 = DAT_00581288[1];
    fStack_3c = temp_v20;
    fStack_30 = temp_v35;
    fStack_2c = temp_v37;
    if (temp_v5 < 5) {
      pfVar9 = (float *)(DAT_00581288 + 7);
      temp_v27 = (float)DAT_00581288[0xc];
      temp_v26 = (float)DAT_00581288[9];
      temp_v32 = (float)DAT_00581288[0xb];
      temp_v28 = *pfVar9;
      temp_v21 = (float)DAT_00581288[8];
      temp_v25 = (float)DAT_00581288[10];
      DAT_00581288[0xd] = (int)temp_v25;
      piVar19[0xe] = (int)temp_v32;
      piVar19[0xf] = (int)temp_v27;
      piVar19[9] = (int)(temp_v26 + (temp_v27 - temp_v26) * 0.33333334f);
      *pfVar9 = temp_v28 + (temp_v25 - temp_v28) * 0.33333334f;
      piVar19[8] = (int)(temp_v21 + (temp_v32 - temp_v21) * 0.16666667f);
      if (temp_v5 != 2) {
        piVar19[0xb] = (int)(temp_v32 - 5.0f);
        FUN_0025ef68(piVar19 + 10,piVar19 + 0xd,0);
        piVar19 = DAT_00581288;
        piVar11 = DAT_00581288 + 0xe;
        temp_v5 = DAT_00581288[0xf];
        DAT_00581288[10] = DAT_00581288[0xd];
        piVar19[0xb] = *piVar11;
        piVar19[0xc] = temp_v5;
      }
    }
    FUN_002e364c(DAT_00581288 + 10);
    piVar19 = DAT_00581288;
    temp_v5 = 0x42a00000;
    temp_v20 = 0.017453292f;
    switch(DAT_00581288[1]) {
    case 0:
      DAT_00581288[0x15] = 0x22;
      piVar19[0x16] = temp_v7;
      piVar19[1] = 1;
      piVar19[2] = 0;
      piVar19[0x14] = 0x42a00000;
      piVar19[0x13] = 0x42a00000;
      DAT_005f1a4e = 1;
      return;
    case 1:
      if (DAT_00581288[2] < 2) {
        DAT_00581288[0xb] = (int)((float)DAT_00581288[0xb] + temp_v19);
      }
      else {
        if (DAT_00581288[2] == 2) {
          temp_v18 = FUN_00152f44();
          temp_v3 = FUN_0014af98();
          FUN_001628c0(&LAB_002d94f8,temp_v3,temp_v18,1);
          FUN_00303460(0x12);
        }
        if (DAT_00581288[2] >= 2) {
          temp_v19 = (float)DAT_00581288[7];
          FUN_00352bc4();
          temp_v19 = temp_v19 * temp_v20;
          FUN_001bc124();
          piVar19 = DAT_00581288;
          temp_v26 = 20.0f;
          DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * 20.0f);
          temp_v19 = (float)piVar19[7];
          FUN_00352bc4();
          temp_v19 = temp_v19 * temp_v20;
          FUN_001bbf0c();
          piVar19 = DAT_00581288;
          DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v19 * temp_v26);
          if (piVar19[2] >= 0x17) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
            piVar19[7] = -0x3bdd0000;
            piVar19[9] = 0x45051000;
            piVar19[8] = 0x445f4000;
            piVar19[10] = -0x3bdd0000;
            piVar19[0xb] = 0x445f4000;
            piVar19[0xc] = 0x45051000;
            FUN_003e5b1c(piVar19[0x6a]);
            FUN_0025ef68(DAT_00581288 + 10,DAT_00581288 + 0xd,0);
            piVar19 = DAT_00581288;
            piVar11 = DAT_00581288 + 0xe;
            temp_v5 = DAT_00581288[0xf];
            DAT_00581288[10] = DAT_00581288[0xd];
            piVar19[0xb] = *piVar11;
            piVar19[0xc] = temp_v5;
            *(unsigned char *)(DAT_005806a4 + 0x2d) = 0;
            FUN_00303460(0x13);
            temp_v26 = 180.0f;
            temp_v19 = ((float)DAT_00581288[0x14] + 180.0f) * temp_v20;
            FUN_001bc124();
            piVar19 = DAT_00581288;
            temp_v35 = 500.0f;
            DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * 500.0f);
            temp_v20 = ((float)piVar19[0x14] + temp_v26) * temp_v20;
            FUN_001bbf0c();
            DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v20 * temp_v35);
          }
        }
      }
      DAT_00581288[2] = DAT_00581288[2] + 1;
      return;
    case 2:
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 < 0x15) {
        return;
      }
      piVar19[1] = 3;
      piVar19[2] = 0;
      FUN_003e5b9c(piVar19[0x6a]);
      piVar19 = DAT_00581288;
      DAT_00581288[7] = -0x3b9e8000;
      piVar19[9] = 0x450b5000;
      piVar19[8] = 0x4466c000;
      piVar19[10] = -0x3b9e8000;
      piVar19[0xb] = 0x4466c000;
      piVar19[0xc] = 0x450b5000;
      FUN_0025ef68(piVar19 + 10,piVar19 + 0xd,0);
      piVar19 = DAT_00581288;
      piVar11 = DAT_00581288 + 0xe;
      temp_v5 = DAT_00581288[0xf];
      DAT_00581288[10] = DAT_00581288[0xd];
      piVar19[0xb] = *piVar11;
      piVar19[0xc] = temp_v5;
      return;
    case 3:
      DAT_00581288[2] = DAT_00581288[2] + 1;
      temp_v19 = (float)piVar19[0x14] * 0.017453292f;
      FUN_001bc124();
      piVar19 = DAT_00581288;
      temp_v26 = 22.5f;
      DAT_00581288[10] = (int)((float)DAT_00581288[10] + temp_v19 * 22.5f);
      temp_v20 = (float)piVar19[0x14] * temp_v20;
      FUN_001bbf0c();
      piVar19 = DAT_00581288;
      DAT_00581288[0xc] = (int)((float)DAT_00581288[0xc] + temp_v20 * temp_v26);
      if (piVar19[2] < 0x29) {
        return;
      }
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      temp_v5 = 0x14;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    case 4:
      DAT_00581288[0x15] = 0x23;
      piVar19[0x16] = temp_v7;
      piVar19[1] = 5;
      piVar19[2] = 0;
      iStack_38 = 0;
      fStack_34 = 0.0f;
      FUN_00314c38(0x86,0,0);
      DAT_005f1604 = 0x86;
      return;
    case 5:
      temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
      FUN_001bc124();
      piVar19 = DAT_00581288;
      temp_v26 = 100.0f;
      DAT_00581288[7] = (int)((float)DAT_00581288[7] + temp_v19 * 100.0f);
      temp_v20 = (float)piVar19[0x14] * temp_v20;
      FUN_001bbf0c();
      piVar19 = DAT_00581288;
      temp_v19 = (float)DAT_00581288[9] + temp_v20 * temp_v26;
      DAT_00581288[9] = (int)temp_v19;
      piVar19[8] = -0x3d420000;
      piVar19[10] = piVar19[7];
      piVar19[0xb] = -0x3d420000;
      piVar19[0xc] = (int)temp_v19;
      FUN_0025ef68(piVar19 + 10,piVar19 + 0xd,0);
      piVar19 = DAT_00581288;
      piVar11 = DAT_00581288 + 0xd;
      piVar7 = DAT_00581288 + 10;
      piVar24 = DAT_00581288 + 0xe;
      temp_v7 = DAT_00581288[0xf];
      DAT_00581288[2] = 0;
      *piVar7 = *piVar11;
      piVar19[0xb] = *piVar24;
      piVar19[0xc] = temp_v7;
      piVar19[0x14] = temp_v5;
      piVar19[1] = piVar19[1] + 1;
      return;
    case 6:
      temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]);
      piVar19 = DAT_00581288;
      if (temp_v5 == 0) {
        return;
      }
      DAT_00581288[0x15] = 0x24;
      piVar19[0x16] = temp_v7;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      temp_v5 = 0x15;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    case 7:
      temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]);
      if (temp_v5 == 0) {
        return;
      }
      *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
      DAT_005f1a4e = 0;
      FUN_00313648(1);
      temp_v5 = 0;
      in_d8 = CONCAT44(fStack_2c,fStack_30);
      in_d9 = CONCAT44(fStack_24,fStack_28);
      in_d10 = CONCAT44(fStack_1c,fStack_20);
      break;
    default:
      return;
    }
    goto code_r0x00303460;
  case 0x2d:
    temp_v5 = 0;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    rt_memcpy_w(afStack_1a8,0x531f38,0xa0);
    piVar19 = DAT_00581288;
    temp_v7 = DAT_00581288[1];
    if (temp_v7 == 0) {
      DAT_00581288[0x14] = (int)DAT_005f16bc;
      DAT_005f1859 = 0;
      DAT_005f185a = 0;
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40400000;
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      FUN_00303460(0x1a);
      DAT_005f1a4e = 1;
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        return;
      }
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 == 1) {
        in_s0 = 0x3f400000;
        temp_v5 = *(int *)(piVar19[0x61] + 4);
        *(unsigned int *)(temp_v5 + 0x1fc) = 0x3f400000;
        FUN_003fe86c(temp_v5,0,2);
        *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
        FUN_003e54b8(DAT_00581288[0x6a]);
        FUN_003e5728(DAT_00581288[0x6a]);
      }
      if (DAT_00581288[2] >= 7) {
        DAT_005f17b0 = DAT_00581288[7];
        DAT_005f17b4 = DAT_00581288[8];
        DAT_005f17b8 = DAT_00581288[9];
        DAT_005f17bc = DAT_00581288[0x13];
        DAT_005f1a4f = 1;
      }
      FUN_003e542c(DAT_00581288[0x6a]);
      if (in_s0 >= 0x41500000) {
        FUN_003fe86c(*(unsigned int *)(DAT_00581288[0x61] + 4),0,2);
        FUN_003e54b8(DAT_00581288[0x6a]);
      }
      piVar19 = DAT_00581288;
      if (DAT_00581288[2] < 0x1e) {
        return;
      }
      DAT_005f1859 = 1;
      DAT_005f185a = 1;
      DAT_005f1614 = 0;
      DAT_005f161c = 0;
      DAT_005f1a4f = 0;
      temp_v5 = *(int *)(DAT_00581288[0x61] + 4);
      *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) | 3;
      *(unsigned int *)(temp_v5 + 0x1fc) = 0x3f800000;
      FUN_003e5728(piVar19[0x6a]);
      DAT_005f1a4e = 0;
      FUN_00313648(1);
      FUN_00303460(0);
      return;
    }
    temp_v7 = DAT_00581288[2] + 1;
    DAT_00581288[2] = temp_v7;
    goto joined_r0x002495a4;
  case 0x2e:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 == 0) {
      DAT_00581288[0x15] = 0x20;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
      return;
    }
    if (temp_v5 == 1) {
      DAT_00581288[1] = 2;
      piVar19[2] = 0;
      temp_v18 = 0;
      temp_v5 = *(int *)(*(int *)(piVar19[0x6a] + 8) + 4);
      if (temp_v5 == 0) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v6 = FUN_004ffb58();
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_003fd924();
      FUN_003fd7c0(temp_v5,temp_v6,0);
      temp_v7 = *(int *)(temp_v5 + 0x20c);
      if (temp_v7 != 0) {
        temp_v7 = temp_v7 + 0xc;
      }
      if ((temp_v6 < *(unsigned short *)(*(int *)(temp_v7 + 0x30) + 0x7c)) &&
         (temp_v7 = *(int *)(*(int *)(*(int *)(temp_v7 + 0x30) + 0x78) + temp_v6 * 4), temp_v7 != 0)) {
        *(unsigned int *)(temp_v5 + 0xb4) = temp_v6;
        *(unsigned int *)(temp_v5 + 0xb8) = temp_v18;
        *(int *)(temp_v5 + 0xc0) = temp_v7;
        FUN_0045adc0(temp_v5 + 200,temp_v7,*(unsigned int *)(temp_v5 + 0x210));
        *(unsigned char *)(temp_v5 + 0xd4) = 0;
      }
      temp_v5 = *(int *)(temp_v5 + 0x25c);
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0x10) = temp_v6;
        FUN_0041a080(temp_v5 + 0x1c);
        piVar19 = (int *)(temp_v5 + 0x1c);
        temp_v13 = *(int *)(temp_v5 + 4);
        *(unsigned int *)(temp_v5 + 0x1c) = 0;
        temp_v7 = 0;
        if (0 < *(int *)(temp_v13 + 8)) {
          do {
            piVar11 = *(int **)(*(int *)(temp_v13 + 0xc) + temp_v7 * 4);
            temp_v16 = (piVar11[1] & 1U) == 0;
            if (temp_v16) {
              piVar11 = (int *)*piVar11;
            }
            if (temp_v16 && piVar11 == (int *)temp_v6) {
              *piVar19 = *piVar19 + 1;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < *(int *)(temp_v13 + 8));
          if (*piVar19 != 0) {
            fStack_28 = 1.4013e-45f;
            temp_v18 = 0x100;
            FUN_00163060(0x100,0x100,0,*piVar19 << 2);
            *(unsigned int *)(temp_v5 + 0x20) = temp_v18;
            temp_v14 = 0;
            temp_v7 = 0;
            if (temp_v7 < *(int *)(temp_v13 + 8)) {
              do {
                puVar18 = *(unsigned int **)(*(int *)(temp_v13 + 0xc) + temp_v7 * 4);
                temp_v11 = puVar18[1];
                temp_v16 = (temp_v11 & 1) == 0;
                if (temp_v16) {
                  temp_v11 = *puVar18;
                }
                if (temp_v16 && temp_v11 == temp_v6) {
                  puVar12 = (unsigned int *)0x10;
                  FUN_00178b04(0x10,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp",
                               0xf0);
                  if (puVar12 != (unsigned int *)0x0) {
                    *puVar12 = 0xffffffff;
                    puVar12[1] = 0;
                    puVar12[2] = 0;
                    puVar12[3] = 0;
                  }
                  *puVar12 = *puVar18;
                  puVar12[1] = puVar18[1];
                  puVar12[2] = puVar18[2];
                  temp_v11 = puVar18[3];
                  FUN_00291038();
                  puVar12[3] = temp_v11;
                  *(unsigned int **)(*(int *)(temp_v5 + 0x20) + temp_v14 * 4) = puVar12;
                  temp_v14 = temp_v14 + 1;
                }
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < *(int *)(temp_v13 + 8));
            }
            return;
          }
        }
        *(unsigned int *)(temp_v5 + 0x20) = 0;
        return;
      }
      return;
    }
    if (temp_v5 == 2) {
      DAT_00581288[2] = DAT_00581288[2] + 1;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      temp_v5 = FUN_003e56f0(piVar19[0x6a]);
      if ((temp_v5 != 0) && (FUN_003e5728(DAT_00581288[0x6a]), DAT_00581288[2] >= 5))
      goto code_r0x00313648;
    }
    break;
  case 0x2f:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 == 0) {
      DAT_00581288[0x15] = 6;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
      DAT_005f1a4e = 1;
      return;
    }
    if (temp_v5 != 1) {
      if (temp_v5 != 2) {
        return;
      }
      temp_v5 = DAT_00581288[2];
      DAT_00581288[8] = (int)((float)DAT_00581288[8] - 36.0f);
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 < 0x51) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00313648(0x30);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    DAT_00581288[2] = 0;
    piVar19[1] = 2;
    piVar19[0x14] = 0x43550000;
    piVar19[0x13] = 0x43550000;
    piVar19[7] = 0x43220000;
    piVar19[8] = 0x44da6000;
    piVar19[9] = -0x3b4fc000;
    piVar19[10] = 0x43220000;
    piVar19[0xb] = 0x44da6000;
    piVar19[0xc] = -0x3b4fc000;
    *(unsigned char *)(DAT_005806a4 + 0x2d) = 0;
    temp_v5 = 0x1b;
    fStack_3c = temp_v20;
    goto code_r0x00303460;
  case 0x31:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 == 0) {
      DAT_00581288[0x15] = 6;
      piVar19[0x16] = 0;
      piVar19[1] = 1;
      piVar19[2] = 0;
      DAT_005f1a4e = 1;
      return;
    }
    if (temp_v5 != 1) {
      if (temp_v5 != 2) {
        return;
      }
      temp_v5 = DAT_00581288[2];
      DAT_00581288[8] = (int)((float)DAT_00581288[8] + 36.0f);
      piVar19[2] = temp_v5 + 1;
      if (temp_v5 + 1 < 0x51) {
        return;
      }
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00313648(0x32);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
    DAT_00581288[2] = 0;
    piVar19[1] = 2;
    piVar19[9] = -0x3b4fc000;
    piVar19[0x14] = 0x43550000;
    piVar19[0x13] = 0x43550000;
    piVar19[7] = 0x43220000;
    piVar19[8] = -0x3c380000;
    piVar19[0xc] = -0x3b4fc000;
    piVar19[10] = 0x43220000;
    piVar19[0xb] = -0x3c380000;
    *(unsigned char *)(DAT_005806a4 + 0x2d) = 0;
    temp_v5 = 0x1c;
    fStack_3c = temp_v20;
    goto code_r0x00303460;
  case 0x33:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar19 = DAT_00581288;
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    piVar19[7] = (int)((float)piVar19[7] + ((float)piVar19[10] - (float)piVar19[7]) * 0.33333334f);
    piVar19[8] = (int)((float)piVar19[8] + ((float)piVar19[0xb] - (float)piVar19[8]) * 0.16666667f);
    piVar19[9] = (int)((float)piVar19[9] + ((float)piVar19[0xc] - (float)piVar19[9]) * 0.33333334f);
    if (piVar19[1] == 0) {
      FUN_00324e38(1);
      FUN_00303460(0x1d);
      piVar19 = DAT_00581288;
      DAT_00581288[0x15] = 0x29;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      return;
    }
    break;
  case 0x34:
    if (DAT_00581288[1] == 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00324e38(1);
      piVar19 = DAT_00581288;
      DAT_00581288[0x15] = 0x2a;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      return;
    }
    if (DAT_00581288[1] != 1) {
      return;
    }
    fStack_3c = temp_v20;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]);
    if (temp_v5 == 0) {
      return;
    }
    *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
    FUN_00313648(1);
    temp_v5 = 0;
    in_d8 = CONCAT44(fStack_1c,fStack_20);
code_r0x00303460:
    piVar19 = DAT_005806a4;
    piVar11 = DAT_005806a4 + 8;
    *(unsigned char *)(DAT_005806a4 + 0x88) = 0;
    *piVar19 = temp_v5;
    piVar19[1] = 0;
    piVar19[2] = 0;
    temp_v7 = *piVar11;
    piVar19[0xa6] = 0;
    piVar19[0xb] = temp_v7;
    piVar19[0xc] = piVar19[9];
    piVar19[0xd] = piVar19[10];
    if (temp_v5 != 0) {
      piVar19[0x84] = 0;
      piVar19[0x85] = 0;
      *(unsigned char *)(piVar19 + 0x2d) = 0;
      *(unsigned char *)((int)piVar19 + 0xb5) = 0;
      *(unsigned short *)((int)piVar19 + 0xb6) = 10;
      *(unsigned short *)(piVar19 + 0x2e) = 0;
      piVar19[0x2f] = 0;
      piVar19[0x30] = 0;
      piVar19[0x31] = 0x3f800000;
      if (temp_v5 == 8 || temp_v5 == 9) {
        piVar19[0xa6] = 0x43340000;
      }
    }
    temp_v14 = DAT_005f1714;
    temp_v13 = DAT_005f1710;
    temp_v7 = DAT_005f16f8;
    temp_v5 = DAT_005f16f4;
    piVar11 = DAT_00581288;
    piVar19 = DAT_005806a4;
    fStack_34 = (float)in_d8;
    fStack_30 = (float)(in_d8 >> 0x20);
    fStack_2c = (float)in_d9;
    fStack_28 = (float)((unsigned long long)in_d9 >> 0x20);
    fStack_24 = (float)in_d10;
    fStack_20 = (float)(in_d10 >> 0x20);
    fStack_1c = (float)in_d11;
    switch(*DAT_005806a4) {
    case 0:
      FUN_0033982c();
      break;
    case 1:
      temp_v20 = (float)DAT_005806a4[6];
      FUN_002b5cd4();
      temp_v6 = in_fpscr & 0xfffffff;
      temp_v19 = temp_v20;
      if (temp_v20 < 0.0f) {
        temp_v19 = -temp_v20;
      }
      temp_v26 = temp_v19 * 0.2f;
      in_fpscr = temp_v6 | ((unsigned int)(temp_v26 <= temp_v19) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        DAT_005806a4[6] = DAT_00581288[0x14];
      }
      else {
        in_fpscr = temp_v6 | ((unsigned int)(0.0f <= temp_v20) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v26 = (float)DAT_005806a4[6] - temp_v26;
        }
        else {
          temp_v26 = (float)DAT_005806a4[6] + temp_v26;
        }
        DAT_005806a4[6] = (int)temp_v26;
      }
      break;
    case 2:
      DAT_005806a4[6] = DAT_00581288[0x14];
      break;
    case 3:
      DAT_005806a4[0x1d] = DAT_005f16f0;
      piVar19[0x1e] = temp_v5;
      piVar19[0x1f] = temp_v7;
      temp_v7 = DAT_005f1704;
      temp_v5 = DAT_005f1700;
      piVar19[0x1a] = DAT_005f16fc;
      piVar19[0x1b] = temp_v5;
      piVar19[0x1c] = temp_v7;
      piVar19[0x20] = DAT_005f1708;
      break;
    case 4:
      DAT_005806a4[0x24] = DAT_005f170c;
      piVar19[0x25] = temp_v13;
      piVar19[0x26] = temp_v14;
      temp_v7 = DAT_005f171c;
      temp_v5 = DAT_005f1718;
      piVar19[0x23] = DAT_005f1720;
      piVar19[0x21] = temp_v5;
      piVar19[0x22] = temp_v7;
      break;
    case 5:
      FUN_002d1780();
      break;
    case 6:
      temp_v20 = 0.017453292f;
      temp_v19 = (float)DAT_00581288[8];
      temp_v5 = DAT_00581288[9];
      DAT_005806a4[0x17] = DAT_00581288[7];
      piVar19[0x18] = (int)temp_v19;
      piVar19[0x19] = temp_v5;
      piVar19[0x18] = (int)(temp_v19 + 150.0f);
      temp_v19 = (float)piVar11[0xb];
      temp_v5 = piVar11[0xc];
      piVar19[0x14] = piVar11[10];
      piVar19[0x15] = (int)temp_v19;
      piVar19[0x16] = temp_v5;
      piVar19[0x15] = (int)(temp_v19 + 150.0f);
      temp_v19 = (float)piVar11[0x14] * 0.017453292f;
      FUN_001bc124();
      temp_v26 = 600.0f;
      DAT_005806a4[0x14] = (int)((float)DAT_005806a4[0x14] + temp_v19 * 600.0f);
      temp_v20 = (float)DAT_00581288[0x14] * temp_v20;
      FUN_001bbf0c();
      DAT_005806a4[0x16] = (int)((float)DAT_005806a4[0x16] + temp_v20 * temp_v26);
      break;
    case 7:
      temp_v19 = (float)DAT_00581288[0x13];
      FUN_00272e64();
      temp_v7 = (int)temp_v19;
      temp_v19 = 0.017453292f;
      temp_v5 = temp_v8;
      if (temp_v7 != 0x5a) {
        temp_v5 = temp_v7 - 0x100;
      }
      temp_v20 = (float)DAT_005806a4[0xa6] * 0.017453292f;
      if (!(temp_v7 != 0x5a && temp_v5 != 0xe)) {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xd] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xb] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xd] = 0;
      }
      piVar19 = DAT_005806a4;
      temp_v19 = (float)DAT_005806a4[0xa6] + 10.0f;
      DAT_005806a4[0xa6] = (int)temp_v19;
      if ((int)temp_v19 >= 0x43340001) {
        temp_v19 = 180.0f;
      }
      piVar19[0xa6] = (int)temp_v19;
      break;
    case 8:
      temp_v19 = (float)DAT_00581288[0x13];
      FUN_00272e64();
      temp_v7 = (int)temp_v19;
      temp_v19 = 0.017453292f;
      temp_v5 = temp_v9;
      if (temp_v7 != 0x5a) {
        temp_v5 = temp_v7 - 0x100;
      }
      temp_v20 = (float)DAT_005806a4[0xa6] * 0.017453292f;
      if (!(temp_v7 != 0x5a && temp_v5 != 0xe)) {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xd] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xb] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xd] = 0;
      }
      temp_v19 = (float)DAT_005806a4[0xa6];
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < 0.0f) << 0x1f) |
               ((unsigned int)(temp_v19 == 0.0f) << 0x1e);
      in_fpscr = temp_v6 | ((unsigned int)(temp_v19 != temp_v19) << 0x1c);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      piVar19 = DAT_005806a4;
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v19 = 0.0f;
      }
      piVar19[0xa6] = (int)temp_v19;
      break;
    case 9:
      temp_v19 = (float)DAT_00581288[0x13];
      FUN_00272e64();
      temp_v7 = (int)temp_v19;
      temp_v19 = 0.017453292f;
      temp_v5 = temp_v10;
      if (temp_v7 != 0x5a) {
        temp_v5 = temp_v7 - 0x100;
      }
      temp_v20 = (float)DAT_005806a4[0xa6] * 0.017453292f;
      if (!(temp_v7 != 0x5a && temp_v5 != 0xe)) {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xd] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xb] = 0;
      }
      else {
        FUN_001bc124();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xb] = (int)temp_v20;
        temp_v19 = (float)piVar19[0xa6] * temp_v19;
        FUN_001bbf0c();
        piVar19 = DAT_005806a4;
        DAT_005806a4[0xc] = (int)temp_v19;
        piVar19[0xd] = 0;
      }
      piVar19 = DAT_005806a4;
      temp_v19 = (float)DAT_005806a4[0xa6] - 10.0f;
      DAT_005806a4[0xa6] = (int)temp_v19;
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < 0.0f) << 0x1f) |
               ((unsigned int)(temp_v19 == 0.0f) << 0x1e);
      in_fpscr = temp_v6 | ((unsigned int)(temp_v19 != temp_v19) << 0x1c);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v19 = 0.0f;
      }
      piVar19[0xa6] = (int)temp_v19;
      break;
    case 10:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 == 2) {
            FUN_0033a374();
            piVar19 = DAT_005806a4;
            DAT_005806a4 = piVar19;
            if (temp_v5 != 0) {
              piVar19[1] = piVar19[1] + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v5 != 0) {
            fStack_b8 = (float)piVar19[0x95];
            fStack_b4 = (float)piVar19[0x96];
            fStack_b0 = (float)piVar19[0x97];
            temp_v20 = 0.017453292f;
            fStack_ac = (float)piVar19[0x98];
            fStack_a8 = (float)piVar19[0x99];
            iStack_a4 = piVar19[0x9a];
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
            temp_v35 = (float)DAT_00581288[10];
            temp_v28 = (float)DAT_00581288[0xb];
            FUN_001bc124();
            temp_v37 = 90.0f;
            temp_v35 = temp_v35 + temp_v19 * 90.0f;
            temp_v28 = temp_v28 + 65.0f;
            temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
            FUN_001bbf0c();
            fStack_98 = temp_v26 + temp_v19 * temp_v37;
            temp_v32 = 110.0f;
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v37 = (float)DAT_00581288[10];
            temp_v21 = (float)DAT_00581288[0xb];
            temp_v19 = ((float)DAT_00581288[0x14] - 110.0f) * temp_v20;
            fStack_a0 = temp_v35;
            fStack_9c = temp_v28;
            FUN_001bc124();
            temp_v35 = 120.0f;
            temp_v37 = temp_v37 + temp_v19 * 120.0f;
            fStack_90 = temp_v21 + 250.0f;
            temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
            FUN_001bbf0c();
            fStack_8c = temp_v26 + temp_v20 * temp_v35;
            fStack_6c = 4.2039e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v37;
            FUN_002d1e44(&fStack_b8);
            piVar19 = DAT_005806a4;
            DAT_005806a4[1] = DAT_005806a4[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        fStack_b8 = (float)DAT_005806a4[0x17];
        fStack_b4 = (float)DAT_005806a4[0x18];
        fStack_b0 = (float)DAT_005806a4[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)DAT_005806a4[0x14];
        fStack_a8 = (float)DAT_005806a4[0x15];
        iStack_a4 = DAT_005806a4[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = 90.0f;
        temp_v35 = temp_v35 + temp_v19 * 90.0f;
        temp_v28 = temp_v28 + 75.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v32 = 110.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 110.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 120.0f;
        temp_v37 = temp_v37 + temp_v19 * 120.0f;
        fStack_90 = temp_v21 + 210.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 1.12104e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
      }
      break;
    case 0xb:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 == 2) {
            FUN_0033a374();
            piVar19 = DAT_005806a4;
            DAT_005806a4 = piVar19;
            if (temp_v5 != 0) {
              piVar19[1] = piVar19[1] + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v5 != 0) {
            fStack_b8 = (float)piVar19[0x95];
            fStack_b4 = (float)piVar19[0x96];
            fStack_b0 = (float)piVar19[0x97];
            temp_v20 = 0.017453292f;
            fStack_ac = (float)piVar19[0x98];
            fStack_a8 = (float)piVar19[0x99];
            iStack_a4 = piVar19[0x9a];
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
            temp_v35 = (float)DAT_00581288[10];
            temp_v28 = (float)DAT_00581288[0xb];
            FUN_001bc124();
            temp_v32 = 120.0f;
            temp_v35 = temp_v35 + temp_v19 * 120.0f;
            temp_v28 = temp_v28 + 70.0f;
            temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
            FUN_001bbf0c();
            fStack_98 = temp_v26 + temp_v19 * temp_v32;
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v37 = (float)DAT_00581288[10];
            temp_v21 = (float)DAT_00581288[0xb];
            temp_v19 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
            fStack_a0 = temp_v35;
            fStack_9c = temp_v28;
            FUN_001bc124();
            temp_v35 = 140.0f;
            temp_v37 = temp_v37 + temp_v19 * 140.0f;
            fStack_90 = temp_v21 + 200.0f;
            temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
            FUN_001bbf0c();
            fStack_8c = temp_v26 + temp_v20 * temp_v35;
            fStack_6c = 4.2039e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v37;
            FUN_002d1e44(&fStack_b8);
            piVar19 = DAT_005806a4;
            DAT_005806a4[1] = DAT_005806a4[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v32 = 120.0f;
        temp_v35 = temp_v35 + temp_v19 * 120.0f;
        temp_v28 = temp_v28 + 70.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v32;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 140.0f;
        temp_v37 = temp_v37 + temp_v19 * 140.0f;
        fStack_90 = temp_v21 + 200.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 1.12104e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
      }
      break;
    case 0xc:
      FUN_003026d8();
      break;
    case 0xd:
      FUN_002b56e0();
      break;
    case 0xe:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 != 1) {
          if (temp_v5 == 2) {
            FUN_0033a374();
            piVar19 = DAT_005806a4;
            DAT_005806a4 = piVar19;
            if (temp_v5 != 0) {
              piVar19[1] = piVar19[1] + 1;
              piVar19[2] = 0;
            }
          }
        }
        else {
          FUN_0033a374();
          if (temp_v5 != 0) {
            fStack_b8 = (float)piVar19[0x95];
            fStack_b4 = (float)piVar19[0x96];
            fStack_b0 = (float)piVar19[0x97];
            temp_v20 = 0.017453292f;
            fStack_ac = (float)piVar19[0x98];
            fStack_a8 = (float)piVar19[0x99];
            iStack_a4 = piVar19[0x9a];
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
            temp_v35 = (float)DAT_00581288[10];
            temp_v37 = (float)DAT_00581288[0xb];
            FUN_001bc124();
            temp_v28 = 40.0f;
            fStack_9c = temp_v37 + 20.0f;
            fStack_a0 = temp_v35 + temp_v19 * 40.0f;
            if (DAT_005f15fc == (unsigned int *)0x16) {
              fStack_9c = fStack_9c + 20.0f;
            }
            temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
            FUN_001bbf0c();
            fStack_98 = temp_v26 + temp_v19 * temp_v28;
            temp_v21 = 170.0f;
            temp_v26 = (float)DAT_00581288[0xc];
            temp_v35 = (float)DAT_00581288[10];
            temp_v37 = (float)DAT_00581288[0xb];
            temp_v19 = ((float)DAT_00581288[0x14] - 170.0f) * temp_v20;
            FUN_001bc124();
            temp_v28 = 180.0f;
            temp_v35 = temp_v35 + temp_v19 * 180.0f;
            fStack_90 = temp_v37 + 221.0f;
            temp_v20 = ((float)DAT_00581288[0x14] - temp_v21) * temp_v20;
            FUN_001bbf0c();
            fStack_8c = temp_v26 + temp_v20 * temp_v28;
            if (DAT_005f15fc == (unsigned int *)0x16) {
              fStack_90 = fStack_90 + 80.0f;
            }
            fStack_6c = 6.30584e-43f;
            uStack_70 = 0;
            uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
            fStack_94 = temp_v35;
            FUN_002d1e44(&fStack_b8);
            piVar19 = DAT_005806a4;
            DAT_005806a4[1] = DAT_005806a4[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        fStack_b8 = (float)DAT_005806a4[0x17];
        fStack_b4 = (float)DAT_005806a4[0x18];
        fStack_b0 = (float)DAT_005806a4[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)DAT_005806a4[0x14];
        fStack_a8 = (float)DAT_005806a4[0x15];
        iStack_a4 = DAT_005806a4[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v37 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v28 = 40.0f;
        fStack_9c = temp_v37 + 20.0f;
        fStack_a0 = temp_v35 + temp_v19 * 40.0f;
        if (DAT_005f15fc == (unsigned int *)0x16) {
          fStack_9c = fStack_9c + 20.0f;
        }
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v28;
        temp_v21 = 160.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v35 = (float)DAT_00581288[10];
        temp_v37 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 160.0f) * temp_v20;
        FUN_001bc124();
        temp_v28 = 180.0f;
        temp_v35 = temp_v35 + temp_v19 * 180.0f;
        fStack_90 = temp_v37 + 220.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v21) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v28;
        if (DAT_005f15fc == (unsigned int *)0x16) {
          fStack_90 = fStack_90 + 80.0f;
        }
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v35;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
      }
      break;
    case 0xf:
      FUN_0030250c();
      break;
    case 0x10:
      FUN_00352568();
      break;
    case 0x12:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        DAT_005806a4[3] = 0;
        fStack_b8 = (float)piVar19[0x17];
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        FUN_001bc124();
        temp_v26 = 100.0f;
        fStack_b8 = fStack_b8 + temp_v19 * 100.0f;
        fStack_b4 = fStack_b4 - 100.0f;
        fStack_ac = (float)DAT_005806a4[0x14];
        fStack_a8 = (float)DAT_005806a4[0x15];
        iStack_a4 = DAT_005806a4[0x16];
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bc124();
        fStack_ac = fStack_ac + temp_v19 * temp_v26;
        fStack_a8 = fStack_a8 - temp_v26;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = 50.0f;
        temp_v35 = temp_v35 + temp_v19 * 50.0f;
        temp_v28 = temp_v28 + 200.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v32 = 180.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] + 180.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 400.0f;
        temp_v37 = temp_v37 + temp_v19 * 400.0f;
        fStack_90 = temp_v21 + 300.0f;
        temp_v20 = ((float)DAT_00581288[0x14] + temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 2.8026e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x13:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = 100.0f;
        temp_v35 = temp_v35 + temp_v19 * 100.0f;
        temp_v28 = temp_v28 - 150.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 38.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 900.0f;
        temp_v37 = temp_v37 + temp_v19 * 900.0f;
        fStack_90 = temp_v21 + 250.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - 42.5f) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x14:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if ((temp_v5 == 1) && (FUN_0033a374(), piVar19 = DAT_005806a4, temp_v5 != 0)) {
          DAT_005806a4[0x86] = 0;
          piVar19[0x87] = 0;
          piVar19[6] = (int)((float)DAT_00581288[0x14] + 110.0f);
          piVar19[0x14] = (int)fStack_94;
          piVar19[0x15] = (int)fStack_90;
          piVar19[0x16] = (int)fStack_8c;
          piVar19[0x17] = (int)fStack_a0;
          piVar19[0x18] = (int)fStack_9c;
          piVar19[0x19] = (int)fStack_98;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = -30.0f;
        temp_v35 = temp_v35 + temp_v19 * -30.0f;
        temp_v28 = temp_v28 - 750.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v32 = 30.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 30.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 250.0f;
        temp_v37 = temp_v37 + temp_v19 * 250.0f;
        fStack_90 = temp_v21 - 700.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x15:
      temp_v5 = FUN_003033d4();
      piVar19 = DAT_005806a4;
      if (DAT_005806a4[1] != 0) {
        if ((DAT_005806a4[1] == 1) &&
           (piVar11 = DAT_005806a4, FUN_0033a374(), piVar19 = DAT_005806a4, piVar11 != (int *)0x0))
        {
          DAT_005806a4[0x86] = 0;
          piVar19[0x87] = 0;
          piVar19[6] = (int)((float)DAT_00581288[0x14] + 110.0f);
          piVar19[0x14] = (int)fStack_94;
          piVar19[0x15] = (int)fStack_90;
          piVar19[0x16] = (int)fStack_8c;
          piVar19[0x17] = (int)fStack_a0;
          piVar19[0x18] = (int)fStack_9c;
          piVar19[0x19] = (int)fStack_98;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v28 = 90.0f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v20 = 0.017453292f;
        temp_v35 = (float)DAT_00581288[7];
        temp_v26 = (float)DAT_00581288[9];
        temp_v37 = (float)DAT_00581288[8] + (float)piVar19[temp_v5 + 0x33];
        temp_v19 = ((float)piVar19[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v26 = (float)DAT_00581288[7] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        FUN_001bbf0c();
        temp_v37 = (float)DAT_00581288[9] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v35 = (float)DAT_00581288[8] + (float)DAT_005806a4[temp_v5 + 0x43] + (float)DAT_005806a4[7]
        ;
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bc124();
        temp_v26 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v20 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        temp_v7 = 0;
        fStack_8c = temp_v37 + temp_v20 * (float)DAT_005806a4[temp_v5 + 0x53];
        fStack_6c = 1.26117e-43f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v26;
        fStack_90 = temp_v35;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar19[0x86] = temp_v7;
        piVar19[0x87] = temp_v7;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x16:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if ((temp_v5 == 1) && (FUN_0033a374(), piVar19 = DAT_005806a4, temp_v5 != 0)) {
          DAT_005806a4[0x86] = 0;
          piVar19[0x87] = 0;
          piVar19[6] = DAT_00581288[0x13];
          piVar19[0x14] = (int)fStack_94;
          piVar19[0x15] = (int)fStack_90;
          piVar19[0x16] = (int)fStack_8c;
          piVar19[0x17] = (int)fStack_a0;
          piVar19[0x18] = (int)fStack_9c;
          piVar19[0x19] = (int)fStack_98;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = -30.0f;
        temp_v35 = temp_v35 + temp_v19 * -30.0f;
        temp_v28 = temp_v28 + 50.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v32 = 30.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 30.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 250.0f;
        temp_v37 = temp_v37 + temp_v19 * 250.0f;
        fStack_90 = temp_v21 + 100.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x17:
      temp_v5 = FUN_003033d4();
      piVar19 = DAT_005806a4;
      if (DAT_005806a4[1] != 0) {
        if (DAT_005806a4[1] == 1) {
          piVar11 = DAT_005806a4;
          FUN_0033a374();
          piVar19 = DAT_005806a4;
joined_r0x00397538:
          DAT_005806a4 = piVar19;
          if (piVar11 != (int *)0x0) {
            piVar19[0x86] = 0;
            piVar19[0x87] = 0;
            piVar19[6] = DAT_00581288[0x13];
            piVar19[0x14] = (int)fStack_94;
            piVar19[0x15] = (int)fStack_90;
            piVar19[0x16] = (int)fStack_8c;
            piVar19[0x17] = (int)fStack_a0;
            piVar19[0x18] = (int)fStack_9c;
            piVar19[0x19] = (int)fStack_98;
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v28 = 90.0f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v20 = 0.017453292f;
        temp_v35 = (float)DAT_00581288[7];
        temp_v26 = (float)DAT_00581288[9];
        temp_v37 = (float)DAT_00581288[8] + (float)piVar19[temp_v5 + 0x33];
        temp_v19 = ((float)piVar19[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v26 = (float)DAT_00581288[7] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        FUN_001bbf0c();
        temp_v35 = (float)DAT_00581288[9] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v37 = (float)DAT_00581288[8] + (float)DAT_005806a4[temp_v5 + 0x43] + (float)DAT_005806a4[7]
        ;
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bc124();
        temp_v26 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v20 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v35 + temp_v20 * (float)DAT_005806a4[temp_v5 + 0x53];
        fStack_94 = temp_v26;
        fStack_90 = temp_v37;
        FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
        fStack_6c = 1.26117e-43f;
        uStack_70 = 0;
        temp_v5 = 0;
        fStack_94 = (float)uStack_44;
        fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
        fStack_8c = fStack_3c;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar19[0x86] = temp_v5;
        piVar19[0x87] = temp_v5;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x18:
      temp_v5 = FUN_003033d4();
      piVar19 = DAT_005806a4;
      if (DAT_005806a4[1] != 0) {
        if (DAT_005806a4[1] == 1) {
          piVar11 = DAT_005806a4;
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          goto joined_r0x00397538;
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v28 = 90.0f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v20 = 0.017453292f;
        temp_v35 = (float)DAT_00581288[7];
        temp_v26 = (float)DAT_00581288[9];
        temp_v37 = (float)DAT_00581288[8] + (float)piVar19[temp_v5 + 0x33];
        temp_v19 = ((float)piVar19[6] - 90.0f) * 0.017453292f;
        FUN_001bc124();
        temp_v35 = temp_v35 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v37;
        FUN_001bc124();
        temp_v26 = (float)DAT_00581288[7] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v19 = (float)DAT_005806a4[6] * temp_v20;
        FUN_001bbf0c();
        temp_v35 = (float)DAT_00581288[9] - temp_v19 * (float)DAT_005806a4[temp_v5 + 99];
        temp_v37 = (float)DAT_00581288[8] + (float)DAT_005806a4[temp_v5 + 0x43] + (float)DAT_005806a4[7]
        ;
        temp_v19 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bc124();
        temp_v26 = temp_v26 + temp_v19 * (float)DAT_005806a4[temp_v5 + 0x53];
        temp_v20 = ((float)DAT_005806a4[6] - temp_v28) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v35 + temp_v20 * (float)DAT_005806a4[temp_v5 + 0x53];
        fStack_94 = temp_v26;
        fStack_90 = temp_v37;
        FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
        fStack_6c = 2.8026e-44f;
        uStack_70 = 0;
        temp_v5 = 0;
        fStack_94 = (float)uStack_44;
        fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
        fStack_8c = fStack_3c;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar19[0x86] = temp_v5;
        piVar19[0x87] = temp_v5;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x19:
      FUN_003033d4();
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if ((temp_v5 == 1) && (FUN_0033a374(), piVar11 = DAT_005806a4, temp_v5 != 0)) {
          piVar7 = DAT_005806a4 + 0x14;
          DAT_005806a4[6] = DAT_00581288[0x13];
          temp_v5 = piVar19[0x99];
          temp_v7 = piVar19[0x9a];
          *piVar7 = piVar19[0x98];
          piVar11[0x15] = temp_v5;
          piVar11[0x16] = temp_v7;
          temp_v5 = piVar19[0x95];
          temp_v7 = piVar19[0x96];
          piVar11[0x19] = piVar19[0x97];
          piVar11[0x17] = temp_v5;
          piVar11[0x18] = temp_v7;
          piVar11[1] = piVar11[1] + 1;
          piVar11[2] = 0;
          DAT_005f1a4c = 1;
          DAT_005f1a4d = '\x01';
        }
      }
      else {
        DAT_005806a4[3] = 0;
        fStack_b0 = DAT_005f1a2c;
        fStack_b8 = DAT_005f1a24;
        fStack_b4 = DAT_005f1a28;
        fStack_ac = DAT_005f1a18;
        fStack_a8 = DAT_005f1a1c;
        iStack_a4 = DAT_005f1a20;
        fStack_a0 = DAT_005f1a3c;
        fStack_9c = DAT_005f1a40;
        fStack_98 = DAT_005f1a44;
        fStack_94 = DAT_005f1a30;
        fStack_90 = DAT_005f1a34;
        fStack_8c = DAT_005f1a38;
        if (DAT_005f1a4d != '\0') {
          FUN_00330108(&fStack_94,&fStack_a0,&uStack_44);
          fStack_94 = (float)uStack_44;
          fStack_90 = (*(float *)((unsigned char *)&uStack_44 + 4));
          fStack_8c = fStack_3c;
        }
        uStack_70 = 2;
        if ((int)DAT_005f1a48 < 1) {
          DAT_005f1a48 = 1.4013e-45f;
        }
        fStack_6c = DAT_005f1a48;
        uStack_4c = uStack_4c & 0xffffffff00000000;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x1a:
      FUN_003033d4();
      piVar19 = DAT_005806a4;
      if (DAT_005806a4[1] != 0) {
        if ((DAT_005806a4[1] == 1) &&
           (piVar11 = DAT_005806a4, FUN_0033a374(), piVar19 = DAT_005806a4, piVar11 != (int *)0x0))
        {
          DAT_005806a4[0x86] = 0;
          piVar19[0x87] = 0;
          piVar19[6] = DAT_00581288[0x14];
          piVar19[0x14] = (int)fStack_94;
          piVar19[0x15] = (int)fStack_90;
          piVar19[0x16] = (int)fStack_8c;
          piVar19[0x17] = (int)fStack_a0;
          piVar19[0x18] = (int)fStack_9c;
          piVar19[0x19] = (int)fStack_98;
          piVar19[1] = piVar19[1] + 1;
          piVar19[2] = 0;
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v20 = 0.017453292f;
        fStack_a8 = (float)piVar19[0x15];
        fStack_ac = (float)piVar19[0x14];
        iStack_a4 = piVar19[0x16];
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[0x14] * 0.017453292f;
        temp_v35 = (float)DAT_00581288[10];
        temp_v28 = (float)DAT_00581288[0xb];
        FUN_001bc124();
        temp_v37 = 120.0f;
        temp_v35 = temp_v35 + temp_v19 * 120.0f;
        temp_v28 = temp_v28 + 170.0f;
        temp_v19 = (float)DAT_00581288[0x14] * temp_v20;
        FUN_001bbf0c();
        fStack_98 = temp_v26 + temp_v19 * temp_v37;
        temp_v32 = 160.0f;
        temp_v26 = (float)DAT_00581288[0xc];
        temp_v37 = (float)DAT_00581288[10];
        temp_v21 = (float)DAT_00581288[0xb];
        temp_v19 = ((float)DAT_00581288[0x14] - 160.0f) * temp_v20;
        fStack_a0 = temp_v35;
        fStack_9c = temp_v28;
        FUN_001bc124();
        temp_v35 = 240.0f;
        temp_v37 = temp_v37 + temp_v19 * 240.0f;
        fStack_90 = temp_v21 + 30.0f;
        temp_v20 = ((float)DAT_00581288[0x14] - temp_v32) * temp_v20;
        FUN_001bbf0c();
        fStack_8c = temp_v26 + temp_v20 * temp_v35;
        uStack_70 = 2;
        fStack_6c = 1.4013e-44f;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_94 = temp_v37;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        piVar11 = piVar19 + 1;
        *piVar11 = *piVar11 + 1;
        piVar19[2] = 0;
      }
      break;
    case 0x1b:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        DAT_005806a4[3] = 0;
        fStack_b8 = 1520.0f;
        fStack_b4 = 1786.0f;
        fStack_b0 = -369.0f;
        fStack_ac = 1750.0f;
        fStack_a8 = 1902.0f;
        iStack_a4 = -0x3cd00000;
        fStack_a0 = 1571.0f;
        fStack_9c = 1684.0f;
        fStack_98 = -323.0f;
        fStack_94 = 1750.0f;
        fStack_90 = 1902.0f;
        fStack_8c = -176.0f;
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = uStack_4c & 0xffffffff00000000;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x1c:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        DAT_005806a4[3] = 0;
        fStack_b8 = 1571.0f;
        fStack_b4 = 1684.0f;
        fStack_b0 = -323.0f;
        fStack_ac = 1750.0f;
        fStack_a8 = 1902.0f;
        iStack_a4 = -0x3cd00000;
        fStack_a0 = 1520.0f;
        fStack_9c = 1786.0f;
        fStack_98 = -369.0f;
        fStack_94 = 1750.0f;
        fStack_90 = 1902.0f;
        fStack_8c = -176.0f;
        fStack_6c = 8.40779e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x1d:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v21 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v37 = DAT_005f16bc * 0.017453292f;
        temp_v19 = DAT_005f16b8;
        temp_v20 = DAT_005f16b0;
        temp_v35 = DAT_005f16b4;
        FUN_001bc124();
        temp_v37 = temp_v37 + temp_v20;
        temp_v32 = 200.0f;
        temp_v35 = temp_v35 + 200.0f;
        temp_v20 = DAT_005f16bc * temp_v21;
        FUN_001bbf0c();
        fStack_98 = temp_v20 + temp_v19;
        temp_v25 = 180.0f;
        temp_v28 = (DAT_005f16bc + 180.0f) * temp_v21;
        temp_v19 = DAT_005f16b8;
        temp_v20 = DAT_005f16b4;
        temp_v26 = DAT_005f16b0;
        fStack_a0 = temp_v37;
        fStack_9c = temp_v35;
        FUN_001bc124();
        temp_v35 = 150.0f;
        temp_v20 = temp_v20 + temp_v32;
        fStack_94 = temp_v26 + temp_v28 * 150.0f;
        temp_v21 = (DAT_005f16bc + temp_v25) * temp_v21;
        FUN_001bbf0c();
        fStack_8c = temp_v19 + temp_v21 * temp_v35;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_90 = temp_v20;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x1e:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        temp_v21 = 0.017453292f;
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        temp_v37 = DAT_005f16bc * 0.017453292f;
        temp_v19 = DAT_005f16b8;
        temp_v20 = DAT_005f16b0;
        temp_v35 = DAT_005f16b4;
        FUN_001bc124();
        temp_v37 = temp_v37 + temp_v20;
        temp_v32 = 200.0f;
        temp_v35 = temp_v35 + 200.0f;
        temp_v20 = DAT_005f16bc * temp_v21;
        FUN_001bbf0c();
        fStack_98 = temp_v20 + temp_v19;
        temp_v25 = 120.0f;
        temp_v28 = (DAT_005f16bc + 120.0f) * temp_v21;
        temp_v19 = DAT_005f16b0;
        temp_v20 = DAT_005f16b8;
        temp_v26 = DAT_005f16b4;
        fStack_a0 = temp_v37;
        fStack_9c = temp_v35;
        FUN_001bc124();
        fStack_94 = temp_v19 + temp_v28 * temp_v32;
        temp_v26 = temp_v26 + temp_v32;
        temp_v21 = (DAT_005f16bc + temp_v25) * temp_v21;
        FUN_001bbf0c();
        fStack_8c = temp_v20 + temp_v21 * temp_v32;
        fStack_6c = 1.4013e-45f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        fStack_90 = temp_v26;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
      break;
    case 0x1f:
      FUN_00376c64();
      break;
    case 0x20:
      temp_v5 = DAT_005806a4[1];
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          FUN_0033a374();
          piVar19 = DAT_005806a4;
          DAT_005806a4 = piVar19;
          if (temp_v5 != 0) {
            piVar19[1] = piVar19[1] + 1;
            piVar19[2] = 0;
          }
        }
      }
      else {
        pfVar9 = (float *)(DAT_005806a4 + 0x17);
        DAT_005806a4[3] = 0;
        fStack_b8 = *pfVar9;
        fStack_b4 = (float)piVar19[0x18];
        fStack_b0 = (float)piVar19[0x19];
        fStack_ac = (float)piVar19[0x14];
        fStack_a8 = (float)piVar19[0x15];
        iStack_a4 = piVar19[0x16];
        fStack_98 = (float)piVar19[0x19];
        fStack_a0 = (float)piVar19[0x17];
        fStack_9c = (float)piVar19[0x18] + 200.0f;
        fStack_90 = (float)piVar19[0x15];
        fStack_94 = (float)piVar19[0x14];
        fStack_8c = (float)piVar19[0x16];
        fStack_6c = 5.60519e-44f;
        uStack_70 = 0;
        uStack_4c = (unsigned long long)(*(unsigned int *)((unsigned char *)&uStack_4c + 4)) << 0x20;
        FUN_002d1e44(&fStack_b8);
        piVar19 = DAT_005806a4;
        piVar11 = DAT_005806a4 + 1;
        *(unsigned char *)(DAT_005806a4 + 0x88) = 1;
        *piVar11 = piVar19[1] + 1;
        piVar19[2] = 0;
        piVar19[3] = 0;
      }
    }
    fStack_1c = fStack_20;
    fStack_20 = fStack_24;
    fStack_24 = fStack_28;
    fStack_28 = fStack_2c;
    fStack_2c = fStack_30;
    fStack_30 = fStack_34;
    temp_v37 = 0.0f;
    temp_v28 = 1.0f;
    temp_v20 = 1100.0f;
    temp_v26 = (float)DAT_00581288[7];
    temp_v19 = (float)DAT_00581288[8];
    temp_v35 = (float)DAT_00581288[9];
    pfVar9 = (float *)FUN_003ae90c();
    *pfVar9 = temp_v20;
    if ((*DAT_005806a4 == 0xc) && (DAT_005806a4[1] >= 100)) {
      temp_v21 = ((float)DAT_00581288[0x13] + 180.0f) * 0.7111111f;
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v37 <= temp_v21) << 0x1d);
      for (temp_v21 = romwright_fabs_4(temp_v21); temp_v32 = temp_v37, (int)temp_v21 >= 0x47800000;
          temp_v21 = temp_v21 - 65536.0f) {
      }
      for (; (int)temp_v32 >= 0x47800000; temp_v32 = temp_v32 - 65536.0f) {
      }
      temp_v22 = VectorFloatToUnsigned(0x4338e38f,3);
      temp_v23 = VectorFloatToUnsigned(temp_v21,3);
      temp_v24 = VectorFloatToUnsigned(temp_v32,3);
      temp_v11 = temp_v22 & 0xff;
      temp_v27 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v22 = temp_v23 & 0xff;
      temp_v29 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v23 = temp_v24 & 0xff;
      temp_v25 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v30 = (float)(&DAT_00536d14)[temp_v11 * 4] +
               (184.8889f - temp_v27) * (float)(&DAT_00536d1c)[temp_v11 * 4];
      temp_v31 = (float)(&DAT_00536d18)[temp_v11 * 4] +
               (184.8889f - temp_v27) * (float)(&DAT_00536d20)[temp_v11 * 4];
      fStack_80 = (float)(&DAT_00536d14)[temp_v22 * 4] +
                  (temp_v21 - temp_v29) * (float)(&DAT_00536d1c)[temp_v22 * 4];
      temp_v27 = (float)(&DAT_00536d14)[temp_v23 * 4] +
               (temp_v32 - temp_v25) * (float)(&DAT_00536d1c)[temp_v23 * 4];
      temp_v32 = (float)(&DAT_00536d18)[temp_v23 * 4] +
               (temp_v32 - temp_v25) * (float)(&DAT_00536d20)[temp_v23 * 4];
      fStack_7c = (float)(&DAT_00536d18)[temp_v22 * 4] +
                  (temp_v21 - temp_v29) * (float)(&DAT_00536d20)[temp_v22 * 4];
      if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
        fStack_80 = -fStack_80;
      }
      fStack_a0 = temp_v32 * fStack_7c;
      fStack_90 = temp_v27 * fStack_7c;
      fStack_78 = temp_v31 * fStack_7c;
      fStack_7c = temp_v30 * fStack_7c;
      fStack_9c = temp_v30 * temp_v32 * fStack_80 - temp_v31 * temp_v27;
      fStack_88 = temp_v31 * temp_v27 * fStack_80 - temp_v30 * temp_v32;
      fStack_98 = temp_v30 * temp_v27 + temp_v31 * temp_v32 * fStack_80;
      fStack_8c = temp_v31 * temp_v32 + temp_v30 * temp_v27 * fStack_80;
    }
    else {
      temp_v32 = romwright_fabs_4(DAT_005f15dc * 0.7111111f);
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v37 <= DAT_005f15e0 * 0.7111111f) << 0x1d);
      temp_v25 = romwright_fabs_4(DAT_005f15e0 * 0.7111111f);
      for (temp_v21 = romwright_fabs_4(DAT_005f15d8 * 0.7111111f); (int)temp_v21 >= 0x47800000;
          temp_v21 = temp_v21 - 65536.0f) {
      }
      for (; (int)temp_v32 >= 0x47800000; temp_v32 = temp_v32 - 65536.0f) {
      }
      for (; (int)temp_v25 >= 0x47800000; temp_v25 = temp_v25 - 65536.0f) {
      }
      temp_v22 = VectorFloatToUnsigned(temp_v21,3);
      temp_v23 = VectorFloatToUnsigned(temp_v32,3);
      temp_v24 = VectorFloatToUnsigned(temp_v25,3);
      temp_v11 = temp_v22 & 0xff;
      temp_v30 = (float)VectorUnsignedToFloat(temp_v22 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v22 = temp_v23 & 0xff;
      temp_v29 = (float)VectorUnsignedToFloat(temp_v23 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v23 = temp_v24 & 0xff;
      temp_v27 = (float)VectorUnsignedToFloat(temp_v24 & 0xffff,(unsigned char)(temp_v6 >> 0x16) & 3);
      temp_v31 = (float)(&DAT_00536d14)[temp_v11 * 4] +
               (temp_v21 - temp_v30) * (float)(&DAT_00536d1c)[temp_v11 * 4];
      temp_v21 = (float)(&DAT_00536d18)[temp_v11 * 4] +
               (temp_v21 - temp_v30) * (float)(&DAT_00536d20)[temp_v11 * 4];
      if (DAT_005f15d8 * 0.7111111f < temp_v37) {
        temp_v31 = -temp_v31;
      }
      fStack_80 = (float)(&DAT_00536d14)[temp_v22 * 4] +
                  (temp_v32 - temp_v29) * (float)(&DAT_00536d1c)[temp_v22 * 4];
      fStack_78 = (float)(&DAT_00536d18)[temp_v22 * 4] +
                  (temp_v32 - temp_v29) * (float)(&DAT_00536d20)[temp_v22 * 4];
      temp_v32 = (float)(&DAT_00536d14)[temp_v23 * 4] +
               (temp_v25 - temp_v27) * (float)(&DAT_00536d1c)[temp_v23 * 4];
      temp_v25 = (float)(&DAT_00536d18)[temp_v23 * 4] +
               (temp_v25 - temp_v27) * (float)(&DAT_00536d20)[temp_v23 * 4];
      if (DAT_005f15dc * 0.7111111f < temp_v37) {
        fStack_80 = -fStack_80;
      }
      if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
        temp_v32 = -temp_v32;
      }
      fStack_a0 = temp_v25 * fStack_78;
      fStack_90 = temp_v32 * fStack_78;
      fStack_7c = temp_v31 * fStack_78;
      fStack_78 = temp_v21 * fStack_78;
      fStack_9c = temp_v31 * temp_v25 * fStack_80 - temp_v21 * temp_v32;
      fStack_88 = temp_v21 * temp_v32 * fStack_80 - temp_v31 * temp_v25;
      fStack_98 = temp_v31 * temp_v32 + temp_v21 * temp_v25 * fStack_80;
      fStack_8c = temp_v21 * temp_v25 + temp_v31 * temp_v32 * fStack_80;
    }
    fStack_80 = -fStack_80;
    fStack_94 = 0.0f;
    uStack_84 = 0;
    uStack_74 = 0;
    fStack_b0 = temp_v37;
    fStack_ac = temp_v37;
    fStack_a8 = temp_v28;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&fStack_b0,&fStack_a0);
    fStack_b0 = fStack_b0 * temp_v20;
    fStack_ac = fStack_ac * temp_v20;
    fStack_a8 = fStack_a8 * temp_v20;
    temp_v37 = 0.017453292f;
    temp_v20 = (float)DAT_005806a4[6] * 0.017453292f;
    FUN_001bc124();
    temp_v32 = 290.0f;
    temp_v26 = temp_v26 + temp_v20 * 290.0f;
    temp_v37 = (float)DAT_005806a4[6] * temp_v37;
    FUN_001bbf0c();
    temp_v19 = temp_v19 + DAT_005f1a04;
    temp_v5 = *(int *)(DAT_0056fcc0 + 0x14);
    temp_v20 = (float)DAT_00581288[9];
    temp_v21 = (float)DAT_00581288[7];
    temp_v28 = (float)DAT_00581288[8];
    *(float *)(temp_v5 + 0xb8) = temp_v26;
    *(float *)(temp_v5 + 0xbc) = temp_v19;
    *(float *)(temp_v5 + 0xc0) = temp_v35 + temp_v37 * temp_v32;
    temp_v28 = temp_v28 + fStack_ac;
    if (DAT_005f15fc != (unsigned int *)0x27) {
      if ((DAT_005f15fc != (unsigned int *)0x20) || (DAT_005f1600 != (unsigned int *)0x1)) {
        temp_v19 = temp_v20 + fStack_a8 + DAT_005f1a14;
        temp_v28 = temp_v28 + DAT_005f1a10;
        *(float *)(temp_v5 + 0xac) = temp_v21 + fStack_b0 + DAT_005f1a0c;
        *(float *)(temp_v5 + 0xb0) = temp_v28;
        *(float *)(temp_v5 + 0xb4) = temp_v19;
        return;
      }
      temp_v19 = 160.0f;
    }
    else {
      if ((DAT_005f1600 != (unsigned int *)0x8 && DAT_005f1600 != (unsigned int *)0x9) &&
         ((DAT_005f1600 != (unsigned int *)0xa && DAT_005f1600 != (unsigned int *)0xb) &&
          DAT_005f1600 != (unsigned int *)0x6)) {
        temp_v19 = temp_v20 + fStack_a8 + DAT_005f1a14;
        temp_v28 = temp_v28 + DAT_005f1a10;
        *(float *)(temp_v5 + 0xac) = temp_v21 + fStack_b0 + DAT_005f1a0c;
        *(float *)(temp_v5 + 0xb0) = temp_v28;
        *(float *)(temp_v5 + 0xb4) = temp_v19;
        return;
      }
      temp_v19 = 120.0f;
    }
    temp_v28 = temp_v28 - temp_v19;
    temp_v19 = temp_v20 + fStack_a8 + DAT_005f1a14;
    temp_v28 = temp_v28 + DAT_005f1a10;
    *(float *)(temp_v5 + 0xac) = temp_v21 + fStack_b0 + DAT_005f1a0c;
    *(float *)(temp_v5 + 0xb0) = temp_v28;
    *(float *)(temp_v5 + 0xb4) = temp_v19;
    return;
  case 0x35:
    DAT_00581288[0x14] = (int)DAT_005f16bc;
    if (piVar19[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (((piVar19[1] == 1) && (temp_v5 = piVar19[2], piVar19[2] = temp_v5 + 1, temp_v5 + 1 == 4)) &&
         (DAT_005f16e0 < 99)) {
        if (DAT_005f16e0 != 0x62) {
          if (DAT_005f16e0 == 0x5f) {
            temp_v5 = 0x100010e;
          }
          else {
            temp_v5 = DAT_005f16e0 + 0x10000d6;
          }
          FUN_003d2150(temp_v5);
        }
        else {
          FUN_003d2150(0x1000130);
        }
        DAT_005f1a50 = DAT_005f16e0;
        if (DAT_005f1a54 != '\0') {
          DAT_005f1a54 = '\0';
          DAT_005f1a50 = -1;
        }
      }
    }
    else {
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = 1;
      piVar19[2] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
    }
    FUN_002e364c(DAT_00581288 + 10);
    DAT_00581288[0x57] = 0;
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x36:
    temp_v5 = DAT_00581288[1];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v5 == 2) {
          DAT_00581288[2] = DAT_00581288[2] + 1;
          temp_v5 = FUN_003e56f0(piVar19[0x6a]);
          if (temp_v5 != 0) {
            DAT_00581288[0x16] = 0x40a00000;
            FUN_00313648(1);
            FUN_00303460(0);
          }
        }
      }
      else {
        temp_v5 = DAT_00581288[2];
        DAT_00581288[2] = temp_v5 + 1;
        fStack_20 = temp_v35;
        fStack_1c = temp_v37;
        if (temp_v5 + 1 == 5) {
          FUN_003d2150(0x10000c5);
        }
        if (DAT_00581288[2] == 7) {
          FUN_002d1f40(4,0x32,0);
        }
        temp_v5 = FUN_003e5414(DAT_00581288[0x6a]);
        if ((temp_v5 == 0x23) && (temp_v5 = FUN_003e56f0(DAT_00581288[0x6a]), temp_v5 != 0)) {
          FUN_00303460(0x17);
          piVar19 = DAT_00581288;
          DAT_00581288[0x15] = 0x24;
          piVar19[0x16] = 0;
          piVar19[2] = 0;
          piVar19[1] = piVar19[1] + 1;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 0x23;
      piVar19[0x16] = 0;
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00303460(0x16);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
    }
    goto code_r0x0024947c;
  case 0x37:
    if (DAT_00581288[1] != 0) {
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      if (DAT_00581288[1] == 1) {
        temp_v26 = (float)DAT_00581288[10];
        temp_v20 = (float)DAT_00581288[7];
        temp_v28 = (float)DAT_00581288[0xc];
        temp_v19 = (float)DAT_00581288[9];
        temp_v7 = DAT_00581288[2] + 1;
        DAT_00581288[8] = (int)((float)DAT_00581288[8] + 10.0f);
        piVar19[2] = temp_v7;
        temp_v5 = temp_v7;
        if (temp_v7 >= 0x50) {
          temp_v5 = 2;
        }
        piVar19[7] = (int)(temp_v20 + (temp_v26 - temp_v20) * 0.1f);
        piVar19[9] = (int)(temp_v19 + (temp_v28 - temp_v19) * 0.1f);
        if (temp_v7 >= 0x50) {
          piVar19[1] = temp_v5;
        }
      }
    }
    else {
      DAT_00581288[0x15] = 6;
      piVar19[0x16] = 0x41700000;
      piVar19[1] = 1;
      piVar19[2] = 0;
      temp_v20 = DAT_005f16b8;
      temp_v19 = DAT_005f16b4;
      piVar19[10] = (int)DAT_005f16b0;
      piVar19[0xb] = (int)temp_v19;
      piVar19[0xc] = (int)temp_v20;
      temp_v5 = piVar19[7];
      fStack_20 = temp_v35;
      fStack_1c = temp_v37;
      FUN_00352bc4();
      piVar19 = DAT_00581288;
      DAT_00581288[0x14] = temp_v5;
      *(unsigned char *)(piVar19 + 0x1b) = 0;
      FUN_00303460(0x20);
      FUN_003d2150(0x1000145);
    }
code_r0x0024947c:
    FUN_002e364c(DAT_00581288 + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
code_r0x00327ee8:
    temp_v5 = 0;
    fStack_3c = (float)temp_v34;
    iStack_38 = (int)(temp_v34 >> 0x20);
    fStack_34 = (float)in_d9;
    fStack_30 = (float)((unsigned long long)in_d9 >> 0x20);
    fStack_2c = (float)in_d10;
    fStack_28 = (float)(in_d10 >> 0x20);
    fStack_24 = (float)in_d11;
    fStack_20 = (float)((unsigned long long)in_d11 >> 0x20);
    in_d10 = in_d10 >> 0x20;
    DAT_005f162f = 0xff;
    DAT_005f1631 = 0xff;
    if (0 < DAT_006160dc) {
      in_d10 = 0;
    }
    in_d10 = in_d10 << 0x20;
    if (0 < DAT_006160dc) {
      do {
        temp_v39 = in_d10 >> 0x20;
        temp_v13 = 0;
        temp_v7 = temp_v5 * 0x7c;
        do {
          if (temp_v13 != 0) {
            if (temp_v13 != 1) {
              if (temp_v13 != 2) {
                if (temp_v13 == 3) {
                  temp_v34 = (unsigned long long)*(unsigned int *)(temp_v7 + 0x614dec);
                  FUN_003250ac((int)&uStack_4c + 4);
                }
              }
              else {
                temp_v34 = (unsigned long long)*(unsigned int *)(temp_v7 + 0x614dd4);
                FUN_003250ac((int)&uStack_4c + 4);
              }
            }
            else {
              temp_v34 = (unsigned long long)*(unsigned int *)(temp_v7 + 0x614dbc);
              FUN_003250ac((int)&uStack_4c + 4);
            }
          }
          else {
            temp_v34 = (unsigned long long)*(unsigned int *)(temp_v7 + 0x614da4);
            FUN_003250ac((int)&uStack_4c + 4);
          }
          temp_v19 = (float)temp_v34;
          FUN_00324cc0();
          temp_v2 = DAT_005f162f;
          if (temp_v19 < (float)temp_v39) goto LAB_00328050;
          temp_v13 = temp_v13 + 1;
        } while (temp_v13 < 4);
        temp_v0 = (unsigned char)*(unsigned short *)(temp_v7 + 0x614d96);
        temp_v2 = temp_v0;
        if (*(short *)(temp_v7 + 0x614d94) != 0) {
          temp_v2 = DAT_005f162f;
          DAT_005f1631 = temp_v0;
        }
LAB_00328050:
        DAT_005f162f = temp_v2;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < DAT_006160dc);
    }
    return;
  case 0x38:
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    piVar11 = DAT_00581288;
    DAT_00581288[7] =
         (int)((float)DAT_00581288[7] +
              ((float)DAT_00581288[10] - (float)DAT_00581288[7]) * 0.33333334f);
    piVar11[8] = (int)((float)piVar11[8] + ((float)piVar11[0xb] - (float)piVar11[8]) * 0.16666667f);
    piVar11[9] = (int)((float)piVar11[9] + ((float)piVar11[0xc] - (float)piVar11[9]) * 0.33333334f);
    piVar19 = DAT_00581288;
    if ((piVar11[1] == 0) &&
       (temp_v5 = FUN_003e56f0(piVar11[0x6a]), piVar19 = DAT_00581288, temp_v5 != 0)) {
      *(unsigned char *)(DAT_00581288 + 0x1b) = 0;
      piVar19[0x15] = 0;
      piVar19[0x16] = 0x40a00000;
      piVar19[1] = piVar19[1] + 1;
      piVar19[2] = 0;
      piVar19 = DAT_00581288;
    }
LAB_00246d70:
    FUN_002e364c(piVar19 + 10);
    temp_v34 = CONCAT44(fStack_1c,fStack_20);
    goto code_r0x00327ee8;
  case 0x39:
    temp_v5 = 0;
    fStack_20 = temp_v35;
    fStack_1c = temp_v37;
    FUN_002dae68();
    rt_memcpy_w(temp_v42,0x531e98,0xa0);
    piVar19 = DAT_00581288;
    if (DAT_00581288[1] != 0) {
      if (DAT_00581288[1] != 1) {
        return;
      }
      temp_v5 = DAT_00581288[2];
      DAT_00581288[2] = temp_v5 + 1;
      if (temp_v5 + 1 == 1) {
        in_s0 = 0x3f400000;
        temp_v5 = *(int *)(piVar19[0x61] + 4);
        *(unsigned int *)(temp_v5 + 0x1fc) = 0x3f400000;
        FUN_003fe86c(temp_v5,0,2);
        *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
        FUN_003e54b8(DAT_00581288[0x6a]);
        FUN_003e5728(DAT_00581288[0x6a]);
      }
      if (DAT_00581288[2] >= 7) {
        DAT_005f17b0 = DAT_00581288[7];
        DAT_005f17b4 = DAT_00581288[8];
        DAT_005f17b8 = DAT_00581288[9];
        DAT_005f17bc = DAT_00581288[0x13];
        DAT_005f1a4f = 1;
      }
      FUN_003e542c(DAT_00581288[0x6a]);
      if (in_s0 < 0x41500000) {
        return;
      }
      FUN_003fe86c(*(unsigned int *)(DAT_00581288[0x61] + 4),0,2);
      FUN_003e54b8(DAT_00581288[0x6a]);
      return;
    }
    temp_v7 = DAT_00581288[2] + 1;
    DAT_00581288[2] = temp_v7;
joined_r0x002495a4:
    if (temp_v7 >= 5) {
      piVar19[0x15] = 4;
      piVar19[0x16] = temp_v5;
      temp_v5 = *(int *)(piVar19[0x61] + 4);
      *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
      FUN_003fd76c(temp_v5,piVar19 + 7);
      FUN_003fdb18(temp_v5);
      *(unsigned int *)(temp_v5 + 0x1fc) = 0x3f400000;
      FUN_003fd7c0(temp_v5,0,2);
      FUN_003fd924(temp_v5,0,2);
      piVar19 = DAT_00581288;
      DAT_00581288[1] = DAT_00581288[1] + 1;
      piVar19[2] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
