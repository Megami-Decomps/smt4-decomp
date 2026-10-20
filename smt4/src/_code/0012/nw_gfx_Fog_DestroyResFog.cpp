/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Fog_DestroyResFog` (_code @ 0x12d9b0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0012d9b0_arg1 fn_0012d9b0_arg1;
struct fn_0012d9b0_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0xb4];
    int field_0xc4; /* +0xc4 */
    int field_0xc8; /* +0xc8 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void nw_gfx_Fog_DestroyResFog(int *param_1,fn_0012d9b0_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  if (param_2->field_0xc != 0 && (int)&param_2->field_0xc + param_2->field_0xc != 0) {
    (**(romwright_code **)(*param_1 + 0xc))();
  }
  if (param_2->field_0xc8 != 0 && (int)&param_2->field_0xc8 + param_2->field_0xc8 != 0) {
    (**(romwright_code **)(*param_1 + 0xc))();
  }
  piVar1 = &param_2->field_0xc4;
  temp_v2 = param_2->field_0xc4 == 0;
  if (!temp_v2) {
    piVar1 = (int *)((int)piVar1 + param_2->field_0xc4);
    temp_v2 = piVar1 == (int *)0x0;
  }
  if (!temp_v2) {
    temp_v0 = piVar1[4];
    if (temp_v0 != 0 && temp_v0 + (int)(piVar1 + 4) != 0) {
      (**(romwright_code **)(*param_1 + 0xc))();
    }
    if (param_2->field_0xc4 != 0) {
      temp_v1 = (int)&param_2->field_0xc4 + param_2->field_0xc4;
    }
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v1);
  }
                    /* WARNING: Could not recover jumptable at 0x0012da74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}

} /* extern "C" */
