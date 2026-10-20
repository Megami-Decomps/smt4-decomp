/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cc04` (_code @ 0x25cc04, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0028d320(unsigned int);
extern int FUN_002987d8(void);


unsigned int FUN_0025cc04(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002987d8();
  if ((temp_v0 == 0) || (temp_v0 = FUN_0028d320(param_2), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
