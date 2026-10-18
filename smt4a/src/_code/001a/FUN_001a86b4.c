/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a86b4` (_code @ 0x1a86b4, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001a86b4_arg0 fn_001a86b4_arg0;
struct fn_001a86b4_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    byte field_0x3; /* +0x3 */
    byte field_0x4; /* +0x4 */
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x2];
    float field_0x8; /* +0x8 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int * FUN_001a86b4(fn_001a86b4_arg0 *param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v0 = param_1->field_0x4;
  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5)) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  if (param_3 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 2;
  }
  *param_2 = (temp_v3 << 2) | ((unsigned int)param_1->field_0x3 << 1) | (temp_v1 << 4) |
             ((unsigned int)param_1->field_0x2 << 8) | ((unsigned int)param_1->field_0x1 << 0xc) |
             ((unsigned int)(temp_v0 == 2 || temp_v0 == 5) << 0x18);
  param_2[1] = 0xf009b;
  temp_v2 = 0;
  if (param_1->field_0x4 == 3 || param_1->field_0x4 == 0) {
    param_2[2] = 0;
    param_2[3] = 0xf009c;
    return param_2 + 4;
  }
  temp_v5 = param_1->field_0x8;
  temp_v6 = 0.0f;
  if ((temp_v5 != 0.0f) && ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17 != 0xff)) {
    temp_v5 = (temp_v5 + 16.0f) * 256.0f;
    if (0.0f <= temp_v5) {
      temp_v4 = SBORROW4((int)temp_v5,0x46000000);
      temp_v3 = (int)temp_v5 - 0x46000000;
      if ((int)temp_v5 >= 0x46000000) {
        temp_v6 = 8191.0f;
      }
      else {
        temp_v4 = SBORROW4((int)temp_v5,0x45800000);
        temp_v3 = (int)temp_v5 - 0x45800000;
        temp_v6 = temp_v5;
      }
      if (temp_v3 < 0 == temp_v4) {
        temp_v2 = VectorFloatToUnsigned(temp_v6 - 4096.0f,3);
        param_2[2] = temp_v2 | (param_4 << 0x10) | ((unsigned int)param_1->field_0x5 << 0x18);
        param_2[3] = 0xf009c;
        return param_2 + 4;
      }
    }
    temp_v2 = VectorFloatToUnsigned(temp_v6 + 4096.0f,3);
  }
  param_2[2] = temp_v2 | (param_4 << 0x10) | ((unsigned int)param_1->field_0x5 << 0x18);
  param_2[3] = 0xf009c;
  return param_2 + 4;
}
