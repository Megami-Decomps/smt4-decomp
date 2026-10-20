/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003946b4` (_code @ 0x3946b4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003681fc(int, unsigned int);
int FUN_0036b3a0(unsigned int, unsigned int);

extern unsigned int FUN_002c5be8(void);
/* Supplied declaration required: FUN_003681fc. */
/* Supplied declaration required: FUN_0036b3a0. */


void FUN_003946b4(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  temp_v1 = *(unsigned int *)(param_2 + 4);
  puVar3 = *(unsigned int **)(param_3 + 8);
  for (puVar2 = *(unsigned int **)(param_3 + 4); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    FUN_0036b3a0(*puVar2,temp_v1);
    FUN_003681fc(temp_v0 + 0x40,*puVar2);
  }
  **(unsigned int **)(temp_v0 + 0xac) = param_4;
  temp_v1 = FUN_002c5be8();
  *(unsigned int *)(*(int *)(temp_v0 + 0xac) + 8) = temp_v1;
  return;
}

} /* extern "C" */
