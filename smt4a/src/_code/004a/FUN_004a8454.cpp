/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a8454` (_code @ 0x4a8454, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char __aeabi_idivmod(int);


unsigned char FUN_004a8454(int param_1)

{
  short temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(short *)(param_1 + 0xa008);
  if (*(short *)(param_1 + 0xa006) < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = __aeabi_idivmod(temp_v0 * 100);
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
