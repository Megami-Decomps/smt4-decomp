/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481ba8` (_code @ 0x481ba8, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00481ba8_arg0 fn_00481ba8_arg0;
struct fn_00481ba8_arg0 {
    unsigned char pad_0x0[0xc];
    float *field_0xc; /* +0xc */
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    float field_0x20; /* +0x20 */
};

extern int g_lmapScene; /* 0x581288 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void FUN_00481ba8(fn_00481ba8_arg0 *param_1)

{
  float *pfVar1;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  pfVar1 = param_1->field_0xc;
  temp_v0 = param_1->field_0x20;
  temp_v3 = *(float *)(g_lmapScene + 0x1c) - pfVar1[0xb];
  temp_v2 = *(float *)(g_lmapScene + 0x20) - pfVar1[0xc];
  temp_v1 = *(float *)(g_lmapScene + 0x24) - pfVar1[0xd];
  temp_v4 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v2 * temp_v2 + temp_v1 * temp_v1);
  param_1->field_0x10 = temp_v3 * temp_v4 * temp_v0;
  param_1->field_0x14 = temp_v2 * temp_v4 * temp_v0;
  param_1->field_0x18 = temp_v1 * temp_v4 * temp_v0;
  return;
}

} /* extern "C" */
