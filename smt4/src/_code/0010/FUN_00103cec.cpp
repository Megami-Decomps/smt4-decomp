/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103cec` (_code @ 0x103cec, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004d975c; /* 0x4d975c */
extern unsigned char DAT_004d9768; /* 0x4d9768 */


void FUN_00103cec(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 0x14;
    temp_v2 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x4d9758) = 0;
    (&DAT_004d975c)[temp_v1 * 5] = 0;
    *(unsigned int *)(temp_v0 + 0x4d9760) = 0;
    *(unsigned int *)(temp_v0 + 0x4d9764) = 0xff;
    (&DAT_004d9768)[temp_v0] = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
