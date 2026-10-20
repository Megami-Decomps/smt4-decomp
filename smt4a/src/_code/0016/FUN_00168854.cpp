/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168854` (_code @ 0x168854, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0063fda0; /* 0x63fda0 */
extern unsigned int DAT_0063fdf8; /* 0x63fdf8 */


unsigned int FUN_00168854(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0063fda0;
  if ((param_1 >= 2) && (temp_v0 = DAT_0063fdf8, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
