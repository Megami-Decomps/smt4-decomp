/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0584` (_code @ 0x4d0584, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001656a0(unsigned int);
extern int FUN_002e1a18(unsigned int);


unsigned char FUN_004d0584(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002e1a18(1);
  temp_v1 = FUN_001656a0(0);
  return temp_v1 != 0 || temp_v0 != 0;
}
