/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f83c` (_code @ 0x15f83c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int
FUN_0015f83c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x1e);
  *param_1 = param_2;
  return param_5;
}

} /* extern "C" */
