/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001105e4` (_code @ 0x1105e4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/Shard0031.h"

extern "C" {

ListOwner *FUN_00132dea(ListOwner *);
int FUN_0013305a(unsigned int *);

extern unsigned char DAT_00559390; /* 0x559390 */

/* Supplied declaration required: FUN_0013305a. */


unsigned int * FUN_001105e4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559390;
  param_1 = param_1 + 7;
  FUN_0013305a(param_1);
  param_1 = param_1 + -6;
  FUN_00132dea((ListOwner *)param_1);
  return param_1 + -1;
}

} /* extern "C" */
