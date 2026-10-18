/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dad8` (_code @ 0x37dad8, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235a08. */
/* Supplied declaration required: FUN_00235a4c. */
/* Supplied declaration required: FUN_00235ac4. */


void FUN_0037dad8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00235ac4();
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      if (-1 < (int)param_2) {
        FUN_00235a4c(temp_v0 + 0x90,param_2 & 0xff);
      }
      FUN_00235a08(temp_v0);
    }
  }
  return;
}
