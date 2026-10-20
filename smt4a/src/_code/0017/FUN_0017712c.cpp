/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017712c` (_code @ 0x17712c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int FUN_00183468(void);


/* WARNING: Removing unreachable block (ram,0x0017719c) */
/* WARNING: Removing unreachable block (ram,0x001771dc) */
/* WARNING: Removing unreachable block (ram,0x001771a8) */
/* WARNING: Removing unreachable block (ram,0x001771e8) */

void FUN_0017712c(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  temp_v0 = *(int *)(param_1 + 4);
  temp_v2 = *(int *)(param_2 + 4);
  puVar6 = (unsigned int *)(temp_v0 + 0x40);
  *(unsigned int *)(*(int *)(temp_v0 + 0xac) + param_4 * 4) = param_3;
  temp_v1 = FUN_00183468();
  *(unsigned int *)(*(int *)(temp_v0 + 0xac) + 8) = temp_v1;
  if (*(unsigned int **)(temp_v2 + 0xac) != *(unsigned int **)(temp_v2 + 0xb0)) {
    *puVar6 = **(unsigned int **)(temp_v2 + 0xac);
  }
  if (*(unsigned int **)(temp_v2 + 0x9c) != *(unsigned int **)(temp_v2 + 0xa0)) {
    *(unsigned int *)(temp_v0 + 0x44) = **(unsigned int **)(temp_v2 + 0x9c);
  }
  puVar5 = *(unsigned int **)(temp_v2 + 0x80);
  for (puVar3 = *(unsigned int **)(temp_v2 + 0x7c); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    (*(romwright_code *)0x4493a4)(puVar6,*puVar3);
  }
  puVar5 = *(unsigned int **)(temp_v2 + 0x90);
  for (puVar3 = *(unsigned int **)(temp_v2 + 0x8c); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    (*(romwright_code *)0x449378)(puVar6,*puVar3);
  }
  if (*(unsigned int **)(temp_v2 + 0x5c) != *(unsigned int **)(temp_v2 + 0x60)) {
    **(unsigned int **)(temp_v0 + 0xc0) = **(unsigned int **)(temp_v2 + 0x5c);
  }
  return;
}

} /* extern "C" */
