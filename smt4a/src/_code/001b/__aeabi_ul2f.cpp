/* NON_MATCHING: romwright 0.5.0 decompilation of `__aeabi_ul2f` (_code @ 0x1b4874, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x001b4890(unsigned int, unsigned int, int);

/* Supplied declaration required: func_0x001b4890. */


void __aeabi_ul2f(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  func_0x001b4890(param_1,param_2,0x3f800000);
  return;
}

} /* extern "C" */
