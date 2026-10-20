/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ea20` (_code @ 0x23ea20, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287098(unsigned int, unsigned int);
int FUN_002a55ec(unsigned int, unsigned int);
int FUN_002a5710(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00287098. */
/* Supplied declaration required: FUN_002a55ec. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_0023ea20(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_002a5710(*(unsigned int *)(param_1 + 8));
  FUN_00287098(*(unsigned int *)(param_1 + 8),param_2);
  FUN_002a55ec(*(unsigned int *)(param_1 + 8),param_2);
  return;
}

} /* extern "C" */
