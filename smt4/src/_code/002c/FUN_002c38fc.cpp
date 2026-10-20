/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c38fc` (_code @ 0x2c38fc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern void nn_os_SimpleLock_Initialize(unsigned int);


void FUN_002c38fc(int param_1)

{
  nn_os_SimpleLock_Initialize(param_1);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
