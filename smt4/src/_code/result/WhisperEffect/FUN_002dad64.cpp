#include "romwright_types.h"

extern "C" {

int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002c08f0(void);

extern unsigned int DAT_0044dc50; /* 0x44dc50 */

/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c08f0. */


void FUN_002dad64(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c08f0();
  temp_v0 = 0;
  do {
    FUN_002ae898(0x37,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  FUN_002ae7e8(0x37);
  DAT_0044dc50 = 0;
  return;
}

} /* extern "C" */
