#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0012433e(void);


unsigned int FUN_0030c7f4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_0012433e();
  return temp_v0 ^ 1;
}

} /* extern "C" */
