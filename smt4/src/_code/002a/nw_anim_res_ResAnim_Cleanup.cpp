/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_anim_res_ResAnim_Cleanup` (_code @ 0x2a21dc, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void nw_anim_res_ResAnim_Cleanup(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  if (*(int *)(*param_1 + 0x18) < 1) {
    return;
  }
  do {
    temp_v0 = *(int *)(*param_1 + 0x1c);
    if (temp_v0 != 0) {
      temp_v0 = *param_1 + 0x1c + temp_v0;
    }
    else {
      temp_v0 = 0;
    }
    temp_v1 = 0;
    if (temp_v0 != 0) {
      piVar1 = (int *)(temp_v0 + temp_v3 * 0x10 + 0x28);
      temp_v1 = *piVar1;
      if (temp_v1 == 0) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = (int)piVar1 + temp_v1;
      }
    }
    if ((*(int *)(temp_v1 + 8) == 7) && (temp_v0 = 0, 0 < *(int *)(temp_v1 + 0x10))) {
      do {
        if (*(int *)(temp_v1 + 0x14) != 0) {
          temp_v2 = temp_v1 + 0x14 + *(int *)(temp_v1 + 0x14);
        }
        else {
          temp_v2 = 0;
        }
        piVar1 = (int *)(temp_v2 + temp_v0 * 4);
        temp_v2 = *piVar1;
        temp_v0 = temp_v0 + 1;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar1 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        *(unsigned int *)(temp_v2 + 0x1c) = 0;
      } while (temp_v0 < *(int *)(temp_v1 + 0x10));
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < *(int *)(*param_1 + 0x18));
  return;
}

} /* extern "C" */
