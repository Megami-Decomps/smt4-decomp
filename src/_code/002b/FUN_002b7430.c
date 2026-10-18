/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7430` (_code @ 0x2b7430, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b7430_arg1 fn_002b7430_arg1;
struct fn_002b7430_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    float field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x20c];
    float field_0x220; /* +0x220 */
    unsigned char pad_0x224[0x4];
    float field_0x228; /* +0x228 */
};


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b7430(int param_1,fn_002b7430_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = param_2->field_0x4;
  piVar2 = param_2->field_0x8;
  *(int **)((int)pvVar1 + 4) = piVar2;
  *piVar2 = (int)pvVar1;
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
