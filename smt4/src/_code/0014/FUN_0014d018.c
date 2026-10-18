/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d018` (_code @ 0x14d018, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int * FUN_0014d018(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar1 == (unsigned int *)0x0) || ((*puVar1 & 0x80000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x14))();
  if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x40000000) == 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    puVar1 = puVar1 + 2;
  }
  else if (puVar2 != (unsigned int *)0x0) {
    puVar1 = puVar2 + 2;
  }
  else {
    puVar1 = (unsigned int *)0x8;
  }
  return puVar1;
}
