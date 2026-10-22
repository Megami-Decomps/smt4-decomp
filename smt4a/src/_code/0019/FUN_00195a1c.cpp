/* NON_MATCHING: found outside every function: branched to by FUN_0017cbb4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00195a1c for reference (not compiled; its own view of the boundaries):

void FUN_00195a1c(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    while (iVar1 == 0) {
      if (DAT_005b40e0 < DAT_005b40e4) {
        *DAT_005b40e0 = 0x11000;
        DAT_005b40e0[1] = 0xd0080;
        DAT_005b40e0 = DAT_005b40e0 + 2;
      }
      iVar1 = 1;
    }
    if (iVar1 != 0xc) {
      if ((iVar1 != 0xf) && (DAT_005b40e0 < DAT_005b40e4)) {
        *DAT_005b40e0 = 0;
        DAT_005b40e0[1] = (iVar1 + 0x80U) | 0xf0000;
        DAT_005b40e0 = DAT_005b40e0 + 2;
      }
    }
    else if (DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = 0xff0000;
      DAT_005b40e0[1] = 0xf008c;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}
*/
#include "common.h"
