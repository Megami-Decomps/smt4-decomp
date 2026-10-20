/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031111c` (_code @ 0x31111c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00301484(void);

typedef struct fn_0031111c_arg2 fn_0031111c_arg2;
struct fn_0031111c_arg2 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x24];
    undefined1 field_0x34; /* +0x34 */
    undefined1 field_0x35; /* +0x35 */
};

/* Supplied declaration required: FUN_00301484. */


void FUN_0031111c(unsigned int param_1,int param_2,fn_0031111c_arg2 *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  param_3->field_0x35 = 3;
  if (param_2 != 0) {
    param_3->field_0x34 = 1;
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0xffffffff;
  }
  param_3->field_0xc = temp_v0;
  FUN_00301484();
  return;
}

} /* extern "C" */
