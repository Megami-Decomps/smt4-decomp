/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192718` (_code @ 0x192718, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0019c06c(unsigned int);


unsigned char FUN_00192718(unsigned int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_0019c06c(param_1);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned char *)(temp_v1 + 8);
  }
  return temp_v0;
}

} /* extern "C" */
