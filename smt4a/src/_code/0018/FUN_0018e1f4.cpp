/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018e1f4` (_code @ 0x18e1f4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_005c1d18; /* 0x5c1d18 */
extern romwright_code *DAT_005c1d1c; /* 0x5c1d1c */


unsigned int FUN_0018e1f4(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x7fffffff) {
    if (*(int *)*param_1 == -0x7ffffffe) {
      temp_v0 = (*DAT_005c1d18)(param_2);
    }
  }
  else {
    temp_v0 = (*DAT_005c1d1c)(param_2);
  }
  return temp_v0;
}

} /* extern "C" */
