/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9518` (_code @ 0x2e9518, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strDuplicateInto(unsigned int *, unsigned int);

extern unsigned char DAT_0055affc; /* 0x55affc */

/* Supplied declaration required: strDuplicateInto. */


unsigned int * FUN_002e9518(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055affc;
  strDuplicateInto(param_1 + 1,*(unsigned int *)(param_2 + 4));
  return param_1;
}

} /* extern "C" */
