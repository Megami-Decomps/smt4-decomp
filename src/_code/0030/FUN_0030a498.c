/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a498` (_code @ 0x30a498, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002a8ab0. */
/* Supplied declaration required: FUN_002c0ac8. */


unsigned int FUN_0030a498(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00289640();
    if (temp_v0 == 0x14) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_00296f60(0);
    temp_v2 = FUN_002c0ac8();
    FUN_002a8ab0(temp_v2,7,0x14);
    temp_v0 = FUN_002c0ac8(temp_v1);
    *(unsigned int *)(temp_v0 + 0x78) = 2;
  }
  return 0;
}
