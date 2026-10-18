/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd174` (_code @ 0x2bd174, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806a4; /* 0x5806a4 */

/* Supplied declaration required: FUN_003a2904. */


unsigned int FUN_002bd174(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*param_2 != 2) {
    if (*param_2 != 4) {
      return 0;
    }
    if (param_2[1] != 2) {
      return 0;
    }
  }
  else if (param_2[1] != 5) {
    return 0;
  }
  if (((DAT_005806a4 != 0) && (*(char *)(DAT_005806a4 + 0x220) == '\0')) &&
     (*(char *)(DAT_005806a4 + 0x2b8) == '\0')) {
    FUN_003a2904(0);
  }
  return 0;
}
