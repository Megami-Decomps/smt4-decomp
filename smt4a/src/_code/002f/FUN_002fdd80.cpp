/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdd80` (_code @ 0x2fdd80, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);

/* Supplied declaration required: FUN_00192608. */


int FUN_002fdd80(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00192608();
  temp_v1 = (unsigned int)*param_2;
  FUN_00192608();
  temp_v2 = (*(unsigned int *)(temp_v0 + 0x24) >> 0x14) - (*(unsigned int *)(temp_v1 + 0x24) >> 0x14);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_00192608();
    temp_v1 = (unsigned int)*param_2;
    FUN_00192608();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x70) - (unsigned int)*(unsigned short *)(temp_v1 + 0x70);
  }
  return temp_v2;
}

} /* extern "C" */
