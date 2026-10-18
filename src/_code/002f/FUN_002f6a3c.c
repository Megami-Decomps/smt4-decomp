/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6a3c` (_code @ 0x2f6a3c, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002637b4. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002a7aa0. */
extern unsigned long long FUN_002c0ac8(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002f6a3c(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  FUN_002a5058();
  temp_v4 = FUN_002c0ac8(param_1);
  temp_v2 = (int)((unsigned long long)temp_v4 >> 0x20);
  temp_v0 = (int)temp_v4;
  temp_v1 = *(int *)(temp_v0 + 0x5e8);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x5ec);
  }
  if ((temp_v1 != 0 && temp_v2 != 5) && (temp_v2 != 6)) {
    FUN_0029c56c(temp_v1,0);
  }
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  temp_v3 = 0;
  *(unsigned int *)(temp_v0 + 0x5e4) = 0;
  do {
    temp_v2 = temp_v0 + temp_v3 * 4;
    FUN_002637b4(*(unsigned int *)(temp_v2 + 0x6c8));
    FUN_002a7aa0(*(unsigned int *)(temp_v2 + 0x658));
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1c);
  FUN_002c4360(DAT_0043dfc0);
  DAT_0043dfc0 = 0;
  return;
}
