/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003291d8` (_code @ 0x3291d8, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd730. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_003291d8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x4c;
    piVar3 = (int *)(temp_v0 + 0x4332a0);
    temp_v3 = *(char *)(temp_v0 + 0x4332ea) != '\x01';
    temp_v1 = 1;
    if (temp_v3) {
      temp_v1 = *piVar3;
    }
    if (temp_v3 && temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xc) = 0x2000000;
      *(unsigned int *)(*piVar3 + 0x3c) = 1;
      *(unsigned int *)(*piVar3 + 0x40) = 1;
      *(unsigned int *)(*piVar3 + 0x38) = 0;
      FUN_002bd730(*piVar3);
      *(unsigned char *)(temp_v0 + 0x4332e8) = 1;
      FUN_002c4360(*(unsigned int *)(temp_v0 + 0x4332e4));
      *(unsigned int *)(temp_v0 + 0x4332e4) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x1a);
  return;
}
