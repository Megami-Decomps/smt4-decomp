/* NON_MATCHING: split off libc_mbstowcs at +0x70 (libc_mbstowcs: a tail call armlink made a NOP ends it at +0x6c); not written yet. */
/* romwright 0.5.0 decompilation of FUN_002ac8a8 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_002ac8a8(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *puStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  uStack_1c = FUN_002c66f2(0,2);
  uVar3 = 0;
  do {
    do {
      if ((param_1 != 0) && (uVar2 = uVar3, param_3 <= uVar3)) {
        return CONCAT44(puStack_20,uVar2);
      }
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = FUN_001008c8(&puStack_20,uVar1,uStack_1c);
      if (uVar2 == 0xffffffff) {
        return CONCAT44(puStack_20,uVar2);
      }
    } while (uVar2 == 0xfffffffe);
    if (param_1 != 0) {
      *(short *)(param_1 + uVar3 * 2) = (short)puStack_20;
    }
    uVar2 = uVar3;
    uVar3 = uVar3 + 1;
  } while ((short)puStack_20 != 0);
  return CONCAT44(puStack_20,uVar2);
}
*/
#include "common.h"
