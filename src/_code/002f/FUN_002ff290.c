/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff290` (_code @ 0x2ff290, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
extern unsigned int FUN_00296f60(void);


unsigned int FUN_002ff290(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  FUN_00293c98();
  temp_v1 = FUN_00249b0c();
  if ((temp_v1 != 0) && (((unsigned int)*(unsigned short *)(temp_v1 + 0x1c6) & (1 << (temp_v0 & 0xff))) != 0)) {
    FUN_0028df54(1);
    return 1;
  }
  FUN_0028df54(0);
  return 1;
}
