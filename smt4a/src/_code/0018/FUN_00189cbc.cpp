/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189cbc` (_code @ 0x189cbc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fnd_DateTime_FromParameters(unsigned int, unsigned int, int, int, int, int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: nn_fnd_DateTime_FromParameters. */


void FUN_00189cbc(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  nn_fnd_DateTime_FromParameters
            (param_1,*param_2,(int)*(char *)(param_2 + 1),(int)*(char *)((int)param_2 + 5),
             (int)*(char *)((int)param_2 + 7),(int)*(char *)(param_2 + 2),
             (int)*(char *)((int)param_2 + 9),(int)*(short *)((int)param_2 + 10));
  return;
}

} /* extern "C" */
