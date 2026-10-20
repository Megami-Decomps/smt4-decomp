#include "romwright_types.h"

extern "C" {

int FUN_001070b4(void);
int FUN_002eeb5c(int);

/* Supplied declaration required: FUN_001070b4. */
/* Supplied declaration required: FUN_002eeb5c. */


void FUN_00107008(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (param_4 != 0) {
    FUN_001070b4();
    return;
  }
  FUN_002eeb5c(param_1 + 4);
  return;
}

} /* extern "C" */
