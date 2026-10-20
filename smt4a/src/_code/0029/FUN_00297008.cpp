#include "romwright_types.h"

extern "C" {

extern int FUN_003564ec(void);


unsigned char FUN_00297008(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003564ec();
  return *(short *)(temp_v0 + 10) == 0;
}

} /* extern "C" */
