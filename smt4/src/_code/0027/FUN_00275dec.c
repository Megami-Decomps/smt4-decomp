/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275dec` (_code @ 0x275dec, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e278; /* 0x43e278 */


void FUN_00275dec(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0xf60) = 1;
  *(unsigned char *)(temp_v0 + 0xf63) = 0;
  *(unsigned char *)(temp_v0 + 0xf64) = 0;
  *(unsigned char *)(temp_v0 + 0xf65) = 0;
  *(unsigned char *)(temp_v0 + 0xf99) = 0;
  return;
}
