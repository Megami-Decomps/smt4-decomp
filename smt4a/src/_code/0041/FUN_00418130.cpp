#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


void FUN_00418130(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x2a2) = *(unsigned char *)(temp_v0 + 0x2a2) | 1;
  *(unsigned char *)(temp_v0 + 0x2a0) = *(unsigned char *)(temp_v0 + 0x2a0) | 0x80;
  return;
}

} /* extern "C" */
