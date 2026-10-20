/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4964` (_code @ 0x2a4964, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0032c49c(...);

typedef struct fn_002a4964_arg0 fn_002a4964_arg0;
struct fn_002a4964_arg0 {
    unsigned char pad_0x0[0x1c];
    undefined4 field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0xc];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x18];
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1];
    byte field_0x62; /* +0x62 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0032c49c. */


void FUN_002a4964(fn_002a4964_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x62 != 0) {
    return;
  }
  if (param_1->field_0x20 + param_1->field_0x24 != param_2) {
    param_1->field_0x60 = 1;
  }
  FUN_0032c49c(param_1,param_2);
  return;
}

} /* extern "C" */
