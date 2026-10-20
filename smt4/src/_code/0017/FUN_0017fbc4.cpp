#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);

extern int DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002bee58. */


void FUN_0017fbc4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned int *)(DAT_0043e0f8 + 8) = 4;
  FUN_002bee58(temp_v0 + 0x3c,1);
  return;
}

} /* extern "C" */
