/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d730` (_code @ 0x39d730, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);
extern int FUN_002c0ba8(unsigned int);


unsigned int FUN_0039d730(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c0ba8(0x400);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_002931cc(0x76), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
