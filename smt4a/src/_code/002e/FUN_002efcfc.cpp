#include "romwright_types.h"

extern "C" {

int FUN_002ea714(void);
int FUN_002eaa50(void);

/* Supplied declaration required: FUN_002ea714. */
/* Supplied declaration required: FUN_002eaa50. */


void FUN_002efcfc(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ea714();
  FUN_002eaa50();
  *param_1 = *(unsigned int *)(*(int *)(param_2 + 0x14) + 8);
  return;
}

} /* extern "C" */
