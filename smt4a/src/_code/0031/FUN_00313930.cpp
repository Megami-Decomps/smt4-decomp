/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313930` (_code @ 0x313930, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00481104(unsigned int);


unsigned int FUN_00313930(unsigned int param_1)

{
  unsigned int temp_v0;
  
  switch(param_1) {
  default:
    return 0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    temp_v0 = FUN_00481104(0x364);
    return temp_v0;
  }
}

} /* extern "C" */
