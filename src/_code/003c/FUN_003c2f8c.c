/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2f8c` (_code @ 0x3c2f8c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8764(void);


unsigned char FUN_003c2f8c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002a8764();
  temp_v1 = FUN_002a8764();
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v1 + temp_v2 + 0x90f0) < '\0') break;
    temp_v2 = temp_v2 + 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v2 < 0x18);
  return temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x910b);
}
