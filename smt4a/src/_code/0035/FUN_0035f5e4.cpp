/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f5e4` (_code @ 0x35f5e4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570de8; /* 0x570de8 */
extern unsigned int DAT_00570dec; /* 0x570dec */

extern int FUN_0014aa78(unsigned int);
extern int FUN_001632f8(void);


unsigned char FUN_0035f5e4(void)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_001632f8();
  if (temp_v1 == 0) {
    temp_v2 = FUN_0014aa78(0);
    temp_v0 = ~DAT_00570de8;
    *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & ~DAT_00570dec;
    *(unsigned int *)(temp_v2 + 0x45a0) = *(unsigned int *)(temp_v2 + 0x45a0) & temp_v0;
  }
  return temp_v1 == 0;
}

} /* extern "C" */
