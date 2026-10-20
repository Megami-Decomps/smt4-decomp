/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235414` (_code @ 0x235414, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002876f0(unsigned int, unsigned int);
extern unsigned int FUN_00287704(unsigned int);
extern int FUN_002c09d0(unsigned int);


unsigned int FUN_00235414(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 != 1) {
    return 0;
  }
  temp_v0 = FUN_002c09d0(0x235);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = FUN_002c09d0(0x1c0);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c09d0(0x424), temp_v0 != 0)) {
      temp_v1 = FUN_00287704(1);
      temp_v0 = FUN_002876f0(temp_v1,4);
      if (temp_v0 == 0) {
        return 0;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
