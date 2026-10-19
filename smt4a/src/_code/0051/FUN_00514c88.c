/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514c88` (_code @ 0x514c88, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00558378; /* 0x558378 */

/* Supplied declaration required: FUN_001af814. */
extern void nn_fnd_ExpHeapBase_Finalize(unsigned int);


void FUN_00514c88(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558378;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)param_1);
  FUN_001af814(param_1);
  return;
}
