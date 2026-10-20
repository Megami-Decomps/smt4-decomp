#include "romwright_types.h"

extern "C" {

int FUN_004bb31c(unsigned int);

extern int g_cecProcess; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb31c. */


void FUN_0035b084(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_cecProcess != 0) {
    FUN_004bb31c(*(unsigned int *)(g_cecProcess + 4));
    return;
  }
  return;
}

} /* extern "C" */
