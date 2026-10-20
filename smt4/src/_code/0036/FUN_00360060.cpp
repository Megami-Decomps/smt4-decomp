/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360060` (_code @ 0x360060, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int aeabi_idivmod(unsigned int, int);


int FUN_00360060(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  if (param_2 == 0) {
    temp_v0 = aeabi_idivmod(param_1,param_3);
    return temp_v0;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      temp_v1 = (param_1 & 7) * 2;
      temp_v2 = temp_v1 >= 2;
      if (temp_v2) {
        temp_v1 = temp_v1 - 2;
      }
      if (!temp_v2) {
        temp_v1 = 0;
      }
      return temp_v1 + ((param_1 & 0x7fffffff) >> 3) * 0xe;
    }
    return 0;
  }
  temp_v0 = aeabi_idivmod(param_1,param_3 << 1);
  return temp_v0;
}

} /* extern "C" */
