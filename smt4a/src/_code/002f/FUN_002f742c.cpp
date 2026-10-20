/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f742c` (_code @ 0x2f742c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00594958; /* 0x594958 */


unsigned int FUN_002f742c(int param_1)

{
  if (((*(signed char *)((unsigned char *)&DAT_00594958 + 0x3)) == '\0') && (*(int *)(param_1 + 0x28) != 0x40000000)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
