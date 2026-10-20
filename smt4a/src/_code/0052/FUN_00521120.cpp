/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00521120` (_code @ 0x521120, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_00521120(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  
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
                    /* WARNING: Could not recover jumptable at 0x005211a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24),param_2);
  return;
}

} /* extern "C" */
