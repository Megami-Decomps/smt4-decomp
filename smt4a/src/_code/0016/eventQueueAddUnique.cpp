/* NON_MATCHING: romwright 0.5.0 decompilation of `eventQueueAddUnique` (_code @ 0x169ddc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061955c; /* 0x61955c */


void eventQueueAddUnique(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  while( 1 ) {
    if (*(int *)(&DAT_0061955c + temp_v0 * 4) == param_1) {
      return;
    }
    if (*(int *)(temp_v0 * 4 + 0x619560) == param_1) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x20) {
      temp_v0 = 0;
      do {
        if (*(int *)(&DAT_0061955c + temp_v0 * 4) == 0) {
          *(int *)(&DAT_0061955c + temp_v0 * 4) = param_1;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x20);
      return;
    }
  }
  return;
}

} /* extern "C" */
