/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d186c` (_code @ 0x2d186c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001f7104. */
/* Supplied declaration required: FUN_0024af9c. */
/* Supplied declaration required: FUN_00269594. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002d186c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_001f7104();
  }
  temp_v0 = *(int *)(param_1 + 0x28);
  if (temp_v0 != 0) {
    FUN_0024af9c(*(unsigned int *)(temp_v0 + 0x10));
    FUN_0024af9c(*(unsigned int *)(temp_v0 + 0x14));
    FUN_002c4360(temp_v0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00269594();
  }
  FUN_002c4360(param_1);
  return;
}
