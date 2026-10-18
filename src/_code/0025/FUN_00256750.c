/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256750` (_code @ 0x256750, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0026f0d8(unsigned int);
extern int FUN_002bffbc(unsigned int);


unsigned char FUN_00256750(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0026f0d8(3);
  temp_v1 = FUN_002bffbc(9);
  return temp_v1 != 0 || temp_v0 != 0;
}
