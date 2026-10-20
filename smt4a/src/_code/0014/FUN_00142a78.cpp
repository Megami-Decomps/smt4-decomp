/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142a78` (_code @ 0x142a78, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f68(unsigned int, int);
int FUN_00153f74(unsigned int);

extern int DAT_00640120; /* 0x640120 */
extern signed char DAT_00640128; /* 0x640128 */

/* Supplied declaration required: FUN_00152f68. */
/* Supplied declaration required: FUN_00153f74. */


void FUN_00142a78(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0) {
    if (DAT_00640128 == '\0') {
      if ((DAT_00640120 != 0) && (*(int *)(DAT_00640120 + 100) == 0)) {
        FUN_00153f74(*(unsigned int *)(DAT_00640120 + 0x60));
      }
      DAT_00640128 = '\x01';
    }
  }
  else if (DAT_00640128 == '\x01') {
    if ((DAT_00640120 != 0) && (*(int *)(DAT_00640120 + 100) == 0)) {
      FUN_00152f68(*(unsigned int *)(DAT_00640120 + 0x60),0);
    }
    DAT_00640128 = '\0';
  }
  return;
}

} /* extern "C" */
