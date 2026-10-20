#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002f2faa(int);

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002f2faa. */


unsigned int FUN_00109f28(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002f2faa(param_1 + 0x78);
    FUN_002e7232(param_2);
    return 1;
  }
  return 0;
}

} /* extern "C" */
