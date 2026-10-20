#include "romwright_types.h"

extern "C" {

extern int FUN_0019a7dc(void);


void FUN_004da2d0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  *(unsigned short *)(temp_v0 + 0x130) = *(unsigned short *)(temp_v0 + 0x130) | 1;
  *(unsigned short *)(temp_v0 + 0x62) = 0;
  *(unsigned short *)(temp_v0 + 300) = 0;
  return;
}

} /* extern "C" */
