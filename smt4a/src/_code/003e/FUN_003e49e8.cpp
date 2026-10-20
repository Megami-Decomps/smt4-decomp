#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


void FUN_003e49e8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab888();
  *(unsigned short *)(temp_v0 + 0x2c4e) = 0;
  return;
}

} /* extern "C" */
