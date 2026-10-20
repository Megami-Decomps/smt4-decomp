/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineMutexLock` (_code @ 0x2f73e4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */

extern void nn_os_CriticalSection_Enter(unsigned int);


void onlineMutexLock(int param_1)

{
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x3)) == '\0') {
    nn_os_CriticalSection_Enter(param_1 + 4);
  }
  return;
}

} /* extern "C" */
