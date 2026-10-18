/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aceb4` (_code @ 0x3aceb4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043d9e1; /* 0x43d9e1 */
extern int DAT_0043d9e4; /* 0x43d9e4 */

/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_003aceb4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  DAT_0043d9e1 = DAT_0043d9e1 - '\x01';
  if (DAT_0043d9e1 < '\x01') {
    if (-1 < *(short *)(DAT_0043d9e4 + 8)) {
      FUN_002958f8((int)*(short *)(DAT_0043d9e4 + 8),1);
    }
    temp_v0 = 0;
    do {
      FUN_002ae898(0x22,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    FUN_002ae7e8(0x22);
    DAT_0043d9e1 = '\0';
  }
  return;
}
