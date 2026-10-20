/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003104fc` (_code @ 0x3104fc, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_003104fc(int param_1)

{
  nn_os_CriticalSection_Leave(param_1 + 8);
  return;
}

} /* extern "C" */
