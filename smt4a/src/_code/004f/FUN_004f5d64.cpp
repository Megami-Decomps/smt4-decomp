/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5d64` (_code @ 0x4f5d64, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005737fc; /* 0x5737fc */

extern int FUN_0019a37c(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


unsigned int FUN_004f5d64(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1f54) != 0) {
    temp_v2 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1f54) + temp_v2 * 0x16 + 0x58;
      if (temp_v3 != 0) {
        temp_v0 = FUN_002e3390(DAT_005737fc);
        temp_v1 = FUN_0019a37c(temp_v3,DAT_005737fc,temp_v0);
        if (temp_v1 == 0) {
          return (unsigned int)*(unsigned short *)(temp_v3 + 0x12);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0xffffffff;
}

} /* extern "C" */
