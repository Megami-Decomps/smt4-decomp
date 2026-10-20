/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301830` (_code @ 0x301830, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_aocJob; /* 0x57f568 */


void FUN_00301830(void)

{
  *(unsigned char *)(g_aocJob + 0x38) = 1;
  return;
}

} /* extern "C" */
