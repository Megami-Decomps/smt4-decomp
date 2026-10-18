/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381958` (_code @ 0x381958, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00381958_arg0 fn_00381958_arg0;
struct fn_00381958_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
    undefined1 field_0xa; /* +0xa */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_003814d4. */


void FUN_00381958(fn_00381958_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 1 native warning(s); review required */
  FUN_003814d4(param_1,4,param_2,param_3,param_4,0,0x14);
  param_1->field_0xa = 4;
  param_1->field_0x9 = param_1->field_0x9 | 0x10;
  param_1->field_0x8 = param_1->field_0x8 | 0x10;
  return;
}
