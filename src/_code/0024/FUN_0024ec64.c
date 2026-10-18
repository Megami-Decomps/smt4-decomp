/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ec64` (_code @ 0x24ec64, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a8a08(void);


unsigned int FUN_0024ec64(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002a8a08();
  temp_v1 = 0;
  while ((temp_v2 = (int)*(char *)(temp_v0 + temp_v1 + 0x90f0), temp_v2 < 0 ||
         (*(unsigned short *)(temp_v0 + temp_v2 * 0x604 + 0xd6) != param_1))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x18) {
      return 0;
    }
  }
  return 1;
}
