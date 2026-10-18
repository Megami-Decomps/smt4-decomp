/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5f6c` (_code @ 0x2b5f6c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b5f6c_arg0 fn_002b5f6c_arg0;
struct fn_002b5f6c_arg0 {
    undefined1 field_0x0; /* +0x0 */
    undefined1 field_0x1; /* +0x1 */
    undefined2 field_0x2; /* +0x2 */
    undefined4 field_0x4; /* +0x4 */
};


void FUN_002b5f6c(fn_002b5f6c_arg0 *param_1,unsigned char param_2,unsigned int param_3,unsigned int param_4
                 )

{
  param_1->field_0x2 = 0;
  param_1->field_0x0 = param_2;
  param_1->field_0x1 = 0;
  param_1->field_0x4 = param_3;
  param_1[1].field_0x0 = (char)param_4;
  param_1[1].field_0x1 = (char)((unsigned int)param_4 >> 8);
  param_1[1].field_0x2 = (short)((unsigned int)param_4 >> 0x10);
  return;
}
