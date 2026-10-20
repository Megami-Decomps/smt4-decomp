/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AnimEvaluator_SetCacheBufferPointers` (_code @ 0x1b685c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001b685c_arg0 fn_001b685c_arg0;
struct fn_001b685c_arg0 {
    unsigned char pad_0x0[0x54];
    void *field_0x54; /* +0x54 */
    unsigned char pad_0x58[0x4];
    int field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    int field_0x68; /* +0x68 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001c42c8(int *);


void nw_gfx_AnimEvaluator_SetCacheBufferPointers(fn_001b685c_arg0 *param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = param_1->field_0x5c;
  temp_v1 = 0;
  temp_v3 = *(int *)((int)param_1->field_0x54 + 0x18);
  if (0 < temp_v3) {
    do {
      *(int *)(param_1->field_0x68 + temp_v1 * 4) = temp_v2;
      piVar1 = (int *)((int)param_1->field_0x54 + 0x1c);
      temp_v0 = *piVar1;
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar1 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = 0;
      if (temp_v0 != 0) {
        piVar1 = (int *)(temp_v0 + temp_v1 * 0x10 + 0x28);
        temp_v4 = *piVar1;
        if (temp_v4 == 0) {
          temp_v4 = 0;
        }
        else {
          temp_v4 = (int)piVar1 + temp_v4;
        }
      }
      temp_v0 = FUN_001c42c8(&temp_v4);
      temp_v1 = temp_v1 + 1;
      temp_v2 = temp_v2 + ((temp_v0 + 0xbU) & 0xfffffffc);
    } while (temp_v1 < temp_v3);
  }
  return;
}

} /* extern "C" */
