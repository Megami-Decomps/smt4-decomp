/* NON_MATCHING: romwright 0.5.0 decompilation of `strncpy` (_code @ 0x2ea528, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6dd4. */


unsigned int * strncpy(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = param_1;
  if (((unsigned int)param_1 & 3) == 0 && ((unsigned int)param_2 & 3) == 0) {
    while (param_3 >= 4) {
      temp_v1 = *param_2;
      if (((temp_v1 + 0xfefefeff) & ~temp_v1 & 0x80808080) != 0) break;
      *puVar1 = temp_v1;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
    }
  }
  do {
    temp_v0 = param_3 - 1;
    if (param_3 < 1) {
      return param_1;
    }
    temp_v1 = *param_2;
    puVar2 = (unsigned int *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)temp_v1;
    puVar1 = puVar2;
    param_2 = (unsigned int *)((int)param_2 + 1);
    param_3 = temp_v0;
  } while ((char)temp_v1 != '\0');
  FUN_002e6dd4(puVar2,temp_v0);
  return param_1;
}
