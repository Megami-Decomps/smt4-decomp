/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123830` (_code @ 0x123830, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030f138. */


unsigned int FUN_00123830(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030f138(param_1,"NodeId",0);
  return param_1 & 0xffff;
}
