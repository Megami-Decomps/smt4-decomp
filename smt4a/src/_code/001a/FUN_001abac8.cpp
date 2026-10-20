#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


int FUN_001abac8(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return temp_v0 + param_1 * 4 + 0x2a0;
}

} /* extern "C" */
