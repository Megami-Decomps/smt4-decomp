#include "romwright_types.h"

extern "C" {

int scrScriptProcessDestroy(void);
int asdMemFree(void);

/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_0027369c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
