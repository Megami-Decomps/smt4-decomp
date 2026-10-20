/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019faa0` (_code @ 0x19faa0, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b72dc(int);
int FUN_002c1edc(int, int, int, unsigned int *);
int FUN_002c2044(int, int);
int nn_math_ARMv6_MTX44PivotC_FAST(int, int);
int nn_math_ARMv6_MTX44TransposeAsm(int, int);
int nn_ulcd_CTR_StereoCamera_SetBaseFrustum(int, int);

extern int DAT_0044ea5c; /* 0x44ea5c */
extern unsigned int DAT_004d4924; /* 0x4d4924 */
extern unsigned int DAT_004d4928; /* 0x4d4928 */
extern unsigned int DAT_004d492c; /* 0x4d492c */
extern unsigned int DAT_004d493c; /* 0x4d493c */
extern unsigned char DAT_004d4948; /* 0x4d4948 */
extern unsigned char DAT_004d494c; /* 0x4d494c */

/* Supplied declaration required: FUN_002b72dc. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_ulcd_CTR_StereoCamera_SetBaseFrustum. */


void FUN_0019faa0(unsigned int param_1,unsigned char param_2)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float in_s0;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  
  temp_v4 = 0;
  temp_v6 = 0;
  temp_v8 = 0xbdb2b8c2;
  temp_v5 = in_s0 * 3600.0f;
  temp_v9 = 0x41a00000;
  temp_v10 = 0x46c80000;
  temp_v7 = 0x419222d1;
  temp_v11 = 0x3fd55555;
  temp_v12 = 0x3faaaaab;
  DAT_004d4948 = param_2;
  do {
    temp_v0 = temp_v4 * 0x544;
    *(unsigned int *)(&DAT_004d494c + temp_v0) = param_1;
    *(unsigned int *)(temp_v0 + 0x4d4950) = 0;
    *(unsigned int *)(temp_v0 + 0x4d4964) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x4d4960) = temp_v6;
    *(float *)(temp_v0 + 0x4d4954) = in_s0;
    *(float *)(temp_v0 + 0x4d4958) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x4d495c) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x4d497c) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x4d4978) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x4d4974) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x4d4980) = temp_v9;
    *(unsigned int *)(temp_v0 + 0x4d4984) = temp_v10;
    temp_v3 = DAT_004d492c;
    temp_v2 = DAT_004d4928;
    *(unsigned int *)(temp_v0 + 0x4d4968) = DAT_004d4924;
    *(unsigned int *)(temp_v0 + 0x4d496c) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x4d4970) = temp_v3;
    FUN_002c2044(temp_v0 + 0x4d4988,1);
    FUN_002c1edc(temp_v0 + 0x4d4988,temp_v0 + 0x4d4968,temp_v0 + 0x4d495c,&DAT_004d493c);
    *(unsigned int *)(temp_v0 + 0x4d49b0) = temp_v7;
    *(unsigned int *)(temp_v0 + 0x4d49b4) = *(unsigned int *)(temp_v0 + 0x4d4980);
    *(unsigned int *)(temp_v0 + 0x4d49b8) = *(unsigned int *)(temp_v0 + 0x4d4984);
    if ((temp_v4 & 0xff) == 0) {
      *(unsigned int *)(temp_v0 + 0x4d49bc) = temp_v11;
    }
    else {
      *(int *)(temp_v0 + 0x4d49bc) = (int)temp_v12;
    }
    FUN_002b72dc(temp_v0 + 0x4d4a30);
    nn_math_ARMv6_MTX44PivotC_FAST(temp_v0 + 0x4d4a30,1);
    nn_math_ARMv6_MTX44TransposeAsm(temp_v0 + 0x4d4ae0,temp_v0 + 0x4d4a30);
    FUN_002b72dc(temp_v0 + 0x4d4a70);
    nn_math_ARMv6_MTX44PivotC_FAST(temp_v0 + 0x4d4a70,0);
    if (*(char *)(temp_v0 + 0x4d4988) != '\0') {
      nn_ulcd_CTR_StereoCamera_SetBaseFrustum(temp_v0 + 0x4d4e28,temp_v0 + 0x4d4a70);
    }
    temp_v1 = temp_v4;
    temp_v4 = temp_v4 + 1;
    if (temp_v1 == 0) {
      *(int *)(DAT_0044ea5c + 0x80) = temp_v0 + 0x4d4988;
    }
    else {
      *(int *)(DAT_0044ea5c + 0x84) = temp_v0 + 0x4d4988;
    }
  } while ((int)temp_v4 < 2);
  return;
}

} /* extern "C" */
