#include "romwright_types.h"

extern "C" {

extern int FUN_00213b5c(void);


int FUN_0028cb6c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00213b5c();
  return temp_v0 * 0x28 + 0x57a6ec;
}

} /* extern "C" */
