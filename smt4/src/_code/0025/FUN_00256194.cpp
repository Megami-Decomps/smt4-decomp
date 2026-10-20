#include "romwright_types.h"

extern "C" {

int FUN_002c4938(int, int);

extern int FUN_002b6b20(void);
/* Supplied declaration required: FUN_002c4938. */


void FUN_00256194(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b6b20();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) == 0) {
    if (*(unsigned short *)(temp_v0 + 0x46) == 0x4b1) {
      FUN_002c4938(temp_v0,0x604);
    }
    *(unsigned short *)(temp_v0 + 0x60a) = 0;
    *(unsigned short *)(temp_v0 + 0x60c) = 0;
    *(unsigned short *)(temp_v0 + 0x60e) = 0;
  }
  return;
}

} /* extern "C" */
