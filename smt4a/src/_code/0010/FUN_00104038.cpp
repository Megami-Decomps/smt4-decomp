/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104038` (_code @ 0x104038, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrSetHost(...);

/* Supplied declaration required: onlineSockAddrSetHost. */


void FUN_00104038(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  onlineSockAddrSetHost(param_1,"127.0.0.1");
  return;
}

} /* extern "C" */
