/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494530` (_code @ 0x494530, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0049cc10(...);

extern int FUN_0049c9a0(unsigned int);
/* Supplied declaration required: FUN_0049cc10. */


int FUN_00494530(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0049cc10();
  temp_v1 = FUN_0049cc10(param_2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    temp_v1 = FUN_0049c9a0(param_1);
    temp_v0 = FUN_0049c9a0(param_2);
    temp_v1 = temp_v1 - temp_v0;
  }
  return temp_v1;
}

} /* extern "C" */
