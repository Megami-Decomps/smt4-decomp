#include "romwright_types.h"

extern "C" {

int FUN_00358fbc(unsigned int);

extern int g_cecProcess; /* 0x57f390 */

/* Supplied declaration required: FUN_00358fbc. */


void FUN_00319e58(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_cecProcess != 0) {
    FUN_00358fbc(*(unsigned int *)(g_cecProcess + 4));
    return;
  }
  return;
}

} /* extern "C" */
