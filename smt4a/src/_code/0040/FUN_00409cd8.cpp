#include "romwright_types.h"

extern "C" {

extern int FUN_001bcea0(void);


void FUN_00409cd8(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001bcea0();
  puVar2 = (unsigned int *)(temp_v0 + param_1 * 4 + 0x100);
  temp_v1 = *puVar2;
  param_2 = (temp_v1 > param_2) ? temp_v1 : param_2;
  *puVar2 = param_2;
  return;
}

} /* extern "C" */
