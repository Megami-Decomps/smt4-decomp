/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d3ba` (_code @ 0x30d3ba, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringCopyConstruct(int, unsigned int);

/* Supplied declaration required: onlineStringCopyConstruct. */


void FUN_0030d3ba(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    onlineStringCopyConstruct(param_2,param_3);
  }
  return;
}

} /* extern "C" */
