/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234ca8` (_code @ 0x234ca8, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003936e8. */


void FUN_00234ca8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x18);
    *(unsigned int **)(param_1 + 4) = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_003936e8(param_1);
    return;
  }
  return;
}
