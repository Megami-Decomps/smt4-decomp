/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3ec0` (_code @ 0x1a3ec0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0059dadc; /* 0x59dadc */
extern romwright_code *DAT_0059dae0; /* 0x59dae0 */


unsigned int FUN_001a3ec0(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x80000000) {
    if (*(int *)*param_1 == 0x40000000) {
      temp_v0 = (*DAT_0059dae0)();
    }
  }
  else {
    temp_v0 = (*DAT_0059dadc)();
  }
  return temp_v0;
}
