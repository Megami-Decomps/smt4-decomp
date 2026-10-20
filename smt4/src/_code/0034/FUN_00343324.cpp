#include "romwright_types.h"

extern "C" {

int FUN_002bbb74(unsigned int, int);
int FUN_002bbbc8(void);

/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */


void FUN_00343324(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002bbbc8();
  FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
  *(unsigned char *)(param_1 + 0x5f4) = 0;
  return;
}

} /* extern "C" */
