/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f905e` (_code @ 0x2f905e, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012105c(int, unsigned int, int);

/* Supplied declaration required: FUN_0012105c. */


int FUN_002f905e(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0012105c(param_1,param_2,0);
    return param_1;
  }
  return 0;
}

} /* extern "C" */
