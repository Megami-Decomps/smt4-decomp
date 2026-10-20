/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c373c` (_code @ 0x1c373c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_001c373c_arg0 fn_001c373c_arg0;
struct fn_001c373c_arg0 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x2];
    byte field_0xe; /* +0xe */
    unsigned char pad_0xf[0x1];
    uint field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    byte field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
};

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_001c373c(fn_001c373c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  
  temp_v1 = param_1->field_0x8;
  temp_v2 = param_1->field_0x10;
  if (temp_v2 < temp_v1) {
    if (temp_v2 + param_2 <= temp_v1) {
      param_1->field_0x10 = temp_v2 + param_2;
      return;
    }
    param_2 = param_2 - (temp_v1 - temp_v2);
    param_1->field_0x10 = temp_v1;
  }
  temp_v4 = param_1->field_0x4;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 < 0.0f) << 0x1f) | ((unsigned int)(temp_v4 == 0.0f) << 0x1e);
  temp_v0 = (unsigned char)(temp_v1 >> 0x18);
  if (!(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == (temp_v4 != temp_v4)) {
    if (param_1->field_0x1c == 0) {
      param_1->field_0x1c = 1;
      temp_v3 = (float)VectorUnsignedToFloat((unsigned int)param_1->field_0xe,(unsigned char)(temp_v1 >> 0x16) & 3);
      param_1->field_0x14 = temp_v3 * 0.007874016f;
    }
    temp_v3 = (float)VectorSignedToFloat(param_2,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v4 = param_1->field_0x14 + temp_v4 * temp_v3 * 0.001f;
    param_1->field_0x14 = temp_v4;
    if ((int)temp_v4 >= 0x3f800000) {
      param_1->field_0x1d = 1;
    }
    else {
      param_1->field_0x1d = 0;
    }
    temp_v3 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(temp_v1 >> 0x16) & 3);
    param_1->field_0x14 = temp_v4 - temp_v3;
  }
  return;
}

} /* extern "C" */
