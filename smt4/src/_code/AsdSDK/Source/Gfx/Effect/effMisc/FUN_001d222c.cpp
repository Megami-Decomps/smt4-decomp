/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d222c` (_code @ 0x1d222c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0894(int);
int FUN_002c415c(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001d222c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x472484))();
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if ((piVar2 != (int *)0x0) && (temp_v0 = piVar2[1], piVar2[1] = temp_v0 - 1, temp_v0 - 1 == 0)) {
    if (*piVar2 != 4) {
      FUN_002c0894(piVar2[2]);
    }
    FUN_002c415c(piVar2);
  }
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
