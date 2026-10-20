/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d514` (_code @ 0x39d514, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int flagBitIsSet(unsigned int);
extern int gameFlagIsSet(unsigned int);


unsigned int FUN_0039d514(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagIsSet(0x400);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = flagBitIsSet(0x76), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
