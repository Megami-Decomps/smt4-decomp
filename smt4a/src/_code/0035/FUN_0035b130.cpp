#include "romwright_types.h"

extern "C" {

extern unsigned short FUN_00236038(unsigned int);


unsigned int FUN_0035b130(int param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v0 = FUN_00236038(0);
  *(unsigned short *)(temp_v1 + 0x164) = temp_v0;
  *(unsigned int *)(temp_v1 + 0x150) = 10;
  *(unsigned char *)(temp_v1 + 0x154) = 3;
  return 1;
}

} /* extern "C" */
