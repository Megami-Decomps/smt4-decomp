/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035607c` (_code @ 0x35607c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002adbe4. */


void FUN_0035607c(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  FUN_002adbe4(1);
                    /* WARNING: Could not recover jumptable at 0x003560b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)*param_2)(param_2,param_1,param_3,param_4);
  return;
}
