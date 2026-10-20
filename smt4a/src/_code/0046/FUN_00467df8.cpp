/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467df8` (_code @ 0x467df8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagIsSet(unsigned int);
extern int FUN_002de9d8(void);


unsigned int FUN_00467df8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002de9d8();
  if (temp_v0 != 5) {
    if (temp_v0 != 0xe) {
      return 100;
    }
    temp_v0 = gameFlagIsSet(0x48e);
    if (temp_v0 != 0) {
      return 0;
    }
    temp_v0 = gameFlagIsSet(0x490);
  }
  else {
    temp_v0 = gameFlagIsSet(0x48f);
  }
  if (temp_v0 == 0) {
    return 100;
  }
  return 0x32;
}

} /* extern "C" */
