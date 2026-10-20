/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_RenderContext_TransformToViewCoordinate` (_code @ 0x2a16ec, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_gfx_RenderContext_TransformToViewCoordinate
               (unsigned int param_1,float *param_2,float *param_3,float *param_4)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v1 = *param_4;
  temp_v2 = param_4[1];
  temp_v3 = param_4[2];
  temp_v4 = param_3[4];
  temp_v11 = param_3[8];
  temp_v10 = param_3[5];
  temp_v9 = param_3[9];
  temp_v8 = param_3[6];
  temp_v7 = param_3[10];
  temp_v0 = param_4[3];
  temp_v5 = param_3[7];
  temp_v6 = param_3[0xb];
  *param_2 = *param_3 * temp_v1 + param_3[1] * temp_v2 + param_3[2] * temp_v3 + param_3[3] * temp_v0;
  param_2[1] = temp_v4 * temp_v1 + temp_v10 * temp_v2 + temp_v8 * temp_v3 + temp_v5 * temp_v0;
  param_2[2] = temp_v11 * temp_v1 + temp_v9 * temp_v2 + temp_v7 * temp_v3 + temp_v6 * temp_v0;
  param_2[3] = temp_v0;
  return;
}

} /* extern "C" */
