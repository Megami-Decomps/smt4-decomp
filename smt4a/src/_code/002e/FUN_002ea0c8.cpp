#include "romwright_types.h"

extern "C" {

int FUN_002e98d4(void);
int FUN_0030ffac(int, unsigned int);

/* Supplied declaration required: FUN_002e98d4. */
/* Supplied declaration required: FUN_0030ffac. */


int FUN_002ea0c8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002e98d4();
  }
  FUN_0030ffac(param_1 + 4,param_2);
  return param_1;
}

} /* extern "C" */
