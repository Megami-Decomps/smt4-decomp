/* NON_MATCHING: found outside every function: branched to by nn_init_InitializeAllocator; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00159fa0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_00159fa0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = (param_1 - 1U) & 0xfffffffc;
  puVar2 = (unsigned int *)(uVar1 + 4);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *(unsigned int *)(uVar1 + 8) = 0;
    *(unsigned int *)(uVar1 + 0xc) = 0;
    *(unsigned int *)(uVar1 + 0x10) = 0;
    *(unsigned int *)(uVar1 + 0x14) = 0;
    *(unsigned int *)(uVar1 + 0x18) = 0;
    *(unsigned int *)(uVar1 + 0x1c) = 0;
    *(unsigned int *)(uVar1 + 0x58) = 0;
    *(unsigned int *)(uVar1 + 0x5c) = 0;
    *(unsigned int *)(uVar1 + 0x60) = 0;
    *(unsigned int *)(uVar1 + 100) = 0xffffffff;
    *puVar2 = &DAT_00558414;
    FUN_00159110(puVar2,uVar1 + 0x68,(param_1 + param_2) - (uVar1 + 0x68));
    FUN_00188b60(uVar1 + 0x5c);
  }
  _DAT_005893bc = puVar2;
  _DAT_0062d610 = "䰬Q䯼QḘC";
  _DAT_0062d614 = puVar2;
  DAT_0062d618 = 0;
  DAT_0062d619 = 0;
  DAT_0062d61a = 0;
  _DAT_005893c0 = &DAT_0062d610;
  return;
}
*/
#include "common.h"
