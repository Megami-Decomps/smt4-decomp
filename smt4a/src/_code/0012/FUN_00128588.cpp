/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128588` (_code @ 0x128588, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00128588(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(romwright_code **)(param_1 + 0x24) != (romwright_code *)0x0)) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x34) != 0) {
      (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28));
    }
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28),*(unsigned int *)(param_1 + 0x1c));
    *(unsigned int *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

} /* extern "C" */
