/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c85dc` (_code @ 0x3c85dc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0022a0c4(unsigned short);
extern int FUN_002b6e60(void);
extern int FUN_002b6e78(void);


unsigned short FUN_003c85dc(void)

{
  int temp_v0;
  unsigned short temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002b6e78();
  if (temp_v0 == 2) {
    temp_v0 = FUN_002b6e60();
    temp_v0 = FUN_0022a0c4(*(unsigned short *)(temp_v0 + 0x46));
    temp_v1 = *(unsigned short *)(temp_v0 + 6);
  }
  return temp_v1;
}
