/* NON_MATCHING: vtable-writing C++ cleanup has unresolved class/base identities and returns the enclosing object sixteen bytes before its incoming subobject pointer. Constructor/destructor naming and base layout need integration. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);

extern unsigned char DAT_00420f78; /* 0x420f78 */

/* Supplied declaration required: asdFatalError. */


unsigned int * FUN_002a4288(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_00420f78;
  if (param_1[3] != 0) {
    asdFatalError();
  }
  if (param_1[4] != 0) {
    asdFatalError();
  }
  puVar1 = (unsigned int *)param_1[4];
  if (puVar1 != (unsigned int *)0x0) {
    do {
      puVar2 = (unsigned int *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (unsigned int *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}

} /* extern "C" */
