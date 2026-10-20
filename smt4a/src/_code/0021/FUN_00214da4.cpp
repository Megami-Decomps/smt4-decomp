#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern int DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_001846d0. */


void FUN_00214da4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f578;
  *(unsigned int *)(DAT_0057f578 + 8) = 3;
  FUN_001846d0(temp_v0 + 0x34,1);
  return;
}

} /* extern "C" */
