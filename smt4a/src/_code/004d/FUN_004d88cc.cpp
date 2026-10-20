/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d88cc` (_code @ 0x4d88cc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int * FUN_004d88cc(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
