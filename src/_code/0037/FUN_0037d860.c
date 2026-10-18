/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d860` (_code @ 0x37d860, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235c24. */


void FUN_0037d860(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if ((*(char *)(temp_v0 + 0xc6) != '\0') && ((*(char *)(temp_v0 + 0xc5) != '\0') != param_2)) {
      *(char *)(temp_v0 + 0xc5) = (char)param_2;
      FUN_00235c24(*(unsigned int *)(temp_v0 + 0x134),param_2);
    }
  }
  return;
}
