/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138b68` (_code @ 0x138b68, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3aa0; /* 0x4e3aa0 */
extern unsigned int DAT_004e3b18; /* 0x4e3b18 */


unsigned int FUN_00138b68(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_004e3aa0;
  if ((param_1 >= 2) && (temp_v0 = DAT_004e3b18, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}
