/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4d64` (_code @ 0x2f4d64, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f4d64_arg1 fn_002f4d64_arg1;
struct fn_002f4d64_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};


void FUN_002f4d64(int *param_1,fn_002f4d64_arg1 *param_2,int *param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_2->field_0x10;
  piVar3 = (int *)*param_3;
  if (piVar3 != piVar2) {
    piVar2 = (int *)*piVar3;
    *(int **)piVar3[1] = piVar2;
    *(int *)(*(int *)*param_3 + 4) = ((int *)*param_3)[1];
    param_2->field_0x14 = param_2->field_0x14 - 1;
    puVar1 = (unsigned int *)*param_3;
    *puVar1 = param_2->field_0x4;
    param_2->field_0x4 = puVar1;
  }
  *param_1 = (int)piVar2;
  return;
}
