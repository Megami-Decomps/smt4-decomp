/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00162390` (_code @ 0x162390, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int
FUN_00162390(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(8);
  *param_1 = param_2;
  return param_5;
}

} /* extern "C" */
