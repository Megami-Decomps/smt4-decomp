/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003addd8` (_code @ 0x3addd8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018719c(...);

/* Supplied declaration required: FUN_0018719c. */


unsigned int FUN_003addd8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((param_1 == 0) || (temp_v0 = FUN_0018719c(), temp_v0 != 0)) &&
     ((param_2 == 0 || (temp_v0 = FUN_0018719c(param_2), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
