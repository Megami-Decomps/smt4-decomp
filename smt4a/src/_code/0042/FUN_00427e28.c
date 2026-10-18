/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427e28` (_code @ 0x427e28, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0043bfd0(void);


unsigned int FUN_00427e28(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0043bfd0();
  if ((((temp_v0 & 0x3fc00) == 0x4400) && ((temp_v0 & 0x3ff) >= 100)) && ((temp_v0 & 0x3ff) < 0xb4)) {
    temp_v1 = 0xc961391a;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
