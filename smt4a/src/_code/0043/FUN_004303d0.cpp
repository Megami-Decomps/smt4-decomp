/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004303d0` (_code @ 0x4303d0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00430220(unsigned int);
int FUN_004306d4(void);

extern int DAT_005c1fc4; /* 0x5c1fc4 */
extern int DAT_005c1fc8; /* 0x5c1fc8 */

/* Supplied declaration required: FUN_00430220. */
/* Supplied declaration required: FUN_004306d4. */


void FUN_004303d0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005c1fc8 != 0) {
    FUN_004306d4();
    return;
  }
  if (DAT_005c1fc4 != 0) {
    FUN_00430220(param_1);
    return;
  }
  return;
}

} /* extern "C" */
