/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306c8c` (_code @ 0x306c8c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb7c0(unsigned int *);
int FUN_002f674e(unsigned int);

extern unsigned char DAT_0055a220; /* 0x55a220 */
extern signed char DAT_0059935d; /* 0x59935d */

/* Supplied declaration required: FUN_002eb7c0. */
/* Supplied declaration required: FUN_002f674e. */


void FUN_00306c8c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055a220;
  if (DAT_0059935d == '\0') {
    FUN_002f674e(param_1[0x10]);
  }
  FUN_002eb7c0(param_1);
  return;
}

} /* extern "C" */
