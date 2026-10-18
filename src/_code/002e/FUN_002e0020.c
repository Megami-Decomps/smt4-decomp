/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0020` (_code @ 0x2e0020, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e40; /* 0x447e40 */


void FUN_002e0020(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 2;
    *(unsigned char *)(DAT_00447e40 + temp_v0 * 0x30 + 0x2844) = 0;
    *(unsigned char *)(DAT_00447e40 + temp_v0 * 0x30 + 0x2874) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x20);
  return;
}
