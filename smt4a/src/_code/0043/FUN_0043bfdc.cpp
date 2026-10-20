#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned short *, int);

/* Supplied declaration required: FUN_002e6354. */


void FUN_0043bfdc(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e6354(param_1,0xe30);
  *param_1 = 3;
  return;
}

} /* extern "C" */
