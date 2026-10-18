/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e416c` (_code @ 0x3e416c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00186f58. */
extern int FUN_00348d64(void);
extern int FUN_003e4230(unsigned int);


void FUN_003e416c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *pbVar5;
  unsigned int temp_v4;
  
  temp_v1 = FUN_00348d64();
  temp_v4 = 1;
  do {
    temp_v2 = temp_v4;
    FUN_00186f58();
    if (((temp_v2 != 0) && (*(short *)(temp_v2 + 0x26) == 0)) &&
       (temp_v3 = FUN_003e4230(temp_v4), temp_v3 != 2)) {
      pbVar5 = (unsigned char *)(temp_v1 + ((int)(temp_v4 + ((unsigned int)((int)temp_v4 >> 0x1f) >> 0x1d)) >> 3));
      temp_v0 = (unsigned char)(1 << (((int)temp_v4 % 8) & 0xffU));
      *pbVar5 = *pbVar5 | temp_v0;
      pbVar5[0x12] = temp_v0 | pbVar5[0x12];
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x8d);
  return;
}
