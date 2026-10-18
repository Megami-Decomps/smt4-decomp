/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023eb7c` (_code @ 0x23eb7c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00287300. */
/* Supplied declaration required: FUN_002a5930. */
/* Supplied declaration required: FUN_002a5a54. */


void FUN_0023eb7c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002a5a54(*(unsigned int *)(param_1 + 8));
  FUN_00287300(*(unsigned int *)(param_1 + 8),param_2);
  FUN_002a5930(*(unsigned int *)(param_1 + 8),param_2);
  return;
}
