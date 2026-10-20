/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303928` (_code @ 0x303928, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ff858(unsigned int *, int);
int FUN_002ff8a8(void);

extern unsigned char DAT_005596b4; /* 0x5596b4 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */

/* Supplied declaration required: FUN_002ff858. */
/* Supplied declaration required: FUN_002ff8a8. */


unsigned int * FUN_00303928(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055a4c0;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1 = param_1 + 2;
  FUN_002ff858(param_1,0);
  param_1[-2] = (unsigned int)&DAT_005596b4;
  *(unsigned char *)((int)param_1 - 3) = param_2;
  FUN_002ff8a8();
  return param_1 + -2;
}

} /* extern "C" */
