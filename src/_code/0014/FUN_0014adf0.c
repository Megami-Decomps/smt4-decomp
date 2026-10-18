/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014adf0` (_code @ 0x14adf0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e8d8; /* 0x44e8d8 */
extern romwright_code *DAT_0044e8dc; /* 0x44e8dc */


unsigned int FUN_0014adf0(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x80000000) {
    if (*(int *)*param_1 == 0x40000000) {
      temp_v0 = (*DAT_0044e8dc)();
    }
  }
  else {
    temp_v0 = (*DAT_0044e8d8)();
  }
  return temp_v0;
}
