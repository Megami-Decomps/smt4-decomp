/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6e34` (_code @ 0x2e6e34, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineMutexLockIfNeeded(unsigned int);

extern unsigned char DAT_0055b294; /* 0x55b294 */

/* Supplied declaration required: onlineMutexLockIfNeeded. */


unsigned int * FUN_002e6e34(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  param_1[2] = param_2;
  *param_1 = (unsigned int)&DAT_0055b294;
  *(unsigned char *)(param_1 + 1) = 1;
  onlineMutexLockIfNeeded(param_2);
  return param_1;
}

} /* extern "C" */
