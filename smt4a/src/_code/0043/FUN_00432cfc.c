/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432cfc` (_code @ 0x432cfc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e6e14. */


unsigned int * FUN_00432cfc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = param_2;
  puVar2 = (unsigned int *)param_1[4];
  for (puVar1 = (unsigned int *)param_1[3]; puVar1 != puVar2; puVar1 = puVar1 + 0x2e) {
    (**(romwright_code **)*puVar1)(puVar1);
  }
  FUN_002e6e14(param_1[3]);
  return param_1;
}
