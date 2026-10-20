/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad6e0` (_code @ 0x3ad6e0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a8764(void);


int FUN_003ad6e0(unsigned int param_1)

{
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002a8764();
  temp_v1 = 0;
  if (temp_v1 < *(unsigned char *)(temp_v0 + 0x910b)) {
    do {
      temp_v2 = (int)*(char *)(temp_v0 + temp_v1 + 0x90f0);
      if ((-1 < temp_v2) && (temp_v2 = temp_v0 + temp_v2 * 0x604, *(unsigned short *)(temp_v2 + 0xd6) == param_1)) {
        return temp_v2 + 0x90;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned char *)(temp_v0 + 0x910b));
  }
  return 0;
}

} /* extern "C" */
