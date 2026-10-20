#include "romwright_types.h"

extern "C" {

extern int FUN_003135a8(void);


unsigned char FUN_003c5fac(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003135a8();
  if (temp_v0 == 0x2d) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
