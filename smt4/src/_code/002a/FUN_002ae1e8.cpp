/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae1e8` (_code @ 0x2ae1e8, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004e3a98; /* 0x4e3a98 */
extern unsigned int DAT_004e3b10; /* 0x4e3b10 */


unsigned int FUN_002ae1e8(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_004e3a98;
  if ((param_1 >= 2) && (temp_v0 = DAT_004e3b10, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
