/* NON_MATCHING: found outside every function: branched to by FUN_002def6c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001006e4 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001006e4(int *param_1)

{
  int unaff_r8;
  int in_lr;
  char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  char in_OV;
  
  *param_1 = (int)param_1;
  if (in_NG == in_OV) {
    *(BADSPACEBASE **)(in_lr - 0x501) = register0x00000054;
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0x2601);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 0x11;
  }
  return *(unsigned long long *)(unaff_r8 + 4);
}
*/
#include "common.h"
