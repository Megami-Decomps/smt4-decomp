/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj55af5cD1Ev` (_code @ 0x301590, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(void);
int sharedRefInitEmpty(unsigned int *);

extern unsigned char DAT_00558e90; /* 0x558e90 */
extern unsigned char DAT_0055af64; /* 0x55af64 */

/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: sharedRefInitEmpty. */


void _ZN9Obj55af5cD1Ev(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055af64;
  if (param_1[0x36] != 0) {
    sharedRefRelease();
  }
  param_1[0x24] = (unsigned int)&DAT_00558e90;
  sharedRefInitEmpty(param_1);
  return;
}

} /* extern "C" */
