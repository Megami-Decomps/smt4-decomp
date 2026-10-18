/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9a98` (_code @ 0x3b9a98, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057f254; /* 0x57f254 */
extern int DAT_0057f258; /* 0x57f258 */

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_0039bf58. */


unsigned char FUN_003b9a98(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  if (DAT_0057f254 == '\0') {
    DAT_0057f254 = '\x01';
    FUN_00236038(0);
    FUN_0039bf58();
  }
  temp_v0 = *(char *)(DAT_0057f258 + 0x5d4) == '\0';
  if (temp_v0) {
    DAT_0057f254 = '\0';
  }
  return temp_v0;
}
