/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_UnitHeapBase_Initialize` (_code @ 0x1a1264, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int aeabi_uidivmod(int, int);


void nn_fnd_UnitHeapBase_Initialize
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,unsigned int param_6)

{
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *(unsigned int *)(param_1 + 0x14) = param_6;
  temp_v0 = aeabi_uidivmod((param_2 + param_5) - 1,param_5);
  temp_v0 = temp_v0 * param_5;
  *(int *)(param_1 + 0x18) = temp_v0;
  temp_v1 = aeabi_uidivmod((param_3 + param_5) - 1,param_5);
  puVar6 = (unsigned int *)(temp_v1 * param_5);
  *(unsigned int **)(param_1 + 0x1c) = puVar6;
  temp_v1 = aeabi_uidivmod((param_3 + param_4) - (int)puVar6,temp_v0);
  puVar3 = (unsigned int *)0x0;
  *(int *)(param_1 + 0x20) = temp_v1 * temp_v0;
  puVar5 = (unsigned int *)((int)puVar6 + (temp_v1 * temp_v0 - temp_v0));
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = param_5;
  puVar4 = puVar3;
  if (puVar6 < puVar5 || (int)puVar6 - (int)puVar5 == 0) {
    do {
      puVar3 = puVar5;
      *puVar3 = (unsigned int)puVar4;
      puVar5 = (unsigned int *)((int)puVar3 - *(int *)(param_1 + 0x18));
      puVar4 = puVar3;
    } while (*(unsigned int **)(param_1 + 0x1c) <= puVar5);
  }
  *(unsigned int **)(param_1 + 0x24) = puVar3;
  return;
}

} /* extern "C" */
