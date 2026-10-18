/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381cd0` (_code @ 0x381cd0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00381cd0_arg0 fn_00381cd0_arg0;
struct fn_00381cd0_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    undefined1 field_0x9; /* +0x9 */
};

extern unsigned int FUN_00290a4c(void);


void FUN_00381cd0(fn_00381cd0_arg0 *param_1)

{
  unsigned int temp_v0;
  
  param_1->field_0x9 = 0;
  param_1->field_0x8 = 0;
  temp_v0 = FUN_00290a4c();
  param_1->field_0x4 = temp_v0;
  return;
}
