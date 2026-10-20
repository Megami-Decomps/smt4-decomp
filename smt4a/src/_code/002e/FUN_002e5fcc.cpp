/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5fcc` (_code @ 0x2e5fcc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002e5fcc(unsigned short param_1,unsigned int *param_2)

{
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)*param_2;
  if (puVar1 < (unsigned short *)param_2[1]) {
    *param_2 = (unsigned int)(puVar1 + 1);
    *puVar1 = param_1;
  }
  return;
}

} /* extern "C" */
