/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010eec4` (_code @ 0x10eec4, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010ee58(unsigned int, unsigned int);

extern unsigned char DAT_00559224; /* 0x559224 */

/* Supplied declaration required: FUN_0010ee58. */


unsigned int * FUN_0010eec4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559224;
  if (*(char *)(param_1 + 3) != '\0') {
    FUN_0010ee58(param_1[1],param_1[2]);
  }
  return param_1;
}

} /* extern "C" */
