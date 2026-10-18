/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003683d8` (_code @ 0x3683d8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int * FUN_003683d8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = param_2;
  puVar2 = (unsigned int *)param_1[2];
  puVar1 = param_1;
  if (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int)(uint)*(unsigned int)(param_1 + 3);
  }
  if (puVar2 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  }
  return param_1;
}
