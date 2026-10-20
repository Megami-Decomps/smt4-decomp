#include "romwright_types.h"

extern "C" {

int mapIfStart(void);

extern int *DAT_00447a98; /* 0x447a98 */

/* Supplied declaration required: mapIfStart. */


void FUN_0019dc04(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = DAT_00447a98;
  if ((*piVar1 != 0) && ((*piVar1 == 1 || *piVar1 == 2) || *piVar1 == 3)) {
    piVar1[1] = piVar1[1] + 1;
    if (piVar1[1] == 8) {
      if (piVar1[5] == 0) {
        return;
      }
      mapIfStart();
    }
    piVar1 = DAT_00447a98;
    if (piVar1[1] > 60) {
      *piVar1 = 0;
      piVar1[1] = 0;
    }
  }
  return;
}

} /* extern "C" */
