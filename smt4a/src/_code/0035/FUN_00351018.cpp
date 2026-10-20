/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351018` (_code @ 0x351018, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00271b64(...);
int FUN_0032246c(...);
int FUN_00322984(...);

typedef struct fn_00351018_arg0 fn_00351018_arg0;
struct fn_00351018_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0x3e];
    void *field_0x4c; /* +0x4c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00271b64. */
/* Supplied declaration required: FUN_0032246c. */
/* Supplied declaration required: FUN_00322984. */


void FUN_00351018(fn_00351018_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1->field_0x4c != (void *)0x0) {
    FUN_00271b64();
    FUN_0032246c(param_1);
  }
  FUN_00322984(param_1);
  return;
}

} /* extern "C" */
