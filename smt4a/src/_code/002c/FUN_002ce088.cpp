/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce088` (_code @ 0x2ce088, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */


int FUN_002ce088(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  FUN_00184310();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  FUN_00184310();
  temp_v0 = (unsigned int)(unsigned char)puVar1[1] - (unsigned int)(unsigned char)puVar2[1];
  if ((temp_v0 == 0) && (temp_v0 = (unsigned int)puVar2[3] - (unsigned int)puVar1[3], temp_v0 == 0)) {
    temp_v0 = (unsigned int)*puVar1 - (unsigned int)*puVar2;
  }
  return temp_v0;
}

} /* extern "C" */
