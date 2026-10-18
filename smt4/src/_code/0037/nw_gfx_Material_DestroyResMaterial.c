/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Material_DestroyResMaterial` (_code @ 0x3733e4, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0036f128. */
/* Supplied declaration required: FUN_00370234. */
/* Supplied declaration required: nw_gfx_Material_DestroyResFragmentShader. */
/* Supplied declaration required: nw_gfx_res_ResMaterial_Cleanup. */


void nw_gfx_Material_DestroyResMaterial(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int *piStack_1c;
  int temp_v4;
  
  if (param_2 != 0) {
    piStack_1c = param_1;
    temp_v4 = param_2;
    nw_gfx_res_ResMaterial_Cleanup(&temp_v4);
    temp_v2 = 0;
    temp_v1 = *(int *)(temp_v4 + 0x288);
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 + temp_v4 + 0x288;
    }
    else {
      temp_v1 = 0;
    }
    nw_gfx_Material_DestroyResFragmentShader(param_1,temp_v1);
    temp_v1 = *(int *)(temp_v4 + 0x280);
    if (temp_v1 != 0) {
      temp_v0 = temp_v4 + 0x280 + temp_v1;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      if (temp_v1 != 0) {
        temp_v3 = temp_v4 + 0x280 + temp_v1;
      }
      else {
        temp_v3 = 0;
      }
      FUN_0036f128(&temp_v3);
    }
    temp_v1 = 0;
    do {
      piVar3 = (int *)(temp_v4 + temp_v1 * 4 + 0x274);
      if (*piVar3 != 0) {
        temp_v0 = *piVar3 + (int)piVar3;
      }
      else {
        temp_v0 = 0;
      }
      if (temp_v0 != 0) {
        if (*piVar3 != 0) {
          temp_v3 = *piVar3 + (int)piVar3;
        }
        else {
          temp_v3 = 0;
        }
        FUN_00370234(&temp_v3);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
    if (*(int *)(temp_v4 + 0x294) != 0 && *(int *)(temp_v4 + 0x294) + temp_v4 + 0x294 != 0) {
      temp_v1 = 0;
      if (temp_v1 < *(int *)(temp_v4 + 0x290)) {
        do {
          temp_v0 = *(int *)(temp_v4 + 0x294);
          if (temp_v0 != 0) {
            temp_v0 = temp_v4 + 0x294 + temp_v0;
          }
          else {
            temp_v0 = 0;
          }
          piVar3 = (int *)(temp_v0 + temp_v1 * 4);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = temp_v0 + (int)piVar3;
          }
          else {
            temp_v0 = 0;
          }
          if (temp_v0 != 0) {
            (**(romwright_code **)(*param_1 + 0xc))(param_1);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(temp_v4 + 0x290));
      }
      temp_v1 = *(int *)(temp_v4 + 0x294);
      if (temp_v1 != 0) {
        temp_v2 = temp_v1 + temp_v4 + 0x294;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v2);
    }
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v4);
  }
  return;
}
