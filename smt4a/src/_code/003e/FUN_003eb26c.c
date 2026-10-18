/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb26c` (_code @ 0x3eb26c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
extern int FUN_00187168(void);
/* Supplied declaration required: FUN_003e503c. */
extern unsigned int FUN_00409fe8(unsigned int, unsigned int, unsigned int);


void FUN_003eb26c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = 0;
  temp_v4 = 0x2a;
  do {
    temp_v5 = param_1 + temp_v1 * 8;
    temp_v4 = temp_v4 - 1;
    *(unsigned int *)(temp_v5 + 0x201c) = 0;
    *(unsigned int *)(temp_v5 + 0x2020) = 0xffffffff;
    temp_v1 = temp_v1 + 1;
  } while (temp_v4 != 0);
  temp_v6 = 0;
  do {
    temp_v2 = temp_v6 & 0xffff;
    FUN_003e503c();
    temp_v1 = FUN_00187168();
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      FUN_00184310();
      if (temp_v2 != 0) {
        temp_v0 = *(unsigned short *)(temp_v2 + 0x9c);
        *(unsigned int *)(param_1 + temp_v6 * 8 + 0x2020) = (unsigned int)temp_v0;
        temp_v3 = FUN_00409fe8((unsigned int)temp_v0,1,0);
        *(unsigned int *)(param_1 + temp_v6 * 0x10 + 0x4d78) = temp_v3;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while ((int)temp_v6 < 0xc);
  return;
}
