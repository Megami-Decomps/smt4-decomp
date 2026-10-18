/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110058` (_code @ 0x110058, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0011d1d0(void);
extern int FUN_002c14a8(void);


unsigned int FUN_00110058(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0011d1d0();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002c14a8(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
