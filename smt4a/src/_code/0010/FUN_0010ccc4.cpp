/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ccc4` (_code @ 0x10ccc4, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7194(...);

typedef struct fn_0010ccc4_arg0 fn_0010ccc4_arg0;
typedef struct fn_0010ccc4_arg1 fn_0010ccc4_arg1;
struct fn_0010ccc4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined2 field_0x18; /* +0x18 */
    undefined2 field_0x1a; /* +0x1a */
};
struct fn_0010ccc4_arg1 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
};

/* Supplied declaration required: FUN_002e7194. */


int FUN_0010ccc4(fn_0010ccc4_arg0 *param_1,fn_0010ccc4_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1->field_0x4 = param_2->field_0x4;
  param_1->field_0x8 = param_2->field_0x8;
  temp_v0 = param_2->field_0x10;
  param_1->field_0x14 = param_2->field_0x14;
  param_1->field_0x10 = temp_v0;
  param_1->field_0x18 = param_2->field_0x18;
  param_1->field_0x1a = param_2->field_0x1a;
  FUN_002e7194(param_1 + 1,param_2 + 1);
  return (int)param_1;
}

} /* extern "C" */
