/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c46c` (_code @ 0x37c46c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037c46c_arg0 fn_0037c46c_arg0;
struct fn_0037c46c_arg0 {
    unsigned char pad_0x0[0x15];
    undefined1 field_0x15; /* +0x15 */
    unsigned char pad_0x16[0x1];
    undefined1 field_0x17; /* +0x17 */
    unsigned char pad_0x18[0x8];
    ushort field_0x20; /* +0x20 */
};


void FUN_0037c46c(fn_0037c46c_arg0 *param_1)

{
  param_1->field_0x15 = 1;
  param_1->field_0x17 = 0;
  param_1->field_0x20 = param_1->field_0x20 | 1;
  return;
}
