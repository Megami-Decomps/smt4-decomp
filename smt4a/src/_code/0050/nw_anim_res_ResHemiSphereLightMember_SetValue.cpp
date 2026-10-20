/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResHemiSphereLightMember_SetValue` (_code @ 0x50c73c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0050c73c_arg1 fn_0050c73c_arg1;
struct fn_0050c73c_arg1 {
    unsigned char pad_0x0[0xb8];
    unsigned char field_0xb8; /* +0xb8 */
    unsigned char pad_0xb9[0xf];
    unsigned char field_0xc8; /* +0xc8 */
    unsigned char pad_0xc9[0xf];
    unsigned char field_0xd8; /* +0xd8 */
    unsigned char pad_0xd9[0x3];
    unsigned char field_0xdc; /* +0xdc */
    unsigned char pad_0xdd[0x3];
    unsigned char field_0xe0; /* +0xe0 */
    unsigned char pad_0xe1[0x3];
    unsigned char field_0xe4; /* +0xe4 */
    unsigned char pad_0xe5[0x9b];
    undefined4 field_0x180; /* +0x180 */
    undefined4 field_0x184; /* +0x184 */
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    unsigned char pad_0x190[0xc8];
    undefined4 field_0x258; /* +0x258 */
    undefined4 field_0x25c; /* +0x25c */
    undefined4 field_0x260; /* +0x260 */
    undefined4 field_0x264; /* +0x264 */
};

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif


void nw_anim_res_ResHemiSphereLightMember_SetValue
               (int *param_1,fn_0050c73c_arg1 *param_2,float *param_3)

{
  int temp_v0;
  float *pfVar2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = *(int *)(*param_1 + 0x14);
  if (temp_v0 == 0) {
    temp_v1 = *param_3;
    temp_v2 = param_3[1];
    temp_v3 = param_3[2];
    temp_v4 = param_3[3];
    pfVar2 = (float *)&param_2->field_0xb8;
  }
  else {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v3 = *param_3;
        temp_v2 = param_3[1];
        temp_v1 = param_3[2];
        temp_v4 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v2 * temp_v2 + temp_v1 * temp_v1);
        *(float *)&param_2->field_0xd8 = temp_v3 * temp_v4;
        *(float *)&param_2->field_0xdc = temp_v2 * temp_v4;
        *(float *)&param_2->field_0xe0 = temp_v1 * temp_v4;
        return;
      }
      if (temp_v0 == 3) {
        *(float *)&param_2->field_0xe4 = *param_3;
      }
      return;
    }
    temp_v1 = *param_3;
    temp_v2 = param_3[1];
    temp_v3 = param_3[2];
    temp_v4 = param_3[3];
    pfVar2 = (float *)&param_2->field_0xc8;
  }
  *pfVar2 = temp_v1;
  pfVar2[1] = temp_v2;
  pfVar2[2] = temp_v3;
  pfVar2[3] = temp_v4;
  return;
}

} /* extern "C" */
