#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned char FUN_004186a4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return *(short *)(temp_v0 + 0x8e0) != 0;
}

} /* extern "C" */
