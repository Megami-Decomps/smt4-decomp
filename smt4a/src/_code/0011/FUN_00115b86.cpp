/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115b86` (_code @ 0x115b86, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00301792(int, unsigned int);

/* Supplied declaration required: FUN_00301792. */
extern int FUN_003017f0(int);


unsigned int FUN_00115b86(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while (temp_v0 = FUN_003017f0(param_1 + 0x20), temp_v0 == 0) {
    FUN_00301792(param_1,*(unsigned int *)(**(int **)(param_1 + 0x30) + 8));
  }
  return 1;
}

} /* extern "C" */
