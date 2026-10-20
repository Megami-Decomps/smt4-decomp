/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034bb54` (_code @ 0x34bb54, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4908(...);
int FUN_002ab92c(...);
int FUN_00364e28(...);
int FUN_003e2dd0(...);
int nw_gfx_RenderContext_ResetState_2B7478(...);

typedef struct fn_0034bb54_arg1 fn_0034bb54_arg1;
struct fn_0034bb54_arg1 {
    unsigned char pad_0x0[0x14];
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x80];
    int field_0xa4; /* +0xa4 */
    unsigned char pad_0xa8[0x4];
    int field_0xac; /* +0xac */
    unsigned char pad_0xb0[0x8];
    int field_0xb8; /* +0xb8 */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_004720f0; /* 0x4720f0 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002a4908. */
/* Supplied declaration required: FUN_002ab92c. */
/* Supplied declaration required: FUN_00364e28. */
/* Supplied declaration required: FUN_003e2dd0. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */


void FUN_0034bb54(int param_1,fn_0034bb54_arg1 *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  nw_gfx_RenderContext_ResetState_2B7478(param_2);
  FUN_00364e28(param_2,*(unsigned int *)(param_1 + 4));
  temp_v3 = 0x3f800000;
  temp_v4 = 0x3f800000;
  temp_v5 = 0x3f800000;
  temp_v6 = 0x3f800000;
  FUN_003e2dd0(param_2,0x4000,&temp_v3);
  temp_v0 = *(int *)(param_2->field_0xac + *(int *)(param_1 + 8) * 4);
  param_2->field_0xb8 = *(int *)(param_1 + 8);
  if (param_2->field_0xa4 != temp_v0) {
    param_2->field_0xa4 = temp_v0;
    if (*(float *)(temp_v0 + 0x294) == 0.0f) {
      DAT_004720f0 = 0;
    }
    else {
      temp_v2 = -*(float *)(temp_v0 + 0x294);
      DAT_004720f0 = 0;
      if (((unsigned int)temp_v2 & 0x80000000) != 0) {
        DAT_004720f0 = 0x800000;
      }
      if (romwright_fabs_4(temp_v2) == 0.0f) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = ((unsigned int)romwright_fabs_4(temp_v2) >> 0x17) - 0x40;
        if ((int)temp_v1 < 0) {
          param_2->field_0x20 = *(unsigned int *)(param_1 + 0xc);
          FUN_002ab92c(param_2,param_2->field_0xa4,0);
          FUN_002a4908(param_2,0);
          param_2->field_0x14 = 3;
          return;
        }
        if ((int)temp_v1 >= 0x80) {
          DAT_004720f0 = 0x7f0000;
          param_2->field_0x20 = *(unsigned int *)(param_1 + 0xc);
          FUN_002ab92c(param_2,param_2->field_0xa4,0);
          FUN_002a4908(param_2,0);
          param_2->field_0x14 = 3;
          return;
        }
      }
      DAT_004720f0 = (((unsigned int)temp_v2 & 0x7fffff) >> 7) | DAT_004720f0 | ((temp_v1 & 0x7f) << 0x10);
    }
  }
  param_2->field_0x20 = *(unsigned int *)(param_1 + 0xc);
  FUN_002ab92c(param_2,param_2->field_0xa4,0);
  FUN_002a4908(param_2,0);
  param_2->field_0x14 = 3;
  return;
}

} /* extern "C" */
