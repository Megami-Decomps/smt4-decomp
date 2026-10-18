/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048e40c` (_code @ 0x48e40c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(unsigned int);
extern int FUN_003e46f4(unsigned int);


unsigned int FUN_0048e40c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x49a);
  temp_v1 = 0;
  if ((((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x400), temp_v1 = 0, temp_v0 != 0)) &&
      (temp_v0 = FUN_003e46f4(0x76), temp_v1 = 0, temp_v0 != 0)) &&
     ((temp_v0 = FUN_0018719c(0xc), temp_v0 == 0 || (temp_v0 = FUN_0018719c(0x10), temp_v1 = 0, temp_v0 != 0))
     )) {
    temp_v1 = 1;
  }
  return temp_v1;
}
