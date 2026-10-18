/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a264` (_code @ 0x33a264, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0023ea20. */
/* Supplied declaration required: FUN_0029bb14. */


void FUN_0033a264(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x4398);
  if (puVar1 != (unsigned int *)0x0) {
    if ((*puVar1 & 4) != 0) {
      *puVar1 = *puVar1 & 0xfffffffb;
      *(unsigned int *)(puVar1[2] + 0x74) = 0x3f800000;
      FUN_0029bb14();
    }
    FUN_0023ea20(*(unsigned int *)(param_1 + 0x4398),0);
    return;
  }
  return;
}
