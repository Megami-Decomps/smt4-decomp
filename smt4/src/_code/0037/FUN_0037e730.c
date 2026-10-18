/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e730` (_code @ 0x37e730, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421e00; /* 0x421e00 */

extern unsigned int *FUN_0037df5c(void);


void FUN_0037e730(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037df5c();
  *puVar1 = (unsigned int)&DAT_00421e00;
  return;
}
