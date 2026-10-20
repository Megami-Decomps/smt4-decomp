/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4c9c` (_code @ 0x2f4c9c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fe5c(int, unsigned int [2]);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0030fe5c. */


void FUN_002f4c9c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = *(unsigned int *)(param_1 + 0x10);
  FUN_0030fe5c(param_1 + 0x14,temp_v0);
  return;
}

} /* extern "C" */
