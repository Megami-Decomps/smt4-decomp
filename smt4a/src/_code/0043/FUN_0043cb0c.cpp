/* NON_MATCHING: found outside every function: branched to by FUN_0043cc44; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0043cb0c for reference (not compiled; its own view of the boundaries):

int FUN_0043cb0c(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  
  FUN_00170474(0x12);
  FUN_0043c434();
  iVar1 = FUN_001c6e20();
  if (iVar1 != 0) {
    FUN_0016e758();
    DAT_005891b4 = 1;
  }
  FUN_00170ebc(0);
  FUN_001716c0();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else if (0x300 < param_2) {
    param_2 = 0x300;
  }
  if (param_3 == 0) {
    param_4 = 0;
  }
  else if (0x20 < param_4) {
    param_4 = 0x20;
  }
  while( 1 ) {
    FUN_0018b868();
    iVar1 = FUN_0043cd2c(param_1,param_2,param_3,param_4);
    FUN_0018b964();
    if ((iVar1 != -0x375f3010 && iVar1 != -0x1f5f33f8) && iVar1 != -0x375f33fe) break;
    FUN_001bcd48(10000000,0);
  }
  if (iVar1 < 0) {
    FUN_00189a38(iVar1,0x43cbd4);
  }
  FUN_00170e58();
  FUN_00170414(1);
  software_interrupt(3);
  return iVar1;
}
*/
#include "common.h"
