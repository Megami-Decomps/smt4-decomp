/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e620` (_code @ 0x29e620, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e190; /* 0x43e190 */


unsigned int FUN_0029e620(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e190;
  *(unsigned char *)(DAT_0043e190 + 0x81) = param_2;
  *(unsigned int *)(temp_v0 + 0x70) = param_1;
  *(unsigned int *)(temp_v0 + 0x74) = param_1;
  *(unsigned char *)(temp_v0 + 0x80) = 1;
  return 1;
}

} /* extern "C" */
