#include "romwright_types.h"

extern "C" {

int FUN_004f6184(void);

extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_004f6184. */


void FUN_003e9cd0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00573808 != 0) {
    FUN_004f6184();
    return;
  }
  return;
}

} /* extern "C" */
