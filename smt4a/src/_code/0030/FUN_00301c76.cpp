/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301c76` (_code @ 0x301c76, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0030d3f4(unsigned char *, unsigned char *);


int FUN_00301c76(unsigned char *param_1,unsigned char *param_2)

{
  int temp_v0;
  
  *param_1 = *param_2;
  temp_v0 = FUN_0030d3f4(param_1 + 8,param_2 + 8);
  return temp_v0 - 8;
}

} /* extern "C" */
