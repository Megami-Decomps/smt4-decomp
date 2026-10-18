/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269f34` (_code @ 0x269f34, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002b9008. */


void FUN_00269f34(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043da90;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 6;
    *(unsigned short *)(temp_v0 + temp_v2 * 2 + 0xe22) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe28) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe2a) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe2c) = 0xffff;
    FUN_002b9008();
    FUN_002b9008();
    FUN_002b9008();
    FUN_002b9008();
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  *(unsigned char *)(temp_v0 + 0xe3b) = 0;
  return;
}
