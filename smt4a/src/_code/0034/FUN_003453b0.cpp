/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003453b0` (_code @ 0x3453b0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */

extern int FUN_0018719c(unsigned int);


unsigned int FUN_003453b0(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0018719c(0x45b);
  if ((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x4f7), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = DAT_0057f69c + temp_v0 * 4;
      if (*(unsigned short *)(temp_v1 + 0x283e8) == param_1) {
        if ((*(unsigned short *)(temp_v1 + 0x283ea) >> 10) - 1 >= 3) {
          return 0;
        }
        return 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
  }
  return 0;
}

} /* extern "C" */
