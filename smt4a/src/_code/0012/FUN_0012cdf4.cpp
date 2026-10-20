/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cdf4` (_code @ 0x12cdf4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9f00(void *, int);

typedef struct fn_0012cdf4_arg0 fn_0012cdf4_arg0;
struct fn_0012cdf4_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x18];
    int field_0x24; /* +0x24 */
    ushort field_0x28; /* +0x28 */
    unsigned char pad_0x2a[0x2];
    int field_0x2c; /* +0x2c */
};

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002e9f00. */


void FUN_0012cdf4(fn_0012cdf4_arg0 *param_1)

{
/* irregular: irregular input(s): in_stack_00000000, in_stack_00000008, in_stack_0000000c; 4 native warning(s); review required */
  int in_stack_00000000;
  unsigned int in_stack_00000008;
  int in_stack_0000000c;
  
  if (((param_1->field_0x24 != in_stack_00000000) || (param_1->field_0x28 != in_stack_00000008)) ||
     (param_1->field_0x2c != in_stack_0000000c)) {
    FUN_002e9f00(param_1->field_0x8,4);
  }
  else {
    (**(romwright_code **)(**(int **)&param_1->field_0x4 + 8))();
  }
  return;
}

} /* extern "C" */
