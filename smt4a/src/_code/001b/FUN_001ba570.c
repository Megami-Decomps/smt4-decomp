/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba570` (_code @ 0x1ba570, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019a7dc(void);
extern int FUN_001b34b8(void);


unsigned int FUN_001ba570(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001b34b8();
  if ((((temp_v0 != 0) && (temp_v0 != 1)) && (temp_v0 == 2)) &&
     ((temp_v0 = FUN_0019a7dc(), (*(unsigned short *)(temp_v0 + 0x60) & 2) != 0 ||
      (*(short *)(temp_v0 + 0x2a) == 0)))) {
    return 1;
  }
  return 0;
}
