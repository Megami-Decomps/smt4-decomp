/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a60cc` (_code @ 0x2a60cc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_002a60cc(int *param_1)

{
  if (*param_1 != 0) {
    (**(romwright_code **)(**(int **)(*param_1 + 8) + 0x14))();
  }
  return 0;
}

} /* extern "C" */
