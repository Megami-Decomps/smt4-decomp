/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034b340` (_code @ 0x34b340, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0023af8c. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002b2520. */


void FUN_0034b340(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = param_2;
  FUN_0028c8a8(*(unsigned int *)(param_1[1] + 8),0,param_1 + 0x24);
  FUN_0028c880(*(unsigned int *)(param_1[1] + 8),0);
  FUN_0023af8c(*(unsigned int *)(param_1[1] + 8),0,param_1 + 0x2a);
  FUN_002b2520(param_1);
  return;
}
