/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c711c` (_code @ 0x2c711c, 0x1e8 bytes) from smt4_v1.2.0.cxi.
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
/* Supplied declaration required: FUN_001e1cb0. */
/* Supplied declaration required: FUN_002573e0. */
/* Supplied declaration required: FUN_00269508. */
/* Supplied declaration required: FUN_00269694. */


void FUN_002c711c(float *param_1)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  float in_s0;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v2 = param_1[9];
  temp_v4 = *(int *)((int)temp_v2 + 0xb8);
  if (temp_v4 == 0) {
    temp_v3 = 0.0f;
  }
  else {
    temp_v3 = param_1[7];
    if (temp_v4 < (int)temp_v3) {
      *(unsigned char *)((int)temp_v2 + 0xcf) = 0;
      return;
    }
  }
  FUN_00269508((int)temp_v2 + 0x8c,temp_v3,temp_v4);
  if (*(char *)((int)temp_v2 + 0xbc) != '\0') {
    *(float *)((int)temp_v2 + 0xe0) = in_s0 + 120.0f;
    *(unsigned int *)((int)temp_v2 + 0xc4) = 0x43480000;
    *(unsigned int *)((int)temp_v2 + 200) = 0x42f00000;
    *(float *)((int)temp_v2 + 0xd4) = 200.0f - in_s0;
    *(float *)((int)temp_v2 + 0xd8) = 120.0f - in_s0;
    *(float *)((int)temp_v2 + 0xdc) = in_s0 + 200.0f;
  }
  else {
    DAT_004ea91c = *param_1;
    DAT_004ea920 = param_1[1];
    DAT_004ea924 = param_1[2];
    DAT_004ea928 = param_1[3];
    in_s0 = param_1[5] * in_s0;
    FUN_001e1cb0();
    temp_v0 = DAT_004ea920;
    temp_v1 = DAT_004ea91c;
    *(float *)((int)temp_v2 + 0xc4) = DAT_004ea91c;
    *(float *)((int)temp_v2 + 200) = temp_v0;
    *(float *)((int)temp_v2 + 0xd4) = temp_v1 - in_s0;
    *(float *)((int)temp_v2 + 0xd8) = temp_v0 - in_s0;
    *(float *)((int)temp_v2 + 0xdc) = temp_v1 + in_s0;
    *(float *)((int)temp_v2 + 0xe0) = temp_v0 + in_s0;
  }
  temp_v1 = temp_v2;
  FUN_00269694(temp_v2,(int)temp_v2 + 0x24,temp_v3,temp_v4);
  FUN_002573e0(param_1[4]);
  DAT_004ea938 = DAT_004ea928;
  DAT_004ea92c = DAT_004ea91c;
  DAT_004ea930 = DAT_004ea920;
  DAT_004ea934 = DAT_004ea924;
  FUN_002573e0(temp_v1);
  DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
  DAT_004ea920 = DAT_004ea920 * DAT_004ea930;
  DAT_004ea924 = DAT_004ea924 * DAT_004ea934;
  DAT_004ea928 = DAT_004ea928 * DAT_004ea938;
  temp_v5 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
  temp_v7 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
  temp_v6 = VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
  temp_v8 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
  *(char *)((int)temp_v2 + 0xcc) = (char)temp_v6;
  *(char *)((int)temp_v2 + 0xcd) = (char)temp_v8;
  *(char *)((int)temp_v2 + 0xce) = (char)temp_v7;
  *(char *)((int)temp_v2 + 0xcf) = (char)temp_v5;
  *(unsigned int *)((int)temp_v2 + 0xd0) = *(unsigned int *)((int)temp_v2 + 0x28);
  return;
}
