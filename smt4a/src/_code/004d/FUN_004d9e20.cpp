#include "romwright_types.h"

extern "C" {

int FUN_002305d0(int, unsigned int, unsigned int, int);

extern int gameGetOptions(void);
/* Supplied declaration required: FUN_002305d0. */


void FUN_004d9e20(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) {
    FUN_002305d0(temp_v0,0xffffffff,param_1,3);
    *(unsigned short *)(temp_v0 + 300) = 0;
  }
  return;
}

} /* extern "C" */
