/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270d74` (_code @ 0x270d74, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */


int FUN_00270d74(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00184310();
  temp_v1 = (unsigned int)*param_2;
  FUN_00184310();
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 6) - (unsigned int)*(unsigned short *)(temp_v1 + 6);
  if (temp_v2 == 0) {
    puVar4 = (unsigned short *)(unsigned int)*param_1;
    FUN_00184310();
    puVar5 = (unsigned short *)(unsigned int)*param_2;
    FUN_00184310();
    temp_v2 = (unsigned int)(unsigned char)puVar4[1] - (unsigned int)(unsigned char)puVar5[1];
    if ((temp_v2 == 0) && (temp_v2 = (unsigned int)puVar5[3] - (unsigned int)puVar4[3], temp_v2 == 0)) {
      temp_v2 = (unsigned int)*puVar4 - (unsigned int)*puVar5;
    }
  }
  return temp_v2;
}

} /* extern "C" */
