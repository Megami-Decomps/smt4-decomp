#include "romwright_types.h"

extern "C" {

int FUN_0021c118(int, int);
int FUN_003d2d34(int, int, int);

/* Supplied declaration required: FUN_0021c118. */
/* Supplied declaration required: FUN_003d2d34. */


void FUN_003f24a0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x4ce4);
  if (temp_v0 != param_2) {
    if (temp_v0 != -1) {
      FUN_0021c118(temp_v0,0);
    }
    FUN_003d2d34(param_2,0,10);
    *(int *)(param_1 + 0x4ce4) = param_2;
  }
  return;
}

} /* extern "C" */
