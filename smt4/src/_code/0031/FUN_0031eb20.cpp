#include "romwright_types.h"

extern "C" {

extern int FUN_003079a0(void);


unsigned char FUN_0031eb20(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003079a0();
  return temp_v0 != 0;
}

} /* extern "C" */
