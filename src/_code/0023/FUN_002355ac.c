/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002355ac` (_code @ 0x2355ac, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00287958(unsigned int, unsigned int);
extern unsigned int FUN_0028796c(unsigned int);
extern int FUN_002c0ba8(unsigned int);


unsigned int FUN_002355ac(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 != 1) {
    return 0;
  }
  temp_v0 = FUN_002c0ba8(0x235);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = FUN_002c0ba8(0x1c0);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002c0ba8(0x424), temp_v0 != 0)) {
      temp_v1 = FUN_0028796c(1);
      temp_v0 = FUN_00287958(temp_v1,4);
      if (temp_v0 == 0) {
        return 0;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
