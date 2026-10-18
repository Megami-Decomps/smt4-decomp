/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2ecc` (_code @ 0x3a2ecc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581274; /* 0x581274 */

/* Supplied declaration required: FUN_0032cb48. */


void FUN_003a2ecc(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00581274 != 0) {
    temp_v0 = *(char *)(DAT_00581274 + 0x40);
  }
  if (DAT_00581274 == 0 || temp_v0 == '\0') {
    return;
  }
  FUN_0032cb48();
  return;
}
