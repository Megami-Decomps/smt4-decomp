/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c564` (_code @ 0x22c564, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0022c564(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  
  temp_v0 = *(int *)(param_1 + 4);
  puVar1 = (unsigned int *)(temp_v0 + param_2 * 0x10);
  while (puVar1 < (unsigned int *)(temp_v0 + param_3 * 0x10)) {
    puVar3 = (unsigned int *)puVar1[2];
    if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
      if ((unsigned int *)puVar1[1] != (unsigned int *)0x0) {
        (*(romwright_code *)**(unsigned int **)puVar1[1])();
        (**(romwright_code **)(*(int *)*puVar1 + 4))((int *)*puVar1,puVar1[1]);
      }
    }
    else {
      puVar3[3] = puVar1[3];
      *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
  }
  return;
}

} /* extern "C" */
