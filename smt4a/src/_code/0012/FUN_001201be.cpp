#include "romwright_types.h"

extern "C" {

int FUN_001145d8(int, int);

/* Supplied declaration required: FUN_001145d8. */


int FUN_001201be(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_2 + 5);
  FUN_001145d8(param_1 + 8,param_2 + 8);
  return param_1;
}

} /* extern "C" */
