/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039af04` (_code @ 0x39af04, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f3b0; /* 0x57f3b0 */


unsigned int FUN_0039af04(void)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = DAT_0057f3b0 + temp_v0 * 4;
    temp_v2 = *(int *)(temp_v1 + 4) == 0;
    if (!temp_v2) {
      temp_v1 = *(int *)(temp_v1 + 8);
    }
    if (temp_v2 || temp_v1 == 0) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x10) {
      return 0;
    }
  }
  return 1;
}
