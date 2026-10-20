#include "romwright_types.h"

extern "C" {

extern int FUN_003564ec(void);


unsigned char FUN_00327540(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003564ec();
  return *(short *)(temp_v0 + 8) != 0;
}

} /* extern "C" */
