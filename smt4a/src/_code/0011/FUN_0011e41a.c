/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e41a` (_code @ 0x11e41a, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011e41a_arg0 fn_0011e41a_arg0;
typedef struct fn_0011e41a_arg1 fn_0011e41a_arg1;
struct fn_0011e41a_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    undefined1 field_0x5; /* +0x5 */
    undefined1 field_0x6; /* +0x6 */
    undefined1 field_0x7; /* +0x7 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined1 field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x1];
    undefined2 field_0x1a; /* +0x1a */
};
struct fn_0011e41a_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    byte field_0x5; /* +0x5 */
    byte field_0x6; /* +0x6 */
    byte field_0x7; /* +0x7 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    byte field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x1];
    ushort field_0x1a; /* +0x1a */
};


void FUN_0011e41a(fn_0011e41a_arg0 *param_1,fn_0011e41a_arg1 *param_2)

{
  unsigned int temp_v0;
  
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x5 = param_2->field_0x5;
  param_1->field_0x6 = param_2->field_0x6;
  param_1->field_0x7 = param_2->field_0x7;
  temp_v0 = param_2->field_0x8;
  param_1->field_0xc = param_2->field_0xc;
  param_1->field_0x8 = temp_v0;
  param_1->field_0x10 = param_2->field_0x10;
  param_1->field_0x14 = param_2->field_0x14;
  param_1->field_0x18 = param_2->field_0x18;
  param_1->field_0x1a = param_2->field_0x1a;
  return;
}
