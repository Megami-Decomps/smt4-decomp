#include "romwright_types.h"

extern "C" {

int FUN_003e4140(int);

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_003e4140. */


void FUN_003b7314(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fe8;
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x2584) = 1;
    FUN_003e4140(temp_v0 + 0x2588);
    return;
  }
  return;
}

} /* extern "C" */
