#include "romwright_types.h"

extern "C" {

int FUN_0010032e(void);

/* Supplied declaration required: FUN_0010032e. */


void FUN_002fb244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010032e();
  *(unsigned char *)(param_1 + 4) = 1;
  return;
}

} /* extern "C" */
