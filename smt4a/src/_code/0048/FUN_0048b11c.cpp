#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);

/* Supplied declaration required: FUN_00184758. */


void FUN_0048b11c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x12d1) = 1;
  FUN_00184758(param_1 + 0x12dc,6,0);
  return;
}

} /* extern "C" */
