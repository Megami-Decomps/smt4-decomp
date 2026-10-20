#include "romwright_types.h"

extern "C" {

int memClear(int, int);

extern int gameGetOptions(void);
/* Supplied declaration required: memClear. */


void FUN_00256194(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) == 0) {
    if (*(unsigned short *)(temp_v0 + 0x46) == 0x4b1) {
      memClear(temp_v0,0x604);
    }
    *(unsigned short *)(temp_v0 + 0x60a) = 0;
    *(unsigned short *)(temp_v0 + 0x60c) = 0;
    *(unsigned short *)(temp_v0 + 0x60e) = 0;
  }
  return;
}

} /* extern "C" */
