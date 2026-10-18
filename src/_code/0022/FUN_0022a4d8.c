/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a4d8` (_code @ 0x22a4d8, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00254ff0(void);


int FUN_0022a4d8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00254ff0();
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x20c;
  }
  return temp_v0;
}
