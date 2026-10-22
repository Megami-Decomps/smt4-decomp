/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_00100cc0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100d46 for reference (not compiled; its own view of the boundaries):

unsigned char * FUN_00100d46(unsigned char *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r10;
  unsigned int *unaff_r11;
  int in_r12;
  unsigned char in_CY;
  unsigned char in_OV;
  
  if (in_OV) {
    *param_4 = 0x100d4e;
    param_4[-1] = register0x00000054;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r5;
    param_4[-5] = unaff_r4;
  }
  if (in_CY) {
    unaff_r11 = (unsigned int *)0xc30;
  }
  if (in_r12 == -0x2d40000) {
    *unaff_r11 = param_1;
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
