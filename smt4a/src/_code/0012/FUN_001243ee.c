/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001243ee` (_code @ 0x1243ee, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001243ee(unsigned int *param_1)

{
  return (*param_1 & 0x3e0000) >> 0x11;
}
