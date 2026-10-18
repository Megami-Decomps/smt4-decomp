/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb4f4` (_code @ 0x3fb4f4, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fb4f4_arg1 fn_003fb4f4_arg1;
struct fn_003fb4f4_arg1 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    void *field_0x14; /* +0x14 */
    void *field_0x18; /* +0x18 */
    void *field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
};

typedef int romwright_code();
/* Supplied declaration required: FUN_003fb4ec. */


void FUN_003fb4f4(int param_1,fn_003fb4f4_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int *piVar2;
  fn_003fb4f4_arg1 *pfVar3;
  
  do {
    FUN_003fb4ec(param_1,param_2->field_0xc);
    pfVar3 = (fn_003fb4f4_arg1 *)param_2->field_0x8;
    param_2->field_0xc = *(unsigned int *)(param_1 + 8);
    puVar1 = param_2->field_0x1c;
    if (puVar1 == (unsigned char *)0x0 || (void **)puVar1 == &param_2->field_0x14) {
      if (param_2->field_0x18 != (unsigned int *)0x0) {
        (*(romwright_code *)**(unsigned int **)param_2->field_0x18)();
        piVar2 = param_2->field_0x14;
        (**(romwright_code **)(*piVar2 + 4))(piVar2,param_2->field_0x18);
      }
    }
    else {
      *(int *)(puVar1 + 0xc) = param_2->field_0x20;
      *(void **)(param_2->field_0x20 + 8) = param_2->field_0x1c;
      param_2->field_0x1c = (void *)0x0;
      param_2->field_0x20 = 0;
    }
    param_2->field_0x18 = (void *)0x0;
    *(fn_003fb4f4_arg1 **)(param_1 + 8) = param_2;
    param_2 = pfVar3;
  } while (pfVar3 != (fn_003fb4f4_arg1 *)0x0);
  return;
}
