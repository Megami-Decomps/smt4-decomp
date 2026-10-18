/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275e18` (_code @ 0x275e18, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447600; /* 0x447600 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */


void FUN_00275e18(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447600;
  *(unsigned int *)(DAT_00447600 + 4) = 4;
  *(unsigned int *)(temp_v0 + 8) = 0;
  DAT_0049fab0 = 0;
  DAT_0049fab5 = 0;
  return;
}
