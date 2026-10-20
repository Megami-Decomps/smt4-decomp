#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bee58. */


void FUN_002636b0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e140;
  *(unsigned int *)(DAT_0043e140 + 8) = 3;
  FUN_002bee58(temp_v0 + 0x34,1);
  return;
}

} /* extern "C" */
