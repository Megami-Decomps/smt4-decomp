/* NON_MATCHING: found outside every function: called by FUN_002f5d38; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002f5ffc for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002f5ffc(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(unsigned int *)(param_1 + 4);
    uVar1 = uVar2;
    if (param_4 != 0xffffffff) {
      uVar1 = param_4;
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1 + param_3;
    }
    else if (uVar2 < uVar1 + param_3) {
      uVar2 = uVar1 + param_3;
    }
    if (6 < uVar2) {
      FUN_002e9e60("D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/LiteBuffer.h"
                   ,0x4f,0xe0000019,0);
      return 0;
    }
    *(unsigned int *)(param_1 + 4) = uVar2;
    FUN_002e5a08(param_1 + 8 + uVar1);
  }
  return 1;
}
*/
#include "common.h"
