/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dba4` (_code @ 0x27dba4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */


void FUN_0027dba4(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0xfd8) = 1;
  *(unsigned char *)(temp_v0 + 0xe96) = 0;
  *(unsigned char *)(temp_v0 + 0xe95) = 0;
  return;
}

} /* extern "C" */
