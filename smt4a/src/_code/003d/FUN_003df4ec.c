/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df4ec` (_code @ 0x3df4ec, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);


void FUN_003df4ec(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001801a4();
  temp_v1 = 0;
  do {
    if (*(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x34) == param_1) {
      *(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x34) = 0;
      *(unsigned char *)(temp_v1 + temp_v0 + 0x44) = 0;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  return;
}
