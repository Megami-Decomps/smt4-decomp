/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ea2c` (_code @ 0x39ea2c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wordTripleClear(int);

/* Supplied declaration required: wordTripleClear. */


void FUN_0039ea2c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x4850) = 0;
  wordTripleClear(param_1 + 0x3da0);
  *(unsigned char *)(param_1 + 0x4856) = 0;
  return;
}

} /* extern "C" */
