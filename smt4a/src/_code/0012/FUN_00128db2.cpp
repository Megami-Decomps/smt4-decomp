/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128db2` (_code @ 0x128db2, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00128db2_arg0 fn_00128db2_arg0;
struct fn_00128db2_arg0 {
    unsigned char pad_0x0[0x1d];
    undefined1 field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0x6];
    void *field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
};

typedef int romwright_code(...);

void FUN_00128db2(fn_00128db2_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (romwright_code *)param_1->field_0x24;
  param_1->field_0x1d = 1;
  piVar1 = (int *)((param_1->field_0x28 >> 1) + param_1->field_0x2c);
  if ((param_1->field_0x28 & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(romwright_code **)((unsigned char *)UNRECOVERED_JUMPTABLE + *piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00128dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar1,*(unsigned int *)(param_1 + 1));
  return;
}

} /* extern "C" */
