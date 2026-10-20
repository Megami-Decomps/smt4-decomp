/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed258` (_code @ 0x2ed258, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(void);

extern unsigned char DAT_00558490; /* 0x558490 */

/* Supplied declaration required: sharedRefAddRef. */


unsigned int * FUN_002ed258(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558490;
  param_1[2] = param_2;
  sharedRefAddRef();
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  return param_1;
}

} /* extern "C" */
