/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141940` (_code @ 0x141940, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002a6d28. */
extern int FUN_002a6d58(unsigned int);


void FUN_00141940(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if (temp_v0 != 0) {
    FUN_002a6d28();
    return;
  }
  return;
}
