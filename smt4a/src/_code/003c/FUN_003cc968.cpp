#include "romwright_types.h"

extern "C" {

extern int FUN_003c4ce8(void);


unsigned char FUN_003cc968(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003c4ce8();
  return temp_v0 != 0;
}

} /* extern "C" */
