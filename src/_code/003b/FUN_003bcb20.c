/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcb20` (_code @ 0x3bcb20, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003bcb20_arg0 fn_003bcb20_arg0;
struct fn_003bcb20_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x5f3];
    char field_0x601; /* +0x601 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0029c950. */


void FUN_003bcb20(fn_003bcb20_arg0 *param_1,char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = (unsigned short)(param_2 == '\x01');
  param_1->field_0x601 = param_2;
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      temp_v0 = 2;
    }
    else if (param_2 == '\x03') {
      temp_v0 = 3;
    }
  }
  param_1->field_0x4 = param_1->field_0x4 + temp_v0;
  param_1->field_0x6 = param_1->field_0x6 + temp_v0;
  param_1->field_0x8 = param_1->field_0x8 + temp_v0;
  param_1->field_0xa = param_1->field_0xa + temp_v0;
  param_1->field_0xc = temp_v0 + param_1->field_0xc;
  FUN_0029c950();
  return;
}
