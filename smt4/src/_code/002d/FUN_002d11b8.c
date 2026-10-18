/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d11b8` (_code @ 0x2d11b8, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_002573e0. */
/* Supplied declaration required: FUN_00269508. */
/* Supplied declaration required: FUN_00269694. */


void FUN_002d11b8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = *(int *)(param_1 + 0x24);
  temp_v3 = *(int *)(temp_v1 + 0xb8);
  temp_v2 = 0;
  if (temp_v3 != 0) {
    temp_v2 = *(int *)(param_1 + 0x1c);
  }
  if (temp_v3 == 0 || temp_v2 == 0) {
    *(unsigned int *)(temp_v1 + 0xd8) = 0;
    *(unsigned int *)(temp_v1 + 0xdc) = 0;
    *(unsigned int *)(temp_v1 + 0xd0) = 0x43480000;
    *(unsigned int *)(temp_v1 + 0xd4) = 0x42f00000;
    *(unsigned int *)(temp_v1 + 0xe0) = 0x43c80000;
    *(unsigned int *)(temp_v1 + 0xe4) = 0x43700000;
    *(unsigned int *)(temp_v1 + 0xc4) = *(unsigned int *)(temp_v1 + 0x28);
  }
  if (temp_v3 < temp_v2) {
    *(unsigned char *)(temp_v1 + 0xc3) = 0;
  }
  else {
    temp_v0 = temp_v1;
    FUN_00269694(temp_v1,temp_v1 + 0x24,temp_v2,temp_v3);
    FUN_002573e0(*(unsigned int *)(param_1 + 0x10));
    DAT_004ea92c = DAT_004ea91c;
    DAT_004ea930 = DAT_004ea920;
    DAT_004ea934 = DAT_004ea924;
    DAT_004ea938 = DAT_004ea928;
    FUN_002573e0(temp_v0);
    DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
    DAT_004ea920 = DAT_004ea920 * DAT_004ea930;
    DAT_004ea924 = DAT_004ea924 * DAT_004ea934;
    DAT_004ea928 = DAT_004ea928 * DAT_004ea938;
    temp_v6 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
    temp_v4 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
    temp_v7 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
    temp_v5 = (float)VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
    *(char *)(temp_v1 + 0xc0) = SUB41(temp_v5,0);
    *(char *)(temp_v1 + 0xc1) = (char)temp_v7;
    *(char *)(temp_v1 + 0xc2) = (char)temp_v4;
    *(char *)(temp_v1 + 0xc3) = (char)temp_v6;
    FUN_00269508(temp_v1 + 0x34,temp_v2,temp_v3);
    temp_v5 = temp_v5 + 1.0f;
    *(float *)(temp_v1 + 0xcc) = temp_v5;
    FUN_00269508(temp_v1 + 0x60,temp_v2,temp_v3);
    *(float *)(temp_v1 + 200) = temp_v5;
  }
  return;
}
