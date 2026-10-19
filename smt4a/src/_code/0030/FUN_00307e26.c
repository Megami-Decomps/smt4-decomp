/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307e26` (_code @ 0x307e26, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00307e26_arg1 fn_00307e26_arg1;
struct fn_00307e26_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;


void FUN_00307e26(unsigned int *param_1,fn_00307e26_arg1 *param_2,unsigned int *param_3,
                 unsigned int *param_4)

{
  int *piVar1;
  int *piVar2;
  
  while (piVar2 = (int *)*param_3, piVar2 != (int *)*param_4) {
    piVar1 = param_2->field_0x10;
    if (piVar2 != piVar1) {
      piVar1 = (int *)*piVar2;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      param_2->field_0x14 = param_2->field_0x14 - 1;
      (**(romwright_code **)piVar2[2])(piVar2 + 2);
      *piVar2 = param_2->field_0x4;
      param_2->field_0x4 = (undefined4)piVar2;
    }
    *param_3 = (unsigned int)piVar1;
  }
  *param_1 = (unsigned int)piVar2;
  return;
}
