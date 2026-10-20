/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResPrimitive_SetupDrawCommand` (_code @ 0x156c54, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015bda0(int *, int, unsigned int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0015bda0. */


void nw_gfx_res_ResPrimitive_SetupDrawCommand(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *unaff_r4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  piVar1 = (int *)*param_1;
  temp_v0 = piVar1[1];
  if (temp_v0 != 0) {
    unaff_r4 = (int *)((int)piVar1 + temp_v0 + 4);
  }
  if (temp_v0 == 0) {
    unaff_r4 = (int *)0x0;
  }
  piVar1 = unaff_r4 + *piVar1;
  for (; unaff_r4 != piVar1; unaff_r4 = unaff_r4 + 1) {
    if (*unaff_r4 != 0) {
      temp_v0 = *unaff_r4 + (int)unaff_r4;
    }
    else {
      temp_v0 = 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x18);
    temp_v4 = *(int *)(temp_v0 + 0x1c);
    temp_v2 = temp_v4 + temp_v1;
    temp_v3 = temp_v1;
    FUN_0015bda0(&temp_v1,temp_v0,param_2);
  }
  *(unsigned int *)(*param_1 + 0x10) = *(unsigned int *)(*param_1 + 0x10) | 1;
  return;
}

} /* extern "C" */
