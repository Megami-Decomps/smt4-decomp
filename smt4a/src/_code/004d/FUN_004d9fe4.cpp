#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

extern int gameGetOptions(void);
/* Supplied declaration required: sysMemClear. */


void FUN_004d9fe4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) == 0) {
    if (*(unsigned short *)(temp_v0 + 0x62) == 0x4b1) {
      sysMemClear(temp_v0,300);
    }
    *(unsigned short *)(temp_v0 + 0x132) = 0;
    *(unsigned short *)(temp_v0 + 0x134) = 0;
    *(unsigned short *)(temp_v0 + 0x136) = 0;
  }
  return;
}

} /* extern "C" */
