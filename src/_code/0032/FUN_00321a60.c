/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321a60` (_code @ 0x321a60, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002572dc. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00321a60(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  
  temp_v0 = 0;
  puVar4 = *(unsigned int **)(param_1 + 0x30);
  puVar1 = (unsigned int *)*puVar4;
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x38);
  if (temp_v1 != 0) {
    do {
      FUN_002572dc(*puVar1);
      temp_v0 = temp_v0 + 1;
      puVar1 = puVar1 + 4;
    } while (temp_v0 < temp_v1);
  }
  FUN_002c4360(puVar4);
  return;
}
