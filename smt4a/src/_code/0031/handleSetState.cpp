/* NON_MATCHING: romwright 0.5.0 decompilation of `handleSetState` (_code @ 0x3106a8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void handleSetState(int param_1,int param_2)

{
  *(char *)(param_1 + 0x22) = (char)param_2;
  if ((param_2 == 5) && (*(romwright_code **)(param_1 + 0x18) != (romwright_code *)0x0)) {
    (**(romwright_code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
  }
  return;
}

} /* extern "C" */
