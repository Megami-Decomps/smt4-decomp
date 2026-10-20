/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd284` (_code @ 0x2fd284, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int constructObj0055affc(...);

extern unsigned char DAT_00559ed4; /* 0x559ed4 */

/* Supplied declaration required: constructObj0055affc. */


int FUN_002fd284(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559ed4;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = constructObj0055affc(param_1 + 2);
  temp_v0 = constructObj0055affc(temp_v0 + 8);
  return temp_v0 - 0x10;
}

} /* extern "C" */
