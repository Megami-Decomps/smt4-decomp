/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113210` (_code @ 0x113210, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004c63ec; /* 0x4c63ec */
extern unsigned int DAT_004c63f0; /* 0x4c63f0 */


void FUN_00113210(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_2;
  temp_v1 = DAT_004c63f0;
  if (((param_1 != 0x400) && (temp_v0 = DAT_004c63ec, temp_v1 = param_2, param_1 != 0x401)) &&
     (temp_v1 = DAT_004c63f0, param_1 == 0x402)) {
    temp_v0 = param_2;
    temp_v1 = param_2;
  }
  DAT_004c63f0 = temp_v1;
  DAT_004c63ec = temp_v0;
  return;
}

} /* extern "C" */
