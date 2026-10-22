/* NON_MATCHING: found outside every function: called by FUN_002840fc; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0049f084 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0049f084(int param_1)

{
  int iVar1;
  
  switch(*(unsigned char *)(param_1 + 4)) {
  case 1:
    iVar1 = FUN_00163aa4(param_1 + 0x23c);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0049d140(param_1,*(unsigned char *)(param_1 + 5),0);
    break;
  case 2:
    FUN_0049d770(param_1);
    break;
  case 3:
    FUN_0049df84(param_1);
    break;
  case 4:
    if (((*(short *)(*(int *)(param_1 + 0x84) + 0x36) == 0) ||
        (iVar1 = FUN_0018206c(0x33), iVar1 != 0)) &&
       ((*(short *)(*(int *)(param_1 + 0x84) + 0x40) == 0 ||
        (iVar1 = FUN_0018206c(0x33), iVar1 != 0)))) {
      FUN_0049d140(param_1,6,0);
    }
    break;
  case 5:
    iVar1 = FUN_00163aa4(param_1 + 0x2c8);
    if (iVar1 != 0) {
      FUN_0049d140(param_1,*(unsigned char *)(param_1 + 5),0);
    }
    break;
  case 6:
    FUN_0049e224(param_1);
    iVar1 = 1;
    FUN_001517b4();
    if (iVar1 != 0) {
      FUN_001641b4(0x100020f);
      FUN_001846d0(param_1 + 0x2c8,1);
      FUN_0049d140(param_1,5,3);
    }
    break;
  case 7:
    FUN_0049ea54(param_1);
    break;
  case 8:
    if ((*(short *)(*(int *)(param_1 + 0x84) + 0x36) != 0) &&
       (iVar1 = FUN_0018206c(0x33), iVar1 == 0)) {
      return 0;
    }
    if ((*(short *)(*(int *)(param_1 + 0x84) + 0x40) != 0) &&
       (iVar1 = FUN_0018206c(0x33), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_00163aa4(param_1 + 0x23c);
    FUN_00163aa4(param_1 + 0x2c8);
    if (iVar1 != 0) {
      FUN_0049d140(param_1,*(unsigned char *)(param_1 + 5),0);
    }
    break;
  case 9:
    FUN_0049e224(param_1);
    iVar1 = 1;
    FUN_001517b4();
    if (iVar1 == 0) {
      iVar1 = 0;
      FUN_001517b4(0,1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_001641b4(0x100020e);
    FUN_001846d0(param_1 + 0x23c,1);
    FUN_001846d0(param_1 + 0x2c8,1);
    FUN_0049d140(param_1,8,0);
  }
  return 0;
}
*/
#include "common.h"
