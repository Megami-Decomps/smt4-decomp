#include "romwright_types.h"

extern "C" {

int scrScriptProcessDestroy(unsigned int);
int asdMemFree(unsigned int);

/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_00273644(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0xf;
  *param_1 = 0;
  if (param_1[3] != 0) {
    asdMemFree(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    asdMemFree(param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    scrScriptProcessDestroy(param_1[5]);
    param_1[5] = 0;
  }
  return;
}

} /* extern "C" */
