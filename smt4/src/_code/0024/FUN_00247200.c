/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247200` (_code @ 0x247200, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c415c. */


void FUN_00247200(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  while (temp_v0 != 0) {
    temp_v0 = *(int *)(temp_v0 + 0x40);
    FUN_002c415c();
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002c415c();
  }
  FUN_002c415c(param_1);
  return;
}
