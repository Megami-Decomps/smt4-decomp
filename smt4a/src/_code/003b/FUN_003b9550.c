/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9550` (_code @ 0x3b9550, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f568; /* 0x57f568 */


void FUN_003b9550(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_0057f568;
  if (DAT_0057f568 != 0) {
    *(unsigned char *)(DAT_0057f568 + 0x7c) = 1;
    temp_v0 = 0;
    do {
      if (*(int *)(temp_v1 + temp_v0 * 8 + 0x3c) == 0) {
        temp_v1 = temp_v1 + temp_v0 * 8;
        *(unsigned int *)(temp_v1 + 0x3c) = param_1;
        *(unsigned int *)(temp_v1 + 0x40) = param_2;
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  return;
}
