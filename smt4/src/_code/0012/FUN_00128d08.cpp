#include "romwright_types.h"

extern "C" {

extern int FUN_001395c4(void);


unsigned char FUN_00128d08(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001395c4();
  return temp_v0 == 4;
}

} /* extern "C" */
