/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b454` (_code @ 0x10b454, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0010b454(int *param_1)

{
  (**(romwright_code **)(*param_1 + 8))(param_1);
  while ((char)param_1[0xd] == '\0') {
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
  }
  (**(romwright_code **)(*param_1 + 0xc))(param_1);
  return;
}

} /* extern "C" */
