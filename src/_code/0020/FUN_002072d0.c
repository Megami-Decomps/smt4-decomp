/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002072d0` (_code @ 0x2072d0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002072d0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf41c(*(unsigned int *)(param_1 + 0x34));
  if (temp_v0 != 0) {
    FUN_002c45b8(*(unsigned int *)(param_1 + 0x34),0);
    return;
  }
  return;
}
