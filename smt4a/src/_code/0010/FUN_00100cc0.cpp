/* NON_MATCHING: found outside every function: branched to by FUN_00135b64; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100cc0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x00100d5e) * /

unsigned char * FUN_00100cc0(unsigned char *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r10;
  unsigned char in_OV;
  
  if (in_OV) {
    *param_4 = 0x100d4e;
    param_4[-1] = register0x00000054;
    param_4[-2] = 0x100d47;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r5;
    param_4[-5] = unaff_r4;
  }
  pbVar2 = (unsigned char *)0x0;
  do {
    bVar1 = *param_1;
    if ((unsigned int)bVar1 == (unsigned int)param_4 >> 0x18) {
      pbVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return pbVar2;
}
*/
#include "common.h"
