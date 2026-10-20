/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee50c` (_code @ 0x2ee50c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b6e(int *, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f3b6e. */


void FUN_002ee50c(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_002f3b6e(param_1,param_2);
  return;
}

} /* extern "C" */
