/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036359c` (_code @ 0x3635a0, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int * FUN_0036359c(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = param_2;
  puVar2 = (unsigned int *)param_1[6];
  puVar1 = param_1;
  if (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 7);
  }
  if (puVar2 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    puVar1 = (unsigned int *)(**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  }
  puVar2 = (unsigned int *)param_1[4];
  if (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 5);
  }
  if (puVar2 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    puVar1 = (unsigned int *)(**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  }
  puVar2 = (unsigned int *)param_1[2];
  if (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 3);
  }
  if (puVar2 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  }
  return param_1;
}

} /* extern "C" */
