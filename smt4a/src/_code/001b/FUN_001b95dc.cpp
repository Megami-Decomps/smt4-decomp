#include "romwright_types.h"

extern "C" {

int FUN_001a089c(unsigned int *, int);
int FUN_001a08d8(unsigned int *);

extern unsigned char DAT_0055c19c; /* 0x55c19c */

/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a08d8. */


unsigned int * FUN_001b95dc(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c19c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_001a089c(param_1 + 3,1);
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[6] = 0;
  FUN_001a08d8(param_1 + 3);
  return param_1;
}

} /* extern "C" */
