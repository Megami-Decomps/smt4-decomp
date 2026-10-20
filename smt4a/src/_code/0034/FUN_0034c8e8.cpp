/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c8e8` (_code @ 0x34c8e8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026140c(void);


void FUN_0034c8e8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0026140c();
  *(unsigned short *)(temp_v0 + 0x20) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x22) = 0xffff;
  *(unsigned short *)(temp_v0 + 0x24) = 0;
  *(unsigned short *)(temp_v0 + 0x26) = 0;
  *(unsigned short *)(temp_v0 + 0x28) = 0;
  *(unsigned char *)(temp_v0 + 0x43) = 0;
  *(unsigned short *)(temp_v0 + 0x2a) = 0;
  *(unsigned short *)(temp_v0 + 0x2c) = 0;
  *(unsigned short *)(temp_v0 + 0x2e) = 0xffff;
  *(unsigned char *)(temp_v0 + 0x33) = 0;
  *(unsigned char *)(temp_v0 + 0x34) = 0;
  *(unsigned char *)(temp_v0 + 0x35) = 0xff;
  *(unsigned char *)(temp_v0 + 0x37) = 0;
  *(unsigned char *)(temp_v0 + 0x36) = *(unsigned char *)(temp_v0 + 0x36) & 0xfc;
  return;
}

} /* extern "C" */
