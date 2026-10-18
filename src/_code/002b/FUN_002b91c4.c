/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b91c4` (_code @ 0x2b91c4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004c5404; /* 0x4c5404 */


void FUN_002b91c4(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  while( 1 ) {
    if (*(int *)(&DAT_004c5404 + temp_v0 * 4) == param_1) {
      return;
    }
    if (*(int *)(temp_v0 * 4 + 0x4c5408) == param_1) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x20) {
      temp_v0 = 0;
      do {
        if (*(int *)(&DAT_004c5404 + temp_v0 * 4) == 0) {
          *(int *)(&DAT_004c5404 + temp_v0 * 4) = param_1;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x20);
      return;
    }
  }
  return;
}
