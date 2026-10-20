#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: timerStart. */


void FUN_00295ba4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e128;
  *(unsigned int *)(DAT_0043e128 + 8) = 5;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  timerStart(temp_v0 + 0x44,1,0);
  return;
}

} /* extern "C" */
