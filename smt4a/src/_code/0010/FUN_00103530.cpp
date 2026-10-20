/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103530` (_code @ 0x103530, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd4(int, int);

extern int memAllocSized(void);
/* Supplied declaration required: FUN_002e6dd4. */


int FUN_00103530(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    temp_v0 = memAllocSized();
    if (temp_v0 != 0) {
      FUN_002e6dd4(temp_v0,param_2 * param_1);
    }
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
