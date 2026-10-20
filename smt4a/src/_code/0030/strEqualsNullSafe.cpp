/* NON_MATCHING: romwright 0.5.0 decompilation of `strEqualsNullSafe` (_code @ 0x30ffe0, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int wstrcmpU16(void);


unsigned int strEqualsNullSafe(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_1 != 0) {
    if (param_2 != 0) {
      temp_v0 = wstrcmpU16();
      if (temp_v0 == 0) {
        return 1;
      }
      return 0;
    }
    param_2 = 0x31000c;
  }
  else {
    param_1 = 0x31000c;
  }
  temp_v1 = strEqualsNullSafe(param_1,param_2);
  return temp_v1;
}

} /* extern "C" */
