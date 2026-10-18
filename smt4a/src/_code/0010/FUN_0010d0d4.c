/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d0d4` (_code @ 0x10d0d4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0010613a. */
extern unsigned int FUN_002ecf28(void);


void FUN_0010d0d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  
  *(unsigned int *)(*(int *)(param_1 + 0x84) + 0x78) = *(unsigned int *)(*(int *)(param_1 + 0x78) + 0xc)
  ;
  *(unsigned int *)(*(int *)(param_1 + 0x84) + 0x7c) =
       *(unsigned int *)(*(int *)(param_1 + 0x78) + 0x10);
  temp_v0 = FUN_002ecf28();
  FUN_0010613a(temp_v0,*(unsigned int *)(param_1 + 0x84));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 0x24) + 0x14);
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,100,*(unsigned int *)(param_1 + 0x88));
  return;
}
