#include "romwright_types.h"

extern "C" {

int FUN_002a5ed0(int, int);
int FUN_002c5914(int, int);

extern unsigned char DAT_0043d9e0; /* 0x43d9e0 */

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c5914. */


void FUN_003acb28(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_0043d9e0 + 0x1)) <= 0) {
    FUN_002c5914(0x22,0);
    temp_v0 = 0;
    do {
      FUN_002a5ed0(0x22,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  (*(signed char *)((unsigned char *)&DAT_0043d9e0 + 0x1)) = (*(signed char *)((unsigned char *)&DAT_0043d9e0 + 0x1)) + '\x01';
  return;
}

} /* extern "C" */
