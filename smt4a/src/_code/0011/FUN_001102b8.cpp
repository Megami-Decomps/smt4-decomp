/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001102b8` (_code @ 0x1102b8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb084(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002fb084. */


void FUN_001102b8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_002fb084(param_2,param_3,*(unsigned int *)(param_1 + 4),param_4,0,2);
  return;
}

} /* extern "C" */
