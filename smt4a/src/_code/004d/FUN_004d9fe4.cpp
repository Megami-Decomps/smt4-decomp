#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int, int);

extern int FUN_0019a7dc(void);
/* Supplied declaration required: FUN_002e6354. */


void FUN_004d9fe4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) == 0) {
    if (*(unsigned short *)(temp_v0 + 0x62) == 0x4b1) {
      FUN_002e6354(temp_v0,300);
    }
    *(unsigned short *)(temp_v0 + 0x132) = 0;
    *(unsigned short *)(temp_v0 + 0x134) = 0;
    *(unsigned short *)(temp_v0 + 0x136) = 0;
  }
  return;
}

} /* extern "C" */
