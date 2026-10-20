#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


void FUN_00348b00(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) | 1;
  *(unsigned char *)(temp_v0 + 0x200) = *(unsigned char *)(temp_v0 + 0x200) | 0x80;
  return;
}

} /* extern "C" */
