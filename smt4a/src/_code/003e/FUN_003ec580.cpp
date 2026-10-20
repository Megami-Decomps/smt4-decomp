/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec580` (_code @ 0x3ec580, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

extern int DAT_0057392c; /* 0x57392c */
extern int DAT_00573930; /* 0x573930 */
extern int DAT_00573934; /* 0x573934 */
extern int DAT_00573938; /* 0x573938 */
extern int DAT_0057393c; /* 0x57393c */

/* Supplied declaration required: asdMemFree. */


void FUN_003ec580(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    if (DAT_0057392c != 0) {
      asdMemFree();
      DAT_0057392c = 0;
    }
    if (DAT_00573930 != 0) {
      asdMemFree();
      DAT_00573930 = 0;
    }
    if (DAT_00573934 != 0) {
      asdMemFree();
      DAT_00573934 = 0;
    }
  }
  if (DAT_00573938 != 0) {
    asdMemFree();
    DAT_00573938 = 0;
  }
  if (DAT_0057393c != 0) {
    asdMemFree();
    DAT_0057393c = 0;
  }
  if (*(int *)(param_1 + 0x4e48) != 0) {
    asdMemFree();
    *(int *)(param_1 + 0x4e48) = 0;
  }
  return;
}

} /* extern "C" */
