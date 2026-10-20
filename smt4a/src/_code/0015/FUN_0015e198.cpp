/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e198` (_code @ 0x15e198, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0015e198_arg0 fn_0015e198_arg0;
struct fn_0015e198_arg0 {
    unsigned char pad_0x0[0x6c];
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    float field_0x80; /* +0x80 */
    byte field_0x84; /* +0x84 */
};


void FUN_0015e198(fn_0015e198_arg0 *param_1,float *param_2)

{
  float temp_v0;
  float temp_v1;
  
  if (param_1->field_0x84 == 0) {
    param_1->field_0x78 = *param_2 - param_1->field_0x6c;
    param_1->field_0x7c = param_2[1] - param_1->field_0x70;
    param_1->field_0x80 = param_2[2] - param_1->field_0x74;
  }
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  param_1->field_0x74 = param_2[2];
  param_1->field_0x6c = temp_v0;
  param_1->field_0x70 = temp_v1;
  param_1->field_0x84 = 0;
  return;
}

} /* extern "C" */
