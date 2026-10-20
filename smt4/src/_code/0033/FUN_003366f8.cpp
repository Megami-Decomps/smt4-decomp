#include "romwright_types.h"

extern "C" {


unsigned int * FUN_003366f8(int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 4;
  while( 1 ) {
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288);
    temp_v1 = *puVar1;
    if ((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) && ((temp_v1 & 0x10) != 0)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x36) {
      return (unsigned int *)0x0;
    }
  }
  return puVar1;
}

} /* extern "C" */
