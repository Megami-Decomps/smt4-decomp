#include "romwright_types.h"

extern "C" {

extern int FUN_002c8644(void);


unsigned char FUN_00310c9c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c8644();
  if (temp_v0 == 5) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
