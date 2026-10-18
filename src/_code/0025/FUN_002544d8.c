/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002544d8` (_code @ 0x2544d8, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002544d8_arg0 fn_002544d8_arg0;
struct fn_002544d8_arg0 {
    unsigned char pad_0x0[0x58];
    float field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x40];
    float field_0x9c; /* +0x9c */
    unsigned char pad_0xa0[0x40];
    float field_0xe0; /* +0xe0 */
    unsigned char pad_0xe4[0x40];
    float field_0x124; /* +0x124 */
    unsigned char pad_0x128[0x18];
    float field_0x140; /* +0x140 */
    float field_0x144; /* +0x144 */
    float field_0x148; /* +0x148 */
    unsigned char pad_0x14c[0x1c];
    int field_0x168; /* +0x168 */
    unsigned char pad_0x16c[0x20];
    short field_0x18c; /* +0x18c */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_002544d8(fn_002544d8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3; 6 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  param_1->field_0x140 = param_1->field_0x140 * in_s3 + in_s0;
  param_1->field_0x144 = param_1->field_0x144 * in_s3 + in_s1;
  param_1->field_0x148 = param_1->field_0x148 * in_s3 + in_s2;
  param_1->field_0x58 = param_1->field_0x58 * in_s3;
  param_1->field_0x9c = param_1->field_0x9c * in_s3;
  param_1->field_0xe0 = param_1->field_0xe0 * in_s3;
  param_1->field_0x124 = param_1->field_0x124 * in_s3;
  temp_v0 = (float)VectorSignedToFloat(param_1->field_0x168,(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1->field_0x168 = (int)(temp_v0 * in_s3);
  temp_v0 = (float)VectorSignedToFloat((int)param_1->field_0x18c,(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1->field_0x18c = (short)(int)(temp_v0 * in_s3);
  return;
}
