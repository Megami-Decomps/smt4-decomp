/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00172354` (_code @ 0x172354, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00172354(unsigned int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    puVar2 = *(unsigned int **)(param_2 + 8);
    if ((puVar2 != (unsigned int *)0x0) && ((~*puVar2 & 0x40000001) != 0)) {
      puVar2 = (unsigned int *)0x0;
    }
    puVar1 = *(unsigned int **)(param_3 + 8);
    if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x40000001) != 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    if (puVar2[0x13] < puVar1[0x13]) {
      return 1;
    }
  }
  return 0;
}
