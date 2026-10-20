#include "romwright_types.h"

extern "C" {

extern int FUN_002973ec(void);


int FUN_0023ea94(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002973ec();
  return temp_v0 * 0x24 + 0x439ae8;
}

} /* extern "C" */
