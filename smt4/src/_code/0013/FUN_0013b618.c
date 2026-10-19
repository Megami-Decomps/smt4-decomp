/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b618` (_code @ 0x13b618, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e6c5c; /* 0x4e6c5c */

extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0013b618(void)

{
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e6c5c);
  return;
}
