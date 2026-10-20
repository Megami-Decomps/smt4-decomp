/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002236e0` (_code @ 0x2236e0, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);

extern unsigned char DAT_004bce8c; /* 0x4bce8c */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */


void FUN_002236e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  (*(unsigned char *)((unsigned char *)&DAT_004bce8c + 0x250)) = 0;
  do {
    temp_v0 = 1;
    do {
      if (*(int *)(temp_v1 * 0x100 + temp_v0 * 4 + 0x4bd110) != 0) {
        asdMdlManagerMarkDestroy();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x40);
    if (*(int *)(temp_v1 * 4 + 0x4bd0f8) != 0) {
      asdMdlManagerMarkDestroy();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  return;
}

} /* extern "C" */
