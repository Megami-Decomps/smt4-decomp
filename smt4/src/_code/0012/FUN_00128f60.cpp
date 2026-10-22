/* NON_MATCHING: found outside every function: its address is in FUN_0010ff4c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00128f60 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_00128f60(void)

{
  int iVar1;
  int unaff_r6;
  unsigned int uStack000001a8;
  int iStack_28;
  unsigned char *puStack_24;
  unsigned int uStack_20;
  
  if ((DAT_0044e7c0 & DAT_0044e7c1) != 0) {
    DAT_0044e7c3 = 1;
    DAT_0044e7c1 = 0;
    DAT_0044e7c2 = 0;
    coproc_moveto_Data_Synchronization(0);
    puStack_24 = &DAT_0044e7c8;
    _DAT_0044e7ec = _DAT_0044e7c8;
    DAT_00471bac = &DAT_0044e7c8;
    DAT_0044e7d4 = 0x58;
    iStack_28 = unaff_r6 << 1;
    uStack000001a8 = 1;
    iVar1 = _DAT_0044e7c8 * 2;
    uStack_20 = 0x2e;
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_002bc7f4(0x207,&iStack_28);
      FUN_001373f0(iStack_28,*(unsigned int *)(iVar1 + 0x14),*(unsigned int *)(iVar1 + 0x18));
      FUN_002bf0dc();
    }
    return;
  }
  return;
}
*/
#include "common.h"
