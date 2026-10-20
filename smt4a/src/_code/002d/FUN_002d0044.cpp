/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0044` (_code @ 0x2d0044, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */

extern int gameFlagIsSet(unsigned int);


unsigned int FUN_002d0044(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagIsSet(0x4d0);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v1 = 1, (*(int *)((unsigned char *)&DAT_005f0c7c + 0x8)) != 1)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
