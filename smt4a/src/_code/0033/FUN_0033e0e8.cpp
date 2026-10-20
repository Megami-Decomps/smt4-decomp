/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e0e8` (_code @ 0x33e0e8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058104c; /* 0x58104c */


unsigned int FUN_0033e0e8(void)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = DAT_0058104c + temp_v0 * 4;
    temp_v2 = *(int *)(temp_v1 + 0xb0) == 0;
    if (temp_v2) {
      temp_v1 = *(int *)(temp_v1 + 0xb4);
    }
    if (!temp_v2 || temp_v1 != 0) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x10) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
