/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045c11c` (_code @ 0x45c11c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055bde0; /* 0x55bde0 */

extern unsigned int *FUN_00460e9c(unsigned int, unsigned int);


void FUN_0045c11c(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00460e9c(param_1,0);
  *puVar1 = (unsigned int)&DAT_0055bde0;
  return;
}

} /* extern "C" */
