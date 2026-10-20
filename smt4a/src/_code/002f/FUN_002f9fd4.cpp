/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9fd4` (_code @ 0x2f9fd4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_uidivmod(int, unsigned int);

typedef struct fn_002f9fd4_arg0 fn_002f9fd4_arg0;
struct fn_002f9fd4_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_002f9fd4(fn_002f9fd4_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1->field_0x4 + param_1->field_0x10 * 4) = *param_2;
  __aeabi_uidivmod(param_1->field_0x10 + 1,*(unsigned int *)(param_1 + 1));
  param_1->field_0x10 = temp_v0;
  param_1->field_0x18 = param_1->field_0x18 + 1;
  return;
}

} /* extern "C" */
