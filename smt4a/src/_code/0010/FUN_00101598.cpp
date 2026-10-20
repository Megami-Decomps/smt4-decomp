/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101598` (_code @ 0x101598, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *__aeabi_errno_addr(void);


void FUN_00101598(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)__aeabi_errno_addr();
  *puVar1 = param_1;
  return;
}

} /* extern "C" */
