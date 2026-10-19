/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b600` (_code @ 0x18b600, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00643080; /* 0x643080 */

extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_0018b600(void)

{
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00643080);
  return;
}
