#include "romwright_types.h"

extern "C" {

extern int FUN_003958cc(void);


unsigned char FUN_003bb2e0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003958cc();
  return temp_v0 != 0;
}

} /* extern "C" */
