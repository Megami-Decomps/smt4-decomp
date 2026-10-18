/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292bcc` (_code @ 0x292bcc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00292bcc_arg0 fn_00292bcc_arg0;
struct fn_00292bcc_arg0 {
    unsigned char pad_0x0[0x48];
    undefined1 field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
};


void FUN_00292bcc(fn_00292bcc_arg0 *param_1,unsigned int param_2)

{
  param_1->field_0x48 = 1;
  param_1->field_0x4c = param_2;
  param_1->field_0x50 = 0;
  return;
}
