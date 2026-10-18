/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acf44` (_code @ 0x3acf44, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */


int FUN_003acf44(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b087c();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b087c();
  temp_v2 = *(int *)(temp_v1 + 8) - *(int *)(temp_v0 + 8);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b9364();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b9364();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 3) - (unsigned int)*(unsigned char *)(temp_v1 + 3);
    if (temp_v2 == 0) {
      temp_v2 = (unsigned int)*param_2 - (unsigned int)*param_1;
    }
  }
  return temp_v2;
}
