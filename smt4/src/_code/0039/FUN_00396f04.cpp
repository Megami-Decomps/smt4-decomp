#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(void);

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_00396f04(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x98) != 0) {
    asdMdlManagerDestroy();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    asdMdlManagerDestroy();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

} /* extern "C" */
