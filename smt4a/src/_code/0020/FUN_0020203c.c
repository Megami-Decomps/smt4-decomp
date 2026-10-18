/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020203c` (_code @ 0x20203c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */


void FUN_0020203c(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_005b3f98;
  if (DAT_005b3f98 != (unsigned int *)0x0) {
    *DAT_005b3f98 = param_1;
    puVar1[1] = param_2;
  }
  return;
}
