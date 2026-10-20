#include "romwright_types.h"

extern "C" {

extern int FUN_0019a7dc(void);


void FUN_004d9fc4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) {
    *(unsigned short *)(temp_v0 + 0x62) = 0;
  }
  return;
}

} /* extern "C" */
