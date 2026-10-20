/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb018` (_code @ 0x2fb018, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055af0c; /* 0x55af0c */


void FUN_002fb018(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_0055af0c;
  return;
}

} /* extern "C" */
