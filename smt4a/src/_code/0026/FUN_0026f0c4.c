/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f0c4` (_code @ 0x26f0c4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001641c4. */


void FUN_0026f0c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f108;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 6;
    *(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x1b54) = 0xffff;
    *(unsigned short *)(temp_v1 + 0x1b5a) = 0xffff;
    *(unsigned short *)(temp_v1 + 0x1b5c) = 0xffff;
    *(unsigned short *)(temp_v1 + 0x1b5e) = 0xffff;
    FUN_001641c4();
    FUN_001641c4();
    FUN_001641c4();
    FUN_001641c4();
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  *(unsigned char *)(temp_v0 + 0x1b6d) = 0;
  return;
}
