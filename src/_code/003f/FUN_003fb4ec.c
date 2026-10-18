/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb4ec` (_code @ 0x3fb4ec, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_003fb4ec. */


void FUN_003fb4ec(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  
  if (param_2 == 0) {
    return;
  }
  do {
    FUN_003fb4ec(param_1,*(unsigned int *)(param_2 + 0xc));
    temp_v0 = *(int *)(param_2 + 8);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 8);
    puVar1 = *(unsigned int **)(param_2 + 0x1c);
    if (puVar1 == (unsigned int *)0x0 || puVar1 == (unsigned int *)(param_2 + 0x14)) {
      if (*(unsigned int **)(param_2 + 0x18) != (unsigned int *)0x0) {
        (**(romwright_code **)**(unsigned int **)(param_2 + 0x18))();
        piVar2 = *(int **)(param_2 + 0x14);
        (**(romwright_code **)(*piVar2 + 4))(piVar2,*(unsigned int *)(param_2 + 0x18));
      }
    }
    else {
      puVar1[3] = *(unsigned int *)(param_2 + 0x20);
      *(unsigned int *)(*(int *)(param_2 + 0x20) + 8) = *(unsigned int *)(param_2 + 0x1c);
      *(unsigned int *)(param_2 + 0x1c) = 0;
      *(unsigned int *)(param_2 + 0x20) = 0;
    }
    *(unsigned int *)(param_2 + 0x18) = 0;
    *(int *)(param_1 + 8) = param_2;
    param_2 = temp_v0;
  } while (temp_v0 != 0);
  return;
}
