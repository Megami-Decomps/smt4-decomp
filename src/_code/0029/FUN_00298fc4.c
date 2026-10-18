/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298fc4` (_code @ 0x298fc4, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_00298fc4(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(DAT_0044e144 + 0x1e6c);
  *(unsigned int *)(DAT_0044e144 + 0x1e68) = param_1;
  *puVar1 = param_2;
  return;
}
