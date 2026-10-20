/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a01c` (_code @ 0x10a01c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ec8a8(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002ec8a8. */


unsigned int FUN_0010a01c(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ec8a8(param_3);
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_3);
  return 0;
}

} /* extern "C" */
