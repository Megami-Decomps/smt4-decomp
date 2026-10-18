/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310b24` (_code @ 0x310b24, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0a6c. */


void FUN_00310b24(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  do {
    piVar3 = (int *)(temp_v1 * 0x4c + 0x4332a0);
    temp_v2 = *(char *)(temp_v1 * 0x4c + 0x4332ea) != '\x01';
    temp_v0 = 1;
    if (temp_v2) {
      temp_v0 = *piVar3;
    }
    if (temp_v2 && temp_v0 != 0) {
      FUN_002c0a6c();
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x1a);
  return;
}
