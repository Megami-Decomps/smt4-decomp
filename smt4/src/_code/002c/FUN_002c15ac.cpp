/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c15ac` (_code @ 0x2c15ac, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004e39fc; /* 0x4e39fc */
extern unsigned int DAT_004e3a54; /* 0x4e3a54 */


unsigned int FUN_002c15ac(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_004e39fc;
  if ((param_1 >= 2) && (temp_v0 = DAT_004e3a54, param_1 != 2)) {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
