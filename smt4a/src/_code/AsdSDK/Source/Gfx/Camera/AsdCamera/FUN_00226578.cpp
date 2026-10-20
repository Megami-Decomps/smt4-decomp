/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226578` (_code @ 0x226578, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(int, int);
int FUN_0014f0dc(int, int, int, unsigned char *);
int FUN_0016fba0(int);
int nn_math_ARMv6_MTX44PivotC_FAST(int, int);
int nn_math_ARMv6_MTX44TransposeAsm(int, int);
int nn_ulcd_CTR_StereoCamera_SetBaseFrustum(int, int);

extern int DAT_0059dbc4; /* 0x59dbc4 */
extern unsigned int DAT_006309a0; /* 0x6309a0 */
extern unsigned int DAT_006309a4; /* 0x6309a4 */
extern unsigned int DAT_006309a8; /* 0x6309a8 */
extern unsigned char DAT_006309b8; /* 0x6309b8 */
extern unsigned char DAT_006309c4; /* 0x6309c4 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_0016fba0. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */
/* Supplied declaration required: nn_ulcd_CTR_StereoCamera_SetBaseFrustum. */


void FUN_00226578(unsigned int param_1,unsigned char param_2)

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
  DAT_006309c4 = param_2;
  do {
    temp_v0 = temp_v4 * 0x548;
    *(unsigned int *)(temp_v0 + 0x6309c8) = param_1;
    *(unsigned int *)(temp_v0 + 0x6309cc) = 0;
    *(unsigned int *)(temp_v0 + 0x6309e0) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x6309dc) = temp_v6;
    *(float *)(temp_v0 + 0x6309d0) = in_s0;
    *(float *)(temp_v0 + 0x6309d4) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x6309d8) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x6309f8) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x6309f4) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x6309f0) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x6309fc) = temp_v9;
    *(unsigned int *)(temp_v0 + 0x630a00) = temp_v10;
    temp_v3 = DAT_006309a8;
    temp_v2 = DAT_006309a4;
    *(unsigned int *)(temp_v0 + 0x6309e4) = DAT_006309a0;
    *(unsigned int *)(temp_v0 + 0x6309e8) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x6309ec) = temp_v3;
    FUN_0013c884(temp_v0 + 0x630a04,1);
    FUN_0014f0dc(temp_v0 + 0x630a04,temp_v0 + 0x6309e4,temp_v0 + 0x6309d8,&DAT_006309b8);
    *(unsigned int *)(temp_v0 + 0x630a2c) = temp_v7;
    *(unsigned int *)(temp_v0 + 0x630a30) = *(unsigned int *)(temp_v0 + 0x6309fc);
    *(unsigned int *)(temp_v0 + 0x630a34) = *(unsigned int *)(temp_v0 + 0x630a00);
    if ((temp_v4 & 0xff) == 0) {
      *(unsigned int *)(temp_v0 + 0x630a38) = temp_v11;
    }
    else {
      *(int *)(temp_v0 + 0x630a38) = (int)temp_v12;
    }
    FUN_0016fba0(temp_v0 + 0x630aac);
    nn_math_ARMv6_MTX44PivotC_FAST(temp_v0 + 0x630aac,1);
    nn_math_ARMv6_MTX44TransposeAsm(temp_v0 + 0x630b5c,temp_v0 + 0x630aac);
    FUN_0016fba0(temp_v0 + 0x630aec);
    nn_math_ARMv6_MTX44PivotC_FAST(temp_v0 + 0x630aec,0);
    if (*(char *)(temp_v0 + 0x630a04) != '\0') {
      nn_ulcd_CTR_StereoCamera_SetBaseFrustum(temp_v0 + 0x630ea4,temp_v0 + 0x630aec);
    }
    temp_v1 = temp_v4;
    temp_v4 = temp_v4 + 1;
    if (temp_v1 == 0) {
      *(int *)(DAT_0059dbc4 + 0x80) = temp_v0 + 0x630a04;
    }
    else {
      *(int *)(DAT_0059dbc4 + 0x84) = temp_v0 + 0x630a04;
    }
  } while ((int)temp_v4 < 2);
  return;
}

} /* extern "C" */
