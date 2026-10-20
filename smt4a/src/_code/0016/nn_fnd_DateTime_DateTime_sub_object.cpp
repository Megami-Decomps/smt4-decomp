/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_DateTime_DateTime_sub_object` (_code @ 0x16ea54, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fnd_DateTime_FromParameters(int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: nn_fnd_DateTime_FromParameters. */


unsigned int * nn_fnd_DateTime_DateTime_sub_object(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  
  nn_fnd_DateTime_FromParameters(&temp_v0);
  *param_1 = temp_v0;
  param_1[1] = uStack_14;
  return param_1;
}

} /* extern "C" */
