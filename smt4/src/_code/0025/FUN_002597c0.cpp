#include "romwright_types.h"

extern "C" {

int FUN_002e0df8(unsigned int);

extern int g_cecProcess; /* 0x43de68 */

/* Supplied declaration required: FUN_002e0df8. */


void FUN_002597c0(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_cecProcess != 0) {
    FUN_002e0df8(*(unsigned int *)(g_cecProcess + 4));
    return;
  }
  return;
}

} /* extern "C" */
