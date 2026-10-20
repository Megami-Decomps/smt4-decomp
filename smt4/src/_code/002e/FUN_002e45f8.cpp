/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e45f8` (_code @ 0x2e45f8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

/* Supplied declaration required: devilGetRecord. */


unsigned int FUN_002e45f8(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  
  temp_v0 = (unsigned int)param_2[1];
  if (param_1[1] == 0) {
    return (unsigned int)(temp_v0 != 0);
  }
  if (temp_v0 == 0) {
    temp_v0 = 0xffffffff;
  }
  else {
    temp_v0 = temp_v0 - param_1[1];
    if (temp_v0 == 0) {
      puVar2 = (unsigned short *)(unsigned int)*param_1;
      devilGetRecord();
      puVar3 = (unsigned short *)(unsigned int)*param_2;
      devilGetRecord();
      temp_v0 = (unsigned int)(unsigned char)puVar3[1] - (unsigned int)(unsigned char)puVar2[1];
      if ((temp_v0 == 0) &&
         (temp_v0 = (unsigned int)*(unsigned char *)((int)puVar2 + 3) - (unsigned int)*(unsigned char *)((int)puVar3 + 3), temp_v0 == 0))
      {
        temp_v0 = (unsigned int)*puVar3 - (unsigned int)*puVar2;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
