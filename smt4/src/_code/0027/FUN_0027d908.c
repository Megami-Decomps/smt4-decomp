/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d908` (_code @ 0x27d908, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2950(void);


void FUN_0027d908(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = 0;
  temp_v2 = 0x10;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v3 = temp_v0 + temp_v1 * 0x14;
    *(unsigned char *)(temp_v3 + 0xf20) = 0;
    *(unsigned short *)(temp_v3 + 0xf24) = 0;
    *(unsigned char *)(temp_v3 + 0xf23) = 0;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v3 + 0xf28) = 0;
  } while (temp_v2 != 0);
  return;
}
