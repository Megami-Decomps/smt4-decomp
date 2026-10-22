/* NON_MATCHING: found outside every function: its address is in FUN_00147120's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0016f3a8 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_0016f3a8(void)

{
  int iVar1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  unsigned char bVar2;
  
  if ((DAT_005894e4 & DAT_005894e5) == 0) {
    return;
  }
  DAT_005894e7 = 1;
  DAT_005894e5 = 0;
  DAT_005894e6 = 0;
  coproc_moveto_Data_Synchronization(0);
  if (_DAT_005894ec != -1) {
    if (_DAT_005894ec == -2) {
      FUN_001bd354(&DAT_005894f0);
      do {
        bVar2 = (unsigned char)hasExclusiveAccess(0x5894ec);
      } while (!bVar2);
      _DAT_005894ec = 1;
      FUN_001b4a58(DAT_005c0ad8,&DAT_005894ec,0,0xffffffff,0,0);
      do {
        iVar1 = -_DAT_005894f0;
        bVar2 = (unsigned char)hasExclusiveAccess(0x5894f0);
      } while (!bVar2);
      bVar2 = _DAT_005894f0 != -1;
      _DAT_005894f0 = iVar1;
      if (bVar2 && 0 < iVar1) {
        FUN_001b4a58(DAT_005c0ad8,&DAT_005894f0,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
  }
  else {
    do {
      bVar2 = (unsigned char)hasExclusiveAccess(0x5894ec);
    } while (!bVar2);
    _DAT_005894ec = 0;
    FUN_001b4a58(DAT_005c0ad8,&DAT_005894ec,0,1,0,0);
  }
  return;
}
*/
#include "common.h"
