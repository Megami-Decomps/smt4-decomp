#include "romwright_types.h"

extern "C" {

extern int FUN_001ba3d4(void);


unsigned char FUN_00481104(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ba3d4();
  return 0 < temp_v0;
}

} /* extern "C" */
