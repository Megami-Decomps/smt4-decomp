/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334018` (_code @ 0x334018, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


void FUN_00334018(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b66ec();
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
