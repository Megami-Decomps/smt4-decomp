/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a167c` (_code @ 0x3a167c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003a167c(int param_1)

{
  unsigned int *puVar1;
  
  if (*(char *)(param_1 + 0x15d64) != '\0') {
    puVar1 = (unsigned int *)(param_1 + 0x15d58);
  }
  else {
    if (*(char *)(param_1 + 0x15d65) == '\0') {
      return *(unsigned int *)(param_1 + 0x15d60);
    }
    puVar1 = (unsigned int *)(param_1 + 0x15d5c);
  }
  return *puVar1;
}
