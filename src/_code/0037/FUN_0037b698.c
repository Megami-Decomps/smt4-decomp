/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b698` (_code @ 0x37b698, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0037b698(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3aa8(param_2 + 0x174);
  *(unsigned int *)(param_2 + 0x170) = param_1;
  FUN_002c3a24(param_2 + 0x174);
  return;
}
