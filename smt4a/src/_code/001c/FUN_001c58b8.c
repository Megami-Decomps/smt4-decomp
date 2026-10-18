/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c58b8` (_code @ 0x1c58b8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001c58e8. */
/* Supplied declaration required: FUN_001cd390. */


void FUN_001c58b8(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_001c58e8(*param_1,param_1[1],param_1[2]);
    FUN_001cd390();
  }
  return;
}
