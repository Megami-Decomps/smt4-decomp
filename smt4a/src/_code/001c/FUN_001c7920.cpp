/* NON_MATCHING: found outside every function: branched to by FUN_001c2110; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001c7920 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001c7920(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_002f5970(0x6433c4);
    iVar1 = param_1 * 8;
    if (*(int *)(iVar1 + 0x6433b4) != 0) {
      FUN_001cd9e4();
    }
    if (*(int *)(iVar1 + 0x6433b8) != 0) {
      FUN_001cda30();
    }
    *(unsigned int *)(iVar1 + 0x6433b4) = 0;
    *(unsigned int *)(iVar1 + 0x6433b8) = 0;
    FUN_001cd658(0x647708,param_1,0);
    FUN_002f59d8(0x6433c4);
    FUN_002f5970(0x6433c4);
    *(int *)(iVar1 + 0x6433b4) = param_2;
    FUN_001d1880(param_2);
    FUN_001cd658(0x647708,param_1,1);
    FUN_002f59d8(0x6433c4);
    return 1;
  }
  return 0;
}
*/
#include "common.h"
