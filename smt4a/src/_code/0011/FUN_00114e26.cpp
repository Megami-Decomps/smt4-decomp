/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114e26` (_code @ 0x114e26, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b36e(undefined4);

typedef struct fn_00114e26_arg0 fn_00114e26_arg0;
struct fn_00114e26_arg0 {
    unsigned char pad_0x0[0x18];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0010b36e. */


void FUN_00114e26(fn_00114e26_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x58);
  param_1->field_0x24 = *(unsigned int *)(param_2 + 0x5c);
  param_1->field_0x20 = temp_v0;
  FUN_0010b36e(param_1->field_0x18);
  return;
}

} /* extern "C" */
