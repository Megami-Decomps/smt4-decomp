/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4608` (_code @ 0x2e4608, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_002e4608(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  
  if (param_1[1] == 0) {
    return (unsigned int)(param_2[1] != 0);
  }
  if (param_2[1] == 0) {
    temp_v0 = 0xffffffff;
  }
  else {
    puVar2 = (unsigned short *)(unsigned int)*param_1;
    FUN_002b9364();
    puVar3 = (unsigned short *)(unsigned int)*param_2;
    FUN_002b9364();
    temp_v0 = (unsigned int)(unsigned char)puVar3[1] - (unsigned int)(unsigned char)puVar2[1];
    if ((temp_v0 == 0) &&
       (temp_v0 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3), temp_v0 == 0)) {
      temp_v0 = (unsigned int)*puVar3 - (unsigned int)*puVar2;
    }
  }
  return temp_v0;
}
