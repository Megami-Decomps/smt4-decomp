/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398024` (_code @ 0x398024, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004186a4(void);
extern int FUN_004186e0(void);


int FUN_00398024(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004186a4();
  if ((temp_v0 == 0) || (temp_v0 = FUN_004186e0(), temp_v0 < 1)) {
    temp_v0 = -1;
  }
  return temp_v0;
}

} /* extern "C" */
