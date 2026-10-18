/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155024` (_code @ 0x155024, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0017d258. */
/* Supplied declaration required: FUN_0017d294. */


void FUN_00155024(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_0017d294();
  FUN_0017d258(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_2 + 0x24),
               *(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
               *(unsigned int *)(param_1 + 0x1c));
  return;
}
