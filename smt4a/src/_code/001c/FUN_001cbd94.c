/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cbd94` (_code @ 0x1cbd94, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001cbd94_arg0 fn_001cbd94_arg0;
struct fn_001cbd94_arg0 {
    unsigned char pad_0x0[0x5];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x72];
    undefined1 field_0x78; /* +0x78 */
    unsigned char pad_0x79[0x3];
    undefined4 field_0x7c; /* +0x7c */
    undefined1 field_0x80; /* +0x80 */
};


void FUN_001cbd94(fn_001cbd94_arg0 *param_1)

{
  param_1->field_0x80 = 0;
  param_1->field_0x78 = 0;
  param_1->field_0x7c = 0;
  param_1->field_0x5 = 1;
  return;
}
