/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003675c0` (_code @ 0x3675c0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003675c0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  (**(romwright_code **)(*param_2 + 0x14))(param_2,param_1);
  puVar2 = *(unsigned int **)(param_1 + 0x1c);
  for (puVar1 = *(unsigned int **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(romwright_code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}
