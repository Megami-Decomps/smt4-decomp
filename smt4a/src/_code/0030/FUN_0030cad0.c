/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cad0` (_code @ 0x30cad0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0030cad0(int param_1)

{
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}
