/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001484dc` (_code @ 0x1484dc, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00153a14. */


unsigned int FUN_001484dc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  temp_v0 = *(int *)(param_1 + 0x28);
  puVar3 = (unsigned int *)((temp_v0 + 3U) & 0xfffffffc);
  puVar2 = puVar3 + 4;
  if (puVar2 <= *(unsigned int **)(param_1 + 0x2c)) {
    FUN_00153a14(param_1,temp_v0,(int)puVar2 - temp_v0);
    *(unsigned int **)(param_1 + 0x28) = puVar2;
    if (puVar3 != (unsigned int *)0x0) {
      puVar3[2] = 0;
      puVar3[1] = temp_v0;
      *puVar3 = param_2;
      puVar3[3] = 0;
      puVar3[2] = *(unsigned int *)(param_1 + 0x2c);
      puVar3[3] = *(unsigned int *)(param_1 + 0x30);
      *(unsigned int **)(param_1 + 0x30) = puVar3;
      return 1;
    }
  }
  return 0;
}
