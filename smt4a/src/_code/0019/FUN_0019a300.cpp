/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a300` (_code @ 0x19a300, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_0019a300(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x2d);
  *param_1 = param_2;
  return;
}

} /* extern "C" */
