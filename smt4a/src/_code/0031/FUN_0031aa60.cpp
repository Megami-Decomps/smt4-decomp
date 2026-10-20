/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031aa60` (_code @ 0x31aa60, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00282f00(void);

typedef int romwright_code(...);
extern unsigned int DAT_0057f398; /* 0x57f398 */
extern unsigned int DAT_0057f39c; /* 0x57f39c */
extern unsigned int DAT_0057f3a0; /* 0x57f3a0 */
extern unsigned int DAT_0057f3a4; /* 0x57f3a4 */
extern unsigned int DAT_0057f3a8; /* 0x57f3a8 */
extern romwright_code *DAT_0057f3ac; /* 0x57f3ac */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_00282f00. */


unsigned int FUN_0031aa60(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00282f00();
  if (param_1 == 0) {
    jobStop(DAT_0057f39c,0);
    jobStop(DAT_0057f3a0,0);
    jobStop(DAT_0057f3a4,0);
    jobStop(DAT_0057f3a8,0);
    jobStop(DAT_0057f398,2);
    if (DAT_0057f3ac != (romwright_code *)0x0) {
      (*DAT_0057f3ac)();
    }
  }
  return 0;
}

} /* extern "C" */
