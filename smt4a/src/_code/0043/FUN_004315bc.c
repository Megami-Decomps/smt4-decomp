/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004315bc` (_code @ 0x4315bc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004315bc(int param_1,int param_2)

{
  if (param_1 != 10) {
    if (param_1 != 0xd) {
      return 0;
    }
    if (param_2 == 10) {
      return 2;
    }
  }
  return 1;
}
