/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimEvaluator_GetResult` (_code @ 0x3e0f50, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_003e8b2c. */
/* Supplied declaration required: FUN_003e8c38. */


int nw_gfx_AnimEvaluator_GetResult(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = param_4;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x1c))(param_1,param_3);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = param_1[2];
    temp_v5 = 0;
    piVar2 = (int *)(*(int *)(temp_v0 + 8) + 0x14);
    temp_v1 = *piVar2;
    if (temp_v1 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (int)piVar2 + temp_v1;
    }
    temp_v2 = 0;
    if (temp_v1 != 0) {
      piVar2 = (int *)(temp_v1 + param_3 * 0x10 + 0x28);
      temp_v2 = *piVar2;
      if (temp_v2 == 0) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = (int)piVar2 + temp_v2;
      }
    }
    temp_v2 = *(int *)(*(int *)(temp_v0 + 0x10) + *(int *)(temp_v2 + 0xc) * 4);
    temp_v1 = *(int *)(param_1[5] + param_3 * 4);
    if ((param_1[0x17] == 0) || ((char)param_1[0x16] != '\0')) {
      temp_v4 = *(int *)(param_1[0x15] + 0x1c);
      if (temp_v4 != 0) {
        temp_v4 = param_1[0x15] + 0x1c + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      temp_v5 = 0;
      if (temp_v4 != 0) {
        piVar2 = (int *)(temp_v4 + temp_v1 * 0x10 + 0x28);
        temp_v1 = *piVar2;
        if (temp_v1 != 0) {
          temp_v5 = temp_v1 + (int)piVar2;
        }
      }
      if ((*(int *)(temp_v0 + 0x58) - *(int *)(temp_v0 + 0x54)) >> 2 != 0) {
        temp_v3 = *(unsigned int *)(*(int *)(temp_v0 + 0x54) + param_3 * 4);
      }
      else {
        temp_v3 = 0;
      }
      if (temp_v2 == 0) {
        FUN_003e8c38(&temp_v5,param_2,0,temp_v3);
        return param_2;
      }
      temp_v3 = FUN_003e8c38(&temp_v5,param_2 + 8,*(unsigned int *)(param_2 + 4),temp_v3);
      *(unsigned int *)(param_2 + 4) = temp_v3;
      temp_v1 = param_2;
    }
    else {
      if (temp_v2 == 0) {
        temp_v2 = *(int *)(param_1[0x15] + 0x1c);
        temp_v0 = temp_v5;
        if (temp_v2 != 0) {
          temp_v0 = param_1[0x15] + 0x1c + temp_v2;
        }
        if (temp_v0 == 0) {
          temp_v5 = 0;
        }
        else {
          piVar2 = (int *)(temp_v0 + temp_v1 * 0x10 + 0x28);
          temp_v0 = *piVar2;
          if (temp_v0 != 0) {
            temp_v5 = temp_v0 + (int)piVar2;
          }
        }
        FUN_003e8b2c(&temp_v5,param_2,*(unsigned int *)(param_1[0x1a] + temp_v1 * 4));
        return param_2;
      }
      temp_v1 = *(int *)(param_1[0x1a] + temp_v1 * 4);
    }
  }
  return temp_v1;
}
