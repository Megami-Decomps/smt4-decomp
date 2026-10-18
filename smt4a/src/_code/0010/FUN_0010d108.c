/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d108` (_code @ 0x10d108, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00106144. */
extern unsigned int FUN_002ecf28(void);


void FUN_0010d108(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  
  temp_v0 = FUN_002ecf28();
  FUN_00106144(temp_v0,*(unsigned int *)(param_1 + 0x84));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x78) + 0x24) + 0x14);
  (**(romwright_code **)(*piVar2 + 0x28))(piVar2,100);
  return;
}
