/* NON_MATCHING: allocated polymorphic node installs vtable DAT_0055c9a4; genuine C++ emission requires class/vtable symbol migration first. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055c9a4; /* 0x55c9a4 */


void FUN_004ad184(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)*param_1)(param_1,0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[5] = 0xffffffff;
    puVar1[1] = 4;
    *puVar1 = (unsigned int)&DAT_0055c9a4;
    puVar1[2] = 2;
    puVar1[3] = (unsigned int)param_1;
    puVar1[4] = param_2;
  }
  return;
}

} /* extern "C" */
