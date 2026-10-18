/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235938` (_code @ 0x235938, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00235a08. */
/* Supplied declaration required: FUN_00235ac4. */
/* Supplied declaration required: FUN_00235ddc. */


void FUN_00235938(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00235ac4();
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      FUN_00235a08(temp_v0);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    FUN_00235ddc(temp_v0);
  }
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  return;
}
