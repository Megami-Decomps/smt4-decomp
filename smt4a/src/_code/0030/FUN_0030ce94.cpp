/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ce94` (_code @ 0x30ce94, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113d48(unsigned int, unsigned int *);

extern unsigned char DAT_00559610; /* 0x559610 */
extern unsigned char DAT_00594a58; /* 0x594a58 */

/* Supplied declaration required: FUN_00113d48. */


unsigned int * FUN_0030ce94(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_00559610;
  FUN_00113d48((*(unsigned int *)((unsigned char *)&DAT_00594a58 + 0x64)),param_1);
  return param_1;
}

} /* extern "C" */
