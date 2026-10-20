#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned int FUN_00418584(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return (*(unsigned char *)(temp_v0 + param_1 * 4 + 0x2a0) & 8) >> 3;
}

} /* extern "C" */
