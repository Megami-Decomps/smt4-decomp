/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103890` (_code @ 0x103890, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned int *, int, int);

extern unsigned char DAT_005584d0; /* 0x5584d0 */

/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_00103890(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005584d0;
  param_1[1] = *(unsigned int *)(param_2 + 4);
  rt_memcpy(param_1 + 2,param_2 + 8,0x20);
  return param_1;
}

} /* extern "C" */
