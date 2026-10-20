#include "romwright_types.h"

extern "C" {

extern int FUN_0019a7dc(void);


void FUN_004da2f8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0019a7dc();
  if (((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) &&
     (temp_v1 = FUN_0019a7dc(), (*(unsigned short *)(temp_v1 + 0x130) & 1) != 0)) {
    *(unsigned short *)(temp_v1 + 0x62) = 0;
  }
  *(unsigned short *)(temp_v0 + 0x130) = *(unsigned short *)(temp_v0 + 0x130) & 0xfffe;
  *(unsigned short *)(temp_v0 + 0x62) = 0;
  *(unsigned short *)(temp_v0 + 300) = 0;
  return;
}

} /* extern "C" */
