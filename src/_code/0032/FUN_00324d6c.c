/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324d6c` (_code @ 0x324d6c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002c0ac8(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c58cc. */
/* Supplied declaration required: FUN_002c5918. */
/* Supplied declaration required: FUN_002c5948. */


void FUN_00324d6c(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002c5948(1);
  FUN_002c5918(1);
  FUN_002c58cc(1);
  temp_v0 = FUN_002c0ac8(param_1);
  if (*(int *)(temp_v0 + 8) != 0) {
    FUN_002c4360();
  }
  FUN_002c4360(temp_v0);
  return;
}
