/* NON_MATCHING: found outside every function: called by FUN_001420ac; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002a691c for reference (not compiled; its own view of the boundaries):

void FUN_002a691c(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (DAT_004652a0 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 >= DAT_004652a4) {
    DAT_004652a0 = DAT_004652a4;
  }
  else {
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        uVar3 = param_2 - uVar5;
        if (0x80 < uVar3) {
          uVar3 = 0x80;
        }
        uVar6 = uVar3 >> 1;
        *DAT_004652a0 = param_3;
        puVar2 = DAT_004652a0 + 2;
        DAT_004652a0[1] = (uVar3 * 0x100000 - 0x100000) | (param_1 + uVar5) | 0x800f0000;
        if (uVar6 >= 0x80000000) {
          do {
            puVar1 = puVar2 + 1;
            *puVar2 = param_3;
            uVar6 = uVar6 - 1;
            puVar2 = puVar2 + 2;
            *puVar1 = param_3;
          } while (uVar6 != 0);
        }
        else if (uVar6 != 0 && -1 < (int)(uVar6 * 2)) {
          DAT_004652a0 = DAT_004652a0 + 1;
          iVar4 = (int)(uVar6 * 2) >> 1;
          do {
            DAT_004652a0[1] = param_3;
            iVar4 = iVar4 - 1;
            DAT_004652a0 = DAT_004652a0 + 2;
            *DAT_004652a0 = param_3;
          } while (iVar4 != 0);
          puVar2 = puVar2 + uVar6 * 2;
        }
        uVar5 = uVar5 + 0x80;
        DAT_004652a0 = puVar2;
      } while (uVar5 < param_2);
    }
  }
  return;
}
*/
#include "common.h"
