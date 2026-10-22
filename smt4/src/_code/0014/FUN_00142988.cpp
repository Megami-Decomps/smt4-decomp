/* NON_MATCHING: found outside every function: branched to by FUN_00137080; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00142988 for reference (not compiled; its own view of the boundaries):

void FUN_00142988(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    while (iVar1 == 0) {
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = 0x11000;
        DAT_004652a0[1] = 0xd0080;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      iVar1 = 1;
    }
    if (iVar1 != 0xc) {
      if ((iVar1 != 0xf) && (DAT_004652a0 < DAT_004652a4)) {
        *DAT_004652a0 = 0;
        DAT_004652a0[1] = (iVar1 + 0x80U) | 0xf0000;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
    }
    else if (DAT_004652a0 < DAT_004652a4) {
      *DAT_004652a0 = 0xff0000;
      DAT_004652a0[1] = 0xf008c;
      DAT_004652a0 = DAT_004652a0 + 2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}
*/
#include "common.h"
