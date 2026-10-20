/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003111ea` (_code @ 0x3111ea, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003111ea(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\x02') {
    return 0;
  }
  return 1;
}

} /* extern "C" */
