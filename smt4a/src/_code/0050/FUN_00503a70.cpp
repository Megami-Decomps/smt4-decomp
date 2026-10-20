/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00503a70` (_code @ 0x503a70, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_VEC3SafeNormalize(float *, float *, int *);
int nw_gfx_BillboardUpdater_CalculateLocalMatrix(unsigned int, unsigned int, int, int);
int nw_gfx_BillboardUpdater_CalculateScreenLocalMatrix(unsigned int, unsigned int, int, unsigned int, float *);

/* stack frame of param_8: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

/* Supplied declaration required: nn_math_VEC3SafeNormalize. */
/* Supplied declaration required: nw_gfx_BillboardUpdater_CalculateLocalMatrix. */
/* Supplied declaration required: nw_gfx_BillboardUpdater_CalculateScreenLocalMatrix. */


void FUN_00503a70(unsigned int param_1,unsigned int param_2,float *param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  switch(param_8) {
  case 1:
    nw_gfx_BillboardUpdater_CalculateLocalMatrix(param_1,param_2,param_6,1);
    return;
  case 2:
    nw_gfx_BillboardUpdater_CalculateLocalMatrix(param_1,param_2,param_6,1);
    return;
  case 3:
    temp_v3 = 0.0f;
    temp_v4 = 0.0f;
    temp_v5 = 1.0f;
    nw_gfx_BillboardUpdater_CalculateScreenLocalMatrix(param_1,param_2,param_6,param_4,&temp_v3);
    break;
  case 4:
    temp_v0 = *(float *)(param_6 + 0x1c);
    temp_v2 = *(float *)(param_6 + 0xc);
    temp_v1 = *(float *)(param_6 + 0x2c);
    temp_v3 = -(param_3[1] * temp_v0 + param_3[2] * temp_v1 + param_3[3] + *param_3 * temp_v2);
    temp_v4 = -(param_3[5] * temp_v0 + param_3[6] * temp_v1 + param_3[7] + param_3[4] * temp_v2);
    temp_v5 = -(param_3[9] * temp_v0 + param_3[10] * temp_v1 + param_3[0xb] + param_3[8] * temp_v2);
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0x3f800000;
    nn_math_VEC3SafeNormalize(&temp_v3,&temp_v3,&temp_v6);
    nw_gfx_BillboardUpdater_CalculateScreenLocalMatrix(param_1,param_2,param_6,param_4,&temp_v3);
    return;
  case 5:
    nw_gfx_BillboardUpdater_CalculateLocalMatrix(param_1,param_2,param_6,0);
    return;
  case 6:
    nw_gfx_BillboardUpdater_CalculateLocalMatrix(param_1,param_2,param_6,0);
    return;
  }
  return;
}

} /* extern "C" */
