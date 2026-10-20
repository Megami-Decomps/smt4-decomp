/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031fad8` (_code @ 0x31fad8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0057f290; /* 0x57f290 */

extern unsigned int FUN_004dad8c(unsigned int);


void FUN_0031fad8(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_0057f290;
  if (DAT_0057f290 != (unsigned int *)0x0) {
    temp_v0 = FUN_004dad8c(*DAT_0057f290);
    puVar1[0x2429] = temp_v0;
  }
  return;
}

} /* extern "C" */
