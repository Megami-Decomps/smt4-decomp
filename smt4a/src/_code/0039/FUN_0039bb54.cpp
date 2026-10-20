#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int, int, int);
int FUN_002e6dd0(int, int);

/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_002e6dd0. */


void FUN_0039bb54(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e6dd0(param_2,100);
  FUN_002e59f8(param_1,param_2,0xe);
  FUN_002e59f8(param_1 + 0xe,param_2 + 0x4c,0x12);
  *(unsigned short *)(param_2 + 0x62) = *(unsigned short *)(param_1 + 0x36);
  return;
}

} /* extern "C" */
