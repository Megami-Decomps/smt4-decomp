/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bc48` (_code @ 0x37bc48, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0037bc48(int param_1)

{
  if (*(char *)(param_1 + 0x261) == '\0') {
    *(unsigned char *)(param_1 + 0x260) = 0;
    *(unsigned char *)(param_1 + 0x261) = 1;
    *(unsigned int *)(param_1 + 0x10) = 0;
    return;
  }
  return;
}
