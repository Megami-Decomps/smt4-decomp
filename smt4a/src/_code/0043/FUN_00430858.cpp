/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430858` (_code @ 0x430858, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004302b4(unsigned int);
int FUN_00430768(void);

extern int g_nnCecdHandle; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_004302b4. */
/* Supplied declaration required: FUN_00430768. */


void FUN_00430858(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_00430768();
    return;
  }
  if (g_nnCecdHandle != 0) {
    FUN_004302b4(param_1);
    return;
  }
  return;
}

} /* extern "C" */
