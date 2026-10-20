/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135b4a` (_code @ 0x135b4a, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringAssign(int, unsigned int);

/* Supplied declaration required: onlineStringAssign. */


void FUN_00135b4a(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    onlineStringAssign(param_1,param_3);
  }
  return;
}

} /* extern "C" */
