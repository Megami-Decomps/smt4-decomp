/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f3ee0` (_code @ 0x4f3ee0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_004f3ee0_arg0 fn_004f3ee0_arg0;
struct fn_004f3ee0_arg0 {
    unsigned char pad_0x0[0x5f4];
    unsigned char field_0x5f4; /* +0x5f4 */
    unsigned char pad_0x5f5[0x57];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0xb4];
    undefined4 field_0x704; /* +0x704 */
    unsigned char field_0x708; /* +0x708 */
    unsigned char pad_0x709[0x3];
    undefined4 field_0x70c; /* +0x70c */
};


void FUN_004f3ee0(fn_004f3ee0_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)&param_1->field_0x5f4 = in_s0;
  *(unsigned int *)&param_1->field_0x708 = param_2;
  *(unsigned int *)(param_1 + 1) = param_3;
  param_1->field_0x704 = 0;
  param_1->field_0x70c = 0;
  param_1->field_0x64c = param_1->field_0x64c | 0x200;
  return;
}

} /* extern "C" */
