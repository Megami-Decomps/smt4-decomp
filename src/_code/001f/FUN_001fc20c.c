/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc20c` (_code @ 0x1fc20c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


unsigned int FUN_001fc20c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c2b1c();
  temp_v1 = 0;
  if (temp_v1 < *(char *)(temp_v0 + 0xde3)) {
    do {
      if ((*(char *)(temp_v0 + temp_v1 + 0xde4) != '\0') &&
         (*(short *)(temp_v0 + temp_v1 * 2 + 0xe04) == param_1)) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(char *)(temp_v0 + 0xde3));
  }
  return 0;
}
