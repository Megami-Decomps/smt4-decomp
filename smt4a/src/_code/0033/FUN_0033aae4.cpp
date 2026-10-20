#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_0033aae4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(unsigned char *)(temp_v0 + param_1 + 0xc0c);
}

} /* extern "C" */
