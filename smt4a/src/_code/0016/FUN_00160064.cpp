/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00160064` (_code @ 0x160064, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_00160064(int param_1)

{
  return *(char *)(param_1 + 0xa1) == '\x01' || *(char *)(param_1 + 0xa1) == '\x02';
}

} /* extern "C" */
