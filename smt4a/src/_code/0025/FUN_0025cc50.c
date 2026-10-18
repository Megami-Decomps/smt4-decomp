/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cc50` (_code @ 0x25cc50, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0025cc70; /* 0x25cc70 */

extern int FUN_0030ef8c(unsigned int, unsigned char *, unsigned int);


unsigned char FUN_0025cc50(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0030ef8c(param_1,&LAB_0025cc70,4);
  return temp_v0 == 0;
}
