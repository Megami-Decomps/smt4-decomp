#include "romwright_types.h"

extern "C" {

extern int FUN_002c08f0(void);


unsigned char FUN_00221e00(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  return *(int *)(temp_v0 + 0xc) == 0;
}

} /* extern "C" */
