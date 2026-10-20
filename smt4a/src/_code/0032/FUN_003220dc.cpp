/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003220dc` (_code @ 0x3220dc, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00221d14(double);
int FUN_002914e8(void);
int FUN_0034f8b4(int, double, int);
int FUN_0038136c(double, int, double, int);
int VectorFloatToUnsigned(double, int);

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00221d14. */
/* Supplied declaration required: FUN_002914e8. */
/* Supplied declaration required: FUN_0034f8b4. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_003220dc(float *param_1)

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
  FUN_0034f8b4((int)temp_v2 + 0x8c,temp_v3,temp_v4);
  if (*(char *)((int)temp_v2 + 0xbc) != '\0') {
    *(float *)((int)temp_v2 + 0xe0) = in_s0 + 120.0f;
    *(unsigned int *)((int)temp_v2 + 0xc4) = 0x43480000;
    *(unsigned int *)((int)temp_v2 + 200) = 0x42f00000;
    *(float *)((int)temp_v2 + 0xd4) = 200.0f - in_s0;
    *(float *)((int)temp_v2 + 0xd8) = 120.0f - in_s0;
    *(float *)((int)temp_v2 + 0xdc) = in_s0 + 200.0f;
  }
  else {
    DAT_006472dc = *param_1;
    DAT_006472e0 = param_1[1];
    DAT_006472e4 = param_1[2];
    DAT_006472e8 = param_1[3];
    in_s0 = param_1[5] * in_s0;
    FUN_002914e8();
    temp_v0 = DAT_006472e0;
    temp_v1 = DAT_006472dc;
    *(float *)((int)temp_v2 + 0xc4) = DAT_006472dc;
    *(float *)((int)temp_v2 + 200) = temp_v0;
    *(float *)((int)temp_v2 + 0xd4) = temp_v1 - in_s0;
    *(float *)((int)temp_v2 + 0xd8) = temp_v0 - in_s0;
    *(float *)((int)temp_v2 + 0xdc) = temp_v1 + in_s0;
    *(float *)((int)temp_v2 + 0xe0) = temp_v0 + in_s0;
  }
  temp_v1 = temp_v2;
  FUN_0038136c(temp_v2,(int)temp_v2 + 0x24,temp_v3,temp_v4);
  FUN_00221d14(param_1[4]);
  DAT_006472f8 = DAT_006472e8;
  DAT_006472ec = DAT_006472dc;
  DAT_006472f0 = DAT_006472e0;
  DAT_006472f4 = DAT_006472e4;
  FUN_00221d14(temp_v1);
  DAT_006472dc = DAT_006472dc * DAT_006472ec;
  DAT_006472e0 = DAT_006472e0 * DAT_006472f0;
  DAT_006472e4 = DAT_006472e4 * DAT_006472f4;
  DAT_006472e8 = DAT_006472e8 * DAT_006472f8;
  temp_v5 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
  temp_v7 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
  temp_v6 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
  temp_v8 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
  *(char *)((int)temp_v2 + 0xcc) = (char)temp_v6;
  *(char *)((int)temp_v2 + 0xcd) = (char)temp_v8;
  *(char *)((int)temp_v2 + 0xce) = (char)temp_v7;
  *(char *)((int)temp_v2 + 0xcf) = (char)temp_v5;
  *(unsigned int *)((int)temp_v2 + 0xd0) = *(unsigned int *)((int)temp_v2 + 0x28);
  return;
}

} /* extern "C" */
