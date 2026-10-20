#include "romwright_types.h"

extern "C" {

extern int FUN_00188b30(void);


unsigned char FUN_0016f144(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00188b30();
  return temp_v0 == 4;
}

} /* extern "C" */
