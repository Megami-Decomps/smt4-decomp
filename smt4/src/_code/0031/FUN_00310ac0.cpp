/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310ac0` (_code @ 0x310ac0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureRelease(void);

/* Supplied declaration required: asdTextureRelease. */


void FUN_00310ac0(void)

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
      asdTextureRelease();
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x1a);
  return;
}

} /* extern "C" */
