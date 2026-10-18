/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234b14` (_code @ 0x234b14, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_003934d0. */


void FUN_00234b14(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x18);
    *(unsigned int **)(param_1 + 4) = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_003934d0(param_1);
    return;
  }
  return;
}
