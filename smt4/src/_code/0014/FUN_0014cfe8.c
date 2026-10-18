/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014cfe8` (_code @ 0x14cfe8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int * FUN_0014cfe8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  return puVar1 + 5;
}
