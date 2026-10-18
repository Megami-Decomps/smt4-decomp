/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1d78` (_code @ 0x1d1d78, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9024. */


int FUN_001d1d78(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b9024();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b9024();
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 3) - (unsigned int)*(unsigned char *)(temp_v1 + 3);
  if (temp_v2 == 0) {
    puVar4 = (unsigned short *)(unsigned int)*param_1;
    FUN_002b9024();
    puVar5 = (unsigned short *)(unsigned int)*param_2;
    FUN_002b9024();
    temp_v2 = (unsigned int)(unsigned char)puVar4[1] - (unsigned int)(unsigned char)puVar5[1];
    if ((temp_v2 == 0) &&
       (temp_v2 = (unsigned int)*(unsigned char *)((int)puVar5 + 3) - (unsigned int)*(unsigned char *)((int)puVar4 + 3), temp_v2 == 0)) {
      temp_v2 = (unsigned int)*puVar4 - (unsigned int)*puVar5;
    }
  }
  return temp_v2;
}
