/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037418c` (_code @ 0x37418c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ad6c(...);
int FUN_0038e4cc(...);

typedef struct fn_0037418c_arg0 fn_0037418c_arg0;
struct fn_0037418c_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
    unsigned char pad_0x8b[0x37f1];
    int field_0x387c; /* +0x387c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_0038e4cc. */


void FUN_0037418c(fn_0037418c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1->field_0x387c != 0) {
    FUN_0020ad6c(param_1,0x27,1);
    FUN_0038e4cc(param_1,9);
    return;
  }
  return;
}

} /* extern "C" */
