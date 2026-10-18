/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212724` (_code @ 0x212724, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00184c00. */


void FUN_00212724(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  
  if (DAT_0057f108 == 0) {
    return;
  }
  pcVar2 = (char *)(DAT_0057f108 + 0x1b20);
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x04' && temp_v0 != '\x03') {
    FUN_00184c00(DAT_0057f108 + 0x1a08,0x18,0);
    *pcVar2 = '\x03';
  }
  return;
}
