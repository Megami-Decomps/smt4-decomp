#include "romwright_types.h"

extern "C" {

extern int FUN_001861c4(void);


unsigned int FUN_00153f64(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001861c4();
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
