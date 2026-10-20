#include "romwright_types.h"

extern "C" {

extern int FUN_0031670c(void);


unsigned char FUN_004bb308(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0031670c();
  return temp_v0 != 0;
}

} /* extern "C" */
