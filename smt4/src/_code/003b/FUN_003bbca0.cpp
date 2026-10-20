#include "romwright_types.h"

extern "C" {

extern int FUN_0021f538(void);


unsigned char FUN_003bbca0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0021f538();
  return temp_v0 != 0;
}

} /* extern "C" */
