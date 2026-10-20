#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(int);
int asdMemFree(int);

/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_00288728(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x50 + 0x10;
    if (*(int *)(temp_v0 + 8) != 0) {
      asdMdlManagerDestroy(*(int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      asdMemFree(*(int *)(temp_v0 + 0xc));
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  if (*(int *)(param_1 + 8) != 0) {
    asdMdlManagerDestroy(*(int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

} /* extern "C" */
