/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e1f4` (_code @ 0x37e1f4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042199c; /* 0x42199c */

/* Supplied declaration required: FUN_00235a08. */
/* Supplied declaration required: FUN_00235ac4. */
/* Supplied declaration required: FUN_00235ddc. */


unsigned int * FUN_0037e1f4(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0042199c;
  FUN_00235ac4(param_1);
  for (temp_v0 = param_1[0x31]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      FUN_00235a08(temp_v0);
    }
  }
  for (temp_v0 = param_1[0x31]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    FUN_00235ddc(temp_v0);
  }
  param_1[0x31] = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}
