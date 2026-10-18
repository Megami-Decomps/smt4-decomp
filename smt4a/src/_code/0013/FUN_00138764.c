/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138764` (_code @ 0x138764, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */


void FUN_00138764(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 0x14;
    temp_v2 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x6357d8) = 0;
    (&DAT_006357dc)[temp_v1 * 5] = 0;
    *(unsigned int *)(temp_v0 + 0x6357e0) = 0;
    *(unsigned int *)(temp_v0 + 0x6357e4) = 0xff;
    (&DAT_006357e8)[temp_v0] = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 2);
  return;
}
