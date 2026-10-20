#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int scrScriptProcessDestroy(void);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */


int FUN_003e6bd8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return param_1;
}

} /* extern "C" */
