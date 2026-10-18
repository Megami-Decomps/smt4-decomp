/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cba8` (_code @ 0x28cba8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0028cbc8; /* 0x28cbc8 */

extern int FUN_002c1a48(unsigned int, unsigned char *, unsigned int);


unsigned char FUN_0028cba8(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c1a48(param_1,&LAB_0028cbc8,4);
  return temp_v0 == 0;
}
