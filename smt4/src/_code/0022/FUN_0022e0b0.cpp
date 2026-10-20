/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e0b0` (_code @ 0x22e0b0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char aeabi_idivmod(int);


unsigned char FUN_0022e0b0(short *param_1)

{
  short temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *param_1;
  if (param_1[0x5003] < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = aeabi_idivmod(temp_v0 * 100);
    if (temp_v1 == 0) {
      return 0 < temp_v0;
    }
    if (temp_v1 >= 101) {
      temp_v1 = 100;
    }
  }
  return temp_v1;
}

} /* extern "C" */
