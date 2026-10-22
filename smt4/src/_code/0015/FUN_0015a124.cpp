/* NON_MATCHING: found outside every function: branched to by FUN_00157938; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0015a124 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0015a124(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_002c38a4(0x4e6f58);
    iVar1 = param_1 * 8;
    if (*(int *)(iVar1 + 0x4e6f48) != 0) {
      FUN_0015d65c();
    }
    if (*(int *)(iVar1 + 0x4e6f4c) != 0) {
      FUN_0015d6a8();
    }
    *(unsigned int *)(iVar1 + 0x4e6f48) = 0;
    *(unsigned int *)(iVar1 + 0x4e6f4c) = 0;
    FUN_002a2ab0(&DAT_004ead10,param_1,0);
    FUN_002c3820(0x4e6f58);
    FUN_002c38a4(0x4e6f58);
    *(int *)(iVar1 + 0x4e6f4c) = param_2;
    FUN_0015e298(param_2);
    FUN_002a2ab0(&DAT_004ead10,param_1,1);
    FUN_002c3820(0x4e6f58);
    return 1;
  }
  return 0;
}
*/
#include "common.h"
