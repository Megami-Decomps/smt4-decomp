/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba4dc` (_code @ 0x2ba4dc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


unsigned int FUN_002ba4dc(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = 0;
  if (temp_v1 < *(char *)(temp_v0 + 0xe17)) {
    do {
      if ((*(char *)(temp_v0 + temp_v1 + 0x15f4) != '\0') &&
         (*(short *)(temp_v0 + temp_v1 * 2 + 0x1644) == param_1)) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(char *)(temp_v0 + 0xe17));
  }
  return 0;
}

} /* extern "C" */
