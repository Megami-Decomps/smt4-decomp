/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211f8c` (_code @ 0x211f8c, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

extern unsigned int FUN_0026ace0(void);


int FUN_00211f8c(void)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_0043e2ac;
  temp_v5 = 0;
  temp_v2 = FUN_0026ace0();
  if (0 < (int)(temp_v2 - 1)) {
    psVar4 = (short *)(temp_v1 + 0x106);
    if (((temp_v2 & 1) == 0) && (psVar4 = (short *)(temp_v1 + 0x108), *psVar4 != 0)) {
      temp_v5 = 1;
    }
    temp_v0 = psVar4[1];
    temp_v4 = 0;
    for (temp_v3 = (int)(temp_v2 - 1) >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      if (temp_v0 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v0 = psVar4[3];
      if (psVar4[2] != 0) {
        temp_v4 = temp_v4 + 1;
      }
      psVar4 = psVar4 + 2;
    }
    temp_v5 = temp_v5 + temp_v4;
  }
  if ((-1 < (int)(temp_v2 - 1)) && (*(short *)(temp_v1 + (temp_v2 - 1) * 2 + 0x108) != 0)) {
    temp_v5 = temp_v5 + 1;
  }
  return temp_v5;
}
