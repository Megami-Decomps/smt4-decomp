/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010de3c` (_code @ 0x10de3c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f2dfc. */
extern unsigned int FUN_002f815c(void);


unsigned int FUN_0010de3c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = FUN_002f815c();
    *(unsigned short *)(param_1 + 0x6e) = (unsigned short)((temp_v0 & 0xff) << 8) | ((unsigned short)(temp_v0 >> 8) & 0xff);
    temp_v1 = param_1 + 0x88;
    FUN_002f2dfc(param_1 + 0x88,param_1 + 0x68,1);
    if (temp_v1 != 0) {
      return 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  return 0;
}
