#include "romwright_types.h"

extern "C" {

extern int gameGetOptions(void);


void FUN_004d9fc4(void)

{
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) {
    *(unsigned short *)(temp_v0 + 0x62) = 0;
  }
  return;
}

} /* extern "C" */
