/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029eb5c` (_code @ 0x29eb5c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289058(...);

typedef struct fn_0029eb5c_arg0 fn_0029eb5c_arg0;
struct fn_0029eb5c_arg0 {
    unsigned char pad_0x0[0x18];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x1];
    unsigned char field_0x1a; /* +0x1a */
    unsigned char pad_0x1b[0x1];
    undefined4 field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0xc];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00289058. */


void FUN_0029eb5c(fn_0029eb5c_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1[1].field_0x1a != '\0') {
    return;
  }
  if (param_1->field_0x20 + param_1->field_0x24 != param_2) {
    param_1[1].field_0x18 = 1;
  }
  FUN_00289058(param_1,param_2);
  return;
}

} /* extern "C" */
