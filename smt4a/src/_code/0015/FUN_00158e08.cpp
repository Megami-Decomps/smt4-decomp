/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158e08` (_code @ 0x158e08, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int hasExclusiveAccess(unsigned int *);

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void FUN_00158e08(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  *param_1 = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = 0;
  return;
}

} /* extern "C" */
